/* Adventure4+ - copyleft @ M.L.Arnautov 1991 */
#pragma warning(disable:4033) // function must return a value
#pragma warning(disable:4013) // function undefined; assuming extern returning int
#pragma warning(disable:4716) // must return a value
#pragma warning(disable:4715) // not all control paths return a value
#include "advkern.h"
int s15() {
	if (currentCommandContains(571)) { return 0; } processMoveCommand(237, 0, 518, -10); processMoveCommand(397, 0, -520);
	if (!currentCommandIsOneOf(514, 532, -1)) return 0; printMessage(64, 1162, 0);
} int u10() {
	if (currentCommandContains(571))
	{
		return 0;
	} processMoveCommand(241, 0, 514, 241, -625); processMoveCommand(242, 0, -242); if (!currentCommandIsOneOf(518, 532, -1))
		return 0; if (g10(28, -1)) { s9(28, 484); processMoveCommand(239, -1163); } printMessage(64, 1162, 0);
} int c20() { processMoveCommand(240, 0, 518, -239); processMoveCommand(242, 0, 515, -242); } int y13() {
	processMoveCommand(241, 0, 520, 527, -241);
	processMoveCommand(240, 0, -239); if (!currentCommandIsNotOneOf(531, -1)) return 0; processMoveCommand(485, -1); v37();
} int j16()
{
	processMoveCommand(180, 0, -517);
} int c21() {
	if (currentCommandContains(571)) { return 0; } processMoveCommand(246, 0, 519, 524, 246, -249);
	if (currentCommandContains(557)) {
		if (object_type_3_buffer[697] == 1 || g10(23, -1)) { return 0; } if (currentCommandContains(115) ||
			currentCommandContains(116)) {
			if (isItemAtLocation(t11(object_type_3_buffer[670]), -1)) { s9(object_type_3_buffer[670], PLAYER_LOCATION); printMessage(76, 968, 670); }
			return 0;
		} if (isObjectFlagSet(t11(670), 0)) {
			if (isObjectFlagSet(t11(670), 5)) {
				if (isItemAtLocation(t11(object_type_3_buffer[670]), -1))
				{
					if (currentCommandContains(50)) {
						if (isObjectFlagSet(22, 13)) {
							l12(0, 22, 0); s9(50, 485); modifyObjectFlag('s', 50, 14);
							printMessage(64, 1449, 0);
						} modifyObjectFlag('s', 50, 13);
					} l12(0, 22, 1); s9(22, 484); s9(23, 244); s9(object_type_3_buffer[670], 485);
					printMessage(76, 969, 670);
				}
			}
		}
	} if (currentCommandContains(531)) {
		if (object_type_3_buffer[21] == 0) { printMessage(64, 902, 0); } processMoveCommand(485, -1);
		v37();
	} if (currentCommandContains(9)) { s9(9, object_type_3_buffer[671]); } if (currentCommandContains(120)) {
		if (currentCommandContains(562) || currentCommandContains(571))
		{
			printMessage(64, 1397, 0);
		} printMessage(64, 915, 0);
	} if (!currentCommandIsOneOf(532, 515, -1)) return 0; if (object_type_3_buffer[21] > 0)
	{
		printMessage(64, 971, 0);
	} if (object_type_3_buffer[22] == 0) { printMessage(64, 970, 0); } if (object_type_3_buffer[22] == 2) {
		l12(0, 22, 0);
		s9(22, 244); s9(23, 484); printMessage(64, 1447, 0);
	} if (object_type_3_buffer[22] == 1) { l12(0, 22, 2); }
	processMoveCommand(245, -2);
} int l19() {
	if (currentCommandContains(571)) { return 0; } processMoveCommand(213, 0, 524, 519, 527, -213);
	processMoveCommand(244, 0, 523, 515, -21);
} int f7() {
	processMoveCommand(210, 0, 514, -527); if (currentCommandContains(60)) {
		if
			(object_type_3_buffer[20] == 0) {
			printMessage(64, 1032, 0);
		}
	} if (!currentCommandIsOneOf(529, 516, -1)) return 0; if (object_type_3_buffer[20] == 0)
	{
		w25(); printMessage(64, 956, 0);
	} processMoveCommand(215, -2);
} int i20() {
	processMoveCommand(215, 0, 516, -527); if
		(currentCommandContains(60)) {
		if (object_type_3_buffer[20] == 0) { printMessage(64, 1032, 0); }
	} if (!currentCommandIsOneOf(529, 514, -1)) return
		0; if (object_type_3_buffer[20] == 0) { w25(); printMessage(64, 956, 0); } processMoveCommand(210, -2);
} int r14() {
	if
		((currentCommandContains(535) || currentCommandContains(557)) && currentCommandContains(38)) {
		if (isItemAtLocation(38, -1) && g10(22, -1)) {
			l12(0, 22, 3);
			s9(22, 485); s9(23, 244); s9(38, PLAYER_LOCATION); printMessage(0, 1698, 0); printMessage(64, 973, 0);
		}
	} if (currentCommandContains(557))
	{
		if (object_type_3_buffer[697] == 1 || g10(23, -1)) { return 0; } if (currentCommandContains(115) || currentCommandContains(116)) {
			if (isItemAtLocation(t11(object_type_3_buffer[670]), -1)) { s9(object_type_3_buffer[670], PLAYER_LOCATION); printMessage(76, 968, 670); } return 0;
		}
		if (isObjectFlagSet(t11(670), 0)) {
			if (isObjectFlagSet(t11(670), 5)) {
				if (isItemAtLocation(t11(object_type_3_buffer[670]), -1)) {
					if
						(currentCommandContains(50)) {
						if (isObjectFlagSet(22, 13)) {
							l12(0, 22, 0); s9(50, 485); modifyObjectFlag('s', 50, 14); printMessage(64, 1449, 0);
						} modifyObjectFlag('s', 50, 13);
					} l12(0, 22, 1); s9(22, 484); s9(23, 244); s9(object_type_3_buffer[670], 485);
					printMessage(76, 969, 670);
				}
			}
		}
	} if (currentCommandContains(531)) {
		if (object_type_3_buffer[21] == 0) { printMessage(64, 902, 0); } processMoveCommand(485, -1);
		v37();
	} if (currentCommandContains(571)) { return 0; } processMoveCommand(249, 0, 515, -249); processMoveCommand(250, 0, -250);
	processMoveCommand(252, 0, -619); processMoveCommand(298, 0, -298); if (currentCommandContains(9)) { s9(9, object_type_3_buffer[671]); } if (!currentCommandIsOneOf(532, 519, -1))
		return 0; if (object_type_3_buffer[21] > 0) { printMessage(64, 971, 0); } if (object_type_3_buffer[22] == 0) {
		printMessage(64, 970, 0);
	} if (object_type_3_buffer[22] == 2) { l12(0, 22, 0); s9(22, 244); s9(23, 484); printMessage(64, 1447, 0); }
	if (object_type_3_buffer[22] == 1) { l12(0, 22, 2); } if (isItemAtLocation(38, -1)) {
		printMessage(0, 972, 0); l12(0, 21, 1);
		s9(23, 484); processMoveCommand(485, -1); die();
	} if (object_type_3_buffer[22] == 3 && isObjectFlagSet(22, 13)) {
		if (g10(38, -1))
		{
			s9(38, r5); l12(0, 21, 1); printMessage(0, 1100, 0);
		}
		else {
			l12(0, 21, 2); printMessage(0, 1101, 0);
		} s9(23, 484); processMoveCommand(485, -1); die();
	} processMoveCommand(244, -2);
} int p18() {
	if (currentCommandContains(571))
	{
		return 0;
	} processMoveCommand(245, 0, 520, -21); processMoveCommand(250, 0, 516, -250); processMoveCommand(252, 0, -619); processMoveCommand(298, 0, -298);
} int y14() {
	if (currentCommandContains(571)) { return 0; } processMoveCommand(245, 0, -21); processMoveCommand(249, 0, 520, -249);
	processMoveCommand(251, 0, -515); processMoveCommand(297, 0, 517, -524); processMoveCommand(252, 0, -619); processMoveCommand(298, 0, -298);
} int
q15() {
	if (currentCommandContains(571)) { return 0; } processMoveCommand(250, 0, 518, -250); processMoveCommand(252, 0, 514, -619);
	processMoveCommand(296, 0, 516, -627);
} int k9() {
	if (currentCommandContains(571)) { return 0; } processMoveCommand(251, 0, 518, 527, -625);
	processMoveCommand(250, 0, -250); if (currentCommandContains(531)) { processMoveCommand(485, -1); v37(); } if (currentCommandContains(9) && object_type_3_buffer[30] == 2)
	{
		s9(9, object_type_3_buffer[671]);
	} if (!currentCommandIsOneOf(142, 532, 514, -1)) return 0; if (object_type_3_buffer[30] == 0) {
		printMessage(64, 1120, 0);
	} if (isItemAtLocation(64, 2)) {
		if (isItemAtLocation(38, -1)) { printMessage(0, 1124, 0); s9(38, 485); }
		else {
			if
				(!(isObjectFlagSet(253, 4))) {
				modifyObjectFlag('c', 252, 8); printMessage(0, 1122, 0);
			}
		} if (!(isObjectFlagSet(253, 4))) {
			l12(0, 733, 8);
		} processMoveCommand(253, -2);
	} if (isItemAtLocation(38, -1)) { printMessage(0, 1123, 0); }
	else { printMessage(0, 1121, 0); }
	if (isItemAtLocation(64, -1)) { printMessage(0, 1424, 0); } processMoveCommand(485, -1); die();
} int b17() {
	if (currentCommandContains(571))
	{
		return 0;
	} processMoveCommand(251, 0, 520, 527, -627); processMoveCommand(250, 0, -250); processMoveCommand(252, 0, -619);
}
int r16() {
	processMoveCommand(250, 0, 514, 523, -250); processMoveCommand(298, 0, 518, 524, -298); processMoveCommand(252, 0, -619);
} int h12() {
	processMoveCommand(297, 0, 520, -523); processMoveCommand(250, 0, -250); processMoveCommand(299, 0, 516, COMMAND_ENTER, -298);
	processMoveCommand(252, 0, -619); u28();
} int h13() {
	processMoveCommand(298, 0, 520, -527); processMoveCommand(250, 0, -250);
	processMoveCommand(252, 0, -619); if (!currentCommandIsNotOneOf(COMMAND_TAKE, 115, -1)) return 0; if (!g10(115, -1)) return
		0; if (!(isItemAtLocation(115, -1) || object_type_3_buffer[115] == 0)) { printMessage(76, 1031, 670); }
} int o12() {
	processMoveCommand(300, 0, -520);
	processMoveCommand(303, 0, -517); processMoveCommand(304, 0, -521); processMoveCommand(305, 0, -519); processMoveCommand(306, 0, -515); processMoveCommand(307, 0, -523);
	processMoveCommand(308, 0, -524); processMoveCommand(309, 0, -514); processMoveCommand(310, 0, -518); processMoveCommand(301, 0, -516);
} int q19()
{
	processMoveCommand(300, 0, -521); processMoveCommand(302, 0, -523); processMoveCommand(304, 0, -514); processMoveCommand(305, 0, -518); processMoveCommand(306, 0, -520);
	processMoveCommand(307, 0, -519); processMoveCommand(308, 0, -515); processMoveCommand(309, 0, -516); processMoveCommand(310, 0, -524); processMoveCommand(301, 0, -517);
} int c23() {
	processMoveCommand(300, 0, -523); processMoveCommand(302, 0, -524); processMoveCommand(303, 0, -520); processMoveCommand(305, 0, -515);
	processMoveCommand(306, 0, -519); processMoveCommand(307, 0, -516); processMoveCommand(308, 0, -514); processMoveCommand(309, 0, -521); processMoveCommand(310, 0, -517);
	processMoveCommand(301, 0, -518);
} int q20() {
	processMoveCommand(300, 0, -515); processMoveCommand(302, 0, -514); processMoveCommand(303, 0, -521);
	processMoveCommand(304, 0, -517); processMoveCommand(306, 0, -516); processMoveCommand(307, 0, -524); processMoveCommand(308, 0, -518); processMoveCommand(309, 0, -523);
	processMoveCommand(310, 0, -520); processMoveCommand(301, 0, -519);
} int t20() {
	processMoveCommand(300, 0, -514); processMoveCommand(302, 0, -517);
	processMoveCommand(303, 0, -524); processMoveCommand(304, 0, -518); processMoveCommand(305, 0, -516); processMoveCommand(307, 0, -520); processMoveCommand(308, 0, -519);
	processMoveCommand(309, 0, -515); processMoveCommand(310, 0, -521); processMoveCommand(301, 0, -523);
} int m14() {
	processMoveCommand(300, 0, -516);
	processMoveCommand(302, 0, -520); processMoveCommand(303, 0, -523); processMoveCommand(304, 0, -519); processMoveCommand(305, 0, -524); processMoveCommand(306, 0, -518);
	processMoveCommand(308, 0, -521); processMoveCommand(309, 0, -517); processMoveCommand(310, 0, -515); processMoveCommand(301, 0, -514);
} int d22()
{
	processMoveCommand(300, 0, -517); processMoveCommand(302, 0, -515); processMoveCommand(303, 0, -518); processMoveCommand(304, 0, -524); processMoveCommand(305, 0, -523);
	processMoveCommand(306, 0, -521); processMoveCommand(307, 0, -514); processMoveCommand(309, 0, -519); processMoveCommand(310, 0, -516); processMoveCommand(301, 0, -520);
} int g20() {
	processMoveCommand(300, 0, -524); processMoveCommand(302, 0, -516); processMoveCommand(303, 0, -515); processMoveCommand(304, 0, -523);
	processMoveCommand(305, 0, -520); processMoveCommand(306, 0, -514); processMoveCommand(307, 0, -518); processMoveCommand(308, 0, -517); processMoveCommand(310, 0, -519);
	processMoveCommand(301, 0, -521);
} int p20() {
	processMoveCommand(300, 0, -519); processMoveCommand(302, 0, -521); processMoveCommand(303, 0, -516);
	processMoveCommand(304, 0, -520); processMoveCommand(305, 0, -514); processMoveCommand(306, 0, -524); processMoveCommand(307, 0, -517); processMoveCommand(308, 0, -523);
	processMoveCommand(309, 0, -518); processMoveCommand(301, 0, -515);
} int v19() {
	processMoveCommand(301, 0, 514, -527); if (!currentCommandIsNotOneOf(535, 48, -1))
		return 0; if (!isItemAtLocation(48, -1)) return 0; s9(48, 485); s9(39, object_type_3_buffer[671]); modifyObjectFlag('s', 39, 4);
	l12(0, 34, 1); printMessage(64, 1494, 0);
} int KilobyteInputBuffer5() { processMoveCommand(LOCATION_BUILDING, 0, -527); } int h14() {
	processMoveCommand(320, 0, -524); x32(); processMoveCommand(151, 0, 520, 527, -151);
} int m15() {
	processMoveCommand(LOCATION_MT_KING, 0, 518, -527);
} int g21() {
	if (currentCommandContains(COMMAND_ENTER)) {
		if (object_type_3_buffer[35] == 1) {
			l12(1, 680, 671); processMoveCommand(462, -2);
		} printMessage(64, 1160, 0);
	} if (!currentCommandIsOneOf(523, 527, 514, -1)) return 0; if (object_type_3_buffer[35] == 1) {
		printMessage(64, 1135, 0);
	} processMoveCommand(LOCATION_MT_KING, -2);
} int KilobyteInputBuffer4() {
	processMoveCommand(object_type_3_buffer[680], 0, -527); if (!currentCommandIsNotOneOf(35, -1)) return 0;
	if (object_type_3_buffer[697] == 1) { modifyObjectFlag('s', t11(697), 5); printMessage(76, 1023, 35); } if (currentCommandContains(538)) {
		printMessage(64, 1161, 0);
	} if (currentCommandContains(536)) { printMessage(76, 1127, 670); } if (currentCommandContains(571)) { printMessage(64, 1603, 0); } printMessage(64, 915, 0);
} int x18() { processMoveCommand(LOCATION_MT_KING, 0, -518); processMoveCommand(317, 0, -514); } int x19() {
	processMoveCommand(316, 0, 518, 521, -520);
	processMoveCommand(318, 0, 514, 515, -516); processMoveCommand(318, 0, -516);
} int KilobyteInputBuffer0() {
	processMoveCommand(317, 0, 527, -518);
} int f8() { processMoveCommand(LOCATION_MT_KING, 0, -518); processMoveCommand(321, 0, -514); processMoveCommand(320, 0, -516); } int i24()
{
	processMoveCommand(312, 0, 523, -516); x32(); processMoveCommand(319, 0, 518, 249, -527);
} int m16() {
	processMoveCommand(319, 0, 527, 514, -249);
} int a17() { processMoveCommand(222, 0, -518); processMoveCommand(323, 0, -514); } int x20() {
	processMoveCommand(322, 0, -518);
	if (!currentCommandIsOneOf(514, 324, -1)) return 0; if (g10(24, -1)) { w25(); printMessage(64, 1114, 0); }
	processMoveCommand(324, -2);
} int h15() { processMoveCommand(325, 0, -516); processMoveCommand(323, 0, -520); } int v20() {
	processMoveCommand(324, 0, -514); processMoveCommand(326, 0, -520); processMoveCommand(365, 0, -516); processMoveCommand(324, 0, -514); if (!currentCommandIsNotOneOf(531, -1))
		return 0; z26();
} int p21() {
	processMoveCommand(325, 0, -514); processMoveCommand(327, 0, -517); if (!currentCommandIsNotOneOf(531, -1))
		return 0; z26();
} int o13() {
	if (currentCommandContains(571)) { return 0; } processMoveCommand(326, 0, -521);
	processMoveCommand(328, 1112, 524, 516, -328);
} int h16() {
	if (currentCommandContains(571)) { return 0; } processMoveCommand(332, 0, -518);
	processMoveCommand(335, 0, -521); if (!currentCommandIsOneOf(328, 523, 514, 598, -1)) return 0; printMessage(64, 1113, 0);
}
int b18() { processMoveCommand(331, 0, -520); processMoveCommand(330, 0, -514); } int w17() {
	processMoveCommand(329, 0, -518);
} int KilobyteInputBuffer1() { processMoveCommand(329, 0, -516); processMoveCommand(333, 0, -520); processMoveCommand(332, 0, -514); } int e16()
{
	processMoveCommand(328, 0, -514); processMoveCommand(331, 0, -518);
} int n17() {
	processMoveCommand(331, 0, -516); processMoveCommand(334, 0, -514);
} int f9() { processMoveCommand(333, 0, -518); } int x21() {
	processMoveCommand(328, 0, -516); processMoveCommand(336, 0, -520);
} int c24() { processMoveCommand(335, 0, -515); processMoveCommand(337, 0, -518); } int l20() {
	processMoveCommand(336, 0, -514);
	processMoveCommand(338, 0, -518); processMoveCommand(340, 0, -520);
} int a18() { processMoveCommand(337, 0, -514); } int o14()
{
	processMoveCommand(340, 0, -514);
} int s17() {
	processMoveCommand(337, 0, -516); processMoveCommand(339, 0, -518); processMoveCommand(341, 0, -514);
} int c25() { processMoveCommand(340, 0, -518); processMoveCommand(342, 0, -521); } int f10() {
	processMoveCommand(341, 0, -516);
	processMoveCommand(343, 0, -520);
} int q21() {
	processMoveCommand(342, 0, -515); processMoveCommand(344, 0, -518); processMoveCommand(347, 0, -520);
} int w18() { processMoveCommand(343, 0, -514); processMoveCommand(345, 0, -518); } int e17() {
	processMoveCommand(344, 0, -514);
} int d23() { processMoveCommand(348, 0, -514); } int s18() {
	processMoveCommand(343, 0, -516); processMoveCommand(348, 0, -518);
	processMoveCommand(349, 0, -521);
} int b19() { processMoveCommand(346, 0, -518); processMoveCommand(347, 0, -514); } int f11()
{
	processMoveCommand(347, 0, -516); processMoveCommand(350, 0, -520);
} int z10() {
	processMoveCommand(349, 0, -515); processMoveCommand(351, 0, -518);
} int s19() {
	processMoveCommand(350, 0, -514); processMoveCommand(352, 0, -518); processMoveCommand(354, 0, -520); processMoveCommand(355, 0, -521);
} int u13() { processMoveCommand(351, 0, -514); processMoveCommand(353, 0, -520); } int i25() {
	processMoveCommand(352, 0, -516);
	processMoveCommand(354, 0, -514);
} int r17() { processMoveCommand(351, 0, -516); processMoveCommand(353, 0, -518); } int p22()
{
	processMoveCommand(351, 0, -517); processMoveCommand(356, 0, -521);
} int m17() {
	processMoveCommand(355, 0, -516); processMoveCommand(357, 0, -520);
} int z11() { processMoveCommand(356, 0, -515); processMoveCommand(358, 0, -518); processMoveCommand(363, 0, -520); } int n18()
{
	processMoveCommand(357, 0, -514); processMoveCommand(359, 0, -518); processMoveCommand(361, 0, -520); processMoveCommand(362, 0, -521);
} int
a19() { processMoveCommand(358, 0, -514); processMoveCommand(360, 0, -521); } int b20() {
	processMoveCommand(359, 0, -517); processMoveCommand(361, 0, -514);
} int i26() { processMoveCommand(358, 0, -516); processMoveCommand(360, 0, -518); } int p23() {
	processMoveCommand(358, 0, -517);
	processMoveCommand(363, 0, -514);
} int g22() {
	processMoveCommand(357, 0, -516); processMoveCommand(362, 0, -518); processMoveCommand(364, 0, -521);
} int q22() {
	processMoveCommand(363, 0, -516); processMoveCommand(327, object_type_3_buffer[685], -498); if (currentCommandContains(120)) {
		printMessage(76, 1645, 670);
	}
} int k12() {
	processMoveCommand(325, 0, -514); processMoveCommand(366, 0, 515, -616); if (!currentCommandIsNotOneOf(531, -1)) return
		0; z26();
} int s20() { processMoveCommand(365, 0, -519); processMoveCommand(367, 0, -517); } int c26() {
	processMoveCommand(366, 0, -520);
	if (!currentCommandIsNotOneOf(518, -1)) return 0; if (g10(33, -1)) { printMessage(0, 1084, 0); die(); } processMoveCommand(368, -2);
} int z12() { processMoveCommand(367, 0, -514); processMoveCommand(369, 0, 518, -627); } int r18() {
	processMoveCommand(368, 0, 514, 527, -627);
} int r19() {
	processMoveCommand(231, 0, -520); if (!currentCommandIsOneOf(516, 532, -1)) return 0; if (object_type_3_buffer[32] == 0
		|| isItemAtLocation(106, -1) || isItemAtLocation(107, -1)) {
		l12(0, 32, 0); if (isObjectFlagSet(32, 13)) {
			printMessage(0, 1083, 0);
		}
		else { printMessage(0, 1082, 0); modifyObjectFlag('s', 32, 13); } processMoveCommand(485, -1); die();
	} l12(0, 32, 0);
	processMoveCommand(371, -2);
} int q23() {
	processMoveCommand(372, 0, -514); if (!currentCommandIsOneOf(520, 532, -1)) return 0;
	if (object_type_3_buffer[32] == 0) {
		if (isObjectFlagSet(32, 13)) { printMessage(0, 1083, 0); }
		else {
			printMessage(0, 1082, 0); modifyObjectFlag('s', 32, 13);
		} processMoveCommand(485, -1); die();
	} l12(0, 32, 0); processMoveCommand(370, -2);
} int n19() {
	processMoveCommand(371, 0, -518);
	processMoveCommand(375, 0, 514, -375); processMoveCommand(373, 0, 516, -373);
} int f12() {
	processMoveCommand(372, 0, -521); processMoveCommand(376, 0, -519);
} int v21() {
	if (currentCommandContains(571)) { return 0; } processMoveCommand(375, 0, -520); processMoveCommand(377, 0, 524, -5);
	x32();
} int w27() {
	l12(0, 41, 1); if (!currentCommandIsOneOf(523, 376, 5, 520, -1)) return 0; processMoveCommand(376, -2);
} int z28() {
	x32(); if (!currentCommandIsOneOf(112, 560, 555, -1)) return 0; if (currentCommandContains(112) || currentCommandContains(555))
	{
		if (isItemAtLocation(114, 3) || isItemAtLocation(111, 3)) { return 0; }
	} printMessage(64, 870, 0);
} int u14() {
	processMoveCommand(374, 0, -518); processMoveCommand(372, 0, -520);
} int o15() {
	processMoveCommand(373, 0, 514, -527); if (currentCommandContains(13))
	{
		printMessage(64, 1469, 0);
	}
} int a12() {
	processMoveCommand(254, 0, -514); if (currentCommandContains(9) && object_type_3_buffer[30] == 2)
	{
		s9(9, object_type_3_buffer[671]);
	} if (!currentCommandIsOneOf(532, 30, 518, -1)) return 0; if (object_type_3_buffer[30] == 0) {
		printMessage(64, 1120, 0);
	} if (isItemAtLocation(64, -1)) {
		if (isItemAtLocation(56, -1)) {
			printMessage(0, 1125, 0); processMoveCommand(485, -1); l12(0, 30, 0);
			die();
		} processMoveCommand(252, -2);
	} printMessage(0, 1121, 0); processMoveCommand(485, -1); die();
} int x14() {
	if
		(object_type_3_buffer[31] == 1) {
		processMoveCommand(255, 0, -521); processMoveCommand(263, 0, -514); processMoveCommand(292, 0, -515);
	} processMoveCommand(253, 0, -518);
} int m11() {
	processMoveCommand(254, 0, -518); if (!currentCommandIsNotOneOf(514, -1)) return 0; l12(0, 14, 0); s9(14, 256);
	processMoveCommand(256, -2);
} int x15() {
	if (!currentCommandIsOneOf(514, 516, 518, 520, 515, 521, 517, 519, -1)) return
		0; f3(676, 485); j36(); f3(699, 514); object_type_3_buffer[699] += object_type_3_buffer[15]; if ((object_type_3_buffer[699] == object_type_3_buffer[670]
			&& object_type_3_buffer[697] == 2 || object_type_3_buffer[699] == object_type_3_buffer[669]) && g10(15, -1)) {
		l12(0, 14, 8); object_type_3_buffer[684]
			= cheezy_rand(1351 - 1348 + 1) + 1348; processMoveCommand(257, -2);
	} processMoveCommand(256, -2);
} int a13() {
	if (currentCommandContains(524))
	{
		s9(14, 255); processMoveCommand(258, -2);
	} if (!currentCommandIsOneOf(514, 516, 518, 520, 515, 521, 517, 519, -1))
		return 0; l12(0, 14, 0); processMoveCommand(256, -2);
} int i21() {
	processMoveCommand(259, 0, 514, -259); if
		(!currentCommandIsOneOf(523, 518, -1)) return 0; s9(14, 256); processMoveCommand(257, -2);
} int h32() {
	if (!currentCommandIsNotOneOf(535, 114, -1))
		return 0; if (!isItemAtLocation(114, -1)) return 0; if (object_type_3_buffer[114] == 1) {
		s9(114, PLAYER_LOCATION); l12(0, 114, 0);
		printMessage(64, 1189, 0);
	}
} int q38() {
	processMoveCommand(258, 0, 520, 527, -258); processMoveCommand(260, 0, 514, 616, -260);
	if (!currentCommandIsNotOneOf(571, 259, -1)) return 0; printMessage(64, 1511, 0);
} int t17() {
	if (currentCommandContains(571))
	{
		return 0;
	} processMoveCommand(261, 0, 523, 598, -261); processMoveCommand(259, 0, 518, 616, -259);
} int x16()
{
	if (currentCommandContains(571)) { return 0; } processMoveCommand(260, 0, 524, 598, -260); processMoveCommand(262, 0, 518, 328, -261);
	processMoveCommand(463, 0, -521);
} int n15() {
	if (currentCommandContains(571)) { return 0; } processMoveCommand(255, 1112, 518, 524, -328);
	processMoveCommand(261, 0, -514); processMoveCommand(260, 0, 260, -261);
} int o9() {
	processMoveCommand(254, 0, -518); if (currentCommandContains(514))
	{
		object_type_3_buffer[25] += 1; if (object_type_3_buffer[25] == 1) { printMessage(0, 1142, 0); } processMoveCommand(264, -2);
	}
} int m12()
{
	processMoveCommand(265, 0, -514); if (currentCommandContains(518)) {
		object_type_3_buffer[25] -= 1; if (object_type_3_buffer[25] == 0) {
			w25(); if
				(isItemAtLocation(103, 2)) {
				printMessage(0, 1143, 0); l12(0, 25, 2); modifyObjectFlag('c', 264, 8);
			}
			else {
				printMessage(0, 1144, 0);
				die();
			}
		} processMoveCommand(263, -2);
	}
} int m13() {
	if (currentCommandContains(571)) { return 0; } processMoveCommand(315, 0, 514, -315);
	processMoveCommand(264, 0, -518); processMoveCommand(266, 0, 524, -5); x32();
} int y15() {
	if (currentCommandContains(COMMAND_ENTER)) {
		if
			(object_type_3_buffer[35] == 1) {
			l12(1, 680, 671); processMoveCommand(462, -2);
		} printMessage(64, 1160, 0);
	} if (!currentCommandIsOneOf(518, 527, 250, -1))
		return 0; if (object_type_3_buffer[35] == 1) { printMessage(64, 1135, 0); } processMoveCommand(265, -2);
} int o10() {
	if
		(currentCommandContains(571)) {
		return 0;
	} processMoveCommand(265, 0, -523); processMoveCommand(267, 0, 524, -5); x32();
} int a14()
{
	if (currentCommandContains(571)) { return 0; } processMoveCommand(266, 0, -523); processMoveCommand(268, 0, 524, -5); processMoveCommand(269, 0, 514, -527);
	x32();
} int s16() {
	if (currentCommandContains(571)) { return 0; } processMoveCommand(267, 0, 523, -5); x32();
} int q16() {
	processMoveCommand(267, 0, -518); processMoveCommand(271, 0, -520); processMoveCommand(270, 0, -516); if (!currentCommandIsOneOf(COMMAND_PLUGH, 228, -1))
		return 0; if (isObjectFlagSet(t11(710), 3)) { printMessage(64, 828, 0); } processMoveCommand(382, -object_type_3_buffer[685]);
} int
b16() { processMoveCommand(269, 0, 520, -524); processMoveCommand(271, 0, -523); } int u12() {
	processMoveCommand(291, 0, -516);
	processMoveCommand(281, 0, -520);
} int g18() { processMoveCommand(290, 0, -520); } int w16() {
	processMoveCommand(254, 0, -521);
	processMoveCommand(293, 0, -514);
} int k11() {
	processMoveCommand(294, 0, 515, -294); processMoveCommand(295, 0, 521, -295); processMoveCommand(292, 0, -518);
} int e15() { processMoveCommand(293, 0, 518, -527); } int g19() {
	if (!currentCommandIsOneOf(527, 516, 530, -1))
		return 0; if (j0[121] == 484) { s9(121, object_type_3_buffer[671]); l12(0, 121, 0); } processMoveCommand(293, -2);
} int q26() {
	processMoveCommand(269, object_type_3_buffer[685], COMMAND_PLUGH, -228); if (!currentCommandIsOneOf(524, 598, 514, 518, 516, 520, 515,
		521, 517, 519, 531, -1)) return 0; printMessage(0, 1136, 0); processMoveCommand(485, -1); die();
} 

