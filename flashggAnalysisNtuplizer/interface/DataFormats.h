#ifndef __FLASHGG__DATAFORMATS__
#define __FLASHGG__DATAFORMATS__

#include <TTree.h>
#include <vector>


class globalTreeFormat
{
    public:

        float weight;

        void Initialzation() {
            weight = 1.;
        }

        void RegisterTree(TTree* tree) {
            tree_ = tree;
            tree_->Branch( "weight" , &weight , "weight/F" );
        }

        void TreeFill() { tree_->Fill(); }

    private:
        TTree* tree_;

};

class flashggAnalysisTreeFormatStd
{
    public:

        float NPu                                    ;
        int NVtx                                     ;
        bool passTrigger                             ;
        float genweight                              ;
        float Rho                                    ;
        float PVz                                    ;
        float BSsigmaz                               ;
        bool Flag_HBHENoiseFilter                    ;
        bool Flag_HBHENoiseIsoFilter                 ;
        bool Flag_EcalDeadCellTriggerPrimitiveFilter ;
        bool Flag_goodVertices                       ;
        bool Flag_globalSuperTightHalo2016Filter     ;
        bool Flag_BadPFMuonFilter                    ;
        bool Flag_eeBadScFilter                      ;
                                            
        float dipho_mass                 ;
        float dipho_pt                   ;
        float dipho_leadPt               ; 
        float dipho_leadEta              ;
        float dipho_leadPhi              ;
        float dipho_leadE                ; 
        float dipho_leadEtaSC            ;
        float dipho_leadPhiSC            ;
        float dipho_leadsigEOverE        ; 
        float dipho_leadR9               ; 
        float dipho_leadsieie            ; 
        float dipho_leadhoe              ; 
        float dipho_leadIDMVA            ;
        bool  dipho_leadIsEB             ;
        bool  dipho_leadIsEE             ;
        bool  dipho_leadhasPixelSeed     ;
        bool  dipho_leadGenMatch         ;
        int   dipho_leadGenMatchType     ;
        float dipho_subleadPt            ; 
        float dipho_subleadEta           ;
        float dipho_subleadPhi           ;
        float dipho_subleadE             ; 
        float dipho_subleadEtaSC         ;
        float dipho_subleadPhiSC         ;
        float dipho_subleadsigEOverE     ; 
        float dipho_subleadR9            ; 
        float dipho_subleadsieie         ; 
        float dipho_subleadhoe           ; 
        float dipho_subleadIDMVA         ;
        bool  dipho_subleadIsEB          ;
        bool  dipho_subleadIsEE          ;
        bool  dipho_subleadhasPixelSeed  ;
        bool  dipho_subleadGenMatch      ;
        int   dipho_subleadGenMatchType  ;
        float dipho_diphotonMVA          ;
        float dipho_SelectedVz           ;
        float dipho_GenVz                ;
        float dipho_centralWeight        ; 
        float dipho_MvaLinearSystUp      ; 
        float dipho_MvaLinearSystDown    ; 
        float dipho_LooseMvaSFUp         ; 
        float dipho_LooseMvaSFDown       ; 
        float dipho_PreselSFUp           ; 
        float dipho_PreselSFDown         ; 
        float dipho_electronVetoSFUp     ; 
        float dipho_electronVetoSFDown   ; 
        float dipho_TriggerWeightUp      ; 
        float dipho_TriggerWeightDown    ; 
        float dipho_FracRVWeightUp       ; 
        float dipho_FracRVWeightDown     ; 
        float dipho_FracRVNvtxWeightUp   ; 
        float dipho_FracRVNvtxWeightDown ; 

        int elecs_size;
        std::vector<int>   elecs_Charge                 ; 
        std::vector<float> elecs_Pt                     ; 
        std::vector<float> elecs_Eta                    ; 
        std::vector<float> elecs_Phi                    ; 
        std::vector<float> elecs_Energy                 ; 
        std::vector<float> elecs_EtaSC                  ; 
        std::vector<float> elecs_PhiSC                  ;
        std::vector<float> elecs_GsfTrackDz             ; 
        std::vector<float> elecs_GsfTrackDxy            ; 
        std::vector<bool>  elecs_EGMCutBasedIDVeto      ; 
        std::vector<bool>  elecs_EGMCutBasedIDLoose     ; 
        std::vector<bool>  elecs_EGMCutBasedIDMedium    ; 
        std::vector<bool>  elecs_EGMCutBasedIDTight     ; 
        std::vector<bool>  elecs_passConvVeto           ;
        std::vector<bool>  elecs_fggPhoVeto             ;
        std::vector<float> elecs_EnergyCorrFactor       ; 
        std::vector<float> elecs_EnergyPostCorrErr      ; 
        std::vector<float> elecs_EnergyPostCorrScaleUp  ; 
        std::vector<float> elecs_EnergyPostCorrScaleDown; 
        std::vector<float> elecs_EnergyPostCorrSmearUp  ; 
        std::vector<float> elecs_EnergyPostCorrSmearDown; 
        std::vector<bool>  elecs_GenMatch               ;
        std::vector<int>   elecs_GenPdgID               ; 
        std::vector<float> elecs_GenPt                  ;
        std::vector<float> elecs_GenEta                 ;
        std::vector<float> elecs_GenPhi                 ;

        int muons_size;
        std::vector<int>   muons_Charge                 ; 
        std::vector<float> muons_MuonType               ; 
        std::vector<float> muons_Pt                     ; 
        std::vector<float> muons_Eta                    ; 
        std::vector<float> muons_Phi                    ; 
        std::vector<float> muons_Energy                 ; 
        std::vector<float> muons_BestTrackDz            ; 
        std::vector<float> muons_BestTrackDxy           ; 
        std::vector<float> muons_PFIsoDeltaBetaCorrR04  ; 
        std::vector<float> muons_TrackerBasedIsoR03     ; 
        std::vector<bool>  muons_CutBasedIdMedium       ; 
        std::vector<bool>  muons_CutBasedIdTight        ;
        std::vector<bool>  muons_CutBasedIdTight_bestVtx;
        std::vector<bool>  muons_GenMatch               ;
        std::vector<int>   muons_GenPdgID               ;
        std::vector<float> muons_GenPt                  ;
        std::vector<float> muons_GenEta                 ;
        std::vector<float> muons_GenPhi                 ;

