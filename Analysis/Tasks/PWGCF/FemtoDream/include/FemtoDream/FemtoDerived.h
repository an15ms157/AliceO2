// Copyright 2019-2020 CERN and copyright holders of ALICE O2.
// See https://alice-o2.web.cern.ch/copyright for details of the copyright holders.
// All rights not expressly granted are reserved.
//
// This software is distributed under the terms of the GNU General Public
// License v3 (GPL Version 3), copied verbatim in the file "COPYING".
//
// In applying this license CERN does not waive the privileges and immunities
// granted to it by virtue of its status as an Intergovernmental Organization
// or submit itself to any jurisdiction.

#ifndef ANALYSIS_TASKS_PWGCF_FEMTODREAM_FEMTODERIVED_H_
#define ANALYSIS_TASKS_PWGCF_FEMTODREAM_FEMTODERIVED_H_

#include "Framework/ASoA.h"
#include "MathUtils/Utils.h"
#include "Framework/DataTypes.h"
#include "AnalysisDataModel/Multiplicity.h"
#include "Framework/AnalysisDataModel.h"
#include "Framework/Expressions.h"
#include "AnalysisDataModel/TrackSelectionTables.h"
#include "AnalysisDataModel/PID/PIDResponse.h"
#include <cmath>

namespace o2::aod
{
namespace femtodreamcollision
{
DECLARE_SOA_COLUMN(MultV0M, multV0M, float);
DECLARE_SOA_COLUMN(Sphericity, sphericity, float);
} // namespace femtodreamcollision
DECLARE_SOA_TABLE(FemtoDreamCollisions, "AOD", "FEMTODREAMCOLS",
                  o2::soa::Index<>,
                  o2::aod::collision::PosZ,
                  femtodreamcollision::MultV0M,
                  femtodreamcollision::Sphericity);
using FemtoDreamCollision = FemtoDreamCollisions::iterator;

namespace femtodreamparticle
{
enum ParticleType {
  kTrack,
  kV0,
  kV0Child,
  kCascade,
  kCascadeBachelor
};

DECLARE_SOA_INDEX_COLUMN(FemtoDreamCollision, femtoDreamCollision);
DECLARE_SOA_COLUMN(Pt, pt, float);
DECLARE_SOA_COLUMN(Eta, eta, float);
DECLARE_SOA_COLUMN(Phi, phi, float);
DECLARE_SOA_COLUMN(PartType, partType, uint8_t);
DECLARE_SOA_COLUMN(Cut, cut, uint64_t);
DECLARE_SOA_COLUMN(TempFitVar, tempFitVar, float);
DECLARE_SOA_COLUMN(Indices, indices, int[2]);

DECLARE_SOA_DYNAMIC_COLUMN(Theta, theta,
                           [](float eta) -> float {
                             return 2.f * std::atan(std::exp(-eta));
                           });
DECLARE_SOA_DYNAMIC_COLUMN(Px, px, //! Momentum in x in GeV/c
                           [](float pt, float phi) -> float {
                             return pt * std::sin(phi);
                           });
DECLARE_SOA_DYNAMIC_COLUMN(Py, py, //! Momentum in y in GeV/c
                           [](float pt, float phi) -> float {
                             return pt * std::cos(phi);
                           });
DECLARE_SOA_DYNAMIC_COLUMN(Pz, pz, //! Momentum in z in GeV/c
                           [](float pt, float eta) -> float {
                             return pt * std::sinh(eta);
                           });
DECLARE_SOA_DYNAMIC_COLUMN(P, p, //! Momentum in z in GeV/c
                           [](float pt, float eta) -> float {
                             return pt * std::cosh(eta);
                           });
// debug variables
DECLARE_SOA_COLUMN(Sign, sign, int8_t);
DECLARE_SOA_COLUMN(TPCNClsFound, tpcNClsFound, uint8_t);
DECLARE_SOA_COLUMN(TPCNClsCrossedRows, tpcNClsCrossedRows, uint8_t);
DECLARE_SOA_DYNAMIC_COLUMN(TPCCrossedRowsOverFindableCls, tpcCrossedRowsOverFindableCls, //!
                           [](int8_t tpcNClsFindable, int8_t tpcNClsCrossedRows) -> float {
                             return (float)tpcNClsCrossedRows / (float)tpcNClsFindable;
                           });

} // namespace femtodreamparticle
DECLARE_SOA_TABLE(FemtoDreamParticles, "AOD", "FEMTODREAMPARTS",
                  o2::soa::Index<>,
                  femtodreamparticle::FemtoDreamCollisionId,
                  femtodreamparticle::Pt,
                  femtodreamparticle::Eta,
                  femtodreamparticle::Phi,
                  femtodreamparticle::PartType,
                  femtodreamparticle::Cut,
                  femtodreamparticle::TempFitVar,
                  femtodreamparticle::Indices,
                  femtodreamparticle::Theta<femtodreamparticle::Eta>,
                  femtodreamparticle::Px<femtodreamparticle::Pt, femtodreamparticle::Phi>,
                  femtodreamparticle::Py<femtodreamparticle::Pt, femtodreamparticle::Phi>,
                  femtodreamparticle::Pz<femtodreamparticle::Pt, femtodreamparticle::Eta>,
                  femtodreamparticle::P<femtodreamparticle::Pt, femtodreamparticle::Eta>);
using FemtoDreamParticle = FemtoDreamParticles::iterator;

DECLARE_SOA_TABLE(FemtoDreamDebugParticles, "AOD", "FEMTODEBUGPARTS",
                  soa::Index<>,
                  femtodreamparticle::FemtoDreamCollisionId,
                  femtodreamparticle::Sign,
                  femtodreamparticle::TPCNClsFound,
                  track::TPCNClsFindable,
                  femtodreamparticle::TPCNClsCrossedRows,
                  track::TPCNClsShared,
                  femtodreamparticle::TPCCrossedRowsOverFindableCls<track::TPCNClsFindable, femtodreamparticle::TPCNClsCrossedRows>,
                  track::DcaXY,
                  track::DcaZ,
                  pidtpc_tiny::TPCNSigmaStoreEl,
                  pidtpc_tiny::TPCNSigmaStorePi,
                  pidtpc_tiny::TPCNSigmaStoreKa,
                  pidtpc_tiny::TPCNSigmaStorePr,
                  pidtpc_tiny::TPCNSigmaStoreDe,
                  pidtpc_tiny::TPCNSigmaEl<pidtpc_tiny::TPCNSigmaStoreEl>,
                  pidtpc_tiny::TPCNSigmaPi<pidtpc_tiny::TPCNSigmaStorePi>,
                  pidtpc_tiny::TPCNSigmaKa<pidtpc_tiny::TPCNSigmaStoreKa>,
                  pidtpc_tiny::TPCNSigmaPr<pidtpc_tiny::TPCNSigmaStorePr>,
                  pidtpc_tiny::TPCNSigmaDe<pidtpc_tiny::TPCNSigmaStoreDe>,
                  pidtof_tiny::TOFNSigmaStoreEl,
                  pidtof_tiny::TOFNSigmaStorePi,
                  pidtof_tiny::TOFNSigmaStoreKa,
                  pidtof_tiny::TOFNSigmaStorePr,
                  pidtof_tiny::TOFNSigmaStoreDe,
                  pidtof_tiny::TOFNSigmaEl<pidtof_tiny::TOFNSigmaStoreEl>,
                  pidtof_tiny::TOFNSigmaPi<pidtof_tiny::TOFNSigmaStorePi>,
                  pidtof_tiny::TOFNSigmaKa<pidtof_tiny::TOFNSigmaStoreKa>,
                  pidtof_tiny::TOFNSigmaPr<pidtof_tiny::TOFNSigmaStorePr>,
                  pidtof_tiny::TOFNSigmaDe<pidtof_tiny::TOFNSigmaStoreDe>);
using FemtoDreamDebugParticle = FemtoDreamDebugParticles::iterator;

} // namespace o2::aod

#endif /* ANALYSIS_TASKS_PWGCF_FEMTODREAM_FEMTODERIVED_H_ */
