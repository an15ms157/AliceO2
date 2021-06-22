# Changes since 2021-06-08

## Changes in Analysis

- [#6401](https://github.com/AliceO2Group/AliceO2/pull/6401) 2021-06-11: Add task to check contaminations by [@ginnocen](https://github.com/ginnocen)
- [#6410](https://github.com/AliceO2Group/AliceO2/pull/6410) 2021-06-12: Add e/pi selection by [@vkucera](https://github.com/vkucera)
- [#6404](https://github.com/AliceO2Group/AliceO2/pull/6404) 2021-06-12: Add study for particle ration and PID contamination by [@ginnocen](https://github.com/ginnocen)
- [#6405](https://github.com/AliceO2Group/AliceO2/pull/6405) 2021-06-12: Devrun5 by [@ginnocen](https://github.com/ginnocen)
- [#6406](https://github.com/AliceO2Group/AliceO2/pull/6406) 2021-06-12: Fix name by [@ginnocen](https://github.com/ginnocen)
- [#6407](https://github.com/AliceO2Group/AliceO2/pull/6407) 2021-06-12: Fix track PID for cases where RICH or MID is not available by [@vkucera](https://github.com/vkucera)
- [#6411](https://github.com/AliceO2Group/AliceO2/pull/6411) 2021-06-14: Simplify selector initialisation. Add comparison of e/pi selections. by [@vkucera](https://github.com/vkucera)
- [#6425](https://github.com/AliceO2Group/AliceO2/pull/6425) 2021-06-15: Changes in e/pi rejection by [@vkucera](https://github.com/vkucera)
- [#6429](https://github.com/AliceO2Group/AliceO2/pull/6429) 2021-06-15: Fix missing ; by [@vkucera](https://github.com/vkucera)
- [#6434](https://github.com/AliceO2Group/AliceO2/pull/6434) 2021-06-16: Deprecated Muons data table removed from data model. Temporarily PWGUD/upcForward.cxx task commented out from CMakeLists until the Muons table dependence will be replaced with the new tables by [@iarsene](https://github.com/iarsene)
- [#6448](https://github.com/AliceO2Group/AliceO2/pull/6448) 2021-06-16: Fix selection on MID, only PIDAccepted kept by [@ginnocen](https://github.com/ginnocen)
- [#6449](https://github.com/AliceO2Group/AliceO2/pull/6449) 2021-06-16: Propagate fixed MID sel by [@ginnocen](https://github.com/ginnocen)
- [#6435](https://github.com/AliceO2Group/AliceO2/pull/6435) 2021-06-16: cleanup in order to prepare for bigger modifications by [@akalweit](https://github.com/akalweit)
- [#6450](https://github.com/AliceO2Group/AliceO2/pull/6450) 2021-06-16: propagate changes by [@ginnocen](https://github.com/ginnocen)
- [#6428](https://github.com/AliceO2Group/AliceO2/pull/6428) 2021-06-17: ALICE3: Add FTOF table and QA by [@njacazio](https://github.com/njacazio)
- [#6426](https://github.com/AliceO2Group/AliceO2/pull/6426) 2021-06-17: Add PWGPP directory for common QA tools by [@njacazio](https://github.com/njacazio)
- [#6415](https://github.com/AliceO2Group/AliceO2/pull/6415) 2021-06-21: PWGHF: Updates to DDbar correlation task configurators to allow running on Hyperloop by [@fcolamar](https://github.com/fcolamar)
## Changes in Common

- [#6412](https://github.com/AliceO2Group/AliceO2/pull/6412) 2021-06-13: Complete RecoContainer support of TRD tracks, use TRD in P/S-Vertexing by [@shahor02](https://github.com/shahor02)
- [#6486](https://github.com/AliceO2Group/AliceO2/pull/6486) 2021-06-22: suppress overlaps check option in AlignParam::apply by [@shahor02](https://github.com/shahor02)
## Changes in DataFormats

- [#6412](https://github.com/AliceO2Group/AliceO2/pull/6412) 2021-06-13: Complete RecoContainer support of TRD tracks, use TRD in P/S-Vertexing by [@shahor02](https://github.com/shahor02)
- [#6403](https://github.com/AliceO2Group/AliceO2/pull/6403) 2021-06-15: Slew correction by [@AllaMaevskaya](https://github.com/AllaMaevskaya)
- [#6447](https://github.com/AliceO2Group/AliceO2/pull/6447) 2021-06-17: read number of channels from Geometry by [@AllaMaevskaya](https://github.com/AllaMaevskaya)
- [#6471](https://github.com/AliceO2Group/AliceO2/pull/6471) 2021-06-21: Fix array out of bounds access in TOF clusterizer by [@davidrohr](https://github.com/davidrohr)
- [#6483](https://github.com/AliceO2Group/AliceO2/pull/6483) 2021-06-22: CPV missing TF handling by [@sevdokim](https://github.com/sevdokim)
- [#6486](https://github.com/AliceO2Group/AliceO2/pull/6486) 2021-06-22: suppress overlaps check option in AlignParam::apply by [@shahor02](https://github.com/shahor02)
## Changes in Detectors

- [#6408](https://github.com/AliceO2Group/AliceO2/pull/6408) 2021-06-12: Fix in MFT tracking: set cluster pattern in the loop by [@shahor02](https://github.com/shahor02)
- [#6412](https://github.com/AliceO2Group/AliceO2/pull/6412) 2021-06-13: Complete RecoContainer support of TRD tracks, use TRD in P/S-Vertexing by [@shahor02](https://github.com/shahor02)
- [#6416](https://github.com/AliceO2Group/AliceO2/pull/6416) 2021-06-14: Include TKey.h by [@pzhristov](https://github.com/pzhristov)
- [#6422](https://github.com/AliceO2Group/AliceO2/pull/6422) 2021-06-14: [O2-2381] Fix off-by-one error in noise generation of MCH Digitizer by [@aphecetche](https://github.com/aphecetche)
- [#6403](https://github.com/AliceO2Group/AliceO2/pull/6403) 2021-06-15: Slew correction by [@AllaMaevskaya](https://github.com/AllaMaevskaya)
- [#6436](https://github.com/AliceO2Group/AliceO2/pull/6436) 2021-06-15: TPCITS matching needs only TPC,ITS clusters, regardless of sources by [@shahor02](https://github.com/shahor02)
- [#6421](https://github.com/AliceO2Group/AliceO2/pull/6421) 2021-06-17: [MID] DPL workflow to send MID tracks read from a root file by [@pillot](https://github.com/pillot)
- [#6447](https://github.com/AliceO2Group/AliceO2/pull/6447) 2021-06-17: read number of channels from Geometry by [@AllaMaevskaya](https://github.com/AllaMaevskaya)
- [#6457](https://github.com/AliceO2Group/AliceO2/pull/6457) 2021-06-18: Add protection for dropped TFs by [@dstocco](https://github.com/dstocco)
- [#6464](https://github.com/AliceO2Group/AliceO2/pull/6464) 2021-06-20: Add MFT-specific fillDecodedDigits, use/reset ordering helper by [@shahor02](https://github.com/shahor02)
- [#6477](https://github.com/AliceO2Group/AliceO2/pull/6477) 2021-06-20: Fix typo in PVertexer debris cleanup by [@shahor02](https://github.com/shahor02)
- [#6469](https://github.com/AliceO2Group/AliceO2/pull/6469) 2021-06-20: Fix typo in the fmt::format by [@shahor02](https://github.com/shahor02)
- [#6453](https://github.com/AliceO2Group/AliceO2/pull/6453) 2021-06-20: [MCH] fixed memory leak in pedestals decoder by [@aferrero2707](https://github.com/aferrero2707)
- [#6467](https://github.com/AliceO2Group/AliceO2/pull/6467) 2021-06-20: trivial fix to suppress the snprintf warning by [@shahor02](https://github.com/shahor02)
- [#6471](https://github.com/AliceO2Group/AliceO2/pull/6471) 2021-06-21: Fix array out of bounds access in TOF clusterizer by [@davidrohr](https://github.com/davidrohr)
- [#6470](https://github.com/AliceO2Group/AliceO2/pull/6470) 2021-06-21: Fix invalid headers sent by TOF and add some protection in header parsing by [@davidrohr](https://github.com/davidrohr)
- [#6478](https://github.com/AliceO2Group/AliceO2/pull/6478) 2021-06-21: Fix missing ROOT dependencies (Headers were there, but typeinfo was not linked by [@davidrohr](https://github.com/davidrohr)
- [#6463](https://github.com/AliceO2Group/AliceO2/pull/6463) 2021-06-21: [O2-2401] Correction of variables initialization by [@frmanso](https://github.com/frmanso)
- [#6495](https://github.com/AliceO2Group/AliceO2/pull/6495) 2021-06-22: Bug fix: use correct index over neighbour boards by [@dstocco](https://github.com/dstocco)
- [#6488](https://github.com/AliceO2Group/AliceO2/pull/6488) 2021-06-22: CPV digi2raw must set triggered mode to write SOX by [@shahor02](https://github.com/shahor02)
- [#6483](https://github.com/AliceO2Group/AliceO2/pull/6483) 2021-06-22: CPV missing TF handling by [@sevdokim](https://github.com/sevdokim)
- [#6497](https://github.com/AliceO2Group/AliceO2/pull/6497) 2021-06-22: Do not use std::array in ConfigurableParam by [@shahor02](https://github.com/shahor02)
- [#6458](https://github.com/AliceO2Group/AliceO2/pull/6458) 2021-06-22: Raw: make the output directory creation more robust. by [@aphecetche](https://github.com/aphecetche)
- [#6481](https://github.com/AliceO2Group/AliceO2/pull/6481) 2021-06-22: inf. loop fixed; hwerror handling improved by [@peressounko](https://github.com/peressounko)
- [#6482](https://github.com/AliceO2Group/AliceO2/pull/6482) 2021-06-22: snprintf -> fmt::format to suppress warnings by [@shahor02](https://github.com/shahor02)
- [#6486](https://github.com/AliceO2Group/AliceO2/pull/6486) 2021-06-22: suppress overlaps check option in AlignParam::apply by [@shahor02](https://github.com/shahor02)
## Changes in Framework

- [#6441](https://github.com/AliceO2Group/AliceO2/pull/6441) 2021-06-16: DPL: introduce different outcomes for not handling data by [@ktf](https://github.com/ktf)
- [#6434](https://github.com/AliceO2Group/AliceO2/pull/6434) 2021-06-16: Deprecated Muons data table removed from data model. Temporarily PWGUD/upcForward.cxx task commented out from CMakeLists until the Muons table dependence will be replaced with the new tables by [@iarsene](https://github.com/iarsene)
- [#6445](https://github.com/AliceO2Group/AliceO2/pull/6445) 2021-06-18: DPL: expire SHM memory offers by [@ktf](https://github.com/ktf)
- [#6454](https://github.com/AliceO2Group/AliceO2/pull/6454) 2021-06-18: DPL: improve SimpleSink by [@ktf](https://github.com/ktf)
- [#6417](https://github.com/AliceO2Group/AliceO2/pull/6417) 2021-06-18: [OCTRL-496] AliECS dump: allow to preserve raw FMQ channels by [@knopers8](https://github.com/knopers8)
- [#6451](https://github.com/AliceO2Group/AliceO2/pull/6451) 2021-06-19: DPL: introduce Backpressure policy by [@ktf](https://github.com/ktf)
- [#6468](https://github.com/AliceO2Group/AliceO2/pull/6468) 2021-06-21: Add virtual destructors to allow save casting to base class in web socket handling avoiding new / delete mismatch by [@davidrohr](https://github.com/davidrohr)
- [#6479](https://github.com/AliceO2Group/AliceO2/pull/6479) 2021-06-21: DPL: apparently memcpy(something, 0, 0) is UB by [@ktf](https://github.com/ktf)
- [#6470](https://github.com/AliceO2Group/AliceO2/pull/6470) 2021-06-21: Fix invalid headers sent by TOF and add some protection in header parsing by [@davidrohr](https://github.com/davidrohr)
## Changes in Steer

- [#6483](https://github.com/AliceO2Group/AliceO2/pull/6483) 2021-06-22: CPV missing TF handling by [@sevdokim](https://github.com/sevdokim)
## Changes in Utilities

- [#6414](https://github.com/AliceO2Group/AliceO2/pull/6414) 2021-06-14: jobutils: catch libc fatal error messages by [@sawenzel](https://github.com/sawenzel)
- [#6438](https://github.com/AliceO2Group/AliceO2/pull/6438) 2021-06-16: jobutils: Allow debugging in case of problems by [@sawenzel](https://github.com/sawenzel)