int g16()
{
	if (currentCommandContains(661)) { 
		printMessage(64, 1599, 0); // As  could be plainly inferred from the description by anybody with even a very modest amount of  intelligence,  this  strange  place  has  no  such conventional  features  as  walls.   Before you ask, no, it has no floor, ceiling, doors or windows either.  I hope, the fact does not  come  as  a surprise.
	}

	processMoveCommand(243, 0, 514, 515, 516, 517, 518, 519, 520, 521, 523, -524);

	if (!currentCommandIsOneOf(496, COMMAND_XYZZY, 498, 499, 500, COMMAND_PLUGH, 502, 503, 504, 505, 506, 507, 508, 509, COMMAND_FEE, 511, -1))
		return 0; 

	if (currentCommandContains(493)) { 
		l12(1, 699, 670); 
	} else {
		if (object_type_3_buffer[697] == 1) {
			l12(1, 699, 669);
		} else { 
			printMessage(64, 804, 0); // Hey, not so fast!  I can only deal with one at a time - there is only one of me, you know...
		}
	} 

	l12(1, 701, 699); 
	f3(700, 495); 
	object_type_3_buffer[700] += 1; 
	object_type_3_buffer[701] -= object_type_3_buffer[700]; 

	if (object_type_3_buffer[701] == object_type_3_buffer[725]) {
			f3(700, 512); 
			object_type_3_buffer[700] -= 1; 
			if (object_type_3_buffer[699] == object_type_3_buffer[700])
			{
				l12(0, 717, 5); 
				if (j0[95] == 140) { 
					s9(95, 243); 
				} else { 
					s9(95, 485); 
				} 
				
				modifyObjectFlag('c', 95, 3);
				*getObjectPointer(675) = -1; object_type_3_buffer[675] = OBJECT_TYPE_0_MIN_ID - 1; 
				
				while (++object_type_3_buffer[675] <= OBJECT_TYPE_0_MAX_ID) {
					if (isObjectFlagSet(t11(675), 3))
					{
						if (j0[object_type_3_buffer[675]] == 141) { 
							s9(object_type_3_buffer[675], 243); 
						} else { 
							s9(object_type_3_buffer[675], 485); 
						}
					}
				}
				processMoveCommand(LOCATION_END_OF_ROAD, -1395); // The  syllables  of  the  word seem to reverberate through the vastness of this strange place.  As the sound dies away, a sudden gust of air  brings with  it  a  skirl  of  merry elvish laughter.  Slowly to begin with, the grayness about you begins to coalesce into new (or is it old?) shapes and meanings.  Finally you find... (then you're at the end of the road)
			} else { 
				printMessage(0, 777, 0); // Ok.
				object_type_3_buffer[725] += 1; 
			}
		} else {
			object_type_3_buffer[701] -= 1; 
			if (object_type_3_buffer[701] == object_type_3_buffer[725]) { 
				printMessage(0, 1558, 0);  // For  a  brief  moment you have a feeling that something might happen, but then, nothing does.
			} else {
				if (object_type_3_buffer[725] > 2) {
					if (cheezy_rand(100) < 20|| !(isObjectFlagSet(t11(735), 4))) {								
						printMessage(0, 1450, 0); // What's  the  matter,  can't you follow a simple rule?  Now you'll have to start all over again...
						modifyObjectFlag('s', t11(735), 4);
					} else {
						printMessage(0, 802, 0); // Naturally enough, nothing happens.
					}
				} else { 
					printMessage(0, 828, 0); // Nothing happens.
				}
			} 
			l12(0, 725, 0);
		} 
	longjmp(done_with_command, 1);
} 

