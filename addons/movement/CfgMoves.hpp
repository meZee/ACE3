
class CfgMovesBasic {
    class ManActions {
        ACE_Climb = "ACE_Climb";
    };

    class Actions {
        class RifleStandActionsNoAdjust;
        class RifleLowStandActionsNoAdjust;

        // WEAPON RAISED - RUNNING
        class RifleStandActionsRunF: RifleStandActionsNoAdjust {
            getOver = "AovrPercMrunSrasWrflDf";
        };
        class RifleStandActionsRunFL: RifleStandActionsNoAdjust {
            getOver = "AovrPercMrunSrasWrflDf";
        };
        class RifleStandActionsRunFR: RifleStandActionsNoAdjust {
            getOver = "AovrPercMrunSrasWrflDf";
        };
        // WEAPON RAISED - SPRINTING
        class RifleStandEvasiveActionsF: RifleStandActionsNoAdjust {
            getOver = "AovrPercMrunSrasWrflDf";
        };
        class RifleStandEvasiveActionsFL: RifleStandActionsNoAdjust {
            getOver = "AovrPercMrunSrasWrflDf";
        };
        class RifleStandEvasiveActionsFR: RifleStandActionsNoAdjust {
            getOver = "AovrPercMrunSrasWrflDf";
        };
        // WEAPON LOWERED - RUNNING
        class RifleLowStandActionsRunF: RifleLowStandActionsNoAdjust {
            getOver = "AovrPercMrunSrasWrflDf";
        };
        class RifleLowStandActionsRunFL: RifleLowStandActionsNoAdjust {
            getOver = "AovrPercMrunSrasWrflDf";
        };
        class RifleLowStandActionsRunFR: RifleLowStandActionsNoAdjust {
            getOver = "AovrPercMrunSrasWrflDf";
        };
    };
};

class CfgMovesMaleSdr: CfgMovesBasic {
    class StandBase;
    class States {
        // better slow walk with lowered rifle animation
        class AmovPercMstpSrasWrflDnon;
        class AmovPercMrunSrasWrflDf: AmovPercMstpSrasWrflDnon {
            InterpolateTo[] = {"AovrPercMrunSrasWrflDf",0.22,"AmovPercMrunSlowWrflDf",0.025,"AmovPercMwlkSrasWrflDf",0.025,"AmovPknlMrunSrasWrflDf",0.03,"AmovPercMrunSlowWrflDf_AmovPpneMstpSrasWrflDnon",0.02,"AmovPercMevaSrasWrflDf",0.025,"Unconscious",0.01,"AmovPercMtacSrasWrflDf",0.02,"AmovPercMrunSrasWrflDfl",0.02,"AmovPercMrunSrasWrflDfl_ldst",0.02,"AmovPercMrunSrasWrflDfr",0.02,"AmovPercMrunSrasWrflDfr_ldst",0.02,"AmovPercMstpSrasWrflDnon",0.02,"AmovPercMrunSrasWrflDl",0.02,"AmovPercMrunSrasWrflDbl",0.02,"AmovPercMrunSrasWrflDb",0.02,"AmovPercMrunSrasWrflDbr",0.02,"AmovPercMrunSrasWrflDr",0.02,"AmovPknlMstpSlowWrflDnon_relax",0.1,"AmovPercMrunSrasWrflDf_ldst",0.02,"AmovPercMrunSrasWrflDf",0.02};
        };

        class AmovPercMstpSlowWrflDnon;
        class AmovPercMwlkSlowWrflDf: AmovPercMstpSlowWrflDnon {
            speed = 0.3; //0.206897;
            file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\Wlk\Low\Rfl\AmovPercMwlkSlowWrflDf_ver2";
            leftHandIKCurve[] = {1};
        };
        class AmovPercMwlkSlowWrflDfl: AmovPercMwlkSlowWrflDf {
            leftHandIKCurve[] = {};
        };
        class AmovPercMwlkSlowWrflDfr: AmovPercMwlkSlowWrflDf {
            leftHandIKCurve[] = {};
        };
        class AmovPercMwlkSlowWrflDb: AmovPercMwlkSlowWrflDf {
            leftHandIKCurve[] = {};
        };
        class AmovPercMwlkSlowWrflDbl: AmovPercMwlkSlowWrflDf {
            leftHandIKCurve[] = {};
        };
        class AmovPercMwlkSlowWrflDbr: AmovPercMwlkSlowWrflDf {
            leftHandIKCurve[] = {};
        };
        class AmovPercMwlkSlowWrflDl: AmovPercMwlkSlowWrflDf {
            leftHandIKCurve[] = {};
        };
        class AmovPercMwlkSlowWrflDr: AmovPercMwlkSlowWrflDf {
            leftHandIKCurve[] = {};
        };

        // enable optics in prone left and right stance
        class AidlPpneMstpSrasWrflDnon_G0S;
        class AadjPpneMstpSrasWrflDleft: AidlPpneMstpSrasWrflDnon_G0S {
            enableOptics = 1;
        };
        class AadjPpneMstpSrasWrflDright: AidlPpneMstpSrasWrflDnon_G0S {
            enableOptics = 1;
        };
        class AadjPpneMstpSrasWrflDup;
        class AadjPpneMstpSrasWrflDdown: AadjPpneMstpSrasWrflDup {
            enableOptics = 1;
        };

        class AidlPpneMstpSrasWpstDnon_G0S;
        class AadjPpneMstpSrasWpstDleft: AidlPpneMstpSrasWpstDnon_G0S {
            enableOptics = 2;
        };
        class AadjPpneMstpSrasWpstDright: AidlPpneMstpSrasWpstDnon_G0S {
            enableOptics = 2;
        };
        class AadjPpneMstpSrasWpstDup;
        class AadjPpneMstpSrasWpstDdown: AadjPpneMstpSrasWpstDup {
            enableOptics = 2;
        };

        // climb animation
        class AmovPercMstpSnonWnonDnon: StandBase {
            ConnectTo[] += {"ACE_Climb",0.02};
        };

        class AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInMedium;
        class ACE_Climb: AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInMedium {
            canReload = 0;
            forceAim = 1;
        };
    };
};