        int jets_size;
        std::vector<float> jets_Pt                                            ;
        std::vector<float> jets_Eta                                           ;
        std::vector<float> jets_Phi                                           ;
        std::vector<float> jets_Mass                                          ;
        std::vector<float> jets_Energy                                        ;
        std::vector<float> jets_PtRaw                                         ;
        std::vector<float> jets_QGL                                           ;
        std::vector<float> jets_RMS                                           ;
        std::vector<float> jets_puJetIdMVA                                    ;
        std::vector<bool>  jets_passesPuJetIdLoose                            ;
        std::vector<bool>  jets_passesPuJetIdMedium                           ;
        std::vector<bool>  jets_passesPuJetIdTight                            ;
        std::vector<bool>  jets_GenJetMatch                                   ;
        std::vector<float> jets_pfCombinedInclusiveSecondaryVertexV2BJetTags  ; 
        std::vector<float> jets_pfCombinedMVAV2BJetTags                       ; 
        std::vector<float> jets_pfDeepCSVJetTags_probb                        ; 
        std::vector<float> jets_pfDeepCSVJetTags_probbb                       ; 
        std::vector<float> jets_pfDeepCSVJetTags_probc                        ; 
        std::vector<float> jets_pfDeepCSVJetTags_probudsg                     ;
        std::vector<float> jets_pfDeepFlavourJetTags_probb                    ;
        std::vector<float> jets_pfDeepFlavourJetTags_probbb                   ;
        std::vector<float> jets_pfDeepFlavourJetTags_probc                    ;
        std::vector<float> jets_pfDeepFlavourJetTags_probuds                  ;
        std::vector<float> jets_pfDeepFlavourJetTags_probg                    ;
        std::vector<float> jets_pfDeepFlavourJetTags_problepb                 ;
        std::vector<float> jets_JECScale                                      ;
        std::vector<float> jets_JERScale                                      ;
        std::vector<float> jets_JECUnc                                        ;
        std::vector<float> jets_JERUp                                         ;
        std::vector<float> jets_JERDown                                       ;
        std::vector<bool>  jets_GenPartonMatch                                ;
        std::vector<float> jets_GenPt                                         ; 
        std::vector<float> jets_GenEta                                        ; 
        std::vector<float> jets_GenPhi                                        ; 
        std::vector<int>   jets_GenPdgID                                      ;
        std::vector<int>   jets_GenFlavor                                     ;
        std::vector<int>   jets_GenHadronFlavor                               ;

        float met_Pt                     ; 
        float met_Phi                    ; 
        float met_Px                     ; 
        float met_Py                     ; 
        float met_SumET                  ; 
        float met_CorrPtShiftJetEnUp     ; 
        float met_CorrPtShiftJetEnDown   ; 
        float met_CorrPtShiftJetResUp    ; 
        float met_CorrPtShiftJetResDown  ; 
        float met_CorrPtShiftUncEnUp     ; 
        float met_CorrPtShiftUncEnDown   ; 
        float met_CorrPtShiftPhoEnUp     ; 
        float met_CorrPtShiftPhoEnDown   ; 
        float met_CorrPhiShiftJetEnUp    ; 
        float met_CorrPhiShiftJetEnDown  ; 
        float met_CorrPhiShiftJetResUp   ; 
        float met_CorrPhiShiftJetResDown ; 
        float met_CorrPhiShiftUncEnUp    ; 
        float met_CorrPhiShiftUncEnDown  ; 
        float met_CorrPhiShiftPhoEnUp    ; 
        float met_CorrPhiShiftPhoEnDown  ; 

        int GenParticles_size;
        std::vector<float> GenParticles_Pt    ; 
        std::vector<float> GenParticles_Eta   ; 
        std::vector<float> GenParticles_Phi   ; 
        std::vector<float> GenParticles_Mass  ; 
        std::vector<int>   GenParticles_PdgID ; 
        std::vector<int>   GenParticles_Status; 
        std::vector<int>   GenParticles_nMo   ; 
        std::vector<int>   GenParticles_nDa   ; 

        std::vector<bool>  GenParticles_isHardProcess;
        std::vector<bool>  GenParticles_fromHardProcessFinalState;
        std::vector<bool>  GenParticles_isPromptFinalState;
        std::vector<bool>  GenParticles_isDirectPromptTauDecayProductFinalState;
   
        std::vector<int>   GenParticles_MomPdgID;
        std::vector<int>   GenParticles_MomStatus;
        std::vector<float> GenParticles_MomPt;
        std::vector<float> GenParticles_MomEta;
        std::vector<float> GenParticles_MomPhi;
        std::vector<float> GenParticles_MomMass;
   
        int HTXSstage0cat ;
        int HTXSstage1cat ;
        int HTXSnjets     ;
        float HTXSpTH     ;
        float HTXSpTV     ;