int d20() {
	if (!currentCommandIsOneOf(514, 515, 516, 517, 518, 519, 520, 521, 523, 524, -1)) return 0; l12(1, 701, 736);
	f3(678, 272); f3(679, 271); z24(); l12(1, 736, 702); longjmp(done_with_command, 1);
} int i22()
{
	if (!currentCommandIsOneOf(514, 515, 516, 517, 518, 519, 520, 521, 523, 524, -1)) return 0; l12(1, 701, 737);
	f3(678, 273); f3(679, 271); z24(); l12(1, 737, 702); longjmp(done_with_command, 1);
} int a15()
{
	if (!currentCommandIsOneOf(514, 515, 516, 517, 518, 519, 520, 521, 523, 524, -1)) return 0; l12(1, 701, 738);
	f3(678, 274); f3(679, 272); z24(); l12(1, 738, 702); longjmp(done_with_command, 1);
} int u11()
{
	if (!currentCommandIsOneOf(514, 515, 516, 517, 518, 519, 520, 521, 523, 524, -1)) return 0; l12(1, 701, 739);
	f3(678, 275); f3(679, 273); z24(); l12(1, 739, 702); longjmp(done_with_command, 1);
} int g17()
{
	if (!currentCommandIsOneOf(514, 515, 516, 517, 518, 519, 520, 521, 523, 524, -1)) return 0; l12(1, 701, 740);
	f3(678, 276); f3(679, 274); z24(); l12(1, 740, 702); longjmp(done_with_command, 1);
} int i23()
{
	if (!currentCommandIsOneOf(514, 515, 516, 517, 518, 519, 520, 521, 523, 524, -1)) return 0; l12(1, 701, 741);
	f3(678, 277); f3(679, 275); z24(); l12(1, 741, 702); longjmp(done_with_command, 1);
} int t18()
{
	if (!currentCommandIsOneOf(514, 515, 516, 517, 518, 519, 520, 521, 523, 524, -1)) return 0; l12(1, 701, 742);
	f3(678, 278); f3(679, 276); z24(); l12(1, 742, 702); longjmp(done_with_command, 1);
} int c22()
{
	if (!currentCommandIsOneOf(514, 515, 516, 517, 518, 519, 520, 521, 523, 524, -1)) return 0; l12(1, 701, 743);
	f3(678, 279); f3(679, 277); z24(); l12(1, 743, 702); longjmp(done_with_command, 1);
} int w15()
{
	if (!currentCommandIsOneOf(514, 515, 516, 517, 518, 519, 520, 521, 523, 524, -1)) return 0; l12(1, 701, 744);
	f3(678, 280); f3(679, 278); z24(); l12(1, 744, 702); longjmp(done_with_command, 1);
} int n16()
{
	if (!currentCommandIsOneOf(514, 515, 516, 517, 518, 519, 520, 521, 523, 524, -1)) return 0; l12(1, 701, 745);
	f3(678, 281); f3(679, 279); z24(); l12(1, 745, 702); longjmp(done_with_command, 1);
} int q17()
{
	if (!currentCommandIsOneOf(514, 515, 516, 517, 518, 519, 520, 521, 523, 524, -1)) return 0; l12(1, 701, 746);
	f3(678, 282); f3(679, 289); z24(); l12(1, 746, 702); longjmp(done_with_command, 1);
} int r15()
{
	if (!currentCommandIsOneOf(514, 515, 516, 517, 518, 519, 520, 521, 523, 524, -1)) return 0; l12(1, 701, 747);
	f3(678, 283); f3(679, 281); z24(); l12(1, 747, 702); longjmp(done_with_command, 1);
} int a16()
{
	if (!currentCommandIsOneOf(514, 515, 516, 517, 518, 519, 520, 521, 523, 524, -1)) return 0; l12(1, 701, 748);
	f3(678, 284); f3(679, 282); z24(); l12(1, 748, 702); longjmp(done_with_command, 1);
} int d21()
{
	if (!currentCommandIsOneOf(514, 515, 516, 517, 518, 519, 520, 521, 523, 524, -1)) return 0; l12(1, 701, 749);
	f3(678, 285); f3(679, 283); z24(); l12(1, 749, 702); longjmp(done_with_command, 1);
} int x17()
{
	if (!currentCommandIsOneOf(514, 515, 516, 517, 518, 519, 520, 521, 523, 524, -1)) return 0; l12(1, 701, 750);
	f3(678, 286); f3(679, 284); z24(); l12(1, 750, 702); longjmp(done_with_command, 1);
} int v18()
{
	if (!currentCommandIsOneOf(514, 515, 516, 517, 518, 519, 520, 521, 523, 524, -1)) return 0; l12(1, 701, 751);
	f3(678, 287); f3(679, 285); z24(); l12(1, 751, 702); longjmp(done_with_command, 1);
} int o11()
{
	if (!currentCommandIsOneOf(514, 515, 516, 517, 518, 519, 520, 521, 523, 524, -1)) return 0; l12(1, 701, 752);
	f3(678, 288); f3(679, 287); z24(); l12(1, 752, 702); longjmp(done_with_command, 1);
} int j19()
{
	if (!currentCommandIsOneOf(514, 515, 516, 517, 518, 519, 520, 521, 523, 524, -1)) return 0; l12(1, 701, 753);
	f3(678, 269); f3(679, 287); z24(); l12(1, 753, 702); longjmp(done_with_command, 1);
} int p19()
{
	if (currentCommandContains(516)) { if (!(isObjectFlagSet(290, 4))) { l12(0, 733, 10); } processMoveCommand(290, -2); } if (!currentCommandIsOneOf(514, 515, 517, 518, 519, 520, 521, 523, 524, -1))
		return 0; l12(1, 701, 754); f3(678, 280); f3(679, 281); z24(); l12(1, 754, 702);
	longjmp(done_with_command, 1);
} int o16() { processMoveCommand(161, 0, -523); processMoveCommand(394, 0, -524); x32(); } int
s21() {
	if (currentCommandContains(598)) { printMessage(64, 1660, 0); } if (currentCommandContains(77)) { printMessage(64, 1659, 0); } if
		((currentCommandContains(78) || currentCommandContains(604)) && j0[78] == 393) {
		printMessage(64, 1227, 0);
	} if (currentCommandContains(72)) {
		if
			(!(currentCommandContains(113) || currentCommandContains(571))) {
			printMessage(64, 1226, 0);
		}
	} processMoveCommand(395, 0, 523, -5); x32();
} int
k8() {
	processMoveCommand(204, 0, -598); processMoveCommand(235, 0, -514); processMoveCommand(205, 0, -520); processMoveCommand(408, 0, -523); processMoveCommand(407, 0, -524);
	x32();
} int m9() { processMoveCommand(203, 0, 516, -527); } int t21() {
	processMoveCommand(384, 0, -514); processMoveCommand(385, 0, -518);
	processMoveCommand(412, 0, -516); if (!currentCommandIsNotOneOf(634, -1)) return 0; printMessage(72, 1546, 634);
} int n13()
{
	processMoveCommand(203, 0, 527, -524);
} int w19() {
	processMoveCommand(383, 0, -518); if (currentCommandContains(74)) {
		if (currentCommandContains(561))
		{
			l12(0, 672, 0); processMoveCommand(405, -1235);
		} if (currentCommandContains(571)) { printMessage(64, 1617, 0); } printMessage(64, 915, 0);
	}
} int f13() {
	processMoveCommand(412, 0, -412); processMoveCommand(386, 0, -516); processMoveCommand(389, 0, -520); processMoveCommand(390, 0, -523);
	processMoveCommand(387, 0, -524); processMoveCommand(383, 0, -514);
} int k13() {
	processMoveCommand(385, 0, -514); processMoveCommand(386, 0, 516, -524);
	processMoveCommand(389, 0, -520); processMoveCommand(387, 0, -518); processMoveCommand(388, 0, -523);
} int u15() {
	processMoveCommand(386, 0, -514);
	processMoveCommand(387, 0, 516, -524); processMoveCommand(385, 0, -520); processMoveCommand(388, 0, -518); processMoveCommand(389, 0, -523);
} int
o27() {
	if (!currentCommandIsNotOneOf(557, 115, -1)) return 0; if (!isItemAtLocation(115, -1)) return 0; if (!g10(87, -1))
		return 0; l12(0, 115, 2); s9(115, PLAYER_LOCATION); printMessage(64, 1324, 0);
} int f25() {
	if (currentCommandContains(COMMAND_TAKE))
	{
		e6(0, object_type_3_buffer[PLAYER_LOCATION], 3); if (currentCommandContains(115) && object_type_3_buffer[115] == 2) { printMessage(64, 1304, 0); }
	} if (currentCommandContains(88)
		&& object_type_3_buffer[86] == 1) {
		printMessage(64, 1331, 0);
	} processMoveCommand(386, 0, -514); processMoveCommand(390, 0, -520); processMoveCommand(387, 0, -516);
	processMoveCommand(389, 0, -523); if (currentCommandContains(518)) {
		w25(); if (object_type_3_buffer[86] == 0) { printMessage(64, 1304, 0); }
		if (object_type_3_buffer[86] == 1) { printMessage(64, 1330, 0); } processMoveCommand(433, -2);
	} if (currentCommandContains(COMMAND_ENTER) && object_type_3_buffer[86] == 2)
	{
		processMoveCommand(433, -2);
	}
} int t22() {
	processMoveCommand(390, 0, -514); processMoveCommand(385, 0, -516); processMoveCommand(389, 0, 520, -523);
	processMoveCommand(388, 0, -518); processMoveCommand(387, 0, -524);
} int h18() {
	processMoveCommand(389, 0, 520, -514); processMoveCommand(385, 0, -516);
	processMoveCommand(388, 0, -518); processMoveCommand(389, 0, -523); processMoveCommand(386, 0, -524);
} int i28() {
	processMoveCommand(392, 0, 523, -5);
	u28(); x31(); x32(); processMoveCommand(393, 1233, COMMAND_ENTER, -518);
} int v22() {
	if (currentCommandContains(72)) {
		if (!(currentCommandContains(113) || currentCommandContains(571))) { printMessage(64, 1226, 0); }
	} x31(); x32(); if (currentCommandContains(77)
		&& currentCommandContains(528) || currentCommandContains(524)) {
		printMessage(64, 1364, 0);
	}
} int m18() {
	processMoveCommand(391, 0, -524);
	processMoveCommand(412, 0, -523); x32(); processMoveCommand(225, 0, 521, COMMAND_ENTER, -225);
} int e18() {
	processMoveCommand(397, 0, 516, -532);
	processMoveCommand(432, 0, 520, 514, 518, 521, -519); if (currentCommandContains(524)) {
		printMessage(0, 1247, 0); processMoveCommand(485, -1);
		die();
	} if (currentCommandContains(640)) { printMessage(64, 1550, 0); }
} int z14() {
	processMoveCommand(396, 0, 520, -532);
	processMoveCommand(239, 0, 518, 517, 516, -239); if (currentCommandContains(524)) {
		printMessage(0, 1247, 0); processMoveCommand(485, -1); die();
	} if (currentCommandContains(640)) { printMessage(64, 1550, 0); }
} int a20() {
	processMoveCommand(408, 0, 514, -527); processMoveCommand(399, 0, 523, -598);
	x32();
} int k14() { processMoveCommand(398, 0, -524); processMoveCommand(400, 0, 523, -598); x32(); } int z15()
{
	processMoveCommand(399, 0, -524); processMoveCommand(401, 0, 523, -598); b30(); x32();
} int p24() {
	if (currentCommandContains(524))
	{
		if (cheezy_rand(100) < 80) { processMoveCommand(402, -2); } processMoveCommand(400, -2);
	} x32(); if (!currentCommandIsOneOf(523, 598, -1))
		return 0; if (cheezy_rand(100) < 80) { processMoveCommand(400, -2); } processMoveCommand(402, -2);
} int h19() {
	processMoveCommand(403, 0, 523, -598);
	processMoveCommand(401, 0, -524); b30(); x32();
} int g23() {
	processMoveCommand(404, 0, 523, -598); processMoveCommand(402, 0, -524);
	u28(); if (currentCommandContains(6)) {
		if (currentCommandContains(536) || currentCommandContains(564)) { printMessage(76, 1420, 670); } if (currentCommandContains(538))
		{
			printMessage(76, 1129, 670);
		} if (currentCommandContains(113)) {
			if (isItemAtLocation(114, 4) || isItemAtLocation(111, 4)) {
				if (isItemAtLocation(111, 4))
				{
					l12(0, 111, 2);
				}
				else { l12(0, 114, 2); } printMessage(12, 1489, 113); printMessage(76, 1490, 6);
			} printMessage(76, 1027, 669);
		} if (currentCommandContains(571)) { printMessage(64, 1604, 0); } printMessage(64, 915, 0);
	} if
		(currentCommandContains(120)) {
		if (currentCommandContains(562) || currentCommandContains(571)) { printMessage(64, 1605, 0); } printMessage(64, 915, 0);
	} x32();
} int k15() {
	processMoveCommand(403, 0, -524); b30(); x32(); if (!currentCommandIsOneOf(523, 598, -1)) return
		0; f3(677, 1249); object_type_3_buffer[677] += object_type_3_buffer[730]; if (object_type_3_buffer[730] == 2) {
		if (y10(object_type_3_buffer[677]))
		{
			object_type_3_buffer[677] += 1;
		}
		else { printMessage(64, 1253, 0); }
	}
		else { object_type_3_buffer[730] += 1; } printMessage(2, 677, 0);
		if (isItemAtLocation(ITEM_LAMP, -1)) { s9(ITEM_LAMP, PLAYER_LOCATION); } *getObjectPointer(675) = -1; object_type_3_buffer[675] = OBJECT_TYPE_0_MIN_ID - 1; while (++object_type_3_buffer[675] <= OBJECT_TYPE_0_MAX_ID)
		{
			if (isItemAtLocation(t11(object_type_3_buffer[675]), -1)) { s9(object_type_3_buffer[675], 485); }
		} die();
} int s22() {
	processMoveCommand(406, 0, 524, -518);
	if (currentCommandContains(523)) { l12(0, 672, 0); processMoveCommand(384, -1578); }
} int k16() {
	processMoveCommand(405, 0, 514, -523);
	if (currentCommandContains(598)) {
		if (object_type_3_buffer[717] < 2) { l12(0, 672, 0); processMoveCommand(LOCATION_BUILDING, -1236); } printMessage(64, 1577, 0);
	} if (!currentCommandIsNotOneOf(638, -1)) return 0; printMessage(64, 938, 0);
} int i29() {
	processMoveCommand(203, 0, 523, 527, -5);
	x32(); if (!currentCommandIsNotOneOf(631, -1)) return 0; printMessage(72, 1546, 631);
} int z16() {
	if (currentCommandContains(571))
	{
		return 0;
	} processMoveCommand(203, 0, 524, -5); processMoveCommand(409, 0, -514); processMoveCommand(398, 0, -518); processMoveCommand(412, 0, 520, -412);
	if (currentCommandContains(18)) { printMessage(64, 1379, 0); } x32();
} int m19() {
	processMoveCommand(408, 0, -518); processMoveCommand(410, 0, -514);
	processMoveCommand(412, 0, 519, -412);
} int m20() { processMoveCommand(409, 0, -518); processMoveCommand(411, 0, 514, -COMMAND_ENTER); }
int q27() {
	processMoveCommand(410, 0, -518); processMoveCommand(409, 0, -527); if (currentCommandContains(632)) {
		printMessage(64, 1545, 0);
	} if (!currentCommandIsNotOneOf(633, -1)) return 0; printMessage(72, 1546, 633);
} int q28() {
	if (currentCommandContains(571))
	{
		return 0;
	} processMoveCommand(408, 0, -516); processMoveCommand(409, 0, -515); processMoveCommand(392, 0, 514, 524, -5); processMoveCommand(383, 0, -520);
} int k17() {
	if (currentCommandContains(571)) { return 0; } processMoveCommand(235, 0, -518); processMoveCommand(414, 0, -514);
	if (!currentCommandIsOneOf(520, 616, 621, 143, -1)) return 0; e25(); processMoveCommand(415, -2);
} int x22() {
	processMoveCommand(413, 0, -518);
} int t23() {
	processMoveCommand(416, 0, -520); processMoveCommand(416, 0, -599); if (currentCommandContains(524))
	{
		if (isObjectFlagSet(91, 13)) { processMoveCommand(418, -2); } processMoveCommand(417, -2);
	} if (!currentCommandIsOneOf(523, 516, 616, 621, 143, -1))
		return 0; e25(); processMoveCommand(413, -2);
} int d24() {
	if (currentCommandContains(94)) {
		printMessage(64, 1257, 0);
	} processMoveCommand(415, 0, 516, 524, -527);
} int r33() {
	if (!currentCommandIsOneOf(523, 527, 530, -1)) return
		0; modifyObjectFlag('s', 91, 13); l12(0, 91, 0); object_type_3_buffer[732] = cheezy_rand(4); processMoveCommand(415, -2);
} int w28()
{
	if (!currentCommandIsOneOf(524, 531, -1)) return 0; printMessage(0, 1246, 0); printMessage(0, 1245, 0); processMoveCommand(419, -1);
	die();
} int i30() {
	processMoveCommand(415, 0, 523, -527); if (!currentCommandIsOneOf(531, 524, -1)) return 0;
	modifyObjectFlag('c', 91, 13); modifyObjectFlag('s', 91, 14); processMoveCommand(420, -1246);
} int g24() {
	processMoveCommand(419, 0, -514);
	processMoveCommand(421, 0, -518);
} int f14() {
	processMoveCommand(420, 0, 518, -527); if (currentCommandContains(76)) {
		printMessage(64, 1296, 0);
	}
} int p25() {
	if (currentCommandContains(91) && object_type_3_buffer[697] > 1) { i46(); } processMoveCommand(420, 0, -514); processMoveCommand(425, 0, -519);
	processMoveCommand(426, 0, 520, -521); processMoveCommand(422, 0, 516, 518, -517);
} int x23() {
	processMoveCommand(421, 0, -514);
	processMoveCommand(423, 0, 517, -519);
} int q29() { processMoveCommand(422, 0, -514); processMoveCommand(424, 0, 518, -517); }
int h20() { processMoveCommand(423, 0, 514, -527); } int z17() {
	processMoveCommand(421, 0, -515); if (!currentCommandIsOneOf(523, COMMAND_ENTER, 627, -1))
		return 0; l12(0, 720, 1); processMoveCommand(427, -2);
} int z18() { processMoveCommand(421, 0, 516, -527); }
int l34() { if (!currentCommandIsOneOf(524, 600, -1)) return 0; modifyObjectFlag('s', 91, 14); processMoveCommand(425, -2); }
int v41() {
	processMoveCommand(425, 0, 524, -600); if (currentCommandContains(626)) { printMessage(64, 924, 0); } if (!currentCommandIsOneOf(514, 515, 516, 517, 518, 519, 520, 521, 523, 599, -1))
		return 0; l12(0, 731, 0); processMoveCommand(428, -2);
} int j43() {
	if (currentCommandContains(523) && !(isObjectFlagSet(91, 14)))
	{
		if (object_type_3_buffer[731] < 2) { f3(676, 419); j36(); object_type_3_buffer[731] += 1; processMoveCommand(428, -2); } l12(0, 731, 0);
		modifyObjectFlag('c', 91, 14); processMoveCommand(164, -2);
	} if (currentCommandContains(626)) { printMessage(64, 924, 0); } if (!currentCommandIsOneOf(524, 600, -1))
		return 0; if (cheezy_rand(100) < 10) { processMoveCommand(427, -2); }
} int h33() {
	if (!currentCommandIsOneOf(514, 518, 516, 520, 515, 517, 521, 519, 599, 524, 600, 523, -1))
		return 0; f3(676, 419); j36(); object_type_3_buffer[731] += 1; processMoveCommand(428, -2);
} int f15() {
	processMoveCommand(225, 0, -520);
	processMoveCommand(430, 0, -514);
} int i31() { processMoveCommand(429, 0, -518); processMoveCommand(431, 0, -514); } int h21()
{
	processMoveCommand(430, 0, -519); processMoveCommand(432, 0, -514);
} int k24() {
	if (!currentCommandIsOneOf(514, 515, 516, 517, 518, 519, 520, 521, -1))
		return 0; f3(676, 485); j36();
} int g34() {
	if (!currentCommandIsOneOf(516, 520, -1)) return
		0; a27(); longjmp(done_with_command, 1);
} int i47() {
	if (!currentCommandIsOneOf(518, 517, 519, -1)) return 0;
	if (cheezy_rand(100) < 33) { processMoveCommand(431, -2); } a27();
} int n28() {
	if (!currentCommandIsOneOf(514, 515, 521, -1))
		return 0; if (cheezy_rand(100) < 33) { processMoveCommand(396, -2); } a27();
} int v24() {
	if (!currentCommandIsOneOf(514, 530, 527, -1))
		return 0; processMoveCommand(388, -2);
} int w20() {
	if (!currentCommandIsOneOf(514, 515, 516, 517, 518, 519, 520, 521, 530, -1))
		return 0; processMoveCommand(432, -2);
} int r20() { processMoveCommand(403, 0, -527); } int d15() {
	processMoveCommand(139, 0, 138, 457, 527, -517);
	if (currentCommandContains(COMMAND_BUILDING)) { f3(679, 139); f3(678, 136); h31(); } if (currentCommandContains(531)) {
		processMoveCommand(485, -1);
		v37();
	} if (!currentCommandIsOneOf(635, 636, -1)) return 0; if (currentCommandContains(571)) {
		if (currentCommandContains(635)) {
			printMessage(64, 1547, 0);
		} printMessage(64, 1641, 0);
	} if (currentCommandContains(635)) { printMessage(72, 1546, 635); } printMessage(64, 915, 0);
} int
s11() {
	processMoveCommand(139, 0, -520); processMoveCommand(457, 0, -517); if (currentCommandContains(COMMAND_BUILDING)) {
		f3(679, 140); f3(678, 136);
		h31();
	} if (!currentCommandIsNotOneOf(528, 457, -1)) return 0; f3(678, 139); f3(679, 457); n25();
} int i16() {
	processMoveCommand(138, 0, -516); processMoveCommand(140, 0, -521); if (currentCommandContains(COMMAND_BUILDING)) {
		f3(679, 140);
		f3(678, 136); h31();
	} if (!currentCommandIsNotOneOf(528, 457, -1)) return 0; f3(678, 138); f3(679, 140);
	n25();
} int f18() {
	if (currentCommandContains(571)) { return 0; } processMoveCommand(138, 0, 521, -138); processMoveCommand(437, 0, 514, -622);
	processMoveCommand(441, 0, -515); processMoveCommand(440, 0, -516); processMoveCommand(136, 0, -517); processMoveCommand(137, 0, -518); processMoveCommand(438, 0, 519, -520);
	if (currentCommandContains(COMMAND_BUILDING)) { f3(679, 140); f3(678, 136); h31(); } if (!currentCommandIsNotOneOf(528, 457, -1)) return
		0; f3(678, 136); f3(679, 138); n25();
} int y17() {
	if (currentCommandContains(571)) {
		return
			0;
	} processMoveCommand(442, 0, 514, -622); processMoveCommand(443, 0, -515); processMoveCommand(444, 0, -516); processMoveCommand(459, 0, -517);
	processMoveCommand(136, 0, 519, -COMMAND_BUILDING); processMoveCommand(440, 0, -520); processMoveCommand(441, 0, -521); if (currentCommandContains(518)) {
		if (cheezy_rand(100) < 50)
		{
			processMoveCommand(459, -2);
		} processMoveCommand(136, -2);
	}
} int f19() {
	if (currentCommandContains(571)) { return 0; } processMoveCommand(444, 0, -514);
	processMoveCommand(445, 0, -515); processMoveCommand(446, 0, 516, -622); processMoveCommand(448, 0, -517); processMoveCommand(447, 0, -518); processMoveCommand(460, 0, -519);
	processMoveCommand(458, 0, -521); processMoveCommand(136, 0, -COMMAND_BUILDING); if (currentCommandContains(520)) {
		if (cheezy_rand(100) < 50) {
			processMoveCommand(458, -2);
		} processMoveCommand(460, -2);
	}
} int u16() {
	if (currentCommandContains(571)) { return 0; } processMoveCommand(459, 0, -515);
	processMoveCommand(447, 0, -516); processMoveCommand(449, 0, -517); processMoveCommand(454, 0, 518, -622); processMoveCommand(143, 0, -519); processMoveCommand(LOCATION_VALLEY, 0, 520, -524);
	processMoveCommand(136, 0, 521, -COMMAND_BUILDING); if (currentCommandContains(514)) {
		if (cheezy_rand(100) < 50) { processMoveCommand(459, -2); } processMoveCommand(136, -2);
	}
} int f16() {
	if (currentCommandContains(571)) { return 0; } processMoveCommand(144, 0, 514, -144); processMoveCommand(136, 0, -COMMAND_BUILDING);
	processMoveCommand(143, 0, -143); processMoveCommand(LOCATION_VALLEY, 0, -142); processMoveCommand(455, 0, -515); processMoveCommand(456, 0, -516); processMoveCommand(453, 0, 520, -622);
	processMoveCommand(452, 0, -521); if (currentCommandContains(598)) { printMessage(64, 1224, 0); }
} int t25() {
	processMoveCommand(461, 0, 514, 515, 520, -521);
	processMoveCommand(441, 0, -516); processMoveCommand(440, 0, -517); processMoveCommand(457, 0, 518, -519);
} int l21() {
	processMoveCommand(457, 0, 515, -516);
	processMoveCommand(137, 0, -517); processMoveCommand(461, 0, 518, 519, -520); processMoveCommand(439, 0, -521);
} int v25() {
	processMoveCommand(461, 0, 514, 517, 518, 519, 520, -521);
	processMoveCommand(438, 0, 515, -516);
} int d25() {
	processMoveCommand(441, 0, -514); processMoveCommand(442, 0, -515); processMoveCommand(458, 0, -516);
	processMoveCommand(136, 0, 517, 518, 519, -COMMAND_BUILDING); processMoveCommand(457, 0, -520); processMoveCommand(437, 0, -521);
} int g25()
{
	processMoveCommand(461, 0, 514, 515, -521); processMoveCommand(442, 0, -516); processMoveCommand(458, 0, -517); processMoveCommand(440, 0, -518);
	processMoveCommand(457, 0, -519); processMoveCommand(437, 0, -520);
} int l22() {
	processMoveCommand(461, 0, 514, 515, -521); processMoveCommand(443, 0, -516);
	processMoveCommand(444, 0, -517); processMoveCommand(458, 0, -518); processMoveCommand(440, 0, -519); processMoveCommand(441, 0, -520);
} int n20()
{
	processMoveCommand(461, 0, 514, 515, 516, -521); processMoveCommand(445, 0, -517); processMoveCommand(444, 0, -518); processMoveCommand(458, 0, -519);
	processMoveCommand(442, 0, -520);
} int v26() {
	processMoveCommand(443, 0, -514); processMoveCommand(461, 0, -515); processMoveCommand(445, 0, -516);
	processMoveCommand(446, 0, -517); processMoveCommand(459, 0, -518); processMoveCommand(458, 0, -520); processMoveCommand(442, 0, -521); if (currentCommandContains(519))
	{
		if (cheezy_rand(100) < 50) { processMoveCommand(458, -2); } processMoveCommand(459, -2);
	}
} int t26() {
	processMoveCommand(461, 0, 514, 515, 516, -517);
	processMoveCommand(446, 0, -518); processMoveCommand(459, 0, -519); processMoveCommand(444, 0, -520); processMoveCommand(443, 0, -521);
} int q30()
{
	processMoveCommand(445, 0, -514); processMoveCommand(461, 0, 515, 516, -517); processMoveCommand(448, 0, -518); processMoveCommand(447, 0, -519);
	processMoveCommand(459, 0, -520); processMoveCommand(444, 0, -521);
} int s23() {
	processMoveCommand(459, 0, -514); processMoveCommand(446, 0, -515);
	processMoveCommand(448, 0, -516); processMoveCommand(461, 0, -517); processMoveCommand(449, 0, -518); processMoveCommand(454, 0, -519); processMoveCommand(460, 0, -520);
	if (currentCommandContains(521)) { if (cheezy_rand(100) < 50) { processMoveCommand(459, -2); } processMoveCommand(460, -2); }
} int KilobyteInputBuffer3()
{
	processMoveCommand(446, 0, -514); processMoveCommand(461, 0, 515, 516, 517, -518); processMoveCommand(449, 0, -519); processMoveCommand(447, 0, -520);
	processMoveCommand(459, 0, -521);
} int g26() {
	processMoveCommand(447, 0, -514); processMoveCommand(448, 0, -515); processMoveCommand(461, 0, 516, 517, -518);
	processMoveCommand(455, 0, -519); processMoveCommand(454, 0, -520); processMoveCommand(460, 0, -521);
} int p26() {
	if (currentCommandContains(571))
	{
		return 0;
	} processMoveCommand(136, 0, 514, -515); processMoveCommand(LOCATION_VALLEY, 0, 524, 516, -142); processMoveCommand(143, 0, -517);
	processMoveCommand(451, 0, -518); processMoveCommand(461, 0, 519, 520, -521);
} int s24() {
	if (currentCommandContains(571)) {
		return
			0;
	} processMoveCommand(450, 0, -514); processMoveCommand(LOCATION_VALLEY, 0, -515); processMoveCommand(143, 0, 516, 524, -142); processMoveCommand(144, 0, -517);
	processMoveCommand(452, 0, -518); processMoveCommand(461, 0, 519, 520, -521);
} int m21() {
	if (currentCommandContains(571)) {
		return
			0;
	} processMoveCommand(451, 0, -514); processMoveCommand(143, 0, -515); processMoveCommand(144, 0, 516, 524, -142); processMoveCommand(436, 0, -517);
	processMoveCommand(453, 0, -518); processMoveCommand(461, 0, 519, 520, -521);
} int g27() {
	if (currentCommandContains(571)) {
		return
			0;
	} processMoveCommand(452, 0, -514); processMoveCommand(144, 0, -515); processMoveCommand(436, 0, 516, 524, -142); processMoveCommand(461, 0, 517, 518, 519, 520, -521);
} int d26() {
	if (currentCommandContains(571)) { return 0; } processMoveCommand(460, 0, -514); processMoveCommand(447, 0, -515);
	processMoveCommand(449, 0, -516); processMoveCommand(461, 0, -517); processMoveCommand(455, 0, -518); processMoveCommand(144, 0, -519); processMoveCommand(143, 0, 520, 524, -142);
	processMoveCommand(LOCATION_VALLEY, 0, -521);
} int e19() {
	if (currentCommandContains(571)) { return 0; } processMoveCommand(454, 0, -514);
	processMoveCommand(449, 0, -515); processMoveCommand(461, 0, 516, -517); processMoveCommand(456, 0, -518); processMoveCommand(436, 0, -519); processMoveCommand(144, 0, 520, 524, -142);
	processMoveCommand(143, 0, -521);
} int f17() {
	if (currentCommandContains(571)) { return 0; } processMoveCommand(455, 0, -514);
	processMoveCommand(461, 0, 515, 516, 517, 518, -519); processMoveCommand(436, 0, 520, 524, -142); processMoveCommand(144, 0, -521);
} int m22() {
	if (!currentCommandIsOneOf(514, 515, 516, 517, 518, 519, 520, 521, -1)) return 0; f3(700, 516);
	l12(1, 699, 669); if (object_type_3_buffer[697] > 1) { l12(1, 699, 670); } object_type_3_buffer[699] -= object_type_3_buffer[700]; if
		(object_type_3_buffer[762] < 0 && cheezy_rand(100) < 20) {
		l12(1, 762, 699);
	} if (object_type_3_buffer[762] == object_type_3_buffer[699]) {
		printMessage(64, 1553, 0);
	} f3(676, 485); j36(); l12(0, 762, -1); l12(1, 699, 763); if (object_type_3_buffer[699] > 100) {
		l12(0, 699, 100);
	} if (cheezy_rand(100) < object_type_3_buffer[699]) {
		object_type_3_buffer[763] -= 10; if (object_type_3_buffer[763] < 1) {
			l12(0, 763, 1);
		} processMoveCommand(461, -2);
	} object_type_3_buffer[763] = cheezy_rand(160 - 120 + 1) + 120; object_type_3_buffer[676] = cheezy_rand(456 - 437 + 1) + 437;
	processMoveCommand(object_type_3_buffer[676], -2);
} int v27() {
	if (currentCommandContains(571)) { return 0; } processMoveCommand(261, 0, 516, -261);
	if (!currentCommandIsNotOneOf(531, -1)) return 0; processMoveCommand(485, -1); v37();
} int q24() {
	processMoveCommand(379, 0, -519);
	u28(); if (!currentCommandIsNotOneOf(COMMAND_TAKE, 11, -1)) return 0; printMessage(64, 920, 0);
} int q25() {
	processMoveCommand(379, 0, -519);
	processMoveCommand(381, 0, -515);
} int i27() {
	if (currentCommandContains(515)) {
		if (isObjectFlagSet(381, 4)) {
			processMoveCommand(380, -2);
		} processMoveCommand(378, -2);
	}
} int h17() {
	processMoveCommand(380, 0, -519); processMoveCommand(482, 0, 515, 523, 518, 520, -514);
	if (!currentCommandIsOneOf(516, 517, 524, 521, -1)) return 0; o24();
} int l23() {
	if (!currentCommandIsOneOf(514, 515, 516, 517, 518, 519, 520, 521, 523, 524, -1))
		return 0; if (cheezy_rand(100) < 25) { processMoveCommand(381, -2); } if (cheezy_rand(100) < 40) {
		processMoveCommand(482, -2);
	} o24();
} 

