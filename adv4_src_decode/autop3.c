/* Adventure4+ - copyleft @ M.L.Arnautov 1991 */
#pragma warning(disable:4033) // function must return a value
#pragma warning(disable:4013) // function undefined; assuming extern returning int
#pragma warning(disable:4716) // must return a value
#pragma warning(disable:4715) // not all control paths return a value
#include "advkern.h"
int p39() {
	if (object_type_3_buffer[697] == 1) { return 0; } if (!(isObjectFlagSet(t11(670), 0))) {
		return
			0;
	} if (m5(t11(object_type_3_buffer[670]), -1)) {
		d34(); if (object_type_3_buffer[w9] == 393 && !(isObjectFlagSet(t11(670), 15))
			|| object_type_3_buffer[w9] == 415 || object_type_3_buffer[w9] == 418 || object_type_3_buffer[w9] == 417 || isObjectFlagSet(t11(671), 13)) {
			s9(object_type_3_buffer[670], 419);
			if (m1(110)) {
				s9(110, 484); if (g10(91, -1)) {
					printMessage(0, 1293, 0); if (object_type_3_buffer[91] > 1)
					{
						printMessage(0, 1294, 0);
					} l12(0, 91, 0); longjmp(done_with_command, 1);
				}
			} printMessage(12, 1544, 670); if (object_type_3_buffer[w9] == 393
				|| object_type_3_buffer[w9] == 415) {
				if (object_type_3_buffer[w9] == 393) { f3(701, 1601); }
				else {
					f3(701, 1263);
				}
			}
			else { f3(701, 1295); } if (isObjectFlagSet(t11(670), 11)) { printMessage(11, 701, 1); }
			else {
				printMessage(11, 701, 0);
			} longjmp(done_with_command, 1);
		} if (object_type_3_buffer[w9] == 204) {
			s9(object_type_3_buffer[670], 203); printMessage(12, 1544, 670);
			if (isObjectFlagSet(t11(670), 11)) { printMessage(9, 1076, 1); }
			else { printMessage(9, 1076, 0); } longjmp(done_with_command, 1);
		} s9(object_type_3_buffer[670], w9); if (m1(89) && object_type_3_buffer[89] == 0) {
			modifyObjectFlag('s', t11(697), 4); printMessage(0, 89, 0);
			modifyObjectFlag('c', t11(697), 4); l12(0, 89, 1);
		}
		else {
			if (m1(80) && object_type_3_buffer[w9] == 141 && !(isObjectFlagSet(80, 5)))
			{
				printMessage(12, 1267, 670); modifyObjectFlag('s', 80, 5);
			}
			else {
				if (m1(114)) {
					printMessage(12, 1489, 669);
					printMessage(12, 1491, 114); if (object_type_3_buffer[114] == 4) { printMessage(12, 1493, 113); }
					else {
						if (object_type_3_buffer[114] == 3)
						{
							printMessage(12, 1493, 112);
						}
						else { printMessage(0, 776, 0); }
					} if (object_type_3_buffer[114] > 2) {
						l12(0, 114, 2);
					}
				}
				else { printMessage(12, 1489, 669); printMessage(12, 1490, 670); }
			}
		}
	}
	else {
		printMessage(12, 817, 670);
	} longjmp(done_with_command, 1);
} int t29() {
	if (object_type_3_buffer[697] == 1) { printMessage(76, 886, 669); } if ((513 <= object_type_3_buffer[669]
		&& object_type_3_buffer[669] <= 525) || (513 <= object_type_3_buffer[670] && object_type_3_buffer[670] <= 525) || (615 <= object_type_3_buffer[670] && object_type_3_buffer[670] <= 629)
		|| m1(530) || m1(617) || m1(527) || m1(526)) {
		(*command_dispatch_table[object_type_3_buffer[670]])();
	}
	else
	{
		if (isObjectFlagSet(t11(670), 1)) {
			if (object_type_3_buffer[w9] == t11(object_type_3_buffer[670])) { printMessage(64, 845, 0); } printMessage(64, 937, 0);
		} if (m1(19) || m1(134) || m1(82) || m1(16) || m1(38) || m1(85)) {
			if (g10(t11(object_type_3_buffer[670]), -1))
			{
				printMessage(76, 1587, 670);
			} printMessage(76, 818, 670);
		} printMessage(64, 1516, 0);
	}
} int t33() {
	printMessage(64, 863, 0);
} int f21() {
	if (object_type_3_buffer[w9] == 142 || object_type_3_buffer[w9] == 626 || object_type_3_buffer[w9] == 136 || object_type_3_buffer[w9] == 143
		|| object_type_3_buffer[w9] == 144 || object_type_3_buffer[w9] == 141) {
		printMessage(64, 844, 0);
	} printMessage(64, 845, 0);
} int e9()
{
	if (!(g10(111, 4) || g10(114, 4) || g10(113, -1))) {
		if (m5(118, -1)) {
			printMessage(64, 1421, 0);
		} printMessage(76, 1027, 113);
	} if (object_type_3_buffer[697] > 1) {
		if (object_type_3_buffer[669] == 113 && !g10(t11(object_type_3_buffer[670]), -1))
		{
			printMessage(76, 818, 670);
		}
		else {
			if (object_type_3_buffer[670] == 113 && !g10(t11(object_type_3_buffer[669]), -1)) {
				printMessage(76, 818, 669);
			}
		}
	} if (m1(6)) {
		o25(); if (object_type_3_buffer[6] == 0) {
			l12(0, 6, 1); printMessage(64, 919, 0);
		} printMessage(12, 1489, 113); printMessage(76, 1490, 6);
	} if (m1(11)) { o25(); printMessage(64, 917, 0); }
	if (m1(72)) { o25(); l12(0, 72, 1); printMessage(64, 1693, 0); } if (m1(115)) {
		printMessage(64, 1656, 0);
	} if (m1(116)) {
		f3(701, 1704); if (object_type_3_buffer[116] == 0) { object_type_3_buffer[701] += 1; } printMessage(66, 701, 0);
	}
} int f26() {
	if (!m1(11)) return; if (g10(11, -1)) {
		if (m5(114, 3) ||
			m5(111, 3)) {
			if (!(m5(111, 3))) { l12(0, 114, 2); printMessage(64, 1366, 0); } l12(0, 111, 2);
			o23();
		}
		else { printMessage(12, 1027, 669); }
	}
	else { printMessage(12, 818, 670); } longjmp(done_with_command, 1);
} int p40() {
	if (!m1(6)) return; if (g10(6, -1)) {
		if (m5(114, 3) || m5(111, 3))
		{
			if (m5(111, 3)) { l12(0, 111, 2); }
			else { l12(0, 114, 2); } l12(0, 6, 0); printMessage(64, 918, 0);
		} printMessage(76, 1027, 112);
	} printMessage(76, 818, 6);
} int t42() {
	if (!k3(115, 116, -1)) return
		0; b26(); if (object_type_3_buffer[699] == 0) { o21(); }
} int t43() {
	if (!m1(112)) return;
	if (m5(114, 3) || m5(111, 3)) { h24(); longjmp(done_with_command, 1); } printMessage(76, 1027, 670);
}
int v42() {
	if (!m1(113)) return; if (m5(114, 4) || m5(111, 4)) {
		h24(); longjmp(done_with_command, 1);
	} printMessage(76, 1027, 670);
} int x33() {
	if (!m1(110)) return; if (!m5(110, -1))
		return 0; if (g10(22, -1)) { printMessage(64, 994, 0); } if (g10(134, -1)) {
		s9(110, w9);
		modifyObjectFlag('s', 134, 14); printMessage(64, 908, 0);
	} if (g10(38, -1)) {
		s9(110, 484); l12(0, 38, 1);
		if (object_type_3_buffer[115] == 1) { l12(0, 115, 0); } printMessage(64, 977, 0);
	} if (g10(91, -1)) {
		printMessage(0, 1293, 0);
		s9(110, 484); if (object_type_3_buffer[91] > 1) { printMessage(64, 1294, 0); } longjmp(done_with_command, 1);
	}
} int w29()
{
	if (!m1(117)) return; if (!m5(117, -1)) return 0; v38();
} int v43() {
	if (!m1(118)) return; if (!m5(118, -1)) return 0; t37();
} int c32() {
	if
		(object_type_3_buffer[697] == 2) {
		if (isObjectFlagSet(t11(670), 0)) {
			if (m5(t11(object_type_3_buffer[670]), -1) && isObjectFlagSet(t11(671), 12))
			{
				d34(); n24();
			}
		}
	} (*command_dispatch_table[535])();
} int i38() {
	if (object_type_3_buffer[697] > 1) {
		if (m1(117))
		{
			if (m5(117, -1)) { v38(); } printMessage(76, 1027, 670);
		} printMessage(64, 915, 0);
	}
} int o20()
{
	modifyObjectFlag('s', 16, 13); if (object_type_3_buffer[697] > 1) {
		if (!(isObjectFlagSet(t11(670), 0))) { return 0; } if
			(!(isObjectFlagSet(t11(670), 3))) {
			printMessage(64, 814, 0);
		} if (!(m5(t11(object_type_3_buffer[670]), -1))) {
			printMessage(76, 817, 670);
		}
	}
	else {
		printMessage(0, 1643, 0); if (g10(16, -1)) { printMessage(64, 776, 0); } printMessage(64, 1644, 0);
	} if (m1(102)) {
		if (g10(8, -1)) {
			if (object_type_3_buffer[717] < 2) {
				object_type_3_buffer[8] += 1; if (object_type_3_buffer[8] == 2)
				{
					l12(0, 8, 0); modifyObjectFlag('s', 8, 10); s9(9, 484);
				}
				else { modifyObjectFlag('c', 8, 10); } printMessage(12, 1486, 8);
			}
			else { printMessage(0, 828, 0); }
		}
		else {
			if (g10(32, -1)) {
				printMessage(0, 1081, 0); l12(0, 32, 1);
			}
			else {
				if (g10(30, -1) && object_type_3_buffer[717] < 2) {
					object_type_3_buffer[30] += 1; printMessage(0, 30, 0); object_type_3_buffer[30]
						+= 1; if (object_type_3_buffer[30] == 4) { l12(0, 30, 0); modifyObjectFlag('s', 30, 10); s9(9, 484); }
						else {
							modifyObjectFlag('c', 30, 10);
						}
				}
				else { printMessage(0, 828, 0); }
			}
		}
	}
	else {
		if (m1(115) || m1(116)) {
			b26(); if
				(object_type_3_buffer[699] == 1) {
				printMessage(76, 1642, 670);
			} o21();
		}
		else { printMessage(0, 828, 0); }
	} longjmp(done_with_command, 1);
} int d29() { r29(); } int d30() { r29(); } int l24() { r29(); } int k18()
{
	r29();
} int t28() { r29(); } int x25() { r29(); } int i34() {
	r29();
} int a22() { r29(); } int v29() { r29(); } int i35() { r29(); } int w23()
{
	l12(0, 700, 0); *getObjectPointer(675) = -1; object_type_3_buffer[675] = OBJECT_TYPE_0_MIN_ID - 1; while (++object_type_3_buffer[675] <= OBJECT_TYPE_0_MAX_ID) {
		if (m5(t11(object_type_3_buffer[675]), -1))
		{
			if (object_type_3_buffer[700] == 0) { printMessage(0, 904, 0); l12(0, 700, 1); } printMessage(2, 675, 0);
		}
	} if (object_type_3_buffer[700] == 0)
	{
		printMessage(0, 898, 0);
	} longjmp(done_with_command, 1);
} 
int r34() {
	b26(); 

	if (object_type_3_buffer[699] == 1) {
		printMessage(64, 824, 0);
	} 

	if (object_type_3_buffer[697] == 1) {
		l12(0, 700, 0); 

		if (!(isObjectFlagSet(t11(697), 2))) {
			modifyObjectFlag('s', t11(697), 3);
			l12(0, 700, 1);
		} 

		y21(); 
		modifyObjectFlag('c', t11(697), 3); 
		modifyObjectFlag('s', t11(671), 4); 

		longjmp(done_with_command, 1);
	} 
	
	if (!k3(584, 73, 18, 14, 605, -1)) return 0; 
	(*command_dispatch_table[object_type_3_buffer[670]])();
} 