        void Initialzation() {

            NPu                                     = -999.;
            NVtx                                    = -999;
            passTrigger                             = false;
            genweight                               = 1.;
            Rho                                     = -999.;
            PVz                                     = -999.;
            BSsigmaz                                = -999.;
            Flag_HBHENoiseFilter                    = false; 
            Flag_HBHENoiseIsoFilter                 = false; 
            Flag_EcalDeadCellTriggerPrimitiveFilter = false; 
            Flag_goodVertices                       = false; 
            Flag_globalSuperTightHalo2016Filter     = false; 
            Flag_BadPFMuonFilter                    = false; 
            Flag_eeBadScFilter                      = false; 

            dipho_mass                     = -999.;
            dipho_pt                       = -999.;
            dipho_leadPt                   = -999.; 
            dipho_leadEta                  = -999.;
            dipho_leadPhi                  = -999.; 
            dipho_leadE                    = -999.; 
            dipho_leadEtaSC                = -999.;
            dipho_leadPhiSC                = -999.;
            dipho_leadsigEOverE            = -999.; 
            dipho_leadR9                   = -999.; 
            dipho_leadsieie                = -999.; 
            dipho_leadhoe                  = -999.; 
            dipho_leadIDMVA                = -999.;
            dipho_leadIsEB                 = false;
            dipho_leadIsEE                 = false;
            dipho_leadhasPixelSeed         = false;
            dipho_leadGenMatch             = false; 
            dipho_leadGenMatchType         = -999; 
            dipho_subleadPt                = -999.; 
            dipho_subleadEta               = -999.;
            dipho_subleadPhi               = -999.;
            dipho_subleadE                 = -999.; 
            dipho_subleadEtaSC             = -999.;
            dipho_subleadPhiSC             = -999.;
            dipho_subleadsigEOverE         = -999.; 
            dipho_subleadR9                = -999.; 
            dipho_subleadsieie             = -999.; 
            dipho_subleadhoe               = -999.; 
            dipho_subleadIDMVA             = -999.;
            dipho_subleadIsEB              = false;
            dipho_subleadIsEE              = false;
            dipho_subleadhasPixelSeed      = false;
            dipho_subleadGenMatch          = false; 
            dipho_subleadGenMatchType      = -999;
            dipho_diphotonMVA              = -999.;
            dipho_SelectedVz               = -999.;
            dipho_GenVz                    = -999.;
            dipho_centralWeight            = 1.;
            dipho_MvaLinearSystUp          = -999.; 
            dipho_MvaLinearSystDown        = -999.; 
            dipho_LooseMvaSFUp             = -999.; 
            dipho_LooseMvaSFDown           = -999.; 
            dipho_PreselSFUp               = -999.; 
            dipho_PreselSFDown             = -999.; 
            dipho_electronVetoSFUp         = -999.; 
            dipho_electronVetoSFDown       = -999.; 
            dipho_TriggerWeightUp          = -999.; 
            dipho_TriggerWeightDown        = -999.; 
            dipho_FracRVWeightUp           = -999.; 
            dipho_FracRVWeightDown         = -999.; 
            dipho_FracRVNvtxWeightUp       = -999.; 
            dipho_FracRVNvtxWeightDown     = -999.; 

            elecs_size                       = -999;
            elecs_Charge                     .clear(); 
            elecs_Pt                         .clear(); 
            elecs_Eta                        .clear(); 
            elecs_Phi                        .clear(); 
            elecs_Energy                     .clear(); 
            elecs_EtaSC                      .clear(); 
            elecs_PhiSC                      .clear();
            elecs_GsfTrackDz                 .clear();
            elecs_GsfTrackDxy                .clear();
            elecs_EGMCutBasedIDVeto          .clear(); 
            elecs_EGMCutBasedIDLoose         .clear(); 
            elecs_EGMCutBasedIDMedium        .clear(); 
            elecs_EGMCutBasedIDTight         .clear();
            elecs_passConvVeto               .clear();
            elecs_fggPhoVeto                 .clear();
            elecs_EnergyCorrFactor           .clear(); 
            elecs_EnergyPostCorrErr          .clear(); 
            elecs_EnergyPostCorrScaleUp      .clear(); 
            elecs_EnergyPostCorrScaleDown    .clear(); 
            elecs_EnergyPostCorrSmearUp      .clear(); 
            elecs_EnergyPostCorrSmearDown    .clear(); 
            elecs_GenMatch                   .clear(); 
            elecs_GenPdgID                   .clear(); 
            elecs_GenPt                      .clear(); 
            elecs_GenEta                     .clear(); 
            elecs_GenPhi                     .clear(); 

            muons_size                       = -999;
            muons_Charge                     .clear(); 
            muons_MuonType                   .clear(); 
            muons_Pt                         .clear(); 
            muons_Eta                        .clear(); 
            muons_Phi                        .clear(); 
            muons_Energy                     .clear(); 
            muons_BestTrackDz                .clear(); 
            muons_BestTrackDxy               .clear(); 
            muons_PFIsoDeltaBetaCorrR04      .clear(); 
            muons_TrackerBasedIsoR03         .clear(); 
            muons_CutBasedIdMedium           .clear(); 
            muons_CutBasedIdTight            .clear();
            muons_CutBasedIdTight_bestVtx    .clear();
            muons_GenMatch                   .clear(); 
            muons_GenPdgID                   .clear(); 
            muons_GenPt                      .clear(); 
            muons_GenEta                     .clear(); 
            muons_GenPhi                     .clear(); 
 
            jets_size   = -999;
            jets_Pt                                           .clear(); 
            jets_Eta                                          .clear(); 
            jets_Phi                                          .clear(); 
            jets_Mass                                         .clear(); 
            jets_Energy                                       .clear(); 
            jets_PtRaw                                        .clear(); 
            jets_QGL                                          .clear(); 
            jets_RMS                                          .clear(); 
            jets_puJetIdMVA                                   .clear();
            jets_passesPuJetIdLoose                           .clear();
            jets_passesPuJetIdMedium                          .clear();
            jets_passesPuJetIdTight                           .clear();
            jets_GenJetMatch                                  .clear();
            jets_pfCombinedInclusiveSecondaryVertexV2BJetTags .clear(); 
            jets_pfCombinedMVAV2BJetTags                      .clear(); 
            jets_pfDeepCSVJetTags_probb                       .clear(); 
            jets_pfDeepCSVJetTags_probbb                      .clear(); 
            jets_pfDeepCSVJetTags_probc                       .clear(); 
            jets_pfDeepCSVJetTags_probudsg                    .clear();
            jets_pfDeepFlavourJetTags_probb                   .clear();
            jets_pfDeepFlavourJetTags_probbb                  .clear();
            jets_pfDeepFlavourJetTags_probc                   .clear();
            jets_pfDeepFlavourJetTags_probuds                 .clear();
            jets_pfDeepFlavourJetTags_probg                   .clear();
            jets_pfDeepFlavourJetTags_problepb                .clear();
            jets_JECScale                                     .clear(); 
            jets_JERScale                                     .clear(); 
            jets_JECUnc                                       .clear(); 
            jets_JERUp                                        .clear(); 
            jets_JERDown                                      .clear(); 
            jets_GenPartonMatch                               .clear(); 
            jets_GenPt                                        .clear(); 
            jets_GenEta                                       .clear(); 
            jets_GenPhi                                       .clear(); 
            jets_GenPdgID                                     .clear(); 
            jets_GenFlavor                                    .clear(); 
            jets_GenHadronFlavor                              .clear(); 

            met_Pt                      = -999.;
            met_Phi                     = -999.; 
            met_Px                      = -999.; 
            met_Py                      = -999.;
            met_SumET                   = -999.;
            met_CorrPtShiftJetEnUp      = -999.; 
            met_CorrPtShiftJetEnDown    = -999.; 
            met_CorrPtShiftJetResUp     = -999.; 
            met_CorrPtShiftJetResDown   = -999.; 
            met_CorrPtShiftUncEnUp      = -999.; 
            met_CorrPtShiftUncEnDown    = -999.; 
            met_CorrPtShiftPhoEnUp      = -999.; 
            met_CorrPtShiftPhoEnDown    = -999.; 
            met_CorrPhiShiftJetEnUp     = -999.; 
            met_CorrPhiShiftJetEnDown   = -999.; 
            met_CorrPhiShiftJetResUp    = -999.; 
            met_CorrPhiShiftJetResDown  = -999.; 
            met_CorrPhiShiftUncEnUp     = -999.; 
            met_CorrPhiShiftUncEnDown   = -999.; 
            met_CorrPhiShiftPhoEnUp     = -999.; 
            met_CorrPhiShiftPhoEnDown   = -999.; 

            GenParticles_size = -999;
            GenParticles_Pt     .clear(); 
            GenParticles_Eta    .clear(); 
            GenParticles_Phi    .clear(); 
            GenParticles_Mass   .clear(); 
            GenParticles_PdgID  .clear(); 
            GenParticles_Status .clear(); 
            GenParticles_nMo    .clear(); 
            GenParticles_nDa    .clear(); 

            GenParticles_isHardProcess                             .clear();
            GenParticles_fromHardProcessFinalState                 .clear();
            GenParticles_isPromptFinalState                        .clear();
            GenParticles_isDirectPromptTauDecayProductFinalState   .clear();
   
            GenParticles_MomPdgID                                  .clear();
            GenParticles_MomStatus                                 .clear();
            GenParticles_MomPt                                     .clear();
            GenParticles_MomEta                                    .clear();
            GenParticles_MomPhi                                    .clear();
            GenParticles_MomMass                                   .clear();
	   
            HTXSstage0cat = -999; 
            HTXSstage1cat = -999; 
            HTXSnjets     = -999; 
            HTXSpTH       = -999.; 
            HTXSpTV       = -999.; 
        }