int r22() {
	if (currentCommandContains(4)) {
		if (g10(4, -1)) {
			if (object_type_3_buffer[4] == 1) {
				printMessage(76, 1127, 4);
			} printMessage(76, 1699, 669);
		} return 0;
	} (*command_by_location_dispatch_table[534])();
} 

int processInventoryCommand() {
	if (!currentCommandIsOneOf(555, COMMAND_INVENTORY, -1))
		return 0; 

	l12(0, 697, 1); 

	(*command_by_location_dispatch_table[object_type_3_buffer[670]])();
} 

int o28() {
	if (currentCommandContains(3)) {
		e6(1, object_type_3_buffer[671], 3);
	} if (object_type_3_buffer[717] == 3 && object_type_3_buffer[697] > 1) {
		l12(1, 699, 670); b10(11, 699); if (object_type_3_buffer[699] == 0)
		{
			return 0;
		} 
		if (isObjectFlagSet(t11(670), 3)) {
			if (q8(t11(object_type_3_buffer[670]), -1) && object_type_3_buffer[705] < object_type_3_buffer[721])
			{
				modifyObjectFlag('s', t11(670), 4);
			}
		}
	} 
	b26(); 
	
	if (object_type_3_buffer[699] == 1) {
		if (currentCommandContains(85) && g10(85, -1))
		{
			printMessage(64, 1303, 0);
		} 
		u26();
	} 
	
	l12(0, 701, 0); 
	
	if (object_type_3_buffer[697] == 1) {
		l12(0, 701, 1);
	} 
	
	e6(0, object_type_3_buffer[PLAYER_LOCATION], 3); 
	if (!currentCommandIsOneOf(101, 100, 113, 112, 63, 38, 106, 116, 56, 109, 78, 95, 82, -1))
		return 0; 
	
	if (currentCommandContains(ITEM_BIRD)) { 
		takeBird(); 
	} else {
		if (currentCommandContains(100)) { 
			i44(); 
		} else {	
			if (currentCommandContains(113)) { 
				b29(); 
			} else {					
				if (currentCommandContains(112)) { 
					s28(); 
				} else {
					if (currentCommandContains(63) && object_type_3_buffer[PLAYER_LOCATION] == 299 && q8(63, -1) && object_type_3_buffer[63] != 1) {
						printMessage(64, 979, 0);
					} 
					if (currentCommandContains(38))
					{
						e30();
					} else {
						if (currentCommandContains(116)) { 
							x29(); 
						} else {
							if (currentCommandContains(56)) { 
								s29(); 
							} else {
								if (currentCommandContains(109)) { 
									t36(); 
								} else {
									if (currentCommandContains(78)) { 
										e28(); 
									} else {
										if (currentCommandContains(95))
										{
											p35();
										} else { 
											if (currentCommandContains(82) && q8(82, -1)) { 
												printMessage(64, 1665, 0); 
											} 
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
} 

int c31() {
	if (object_type_3_buffer[697] == 1) { return 0; } if (!(isObjectFlagSet(t11(670), 0))) {
		return
			0;
	} if (isItemAtLocation(t11(object_type_3_buffer[670]), -1)) { printMessage(76, 813, 670); } if (!(g10(t11(object_type_3_buffer[670]), -1)))
	{
		printMessage(76, 818, 670);
	} if (currentCommandContains(84)) { (*command_by_location_dispatch_table[571])(); longjmp(done_with_command, 1); } if (!(isObjectFlagSet(t11(670), 3)))
	{
		printMessage(64, 814, 0);
	} if (currentCommandContains(60) && object_type_3_buffer[60] == 0) {
		if (isObjectFlagSet(t11(735), 6)) {
			l12(0, 699, 0);
		}
		else { modifyObjectFlag('s', t11(735), 6); l12(0, 699, 1); } printMessage(76, 1692, 699);
	} if (object_type_3_buffer[705] < object_type_3_buffer[721])
	{
		s9(object_type_3_buffer[670], r5); printMessage(12, 1489, 669); if (currentCommandContains(104) && object_type_3_buffer[701] > 0) {
			printMessage(12, 1490, 102);
		}
		else { printMessage(12, 1490, 670); } if (currentCommandContains(107) && object_type_3_buffer[717] == 3 && object_type_3_buffer[107] == 0) {
			printMessage(0, 1386, 0);
			l12(0, 107, 1);
		} h29();
	}
	else { printMessage(0, 897, 0); g12(); } longjmp(done_with_command, 1);
} 

int b31() {
	e6(0, 486, -1); if (currentCommandContains(3)) { e6(1, 486, -1); } if (!currentCommandIsOneOf(101, 100, 111, 113, 112, 53, 118, 27, 38,
		97, 95, -1)) return 0; if (currentCommandContains(101)) { s27(); }
		else {
			if (currentCommandContains(100)) {
				g33();
			}
			else {
				if (currentCommandContains(111)) { a30(); }
				else {
					if (currentCommandContains(113) || currentCommandContains(112)) {
						h24();
					}
					else {
						if (currentCommandContains(53)) { e29(); }
						else {
							if (currentCommandContains(118)) { t38(); }
							else {
								if
									(currentCommandContains(27) && g10(27, -1)) {
									s9(27, 485); modifyObjectFlag('s', 27, 13); object_type_3_buffer[716] = cheezy_rand(12 - 4 + 1) + 4;
									l12(1, 724, 716); printMessage(64, 1154, 0);
								} if (currentCommandContains(38)) {
									if (isItemAtLocation(38, -1)) {
										s9(38, PLAYER_LOCATION);
										printMessage(0, 1698, 0); printMessage(64, 776, 0);
									}
								}
								else {
									if (currentCommandContains(95)) { k22(); }
									else {
										if
											(currentCommandContains(97)) {
											k23();
										}
									}
								}
							}
						}
					}
				}
			}
		}
}