int h34()
{
	if (!k3(120, 88, 71, 108, 70, -1)) return 0; (*command_dispatch_table[562])(); longjmp(done_with_command, 1);
} int s33() {
	if (!m1(113)) return; if (g10(111, 4) || g10(113, -1)) {
		printMessage(64, 1451, 0);
	} if (g10(118, -1)) { printMessage(64, 1421, 0); }
} int n29() {
	if (!m1(11)) return;
	if (g10(12, -1) && object_type_3_buffer[12] > 0 || g10(11, -1)) { printMessage(76, 1590, 11); } printMessage(76, 818, 670);
} int a31() {
	if (!m1(112)) return; if (g10(111, 3) || isObjectFlagSet(t11(671), 9)) {
		printMessage(64, 1588, 0);
	}
} int j44() {
	if (isObjectFlagSet(t11(670), 0)) {
		if (!(g10(t11(object_type_3_buffer[670]), -1)))
		{
			printMessage(76, 818, 670);
		}
	}
	else {
		if (isObjectFlagSet(t11(670), 1)) {
			if (object_type_3_buffer[670] == 143) {
				if
					(!(object_type_3_buffer[w9] == t11(object_type_3_buffer[670]))) {
					printMessage(64, 1676, 0);
				}
			}
			else { printMessage(64, 965, 0); }
		}
	}
	if (!k3(9, 78, -1)) return 0; if (m1(9)) { s31(); }
	else {
		if (m1(78)) {
			(*command_dispatch_table[604])();
		}
	} longjmp(done_with_command, 1);
} int v44() {
	if (!m1(114)) return; if (object_type_3_buffer[114] < 2) {
		printMessage(64, 1600, 0);
	}
} int a32() {
	if (!m1(107)) return; if (object_type_3_buffer[717] == 3 && object_type_3_buffer[107] == 0 && m5(107, -1))
	{
		l12(0, 107, 1); printMessage(64, 1386, 0);
	}
} int e31() {
	if (m1(43) && object_type_3_buffer[43] > 1) {
		printMessage(76, 1606, 43);
	} if (isObjectFlagSet(t11(670), 0) || isObjectFlagSet(t11(670), 1)) {
		modifyObjectFlag('s', t11(697), 4);
		printMessage(2, 670, 0); modifyObjectFlag('c', t11(697), 4); if (m1(89) && object_type_3_buffer[89] == 0) {
			l12(0, 89, 1);
		} longjmp(done_with_command, 1);
	} if (isObjectFlagSet(t11(670), 2)) {
		if ((615 <= object_type_3_buffer[670] && object_type_3_buffer[670] <= 629))
		{
			printMessage(64, 965, 0);
		} if ((630 <= object_type_3_buffer[670] && object_type_3_buffer[670] <= 663)) {
			if (m1(661)) {
				if
					(isObjectFlagSet(t11(671), 7)) {
					printMessage(64, 915, 0);
				} printMessage(76, 1541, 670);
			} if (m1(660)) {
				printMessage(64, 965, 0);
			} printMessage(76, 818, 670);
		} printMessage(64, 915, 0);
	}
} int i39() {
	if (!(object_type_3_buffer[697] == 1 || m1(78)))
	{
		printMessage(64, 814, 0);
	} b26(); if (object_type_3_buffer[699] == 1) { printMessage(64, 1415, 0); } if (g10(78, -1))
	{
		modifyObjectFlag('s', t11(755), 4); l32(); f3(700, 1403); object_type_3_buffer[700] += object_type_3_buffer[699]; printMessage(0, 1402, 0);
		printMessage(2, 700, 0); printMessage(64, 1414, 0);
	} if (object_type_3_buffer[w9] == 394 && j0[78] == 393) {
		printMessage(64, 1227, 0);
	} printMessage(64, 1416, 0);
} int j31() {
	if (m1(546)) { (*command_dispatch_table[546])(); } if (m1(99)
		|| m1(545) || object_type_3_buffer[697] == 1) {
		if (g10(99, -1)) {
			if (object_type_3_buffer[99] == 1) {
				printMessage(72, 826, 1);
			} if (object_type_3_buffer[698] < 40) {
				if (g10(39, 1)) {
					printMessage(0, 1053, 0); l12(0, 39, 3); object_type_3_buffer[698]
						+= 400;
				}
			} if (object_type_3_buffer[698] > 0) {
				l12(0, 99, 1); printMessage(8, 825, 1); if (!(isObjectFlagSet(t11(671), 3)))
				{
					if (g10(85, -1)) { h23(); } l12(0, 697, 1); (*command_dispatch_table[571])();
				} b28();
			}
			else
			{
				printMessage(0, 996, 0);
			}
		}
		else {
			if (m1(99)) { printMessage(76, 818, 670); } printMessage(64, 824, 0);
		} longjmp(done_with_command, 1);
	}
} int f20() {
	if (m1(99) || m1(546) || object_type_3_buffer[697] == 1) {
		if (g10(99, -1)) {
			if (object_type_3_buffer[99] == 0) { printMessage(72, 826, 0); } l12(0, 99, 0); printMessage(8, 825, 0);
			b26(); if (object_type_3_buffer[699] == 1) { printMessage(0, 805, 0); } b28();
		}
		else {
			if (m1(99)) {
				printMessage(76, 818, 670);
			} return 0;
		}
	}
	else { printMessage(64, 949, 0); } longjmp(done_with_command, 1);
} int KilobyteInputBuffer8() {
	e6(0, object_type_3_buffer[w9], 9);
	if (m1(4) && object_type_3_buffer[4] == 0 && !m5(98, -1)) { printMessage(64, 820, 0); } (*command_dispatch_table[536])();
}
int u31() {
	if (!m1(259)) return; if (object_type_3_buffer[w9] == 259) {
		if (g10(27, -1)) {
			s9(27, 485);
			modifyObjectFlag('s', 27, 13); printMessage(64, 1154, 0);
		} printMessage(64, 1156, 0);
	} printMessage(76, 818, 670);
} int d36()
{
	if (m1(579)) { printMessage(64, 837, 0); } e6(0, object_type_3_buffer[w9], 9); if (object_type_3_buffer[697] == 2 && !g10(t11(object_type_3_buffer[670]), -1))
	{
		printMessage(76, 818, 670);
	} if (!k3(111, 42, 49, 100, 106, 107, 118, 98, 93, -1)) return
		0; if (m1(111)) { printMessage(64, 1465, 0); } if (m1(42)) { printMessage(64, 1464, 0); } if (m1(49))
	{
		printMessage(64, 1383, 0);
	} if (m1(100)) { printMessage(66, 719, 0); } if (m1(106) || m1(107))
	{
		z27();
	} if (m1(118)) { t37(); } if (m1(98)) { printMessage(64, 842, 0); } if (m1(73))
	{
		if (object_type_3_buffer[w9] == 225) { printMessage(64, 1597, 0); } printMessage(64, 1598, 0);
	} if (m1(93)) {
		printMessage(64, 1254, 0);
	}
} int t44() {
	if (!k3(4, 63, 35, -1)) return 0; z5(699, 670); if (object_type_3_buffer[699] == 1)
	{
		printMessage(76, 1127, 670);
	} if (!(m1(35) || m5(98, -1))) {
		if (m1(4)) {
			printMessage(76, 1699, 669);
		} printMessage(64, 820, 0);
	}
} int q39() {
	if (!m1(4)) return; if (object_type_3_buffer[717] > 1 || isObjectFlagSet(t11(710), 3))
	{
		printMessage(0, 823, 0); if (object_type_3_buffer[717] > 1) {
			modifyObjectFlag('s', t11(710), 4); if (!(isObjectFlagSet(4, 13))) {
				modifyObjectFlag('s', 4, 13);
				printMessage(64, 934, 0);
			}
		} longjmp(done_with_command, 1);
	} l12(0, 4, 1); modifyObjectFlag('c', 144, 8); l12(0, 699, 1);
	if (m1(536)) { object_type_3_buffer[699] += 1; } printMessage(76, 822, 699);
} int n30() {
	if (!m1(63))
		return; if (object_type_3_buffer[38] == 0) { printMessage(64, 827, 0); } l12(0, 63, 1); l12(0, 38, 2); printMessage(64, 980, 0);
} int p41() {
	if (!m1(6)) return; if (!g10(6, -1)) return 0; if (object_type_3_buffer[6] == 0)
	{
		printMessage(64, 916, 0);
	} printMessage(66, 719, 0);
} int u32() {
	if (!m1(35)) return; if (!g10(35, -1))
		return 0; if (object_type_3_buffer[35] == 0) { printMessage(64, 1126, 0); } if (object_type_3_buffer[35] == 1) {
		printMessage(76, 1127, 670);
	} printMessage(64, 1128, 0);
} int b32() {
	if (!m1(114)) return; if (!g10(114, -1)) return
		0; if (object_type_3_buffer[114] < 2) {
		l12(0, 114, 2); if (j0[114] == 259) {
			s9(27, 259); printMessage(64, 1152, 0);
		} printMessage(64, 1153, 0);
	} printMessage(76, 1127, 670);
} int e32() {
	if (m1(617) && isObjectFlagSet(t11(710), 5))
	{
		j41();
	} e6(0, object_type_3_buffer[w9], 9); if (object_type_3_buffer[697] == 2 && !g10(t11(object_type_3_buffer[670]), -1)) {
		printMessage(76, 818, 670);
	} if (!k3(111, 6, 100, 114, -1)) return 0; if (m1(111)) { printMessage(64, 1465, 0); } if
		(m1(6)) {
		printMessage(64, 821, 0);
	} if (m1(100)) { printMessage(66, 719, 0); } if (m1(114)) {
		if (object_type_3_buffer[114] < 2) { printMessage(76, 1129, 670); } printMessage(64, 1602, 0);
	}
} int u33() {
	if (!k3(4, 63, 35, -1))
		return 0; z5(699, 670); if (object_type_3_buffer[699] != 1) { printMessage(76, 1129, 670); } c16(670, 0);
	if (m1(4)) { printMessage(72, 822, 0); } if (m1(35)) { printMessage(64, 1130, 0); } if (object_type_3_buffer[w9] == 299)
	{
		if (m5(63, -1)) { s9(63, w9); } if (g10(38, -1)) {
			s9(38, w9); l12(0, 38, 1);
			printMessage(64, 982, 0);
		} l12(0, 63, 2); printMessage(64, 981, 0);
	} printMessage(64, 983, 0);
} int e22() {
	if (object_type_3_buffer[w9] == 461) {
		printMessage(9, 1456, 20); if (y10(1457)) {
			object_type_3_buffer[707] += 20; p9(136, -object_type_3_buffer[685]);
		} longjmp(done_with_command, 1);
	} if (((168 <= object_type_3_buffer[671] && object_type_3_buffer[671] <= 193) || (300 <= object_type_3_buffer[671]
		&& object_type_3_buffer[671] <= 311) || (328 <= object_type_3_buffer[671] && object_type_3_buffer[671] <= 364)) && !(isObjectFlagSet(t11(671), 8)))
	{
		e27(); if (object_type_3_buffer[708] > 99) { printMessage(64, 1648, 0); } printMessage(9, 1647, 20); if (y10(1457))
		{
			object_type_3_buffer[707] += 20; *getObjectPointer(675) = -1; object_type_3_buffer[675] = OBJECT_TYPE_0_MIN_ID - 1; while (++object_type_3_buffer[675] <= OBJECT_TYPE_0_MAX_ID) {
				if
					(m5(t11(object_type_3_buffer[675]), 1029)) {
					s9(object_type_3_buffer[675], w9);
				}
			} if (m5(80, -1)) {
				s9(80, w9);
			} printMessage(2, 685, 0); if ((168 <= object_type_3_buffer[671] && object_type_3_buffer[671] <= 193)) { p9(167, -2); } if ((300 <= object_type_3_buffer[671]
				&& object_type_3_buffer[671] <= 311)) {
				p9(195, -2);
			} if ((328 <= object_type_3_buffer[671] && object_type_3_buffer[671] <= 364)) {
				p9(327, -2);
			}
		} longjmp(done_with_command, 1);
	} if (object_type_3_buffer[720] == 0) { l12(0, 720, 1); } if ((object_type_3_buffer[w9] == 427
		|| object_type_3_buffer[w9] == 428) && !(isObjectFlagSet(t11(671), 14))) {
		printMessage(64, 841, 0);
	} p36(); if (object_type_3_buffer[720] > 0)
	{
		if (g10(134, -1) || g10(20, -1) || g10(22, -1) || g10(24, -1) || object_type_3_buffer[17] > 0
			|| g10(32, -1) || object_type_3_buffer[121] > 0 || g10(25, -1) || g10(87, -1) || g10(35, -1) ||
			g10(71, -1)) {
			printMessage(0, 840, 0);
		}
		else {
			if (isObjectFlagSet(t11(735), 3)) { printMessage(0, 841, 0); }
			else { modifyObjectFlag('s', t11(735), 3); f3(700, 838); f3(701, 839); c28(); }
		}
	} longjmp(done_with_command, 1);
} int d33() { f3(700, 940); f3(701, 943); c28(); longjmp(done_with_command, 1); } int p32()
{
	if (y10(945)) { l12(0, 718, 1); a29(); } printMessage(66, 719, 0);
} int v31() {
	modifyObjectFlag('s', t11(697), 1);
	modifyObjectFlag('c', t11(697), 2); f3(719, 777); printMessage(64, 966, 0);
} int z23() {
	if (y10(1078))
	{
		w5(1079); object_type_3_buffer[707] += 10; printMessage(64, 1080, 0);
	} printMessage(66, 719, 0);
} int b24() {
	if (isObjectFlagSet(t11(710), 5)) {
		if (object_type_3_buffer[697] == 1) {
			modifyObjectFlag('s', t11(697), 5); printMessage(76, 829, 669);
		} if (isObjectFlagSet(t11(670), 1)) { p9(object_type_3_buffer[670], -object_type_3_buffer[685]); } printMessage(64, 915, 0);
	} if (object_type_3_buffer[697] == 1)
	{
		printMessage(64, 1325, 0);
	} if (g10(t11(object_type_3_buffer[670]), -1)) {
		if (m1(60)) {
			printMessage(64, 1552, 0);
		} printMessage(64, 915, 0);
	}
} int i36() {
	if (object_type_3_buffer[697] == 2) {
		if (isObjectFlagSet(t11(670), 8)) {
			(*command_dispatch_table[549])();
		}
		else {
			if (m1(26) && g10(26, -1)) {
				if (g10(28, -1)) {
					printMessage(64, 1164, 0);
				} s9(28, object_type_3_buffer[671]); printMessage(64, 1165, 0);
			} if (m1(10)) { (*command_dispatch_table[564])(); }
		}
	}
} int
n22() {
	b26(); if (object_type_3_buffer[699] == 1) {
		if (object_type_3_buffer[697] == 1 && g10(85, -1) || m1(85))
		{
			printMessage(64, 1303, 0);
		} printMessage(64, 1075, 0);
	} if (m1(134) && object_type_3_buffer[717] == 3 && g10(134, -1))
	{
		printMessage(0, 1381, 0); j38();
	} if (m1(34)) { (*command_dispatch_table[551])(); } e6(0, object_type_3_buffer[w9], 8);
	if (object_type_3_buffer[697] == 1) { if (object_type_3_buffer[670] == 1718) { printMessage(64, 830, 0); } return 0; } if (!k3(22, 134, 20, 7, 101, 38, 107, 106, 24, 17,
		27, 121, 25, 135, 82, 87, 91, 28, -1)) return 0; if (!g10(t11(object_type_3_buffer[670]), -1)) return
		0; if (m1(22)) { printMessage(64, 967, 0); } if (m1(134)) { h25(); }
		else {
			if (m1(20))
			{
				u25();
			}
			else {
				if (m1(7)) { printMessage(64, 832, 0); } if (m1(17)) {
					printMessage(64, 1138, 0);
				} if (m1(38)) { printMessage(76, 975, 38); } if (m1(106) || m1(107)) {
					printMessage(64, 953, 0);
				} if (m1(24)) { l33(); }
				else {
					if (m1(135)) {
						if (y10(836)) {
							printMessage(64, 1317, 0);
						} printMessage(12, 1222, 669); printMessage(76, 1223, 670);
					} if (m1(27)) { printMessage(64, 1149, 0); } if
						(m1(121)) {
						printMessage(0, 1155, 0); j38();
					} if (m1(25)) {
						if (object_type_3_buffer[25] < 2) {
							printMessage(0, 1145, 0);
							j38();
						} printMessage(64, 976, 0);
					} if (m1(28)) { printMessage(64, 1646, 0); } if (m1(82)) {
						printMessage(64, 1277, 0);
					} if (m1(87)) { printMessage(64, 1304, 0); } if (m1(91)) { i46(); }
					else {
						if (m1(101))
						{
							d35();
						}
					}
				}
			}
		} longjmp(done_with_command, 1);
} int l27() {
	modifyObjectFlag('c', t11(697), 1); modifyObjectFlag('s', t11(697), 2);
	printMessage(2, 719, 0); f3(719, 775); longjmp(done_with_command, 1);
} int v32() {
	modifyObjectFlag('c', t11(697), 1);
	modifyObjectFlag('c', t11(697), 2); f3(719, 777); printMessage(2, 719, 0); printMessage(0, 776, 0); modifyObjectFlag('s', t11(697), 3);
	y21(); modifyObjectFlag('c', t11(697), 3); longjmp(done_with_command, 1);
} int x34() {
	if (!k3(38, 22, 101, 7, 134, 20, 25,
		121, 82, -1)) return 0; if (g10(t11(object_type_3_buffer[670]), -1)) {
		if (m1(38)) {
			if (g10(110, -1))
			{
				l12(0, 38, 1); if (m5(110, -1)) {} s9(110, 484); if (object_type_3_buffer[115] == 1) {
					l12(0, 115, 0);
				} printMessage(64, 977, 0);
			} printMessage(64, 907, 0);
		} if (m1(22)) { printMessage(64, 994, 0); } if (m1(7))
		{
			if (m5(101, -1)) { b27(); printMessage(64, 906, 0); } printMessage(64, 907, 0);
		} if (m1(134))
		{
			if (object_type_3_buffer[717] > 1) { printMessage(64, 915, 0); } modifyObjectFlag('s', 134, 14); printMessage(64, 908, 0);
		} if (m1(101))
		{
			printMessage(64, 905, 0);
		} if (m1(20)) {
			if (object_type_3_buffer[20] == 0) { printMessage(64, 907, 0); } printMessage(64, 976, 0);
		} if (m1(25)) { if (object_type_3_buffer[25] < 2) { printMessage(64, 907, 0); } printMessage(64, 976, 0); } if (m1(121))
		{
			printMessage(64, 1150, 0);
		} if (m1(82)) {
			if (g10(110, -1)) {
				s9(110, 484); s9(84, object_type_3_buffer[671]);
				printMessage(64, 1279, 0);
			} printMessage(64, 1278, 0);
		}
	} printMessage(76, 818, 670);
} int u34() {
	if (!(object_type_3_buffer[697] == 1))
	{
		printMessage(64, 915, 0);
	}
} int l29() {
	l12(0, 718, 1); e27(); printMessage(13, 1034, 708); printMessage(13, 1035, 709);
	printMessage(13, 1036, 712); longjmp(done_with_command, 1);
} int p28() { printMessage(64, 1037, 0); } int p27()
{
	printMessage(64, 800, 0);
} int d31() { printMessage(64, 800, 0); } int u21() {
	printMessage(64, 1475, 0);
} int r23() { printMessage(64, 837, 0); } int v45() {
	if (object_type_3_buffer[717] > 1) {
		printMessage(64, 828, 0);
	} if (!k3(509, 508, 507, 581, -1)) return 0; l12(0, 714, 0); printMessage(64, 804, 0);
} int
a33() { l12(0, 714, 1); printMessage(66, 719, 0); } int g28() {
	if (object_type_3_buffer[714] == 0) {
		l12(0, 714, 2);
		printMessage(66, 719, 0);
	} o22(); longjmp(done_with_command, 1);
} int b22() {
	if (object_type_3_buffer[714] == 1) {
		l12(0, 714, 3);
		printMessage(66, 719, 0);
	} o22(); longjmp(done_with_command, 1);
} int o18() {
	if (object_type_3_buffer[697] == 2 && !m1(493))
	{
		printMessage(64, 858, 0);
	} if (object_type_3_buffer[714] == 2) {
		if (j0[50] == 222 || isObjectFlagSet(50, 14)) {
			printMessage(0, 828, 0);
			if (j0[50] == 222) { printMessage(0, 1069, 0); }
		}
		else {
			if (g10(50, -1)) {
				l12(0, 50, 1);
			}
			else { if (object_type_3_buffer[w9] == 222) { l12(0, 50, 0); } else { l12(0, 50, 2); } } if (m5(50, -1))
			{
				s9(50, w9);
			} printMessage(0, 50, 0); l12(0, 50, 0); if (isObjectFlagSet(50, 13)) {
				modifyObjectFlag('c', 50, 13);
				modifyObjectFlag('s', 22, 13); if (object_type_3_buffer[22] == 1 || object_type_3_buffer[22] == 2) {
					if (g10(23, -1)) {
						printMessage(0, 1448, 0);
					} l12(0, 22, 0); s9(22, 244); s9(23, 484);
				}
			} s9(50, 222); if (object_type_3_buffer[135] == 2) {
				l12(0, 135, 3); object_type_3_buffer[757] = d2(5 - 3 + 1) + 3;
			}
		} l12(0, 714, 0);
	}
	else { o22(); }
	longjmp(done_with_command, 1);
} int j33() { printMessage(64, 1468, 0); } int t27() {
	printMessage(64, 828, 0);
} int r21() { printMessage(64, 828, 0); } int l28() { printMessage(64, 1466, 0); } int d37() {
	if
		(!m1(617)) return; if (isObjectFlagSet(t11(671), 7) && !(isObjectFlagSet(145, 4))) { printMessage(64, 844, 0); }
	printMessage(64, 845, 0);
} int d38() {
	if (object_type_3_buffer[697] > 1) {
		if (isObjectFlagSet(t11(670), 0)) {
			if (isObjectFlagSet(t11(710), 5))
			{
				if (m5(t11(object_type_3_buffer[670]), -1)) { printMessage(76, 813, 670); } t10(676, 670); p9(object_type_3_buffer[676], -2);
			} if (g10(t11(object_type_3_buffer[670]), -1)) {
				if (m5(t11(object_type_3_buffer[670]), -1) || m1(16)) {
					printMessage(64, 900, 0);
				} printMessage(64, 1400, 0);
			} printMessage(64, 846, 0);
		} if (isObjectFlagSet(t11(670), 1)) {
			if (object_type_3_buffer[w9] == t11(object_type_3_buffer[670]))
			{
				printMessage(64, 938, 0);
			} printMessage(64, 846, 0);
		} printMessage(64, 858, 0);
	}
} int b25() {
	printMessage(64, 949, 0);
} int y24() {
	if (!m1(53)) return; if (!g10(53, -1)) return 0; s9(53, 485);
	s9(54, object_type_3_buffer[671]); printMessage(64, 1011, 0);
} int v46() {
	if (!m1(118)) return; if (!g10(118, -1))
		return 0; t37();
} int x35() {
	if (!m1(10)) return; if (!g10(10, -1)) return
		0; if (object_type_3_buffer[717] == 3) { printMessage(0, 1371, 0); j38(); } printMessage(64, 1379, 0);
} int j45() {
	if (!m1(53)) return; if (!g10(54, -1)) return 0; printMessage(64, 948, 0);
} int c33()
{
	if (!m1(41)) return; if (g10(41, -1)) { printMessage(64, 948, 0); }
} int b33() {
	if
		(!m1(53)) return; if (g10(53, -1)) {
		if (isObjectFlagSet(t11(671), 9) || object_type_3_buffer[w9] == 158) {
			if (m5(53, -1)) { object_type_3_buffer[705] -= 1; } s9(53, 485); s9(54, object_type_3_buffer[671]); printMessage(64, 947, 0);
		} printMessage(64, 946, 0);
	}
} int z29() {
	if (!m1(114)) return; if (m5(114, -1)) {
		if (object_type_3_buffer[114] < 2) { printMessage(64, 1370, 0); } if (object_type_3_buffer[114] == 2) {
			if (isObjectFlagSet(t11(671), 9))
			{
				l12(0, 114, 3); printMessage(76, 913, 112);
			} if (object_type_3_buffer[w9] == 158) {
				l12(0, 114, 4); printMessage(76, 913, 113);
			} if (isObjectFlagSet(t11(671), 13)) { printMessage(64, 874, 0); } printMessage(76, 911, 114);
		} printMessage(64, 1369, 0);
	} printMessage(76, 1027, 670);
} int p42() {
	if (!m1(111)) return; if (m5(111, -1)) {
		if (object_type_3_buffer[111] == 2) {
			if (isObjectFlagSet(t11(671), 9)) { l12(0, 111, 3); printMessage(76, 912, 112); }
			if (object_type_3_buffer[w9] == 158) { l12(0, 111, 4); printMessage(76, 912, 113); } printMessage(76, 911, 111);
		} printMessage(64, 910, 0);
	} printMessage(76, 1027, 670);
} int p43() {
	if (!m1(81)) return; if (m5(81, -1)) {
		if
			(isObjectFlagSet(t11(671), 9)) {
			if (object_type_3_buffer[w9] == 412) { printMessage(64, 1268, 0); } modifyObjectFlag('s', 81, 13); modifyObjectFlag('s', 81, 14);
			printMessage(64, 1269, 0);
		} printMessage(76, 911, 81);
	} printMessage(76, 1027, 670);
} int z30() {
	if (object_type_3_buffer[697] > 1
		&& g10(t11(object_type_3_buffer[670]), -1)) {
		printMessage(64, 914, 0);
	}
} int l35() {
	if (!k3(111, 114, 81, 118, -1))
		return 0; if (!(m5(t11(object_type_3_buffer[670]), -1))) { printMessage(76, 1027, 670); }
} int e33() {
	if (!m1(81)) return; if (isObjectFlagSet(81, 13)) { printMessage(64, 1322, 0); } printMessage(64, 1270, 0);
}
int n31() {
	if (!m1(111)) return; if (g10(111, 4) || g10(111, 3)) {
		f3(670, 112);
		if (g10(111, 4)) { f3(670, 113); } (*command_dispatch_table[553])();
	}
	else { printMessage(0, 1270, 0); }
	longjmp(done_with_command, 1);
} int f27() {
	if (!m1(114)) return; if (object_type_3_buffer[114] < 2) {
		(*command_dispatch_table[536])();
		longjmp(done_with_command, 1);
	} if (object_type_3_buffer[114] == 2) { printMessage(64, 1270, 0); } if (object_type_3_buffer[114] == 3) {
		f3(670, 112);
	}
	else { f3(670, 113); } if (m5(t11(object_type_3_buffer[670]), -1)) { s9(object_type_3_buffer[670], 435); } (*command_dispatch_table[553])();
	longjmp(done_with_command, 1);
} int g35() {
	if (m1(118)) { printMessage(64, 801, 0); } if (object_type_3_buffer[697] == 2)
	{
		printMessage(64, 915, 0);
	}
} int l25() {
	if (object_type_3_buffer[670] == 112) {
		if (g10(111, 3)) {
			l12(0, 111, 2);
			if (g10(11, -1)) { o23(); }
			else {
				if (g10(6, -1)) {
					printMessage(0, 918, 0); l12(0, 6, 0);
				}
				else { printMessage(12, 875, 112); } modifyObjectFlag('s', t11(671), 15);
			}
		}
		else {
			if (g10(114, 3))
			{
				l12(0, 114, 2); printMessage(0, 1367, 0);
			}
			else { printMessage(12, 1027, 112); }
		} longjmp(done_with_command, 1);
	} if (object_type_3_buffer[670] == 113) {
		if (!(g10(114, 4) || g10(111, 4))) {
			printMessage(76, 1027, 113);
		} if (g10(111, 4)) { l12(0, 111, 2); l12(0, 700, 1); }
		else {
			l12(0, 114, 2); l12(0, 700, 2);
		} if (g10(11, -1)) { printMessage(0, 917, 0); }
		else {
			if (g10(6, -1)) {
				printMessage(0, 919, 0);
				l12(0, 6, 1);
			}
			else {
				if (object_type_3_buffer[700] == 1) {
					printMessage(12, 875, 112); modifyObjectFlag('s', t11(671), 15);
				}
				else { printMessage(0, 1367, 0); }
			}
		} longjmp(done_with_command, 1);
	} if (object_type_3_buffer[697] > 1) {
		printMessage(64, 877, 0);
	}
} int p30() {
	if (!k3(134, 7, 101, 20, 22, 38, 19, 24, 25, 121, 82, -1)) return
		0; if (!g10(t11(object_type_3_buffer[670]), -1)) return 0; printMessage(64, 803, 0);
} int b34() {
	if (g10(110, -1))
	{
		if (m1(110) || object_type_3_buffer[697] == 1) { s9(110, 484); printMessage(64, 868, 0); }
	} if (g10(119, -1))
	{
		if (m1(119) || object_type_3_buffer[697] == 1) {
			l12(0, 722, 30); object_type_3_buffer[722] += object_type_3_buffer[724]; l12(0, 721, 12);
			modifyObjectFlag('c', 434, 8); l12(0, 119, 2); s9(119, 485); printMessage(64, 119, 0);
		}
	} if (object_type_3_buffer[697] == 1)
	{
		printMessage(64, 984, 0);
	} if (!k3(134, 20, 101, 7, 38, 22, 11, 24, 25, 121, -1)) return 0;
	printMessage(64, 867, 0);
} int j46() {
	if (isObjectFlagSet(t11(670), 0)) {
		if (g10(t11(object_type_3_buffer[670]), -1))
		{
			printMessage(64, 874, 0);
		}
	}
} int q40() {
	if (!m1(99)) return; if (!g10(99, -1)) return
		0; printMessage(76, 872, 670);
} int o29() {
	if (!m1(89)) return; if (!g10(89, -1)) return
		0; printMessage(76, 1694, 89);
} int m26() {
	if (!m1(103)) return; if (g10(103, -1) &&
		object_type_3_buffer[103] < 2) {
		if (m5(123, -1)) {
			l12(0, 103, 2); l12(0, 123, 2); printMessage(76, 1362, 669);
		} printMessage(76, 1548, 669);
	}
} int x36() {
	if (!m1(259)) return; if (object_type_3_buffer[w9] == 259)
	{
		printMessage(64, 873, 0);
	} printMessage(76, 818, 259);
} int c34() {
	if (object_type_3_buffer[697] > 1) {
		if (isObjectFlagSet(t11(670), 0))
		{
			if (g10(t11(object_type_3_buffer[670]), -1)) {
				if (isObjectFlagSet(t11(670), 8) && !m1(106) && !m1(107)
					&& !m1(82)) {
					printMessage(64, 915, 0);
				} printMessage(64, 873, 0);
			}
		}
	}
} int u17() {
	if (isObjectFlagSet(t11(671), 6)
		|| isObjectFlagSet(t11(672), 6) || object_type_3_buffer[672] == 0) {
		printMessage(64, 896, 0);
	} p9(object_type_3_buffer[672], -2);
} int
v33() {
	if (object_type_3_buffer[w9] == 243) { printMessage(64, 1595, 0); } if (object_type_3_buffer[w9] == 151 || object_type_3_buffer[w9] == 150
		|| object_type_3_buffer[w9] == 152 || object_type_3_buffer[w9] == 165 || object_type_3_buffer[w9] == 166 || object_type_3_buffer[w9] == 230 || object_type_3_buffer[w9] == 237
		|| object_type_3_buffer[w9] == 239 || object_type_3_buffer[w9] == 244 || object_type_3_buffer[w9] == 431 || object_type_3_buffer[w9] == 432 || object_type_3_buffer[w9] == 434
		|| g10(21, -1)) {
		printMessage(64, 866, 0);
	} printMessage(72, 818, 584);
} int s10() {
	if (object_type_3_buffer[w9] == 225
		|| object_type_3_buffer[w9] == 392 || object_type_3_buffer[w9] == 429) {
		printMessage(64, 1234, 0);
	} printMessage(76, 818, 73);
} int u8()
{
	if (object_type_3_buffer[w9] == 408) { printMessage(64, 1435, 0); } if (g10(18, -1)) { printMessage(64, 780, 0); }
	printMessage(76, 818, 18);
} int f4() {
	if (object_type_3_buffer[w9] == 255 || object_type_3_buffer[w9] == 256 || object_type_3_buffer[w9] == 257)
	{
		printMessage(64, 1470, 0);
	} printMessage(76, 818, 14);
} int m27() {
	if (!k3(501, 497, 498, 504, 503, 500,
		505, 496, 506, 499, 511, 502, 579, 510, 509, 508, 507, 581, -1)) return 0; (*command_dispatch_table[object_type_3_buffer[670]])();
	longjmp(done_with_command, 1);
} int v47() { if (object_type_3_buffer[697] == 2) { longjmp(done_with_command, 1); } } int d27()
{
	if (isObjectFlagSet(t11(710), 0)) { printMessage(64, 1013, 0); } l12(0, 699, 1); if (!(isObjectFlagSet(t11(710), 5)))
	{
		printMessage(9, 1055, 30); if (!(y10(1012))) { l12(0, 699, 0); }
	} if (object_type_3_buffer[699] == 0) {
		printMessage(66, 719, 0);
	} l12(0, 711, 1999); b10(1, 699); if (object_type_3_buffer[699] == 0) {
		if (isObjectFlagSet(t11(710), 5))
		{
			if (y10(1060)) { printMessage(2, 719, 0); printMessage(64, 776, 0); }
		} printMessage(2, 719, 0); printMessage(0, 776, 0);
		r7();
	}
	else { printMessage(64, 1056, 0); }
} int b21() {
	if (isObjectFlagSet(t11(710), 5)) {
		l12(0, 699, 1);
	}
	else { b10(12, 699); if (object_type_3_buffer[699] > 0) { printMessage(64, 1074, 0); } l12(0, 699, 0); }
	b10(6, 699); b10(2, 699); if (object_type_3_buffer[699] == 0) {
		b10(7, 700); if (object_type_3_buffer[700] == 1) {
			modifyObjectFlag('s', t11(710), 5);
		}
		else { modifyObjectFlag('c', t11(710), 5); } b10(8, 699); if (isObjectFlagSet(t11(710), 5)
			|| object_type_3_buffer[699] > 30) {
			if (object_type_3_buffer[99] == 1) { object_type_3_buffer[698] += 1; } if (!(y10(1059))) {
				b10(3, 699);
			} p9(object_type_3_buffer[671], -1); printMessage(2, 719, 0); printMessage(0, 776, 0);
		}
		else {
			printMessage(9, 1061, 30); printMessage(0, 776, 0);
			r7();
		}
	}
	else {
		if (object_type_3_buffer[699] == 1) { printMessage(0, 1057, 0); object_type_3_buffer[712] -= 1; }
		else {
			if (y10(1058)) { b10(3, 699); } printMessage(2, 719, 0);
		}
	} longjmp(done_with_command, 1);
} int k19()
{
	if (m1(81) && g10(81, -1)) { if (isObjectFlagSet(81, 13)) { j37(); } printMessage(64, 1270, 0); }
	if (object_type_3_buffer[697] == 1 && g10(81, 1037)) { j37(); } if (m1(113)) {
		printMessage(64, 814, 0);
	} if (object_type_3_buffer[697] == 1 || m1(112) || m1(111) || m1(114)) {
		if (isObjectFlagSet(t11(671), 9)
			&& !m1(111) && !m1(114)) {
			f3(699, 869); l12(0, 700, 900); a25();
		} if (m1(111)
			|| m1(114)) {
			if (!(m5(t11(object_type_3_buffer[670]), -1))) {
				if (q8(t11(object_type_3_buffer[670]), -1)) {
					printMessage(76, 1700, 670);
				} printMessage(76, 818, 670);
			} z5(699, 670); if (object_type_3_buffer[699] == 4) { printMessage(64, 1702, 0); } if (m1(114)
				&& object_type_3_buffer[114] < 2) {
				printMessage(64, 1703, 0);
			} if (object_type_3_buffer[699] == 2) { printMessage(76, 1701, 670); }
		} if
			(g10(111, 3) && !m1(114)) {
			f3(699, 871); l12(0, 111, 2); l12(0, 700, 600); a25();
		} if (g10(114, 3)) { f3(699, 1367); l12(0, 114, 2); l12(0, 700, 400); a25(); }
		if (m1(112)) { printMessage(76, 818, 670); } printMessage(64, 1064, 0);
	} if (isObjectFlagSet(t11(670), 0)) {
		if (g10(t11(object_type_3_buffer[670]), -1)) {
			if (m1(118)) { printMessage(64, 1422, 0); } printMessage(64, 915, 0);
		} printMessage(76, 818, 670);
	} printMessage(64, 814, 0);
} int z22() { printMessage(64, 779, 0); } int q35()
{
	b10(4, 699); longjmp(done_with_command, 1);
} int t34() {
	if (g10(89, -1)) {
		l12(0, 89, 2);
		printMessage(64, 1256, 0);
	} printMessage(64, 1445, 0);
} int p44() {
	if (!m1(120)) return; if (object_type_3_buffer[w9] == 137
		|| object_type_3_buffer[w9] == 391 || object_type_3_buffer[w9] == 403) {
		printMessage(64, 1459, 0);
	} if (object_type_3_buffer[w9] == 140) {
		modifyObjectFlag('s', t11(697), 4);
		if (object_type_3_buffer[120] == 0) { printMessage(0, 120, 0); l12(0, 120, 1); } printMessage(0, 120, 0); modifyObjectFlag('c', t11(697), 4);
		longjmp(done_with_command, 1);
	}
} int o30() {
	if (object_type_3_buffer[697] > 1) {
		if (m1(88)) {
			if (g10(86, 0))
			{
				printMessage(76, 1716, 670);
			} if (g10(86, 1)) { printMessage(64, 1331, 0); } if (g10(88, -1)) {
				printMessage(64, 1316, 0);
			}
		} if (m1(71) && m5(89, -1) && !g10(71, -1)) {
			printMessage(64, 1255, 0);
		} if (m1(660) && g10(71, -1)) { u23(); } if (m1(124)) {
			if (object_type_3_buffer[w9] == 229)
			{
				printMessage(64, 1010, 0);
			}
		} if (isObjectFlagSet(t11(670), 0)) {
			if (g10(t11(object_type_3_buffer[670]), -1)) {
				if
					(m1(108)) {
					printMessage(64, 1002, 0);
				} if (m1(29)) { printMessage(64, 1003, 0); } if (m1(89))
				{
					printMessage(64, 1255, 0);
				} if (m1(660) && object_type_3_buffer[w9] == 434 || m1(71)) { u23(); } if (m1(70))
				{
					printMessage(64, 1344, 0);
				} if (m1(107)) { k21(); } if (m1(34)) {
					printMessage(64, 1004, 0);
				}
			}
		}
		else { printMessage(64, 915, 0); }
	}
} int a23() {
	printMessage(0, 1077, 0); b10(5, 699); longjmp(done_with_command, 1);
} int j35() {
	if (object_type_3_buffer[726] == 0) { l12(0, 726, 1); }
	else { l12(0, 726, -1); }
	v39();
} int x27() {
	if (object_type_3_buffer[726] == 1) { l12(0, 726, 2); }
	else {
		l12(0, 726, -1);
	} v39();
} int r25() {
	if (object_type_3_buffer[726] == 2) { l12(0, 726, 3); }
	else {
		l12(0, 726, -1);
	} v39();
} int e23() {
	if (object_type_3_buffer[726] == 3) { l12(0, 726, 4); }
	else {
		l12(0, 726, -1);
	} v39();
} int h22() {
	if (object_type_3_buffer[726] == 4) {
		l12(0, 726, -1); modifyObjectFlag('s', t11(710), 5);
		modifyObjectFlag('c', t11(710), 0);
	}
	else { l12(0, 726, -1); } printMessage(64, 1516, 0);
} int v35()
{
	if (object_type_3_buffer[w9] == 461) { printMessage(64, 1346, 0); } if ((437 <= object_type_3_buffer[671] && object_type_3_buffer[671] <= 461))
	{
		printMessage(64, 1347, 0);
	} printMessage(64, 1022, 0);
} int g30() { printMessage(64, 865, 0); } int m23()
{
	if (g10(31, 0)) {
		l12(0, 31, 1); modifyObjectFlag('c', 254, 8); l12(0, 733, 9); if (object_type_3_buffer[135] < 4)
		{
			s9(135, 485); l12(0, 135, 0);
		} printMessage(64, 1139, 0);
	} printMessage(64, 828, 0);
} int y19()
{
	if (m1(500)) { printMessage(64, 804, 0); } if (isObjectFlagSet(t11(710), 9)) {
		modifyObjectFlag('c', t11(710), 9);
		printMessage(64, 828, 0);
	} if (object_type_3_buffer[717] > 2 || !(isObjectFlagSet(324, 4)) || !g10(99, -1)) {
		printMessage(64, 828, 0);
	} modifyObjectFlag('s', t11(710), 9); printMessage(66, 719, 0);
} int d28() {
	if (isObjectFlagSet(t11(710), 9)) {
		if (m5(99, -1)) { printMessage(0, 1085, 0); j38(); } if (object_type_3_buffer[698] > 40) {
			s9(99, 485); l12(0, 39, 3);
			l12(0, 99, 0); l12(0, 698, 0); if (d2(100) < 50) {
				printMessage(0, 1086, 0); b26(); if (object_type_3_buffer[699] == 1)
				{
					printMessage(0, 805, 0);
				}
			}
			else { printMessage(0, 1087, 0); j38(); }
		}
		else {
			modifyObjectFlag('s', t11(755), 8);
			printMessage(0, 1088, 0); object_type_3_buffer[698] += 300; l12(0, 99, 1);
		}
	}
	else { printMessage(0, 828, 0); } longjmp(done_with_command, 1);
} int KilobyteInputBuffer7() { printMessage(64, 828, 0); } int y18() {
	if (object_type_3_buffer[116] == 0 || !g10(116, -1))
	{
		printMessage(0, 828, 0);
	}
	else {
		if (m5(116, -1)) { printMessage(8, 1334, 0); }
		else {
			printMessage(8, 1334, 1);
		} if (isObjectFlagSet(t11(710), 10)) { printMessage(0, 1336, 0); } s9(116, 485); s9(64, object_type_3_buffer[671]); modifyObjectFlag('s', 64, 4);
		l12(0, 733, 7);
	} longjmp(done_with_command, 1);
} int z20() { r30(); } int v28() {
	r30();
} int o17() { r30(); } int i33() { r30(); } int p31() {
	if (m1(60)) {
		(*command_dispatch_table[569])();
	} if ((object_type_3_buffer[697] == 1 || m1(28)) && g10(28, -1)) {
		s9(28, 484); p9(239, -1163);
	} if ((object_type_3_buffer[697] == 1 || m1(82)) && g10(82, -1)) {
		if (object_type_3_buffer[717] == 3) {
			*getObjectPointer(675) =
				-1; object_type_3_buffer[675] = OBJECT_TYPE_0_MIN_ID - 1; while (++object_type_3_buffer[675] <= OBJECT_TYPE_0_MAX_ID) {
				if (m5(t11(object_type_3_buffer[675]), -1)) {
					s9(object_type_3_buffer[675], 485);
				}
			} l12(0, 717, 4); modifyObjectFlag('s', 243, 4); p9(243, -1380);
		} printMessage(0, 1274, 0); r7();
	}
}
int n21() {
	modifyObjectFlag('s', 27, 14); if (isObjectFlagSet(t11(671), 7) || object_type_3_buffer[717] > 2) {
		printMessage(0, 828, 0);
	}
	else {
		if (g10(111, 3) || isObjectFlagSet(t11(671), 9)) {
			if (d2(100) < 85) {
				printMessage(0, 828, 0);
			}
			else {
				if (d2(100) < 95) { printMessage(0, 1171, 0); j38(); } printMessage(0, 1172, 0); if (y10(1173))
				{
					printMessage(0, 1174, 0);
				} r7();
			}
		}
		else {
			if (g10(115, -1) || g10(116, -1)) {
				if
					(g10(115, -1)) {
					printMessage(0, 1175, 0); s9(115, 485);
				} if (g10(116, -1)) {
					printMessage(0, 1176, 0);
					s9(116, 485);
				}
			}
			else {
				object_type_3_buffer[699] = d2(3); object_type_3_buffer[699] *= 2; if (object_type_3_buffer[134] > 1) {
					object_type_3_buffer[699] += 1;
				} if (g10(134, -1)) {
					if (d2(100) < 70) {
						f3(700, 1177); object_type_3_buffer[699]
							+= object_type_3_buffer[700]; printMessage(2, 699, 0); l12(1, 704, 134); r27();
					}
					else {
						f3(700, 1183); object_type_3_buffer[699]
							+= object_type_3_buffer[700]; printMessage(2, 699, 0); j38();
					}
				}
				else { printMessage(0, 828, 0); }
			}
		}
	} longjmp(done_with_command, 1);
}
