# flashggPlugins

Various plugins to analyze flashgg MicroAOD

## flashggAnalysisNtuplizer

Produce flat TTrees from MicroAOD

### Installation

Please enter lxplus6.cern.ch

```
cmsrel CMSSW_8_0_28
cd CMSSW_8_0_28/src
cmsenv
git cms-init
cd $CMSSW_BASE/src 
git clone https://github.com/rchatter/flashgg flashgg
cd flashgg
git checkout forLegacy2016_Working 
cd ..
source flashgg/setup.sh
scram b -j4

git clone https://github.com/ntuhep/flashggPlugins -b Legacy2016_8028
scram b -j4
```

### Run

```
cmsRun flashggAnalysisNtuplizerWithSyst_cfg.py
```