        void RegisterTree (TTree* tree) {

            tree_ = tree;

            tree_->Branch( "EvtInfo.NPu"                                     , &NPu                                     , "EvtInfo.NPu/F"            );
            tree_->Branch( "EvtInfo.NVtx"                                    , &NVtx                                    , "EvtInfo.NVtx/I"           );
            tree_->Branch( "EvtInfo.passTrigger"                             , &passTrigger                             , "EvtInfo.passTrigger/O"    );
            tree_->Branch( "EvtInfo.genweight"                               , &genweight                               , "EvtInfo.genweight/F"      );
            tree_->Branch( "EvtInfo.Rho"                                     , &Rho                                     , "EvtInfo.Rho/F"            );
            tree_->Branch( "EvtInfo.PVz"                                     , &PVz                                     , "EvtInfo.PVz/F"            );
            tree_->Branch( "EvtInfo.BSsigmaz"                                , &BSsigmaz                                , "EvtInfo.BSsigmaz/F"       );
            tree_->Branch( "EvtInfo.Flag_HBHENoiseFilter"                    , &Flag_HBHENoiseFilter                    , "EvtInfo.Flag_HBHENoiseFilter/O"                         );
            tree_->Branch( "EvtInfo.Flag_HBHENoiseIsoFilter"                 , &Flag_HBHENoiseIsoFilter                 , "EvtInfo.Flag_HBHENoiseIsoFilter/O"                      );
            tree_->Branch( "EvtInfo.Flag_EcalDeadCellTriggerPrimitiveFilter" , &Flag_EcalDeadCellTriggerPrimitiveFilter , "EvtInfo.Flag_EcalDeadCellTriggerPrimitiveFilter/O"      );
            tree_->Branch( "EvtInfo.Flag_goodVertices"                       , &Flag_goodVertices                       , "EvtInfo.Flag_goodVertices/O"                            );
            tree_->Branch( "EvtInfo.Flag_globalSuperTightHalo2016Filter"     , &Flag_globalSuperTightHalo2016Filter     , "EvtInfo.Flag_globalSuperTightHalo2016Filter/O"          );
            tree_->Branch( "EvtInfo.Flag_BadPFMuonFilter"                    , &Flag_BadPFMuonFilter                    , "EvtInfo.Flag_BadPFMuonFilter/O"                         );
            tree_->Branch( "EvtInfo.Flag_eeBadScFilter"                      , &Flag_eeBadScFilter                      , "EvtInfo.Flag_eeBadScFilter/O"                           );

            tree_->Branch( "DiPhoInfo.mass"                    , &dipho_mass                   , "DiPhoInfo.mass/F"                 );
            tree_->Branch( "DiPhoInfo.pt"                      , &dipho_pt                     , "DiPhoInfo.pt/F"                   );
            tree_->Branch( "DiPhoInfo.leadPt"                  , &dipho_leadPt                 , "DiPhoInfo.leadPt/F"               );
            tree_->Branch( "DiPhoInfo.leadEta"                 , &dipho_leadEta                , "DiPhoInfo.leadEta/F"              );
            tree_->Branch( "DiPhoInfo.leadPhi"                 , &dipho_leadPhi                , "DiPhoInfo.leadPhi/F"              );
            tree_->Branch( "DiPhoInfo.leadE"                   , &dipho_leadE                  , "DiPhoInfo.leadE/F"                );
            tree_->Branch( "DiPhoInfo.leadEtaSC"               , &dipho_leadEtaSC              , "DiPhoInfo.leadEtaSC/F"            );
            tree_->Branch( "DiPhoInfo.leadPhiSC"               , &dipho_leadPhiSC              , "DiPhoInfo.leadPhiSC/F"            );
            tree_->Branch( "DiPhoInfo.leadsigEOverE"           , &dipho_leadsigEOverE          , "DiPhoInfo.leadsigEOverE/F"        );
            tree_->Branch( "DiPhoInfo.leadR9"                  , &dipho_leadR9                 , "DiPhoInfo.leadR9/F"               );
            tree_->Branch( "DiPhoInfo.leadsieie"               , &dipho_leadsieie              , "DiPhoInfo.leadsieie/F"            );
            tree_->Branch( "DiPhoInfo.leadhoe"                 , &dipho_leadhoe                , "DiPhoInfo.leadhoe/F"              );
            tree_->Branch( "DiPhoInfo.leadIDMVA"               , &dipho_leadIDMVA              , "DiPhoInfo.leadIDMVA/F"            );
            tree_->Branch( "DiPhoInfo.leadIsEB"                , &dipho_leadIsEB               , "DiPhoInfo.leadIsEB/O"             );
            tree_->Branch( "DiPhoInfo.leadIsEE"                , &dipho_leadIsEE               , "DiPhoInfo.leadIsEE/O"             );
            tree_->Branch( "DiPhoInfo.leadhasPixelSeed"        , &dipho_leadhasPixelSeed       , "DiPhoInfo.leadhasPixelSeed/O"     );
            tree_->Branch( "DiPhoInfo.leadGenMatch"            , &dipho_leadGenMatch           , "DiPhoInfo.leadGenMatch/O"         );
            tree_->Branch( "DiPhoInfo.leadGenMatchType"        , &dipho_leadGenMatchType       , "DiPhoInfo.leadGenMatchType/I"     );
            tree_->Branch( "DiPhoInfo.subleadPt"               , &dipho_subleadPt              , "DiPhoInfo.subleadPt/F"            );
            tree_->Branch( "DiPhoInfo.subleadEta"              , &dipho_subleadEta             , "DiPhoInfo.subleadEta/F"           );
            tree_->Branch( "DiPhoInfo.subleadPhi"              , &dipho_subleadPhi             , "DiPhoInfo.subleadPhi/F"           );
            tree_->Branch( "DiPhoInfo.subleadE"                , &dipho_subleadE               , "DiPhoInfo.subleadE/F"             );
            tree_->Branch( "DiPhoInfo.subleadEtaSC"            , &dipho_subleadEtaSC           , "DiPhoInfo.subleadEtaSC/F"         );
            tree_->Branch( "DiPhoInfo.subleadPhiSC"            , &dipho_subleadPhiSC           , "DiPhoInfo.subleadPhiSC/F"         );
            tree_->Branch( "DiPhoInfo.subleadsigEOverE"        , &dipho_subleadsigEOverE       , "DiPhoInfo.subleadsigEOverE/F"     );
            tree_->Branch( "DiPhoInfo.subleadR9"               , &dipho_subleadR9              , "DiPhoInfo.subleadR9/F"            );
            tree_->Branch( "DiPhoInfo.subleadsieie"            , &dipho_subleadsieie           , "DiPhoInfo.subleadsieie/F"         );
            tree_->Branch( "DiPhoInfo.subleadhoe"              , &dipho_subleadhoe             , "DiPhoInfo.subleadhoe/F"           );
            tree_->Branch( "DiPhoInfo.subleadIDMVA"            , &dipho_subleadIDMVA           , "DiPhoInfo.subleadIDMVA/F"         );
            tree_->Branch( "DiPhoInfo.subleadIsEB"             , &dipho_subleadIsEB            , "DiPhoInfo.subleadIsEB/O"          );
            tree_->Branch( "DiPhoInfo.subleadIsEE"             , &dipho_subleadIsEE            , "DiPhoInfo.subleadIsEE/O"          );
            tree_->Branch( "DiPhoInfo.subleadhasPixelSeed"     , &dipho_subleadhasPixelSeed    , "DiPhoInfo.subleadhasPixelSeed/O"  );
            tree_->Branch( "DiPhoInfo.subleadGenMatch"         , &dipho_subleadGenMatch        , "DiPhoInfo.subleadGenMatch/O"      );
            tree_->Branch( "DiPhoInfo.subleadGenMatchType"     , &dipho_subleadGenMatchType    , "DiPhoInfo.subleadGenMatchType/I"  );
            tree_->Branch( "DiPhoInfo.diphotonMVA"             , &dipho_diphotonMVA            , "DiPhoInfo.diphotonMVA/F"          );
            tree_->Branch( "DiPhoInfo.SelectedVz"              , &dipho_SelectedVz             , "DiPhoInfo.SelectedVz/F"           );
            tree_->Branch( "DiPhoInfo.GenVz"                   , &dipho_GenVz                  , "DiPhoInfo.GenVz/F"                );
            tree_->Branch( "DiPhoInfo.centralWeight"           , &dipho_centralWeight          , "DiPhoInfo.centralWeight/F"        );
            tree_->Branch( "DiPhoInfo.MvaLinearSystUp"         , &dipho_MvaLinearSystUp        , "DiPhoInfo.MvaLinearSystUp/F"      );
            tree_->Branch( "DiPhoInfo.MvaLinearSystDown"       , &dipho_MvaLinearSystDown      , "DiPhoInfo.MvaLinearSystDown/F"    );
            tree_->Branch( "DiPhoInfo.LooseMvaSFUp"            , &dipho_LooseMvaSFUp           , "DiPhoInfo.LooseMvaSFUp/F"         );
            tree_->Branch( "DiPhoInfo.LooseMvaSFDown"          , &dipho_LooseMvaSFDown         , "DiPhoInfo.LooseMvaSFDown/F"       );
            tree_->Branch( "DiPhoInfo.PreselSFUp"              , &dipho_PreselSFUp             , "DiPhoInfo.PreselSFUp/F"           );
            tree_->Branch( "DiPhoInfo.PreselSFDown"            , &dipho_PreselSFDown           , "DiPhoInfo.PreselSFDown/F"         );
            tree_->Branch( "DiPhoInfo.electronVetoSFUp"        , &dipho_electronVetoSFUp       , "DiPhoInfo.electronVetoSFUp/F"     );
            tree_->Branch( "DiPhoInfo.electronVetoSFDown"      , &dipho_electronVetoSFDown     , "DiPhoInfo.electronVetoSFDown/F"   );
            tree_->Branch( "DiPhoInfo.TriggerWeightUp"         , &dipho_TriggerWeightUp        , "DiPhoInfo.TriggerWeightUp/F"      );
            tree_->Branch( "DiPhoInfo.TriggerWeightDown"       , &dipho_TriggerWeightDown      , "DiPhoInfo.TriggerWeightDown/F"    );
            tree_->Branch( "DiPhoInfo.FracRVWeightUp"          , &dipho_FracRVWeightUp         , "DiPhoInfo.FracRVWeightUp/F"       );
            tree_->Branch( "DiPhoInfo.FracRVWeightDown"        , &dipho_FracRVWeightDown       , "DiPhoInfo.FracRVWeightDown/F"     );
            tree_->Branch( "DiPhoInfo.FracRVNvtxWeightUp"      , &dipho_FracRVNvtxWeightUp     , "DiPhoInfo.FracRVNvtxWeightUp/F"   );
            tree_->Branch( "DiPhoInfo.FracRVNvtxWeightDown"    , &dipho_FracRVNvtxWeightDown   , "DiPhoInfo.FracRVNvtxWeightDown/F" );

            tree_->Branch( "ElecInfo.Size"                        , &elecs_size                     , "ElecInfo.Size/I" );
            tree_->Branch( "ElecInfo.Charge"                      , &elecs_Charge                    );
            tree_->Branch( "ElecInfo.Pt"                          , &elecs_Pt                        );
            tree_->Branch( "ElecInfo.Eta"                         , &elecs_Eta                       );
            tree_->Branch( "ElecInfo.Phi"                         , &elecs_Phi                       );
            tree_->Branch( "ElecInfo.Energy"                      , &elecs_Energy                    );
            tree_->Branch( "ElecInfo.EtaSC"                       , &elecs_EtaSC                     );
            tree_->Branch( "ElecInfo.PhiSC"                       , &elecs_PhiSC                     );
            tree_->Branch( "ElecInfo.GsfTrackDz"                  , &elecs_GsfTrackDz                );
            tree_->Branch( "ElecInfo.GsfTrackDxy"                 , &elecs_GsfTrackDxy               );
            tree_->Branch( "ElecInfo.EGMCutBasedIDVeto"           , &elecs_EGMCutBasedIDVeto         );
            tree_->Branch( "ElecInfo.EGMCutBasedIDLoose"          , &elecs_EGMCutBasedIDLoose        );
            tree_->Branch( "ElecInfo.EGMCutBasedIDMedium"         , &elecs_EGMCutBasedIDMedium       );
            tree_->Branch( "ElecInfo.EGMCutBasedIDTight"          , &elecs_EGMCutBasedIDTight        );
            tree_->Branch( "ElecInfo.passConvVeto"                , &elecs_passConvVeto              );
            tree_->Branch( "ElecInfo.fggPhoVeto"                  , &elecs_fggPhoVeto                );
            tree_->Branch( "ElecInfo.EnergyCorrFactor"            , &elecs_EnergyCorrFactor          );
            tree_->Branch( "ElecInfo.EnergyPostCorrErr"           , &elecs_EnergyPostCorrErr         );
            tree_->Branch( "ElecInfo.EnergyPostCorrScaleUp"       , &elecs_EnergyPostCorrScaleUp     );
            tree_->Branch( "ElecInfo.EnergyPostCorrScaleDown"     , &elecs_EnergyPostCorrScaleDown   );
            tree_->Branch( "ElecInfo.EnergyPostCorrSmearUp"       , &elecs_EnergyPostCorrSmearUp     );
            tree_->Branch( "ElecInfo.EnergyPostCorrSmearDown"     , &elecs_EnergyPostCorrSmearDown   );
            tree_->Branch( "ElecInfo.GenMatch"                    , &elecs_GenMatch                  );
            tree_->Branch( "ElecInfo.GenPdgID"                    , &elecs_GenPdgID                  );
            tree_->Branch( "ElecInfo.GenPt"                       , &elecs_GenPt                     );
            tree_->Branch( "ElecInfo.GenEta"                      , &elecs_GenEta                    );
            tree_->Branch( "ElecInfo.GenPhi"                      , &elecs_GenPhi                    );

            tree_->Branch( "MuonInfo.Size"                        , &muons_size                     , "MuonInfo.Size/I" );
            tree_->Branch( "MuonInfo.Charge"                      , &muons_Charge                    );
            tree_->Branch( "MuonInfo.MuonType"                    , &muons_MuonType                  );
            tree_->Branch( "MuonInfo.Pt"                          , &muons_Pt                        );
            tree_->Branch( "MuonInfo.Eta"                         , &muons_Eta                       );
            tree_->Branch( "MuonInfo.Phi"                         , &muons_Phi                       );
            tree_->Branch( "MuonInfo.Energy"                      , &muons_Energy                    );
            tree_->Branch( "MuonInfo.BestTrackDz"                 , &muons_BestTrackDz               );
            tree_->Branch( "MuonInfo.BestTrackDxy"                , &muons_BestTrackDxy              );
            tree_->Branch( "MuonInfo.PFIsoDeltaBetaCorrR04"       , &muons_PFIsoDeltaBetaCorrR04     );
            tree_->Branch( "MuonInfo.TrackerBasedIsoR03"          , &muons_TrackerBasedIsoR03        );
            tree_->Branch( "MuonInfo.CutBasedIdMedium"            , &muons_CutBasedIdMedium          );
            tree_->Branch( "MuonInfo.CutBasedIdTight"             , &muons_CutBasedIdTight           );
            tree_->Branch( "MuonInfo.CutBasedIdTight_bestVtx"     , &muons_CutBasedIdTight_bestVtx   );
            tree_->Branch( "MuonInfo.GenMatch"                    , &muons_GenMatch                  );
            tree_->Branch( "MuonInfo.GenPdgID"                    , &muons_GenPdgID                  );
            tree_->Branch( "MuonInfo.GenPt"                       , &muons_GenPt                     );
            tree_->Branch( "MuonInfo.GenEta"                      , &muons_GenEta                    );
            tree_->Branch( "MuonInfo.GenPhi"                      , &muons_GenPhi                    );

            tree_->Branch( "jets_size"                                             , &jets_size      , "jets_size/I" );
            tree_->Branch( "JetInfo.Pt"                                            , &jets_Pt                                           );
            tree_->Branch( "JetInfo.Eta"                                           , &jets_Eta                                          );
            tree_->Branch( "JetInfo.Phi"                                           , &jets_Phi                                          );
            tree_->Branch( "JetInfo.Mass"                                          , &jets_Mass                                         );
            tree_->Branch( "JetInfo.Energy"                                        , &jets_Energy                                       );
            tree_->Branch( "JetInfo.PtRaw"                                         , &jets_PtRaw                                        );
            tree_->Branch( "JetInfo.QGL"                                           , &jets_QGL                                          );
            tree_->Branch( "JetInfo.RMS"                                           , &jets_RMS                                          );
            tree_->Branch( "JetInfo.puJetIdMVA"                                    , &jets_puJetIdMVA                                   );
            tree_->Branch( "JetInfo.passesPuJetIdLoose"                            , &jets_passesPuJetIdLoose                           );
            tree_->Branch( "JetInfo.passesPuJetIdMedium"                           , &jets_passesPuJetIdMedium                          );
            tree_->Branch( "JetInfo.passesPuJetIdTight"                            , &jets_passesPuJetIdTight                           );
            tree_->Branch( "JetInfo.GenJetMatch"                                   , &jets_GenJetMatch                                  );
            tree_->Branch( "JetInfo.pfCombinedInclusiveSecondaryVertexV2BJetTags"  , &jets_pfCombinedInclusiveSecondaryVertexV2BJetTags );
            tree_->Branch( "JetInfo.pfCombinedMVAV2BJetTags"                       , &jets_pfCombinedMVAV2BJetTags                      );
            tree_->Branch( "JetInfo.pfDeepCSVJetTags_probb"                        , &jets_pfDeepCSVJetTags_probb                       );
            tree_->Branch( "JetInfo.pfDeepCSVJetTags_probbb"                       , &jets_pfDeepCSVJetTags_probbb                      );
            tree_->Branch( "JetInfo.pfDeepCSVJetTags_probc"                        , &jets_pfDeepCSVJetTags_probc                       );
            tree_->Branch( "JetInfo.pfDeepCSVJetTags_probudsg"                     , &jets_pfDeepCSVJetTags_probudsg                    );
            tree_->Branch( "JetInfo.pfDeepFlavourJetTags_probb"                    , &jets_pfDeepFlavourJetTags_probb                   );
            tree_->Branch( "JetInfo.pfDeepFlavourJetTags_probbb"                   , &jets_pfDeepFlavourJetTags_probbb                  );
            tree_->Branch( "JetInfo.pfDeepFlavourJetTags_probc"                    , &jets_pfDeepFlavourJetTags_probc                   );
            tree_->Branch( "JetInfo.pfDeepFlavourJetTags_probuds"                  , &jets_pfDeepFlavourJetTags_probuds                 );
            tree_->Branch( "JetInfo.pfDeepFlavourJetTags_probg"                    , &jets_pfDeepFlavourJetTags_probg                   );
            tree_->Branch( "JetInfo.pfDeepFlavourJetTags_problepb"                 , &jets_pfDeepFlavourJetTags_problepb                );
            tree_->Branch( "JetInfo.JECScale"                                      , &jets_JECScale                                     );
            tree_->Branch( "JetInfo.JERScale"                                      , &jets_JERScale                                     );
            tree_->Branch( "JetInfo.JECUnc"                                        , &jets_JECUnc                                       );
            tree_->Branch( "JetInfo.JERUp"                                         , &jets_JERUp                                        );
            tree_->Branch( "JetInfo.JERDown"                                       , &jets_JERDown                                      );
            tree_->Branch( "JetInfo.GenPartonMatch"                                , &jets_GenPartonMatch                               );
            tree_->Branch( "JetInfo.GenPt"                                         , &jets_GenPt                                        );
            tree_->Branch( "JetInfo.GenEta"                                        , &jets_GenEta                                       );
            tree_->Branch( "JetInfo.GenPhi"                                        , &jets_GenPhi                                       );
            tree_->Branch( "JetInfo.GenPdgID"                                      , &jets_GenPdgID                                     );
            tree_->Branch( "JetInfo.GenFlavor"                                     , &jets_GenFlavor                                    );
            tree_->Branch( "JetInfo.GenHadronFlavor"                               , &jets_GenHadronFlavor                              );

            tree_->Branch( "MetInfo.Pt"                       , &met_Pt                        , "MetInfo.Pt/F"                    );
            tree_->Branch( "MetInfo.Phi"                      , &met_Phi                       , "MetInfo.Phi/F"                   );
            tree_->Branch( "MetInfo.Px"                       , &met_Px                        , "MetInfo.Px/F"                    );
            tree_->Branch( "MetInfo.Py"                       , &met_Py                        , "MetInfo.Py/F"                    );
            tree_->Branch( "MetInfo.SumET"                    , &met_SumET                     , "MetInfo.SumET/F"                 );
            tree_->Branch( "MetInfo.CorrPtShiftJetEnUp"       , &met_CorrPtShiftJetEnUp        , "MetInfo.CorrPtShiftJetEnUp/F"    );
            tree_->Branch( "MetInfo.CorrPtShiftJetEnDown"     , &met_CorrPtShiftJetEnDown      , "MetInfo.CorrPtShiftJetEnDown/F"  );
            tree_->Branch( "MetInfo.CorrPtShiftJetResUp"      , &met_CorrPtShiftJetResUp       , "MetInfo.CorrPtShiftJetResUp/F"   );
            tree_->Branch( "MetInfo.CorrPtShiftJetResDown"    , &met_CorrPtShiftJetResDown     , "MetInfo.CorrPtShiftJetResDown/F" );
            tree_->Branch( "MetInfo.CorrPtShiftUncEnUp"       , &met_CorrPtShiftUncEnUp        , "MetInfo.CorrPtShiftUncEnUp/F"    );
            tree_->Branch( "MetInfo.CorrPtShiftUncEnDown"     , &met_CorrPtShiftUncEnDown      , "MetInfo.CorrPtShiftUncEnDown/F"  );
            tree_->Branch( "MetInfo.CorrPtShiftPhoEnUp"       , &met_CorrPtShiftPhoEnUp        , "MetInfo.CorrPtShiftPhoEnUp/F"    );
            tree_->Branch( "MetInfo.CorrPtShiftPhoEnDown"     , &met_CorrPtShiftPhoEnDown      , "MetInfo.CorrPtShiftPhoEnDown/F"  );
            tree_->Branch( "MetInfo.CorrPhiShiftJetEnUp"      , &met_CorrPhiShiftJetEnUp       , "MetInfo.CorrPhiShiftJetEnUp/F"   );
            tree_->Branch( "MetInfo.CorrPhiShiftJetEnDown"    , &met_CorrPhiShiftJetEnDown     , "MetInfo.CorrPhiShiftJetEnDown/F" );
            tree_->Branch( "MetInfo.CorrPhiShiftJetResUp"     , &met_CorrPhiShiftJetResUp      , "MetInfo.CorrPhiShiftJetResUp/F"  );
            tree_->Branch( "MetInfo.CorrPhiShiftJetResDown"   , &met_CorrPhiShiftJetResDown    , "MetInfo.CorrPhiShiftJetResDown/F");
            tree_->Branch( "MetInfo.CorrPhiShiftUncEnUp"      , &met_CorrPhiShiftUncEnUp       , "MetInfo.CorrPhiShiftUncEnUp/F"   );
            tree_->Branch( "MetInfo.CorrPhiShiftUncEnDown"    , &met_CorrPhiShiftUncEnDown     , "MetInfo.CorrPhiShiftUncEnDown/F" );
            tree_->Branch( "MetInfo.CorrPhiShiftPhoEnUp"      , &met_CorrPhiShiftPhoEnUp       , "MetInfo.CorrPhiShiftPhoEnUp/F"   );
            tree_->Branch( "MetInfo.CorrPhiShiftPhoEnDown"    , &met_CorrPhiShiftPhoEnDown     , "MetInfo.CorrPhiShiftPhoEnDown/F" );

            tree_->Branch( "GenPartInfo.size"   , &GenParticles_size , "GenPartInfo.size/I" );
            tree_->Branch( "GenPartInfo.Pt"     , &GenParticles_Pt     );
            tree_->Branch( "GenPartInfo.Eta"    , &GenParticles_Eta    );
            tree_->Branch( "GenPartInfo.Phi"    , &GenParticles_Phi    );
            tree_->Branch( "GenPartInfo.Mass"   , &GenParticles_Mass   );
            tree_->Branch( "GenPartInfo.PdgID"  , &GenParticles_PdgID  );
            tree_->Branch( "GenPartInfo.Status" , &GenParticles_Status );
            tree_->Branch( "GenPartInfo.nMo"    , &GenParticles_nMo    );
            tree_->Branch( "GenPartInfo.nDa"    , &GenParticles_nDa    );
	   
            tree_->Branch( "GenPartInfo.isHardProcess"                              , &GenParticles_isHardProcess    );
            tree_->Branch( "GenPartInfo.fromHardProcessFinalState"                  , &GenParticles_fromHardProcessFinalState    );
            tree_->Branch( "GenPartInfo.isPromptFinalState"                         , &GenParticles_isPromptFinalState    );
            tree_->Branch( "GenPartInfo.isDirectPromptTauDecayProductFinalState"    , &GenParticles_isDirectPromptTauDecayProductFinalState    );

            tree_->Branch( "GenPartInfo.MomPdgID"        , &GenParticles_MomPdgID    );
            tree_->Branch( "GenPartInfo.MomStatus"       , &GenParticles_MomStatus   );
            tree_->Branch( "GenPartInfo.MomPt"           , &GenParticles_MomPt       );
            tree_->Branch( "GenPartInfo.MomEta"          , &GenParticles_MomEta      );
            tree_->Branch( "GenPartInfo.MomPhi"          , &GenParticles_MomPhi      );
            tree_->Branch( "GenPartInfo.MomMass"         , &GenParticles_MomMass     );

            tree_->Branch( "HTXSstage0cat"   , &HTXSstage0cat  , "HTXSstage0cat/I" );
            tree_->Branch( "HTXSstage1cat"   , &HTXSstage1cat  , "HTXSstage1cat/I" );
            tree_->Branch( "HTXSnjets"       , &HTXSnjets      , "HTXSnjets/I"     );
            tree_->Branch( "HTXSpTH"         , &HTXSpTH        , "HTXSpTH/F"       );
            tree_->Branch( "HTXSpTV"         , &HTXSpTV        , "HTXSpTV/F"       );

        }

    void TreeFill() { tree_->Fill(); }

    private:

        TTree* tree_;

};

#endif
