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
	} if (isItemAtLocation(t11(object_type_3_buffer[670]), -1)) {
		d34(); if (object_type_3_buffer[PLAYER_LOCATION] == 393 && !(isObjectFlagSet(t11(670), 15))
			|| object_type_3_buffer[PLAYER_LOCATION] == 415 || object_type_3_buffer[PLAYER_LOCATION] == 418 || object_type_3_buffer[PLAYER_LOCATION] == 417 || isObjectFlagSet(t11(671), 13)) {
			set_object_location(object_type_3_buffer[670], 419);
			if (currentCommandContains(110)) {
				set_object_location(110, 484); if (g10(91, -1)) {
					printMessage(0, 1293, 0); if (object_type_3_buffer[91] > 1)
					{
						printMessage(0, 1294, 0);
					} l12(0, 91, 0); longjmp(done_with_command, 1);
				}
			} printMessage(12, 1544, 670); if (object_type_3_buffer[PLAYER_LOCATION] == 393
				|| object_type_3_buffer[PLAYER_LOCATION] == 415) {
				if (object_type_3_buffer[PLAYER_LOCATION] == 393) { f3(701, 1601); }
				else {
					f3(701, 1263);
				}
			}
			else { f3(701, 1295); } if (isObjectFlagSet(t11(670), 11)) { printMessage(11, 701, 1); }
			else {
				printMessage(11, 701, 0);
			} longjmp(done_with_command, 1);
		} if (object_type_3_buffer[PLAYER_LOCATION] == 204) {
			set_object_location(object_type_3_buffer[670], 203); printMessage(12, 1544, 670);
			if (isObjectFlagSet(t11(670), 11)) { printMessage(9, 1076, 1); }
			else { printMessage(9, 1076, 0); } longjmp(done_with_command, 1);
		} set_object_location(object_type_3_buffer[670], PLAYER_LOCATION); if (currentCommandContains(89) && object_type_3_buffer[89] == 0) {
			modifyObjectFlag('s', t11(697), 4); printMessage(0, 89, 0);
			modifyObjectFlag('c', t11(697), 4); l12(0, 89, 1);
		}
		else {
			if (currentCommandContains(80) && object_type_3_buffer[PLAYER_LOCATION] == LOCATION_BUILDING && !(isObjectFlagSet(80, 5)))
			{
				printMessage(12, 1267, 670); modifyObjectFlag('s', 80, 5);
			}
			else {
				if (currentCommandContains(114)) {
					printMessage(12, 1489, 669);
					printMessage(12, 1491, 114); if (object_type_3_buffer[114] == 4) { printMessage(12, 1493, 113); }
					else {
						if (object_type_3_buffer[114] == 3)
						{
							printMessage(12, 1493, 112);
						}
						else { printBlankLine(); }
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
		|| currentCommandContains(COMMAND_RETREAT) || currentCommandContains(617) || currentCommandContains(COMMAND_EXIT) || currentCommandContains(COMMAND_ENTER)) {
		(*command_by_location_dispatch_table[object_type_3_buffer[670]])();
	}
	else
	{
		if (isObjectFlagSet(t11(670), 1)) {
			if (object_type_3_buffer[PLAYER_LOCATION] == t11(object_type_3_buffer[670])) { printMessage(64, 845, 0); } printMessage(64, 937, 0);
		} if (currentCommandContains(19) || currentCommandContains(134) || currentCommandContains(82) || currentCommandContains(16) || currentCommandContains(38) || currentCommandContains(85)) {
			if (g10(t11(object_type_3_buffer[670]), -1))
			{
				printMessage(76, 1587, 670);
			} printMessage(76, 818, 670);
		} printMessage(64, 1516, 0);
	}
} int t33() {
	printMessage(64, 863, 0);
} int f21() {
	if (object_type_3_buffer[PLAYER_LOCATION] == 142 || object_type_3_buffer[PLAYER_LOCATION] == 626 || object_type_3_buffer[PLAYER_LOCATION] == 136 || object_type_3_buffer[PLAYER_LOCATION] == 143
		|| object_type_3_buffer[PLAYER_LOCATION] == 144 || object_type_3_buffer[PLAYER_LOCATION] == LOCATION_BUILDING) {
		printMessage(64, 844, 0);
	} printMessage(64, 845, 0);
} 

int e9()
{
	if (!(g10(111, 4) || g10(114, 4) || g10(113, -1))) {
		if (isItemAtLocation(118, -1)) {
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
	} if (currentCommandContains(6)) {
		o25(); if (object_type_3_buffer[6] == 0) {
			l12(0, 6, 1); 
			printMessage(64, 919, 0);
		} printMessage(12, 1489, 113); printMessage(76, 1490, 6);
	} if (currentCommandContains(11)) { o25(); printMessage(64, 917, 0); }
	if (currentCommandContains(72)) { o25(); l12(0, 72, 1); printMessage(64, 1693, 0); } if (currentCommandContains(115)) {
		printMessage(64, 1656, 0);
	} if (currentCommandContains(116)) {
		f3(701, 1704); if (object_type_3_buffer[116] == 0) { object_type_3_buffer[701] += 1; } printMessage(66, 701, 0);
	}
} 
int f26() {
	if (!currentCommandContains(11)) 
		return; 

	if (g10(11, -1)) {
		if (isItemAtLocation(114, 3) || isItemAtLocation(111, 3)) {
			if (!(isItemAtLocation(111, 3))) { 
				l12(0, 114, 2); 
				printMessage(64, 1366, 0); // Your flask is now empty, but I don't think that trickle of water is going to do anything much.
			} 
			l12(0, 111, 2);
			o23();
		} else { 
			printMessage(12, 1027, 669);  // You have no !
		}
	} else { 
		printMessage(12, 818, 670); // I see no  here.
	} 
	longjmp(done_with_command, 1);
} 

int p40() {
	if (!currentCommandContains(6)) return; if (g10(6, -1)) {
		if (isItemAtLocation(114, 3) || isItemAtLocation(111, 3))
		{
			if (isItemAtLocation(111, 3)) { l12(0, 111, 2); }
			else { l12(0, 114, 2); } l12(0, 6, 0); printMessage(64, 918, 0);
		} printMessage(76, 1027, 112);
	} printMessage(76, 818, 6);
} int t42() {
	if (!currentCommandIsOneOf(115, 116, -1)) return
		0; b26(); if (object_type_3_buffer[699] == 0) { o21(); }
} int t43() {
	if (!currentCommandContains(112)) return;
	if (isItemAtLocation(114, 3) || isItemAtLocation(111, 3)) { h24(); longjmp(done_with_command, 1); } printMessage(76, 1027, 670);
}
int v42() {
	if (!currentCommandContains(113)) return; if (isItemAtLocation(114, 4) || isItemAtLocation(111, 4)) {
		h24(); longjmp(done_with_command, 1);
	} printMessage(76, 1027, 670);
} int x33() {
	if (!currentCommandContains(110)) return; if (!isItemAtLocation(110, -1))
		return 0; if (g10(22, -1)) { printMessage(64, 994, 0); } if (g10(134, -1)) {
		set_object_location(110, PLAYER_LOCATION);
		modifyObjectFlag('s', 134, 14); printMessage(64, 908, 0);
	} if (g10(38, -1)) {
		set_object_location(110, 484); l12(0, 38, 1);
		if (object_type_3_buffer[115] == 1) { l12(0, 115, 0); } printMessage(64, 977, 0);
	} if (g10(91, -1)) {
		printMessage(0, 1293, 0);
		set_object_location(110, 484); if (object_type_3_buffer[91] > 1) { printMessage(64, 1294, 0); } longjmp(done_with_command, 1);
	}
} int w29()
{
	if (!currentCommandContains(117)) return; if (!isItemAtLocation(117, -1)) return 0; v38();
} int v43() {
	if (!currentCommandContains(118)) return; if (!isItemAtLocation(118, -1)) return 0; t37();
} int c32() {
	if
		(object_type_3_buffer[697] == 2) {
		if (isObjectFlagSet(t11(670), 0)) {
			if (isItemAtLocation(t11(object_type_3_buffer[670]), -1) && isObjectFlagSet(t11(671), 12))
			{
				d34(); n24();
			}
		}
	} (*command_by_location_dispatch_table[535])();
} int i38() {
	if (object_type_3_buffer[697] > 1) {
		if (currentCommandContains(117))
		{
			if (isItemAtLocation(117, -1)) { v38(); } printMessage(76, 1027, 670);
		} printMessage(64, 915, 0);
	}
} int o20()
{
	modifyObjectFlag('s', 16, 13); if (object_type_3_buffer[697] > 1) {
		if (!(isObjectFlagSet(t11(670), 0))) { return 0; } if
			(!(isObjectFlagSet(t11(670), 3))) {
			printMessage(64, 814, 0);
		} if (!(isItemAtLocation(t11(object_type_3_buffer[670]), -1))) {
			printMessage(76, 817, 670);
		}
	}
	else {
		printMessage(0, 1643, 0); if (g10(16, -1)) { printMessage(64, 776, 0); } printMessage(64, 1644, 0);
	} if (currentCommandContains(102)) {
		if (g10(8, -1)) {
			if (object_type_3_buffer[717] < 2) {
				object_type_3_buffer[8] += 1; if (object_type_3_buffer[8] == 2)
				{
					l12(0, 8, 0); modifyObjectFlag('s', 8, 10); set_object_location(9, 484);
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
						+= 1; if (object_type_3_buffer[30] == 4) { l12(0, 30, 0); modifyObjectFlag('s', 30, 10); set_object_location(9, 484); }
						else {
							modifyObjectFlag('c', 30, 10);
						}
				}
				else { printMessage(0, 828, 0); }
			}
		}
	}
	else {
		if (currentCommandContains(115) || currentCommandContains(116)) {
			b26(); if
				(object_type_3_buffer[699] == 1) {
				printMessage(76, 1642, 670);
			} o21();
		}
		else { printMessage(0, 828, 0); }
	} longjmp(done_with_command, 1);
} 

int d29() { 
	r29(); 
} 

int d30() { 
	r29(); 
} 

int l24() { 
	r29(); 
}

int k18()
{
	r29();
} int t28() { r29(); } int x25() { r29(); } int i34() {
	r29();
} int a22() { r29(); } int v29() { r29(); } int i35() { r29(); } int w23()
{
	l12(0, 700, 0); *getObjectPointer(675) = -1; object_type_3_buffer[675] = ITEM_MIN_ID - 1; while (++object_type_3_buffer[675] <= ITEM_MAX_ID) {
		if (isItemAtLocation(t11(object_type_3_buffer[675]), -1))
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
	
	if (!currentCommandIsOneOf(584, 73, 18, 14, 605, -1)) return 0; 
	(*command_by_location_dispatch_table[object_type_3_buffer[670]])();
} 

int h34()
{
	if (!currentCommandIsOneOf(120, 88, 71, 108, 70, -1)) return 0; (*command_by_location_dispatch_table[562])(); longjmp(done_with_command, 1);
} int s33() {
	if (!currentCommandContains(113)) return; if (g10(111, 4) || g10(113, -1)) {
		printMessage(64, 1451, 0);
	} if (g10(118, -1)) { printMessage(64, 1421, 0); }
} int n29() {
	if (!currentCommandContains(11)) return;
	if (g10(12, -1) && object_type_3_buffer[12] > 0 || g10(11, -1)) { printMessage(76, 1590, 11); } printMessage(76, 818, 670);
} int a31() {
	if (!currentCommandContains(112)) return; if (g10(111, 3) || isObjectFlagSet(t11(671), 9)) {
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
					(!(object_type_3_buffer[PLAYER_LOCATION] == t11(object_type_3_buffer[670]))) {
					printMessage(64, 1676, 0);
				}
			}
			else { printMessage(64, 965, 0); }
		}
	}
	if (!currentCommandIsOneOf(9, ITEM_ORB, -1)) return 0; if (currentCommandContains(9)) { s31(); }
	else {
		if (currentCommandContains(ITEM_ORB)) {
			(*command_by_location_dispatch_table[604])();
		}
	} longjmp(done_with_command, 1);
} int v44() {
	if (!currentCommandContains(114)) return; if (object_type_3_buffer[114] < 2) {
		printMessage(64, 1600, 0);
	}
} int a32() {
	if (!currentCommandContains(107)) return; if (object_type_3_buffer[717] == 3 && object_type_3_buffer[107] == 0 && isItemAtLocation(107, -1))
	{
		l12(0, 107, 1); printMessage(64, 1386, 0);
	}
} int e31() {
	if (currentCommandContains(43) && object_type_3_buffer[43] > 1) {
		printMessage(76, 1606, 43);
	} if (isObjectFlagSet(t11(670), 0) || isObjectFlagSet(t11(670), 1)) {
		modifyObjectFlag('s', t11(697), 4);
		printMessage(2, 670, 0); modifyObjectFlag('c', t11(697), 4); if (currentCommandContains(89) && object_type_3_buffer[89] == 0) {
			l12(0, 89, 1);
		} longjmp(done_with_command, 1);
	} if (isObjectFlagSet(t11(670), 2)) {
		if ((615 <= object_type_3_buffer[670] && object_type_3_buffer[670] <= 629))
		{
			printMessage(64, 965, 0);
		} if ((630 <= object_type_3_buffer[670] && object_type_3_buffer[670] <= 663)) {
			if (currentCommandContains(661)) {
				if
					(isObjectFlagSet(t11(671), 7)) {
					printMessage(64, 915, 0);
				} printMessage(76, 1541, 670);
			} if (currentCommandContains(660)) {
				printMessage(64, 965, 0);
			} printMessage(76, 818, 670);
		} printMessage(64, 915, 0);
	}
} int i39() {
	if (!(object_type_3_buffer[697] == 1 || currentCommandContains(ITEM_ORB)))
	{
		printMessage(64, 814, 0);
	} b26(); if (object_type_3_buffer[699] == 1) { printMessage(64, 1415, 0); } if (g10(ITEM_ORB, -1))
	{
		modifyObjectFlag('s', t11(755), 4); l32(); f3(700, 1403); object_type_3_buffer[700] += object_type_3_buffer[699]; printMessage(0, 1402, 0);
		printMessage(2, 700, 0); printMessage(64, 1414, 0);
	} if (object_type_3_buffer[PLAYER_LOCATION] == 394 && item_location[ITEM_ORB] == 393) {
		printMessage(64, 1227, 0);
	} printMessage(64, 1416, 0);
} int j31() {
	if (currentCommandContains(546)) { (*command_by_location_dispatch_table[546])(); } if (currentCommandContains(99)
		|| currentCommandContains(545) || object_type_3_buffer[697] == 1) {
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
					if (g10(85, -1)) { h23(); } l12(0, 697, 1); (*command_by_location_dispatch_table[COMMAND_LOOK])();
				} b28();
			}
			else
			{
				printMessage(0, 996, 0);
			}
		}
		else {
			if (currentCommandContains(99)) { printMessage(76, 818, 670); } printMessage(64, 824, 0);
		} longjmp(done_with_command, 1);
	}
} int f20() {
	if (currentCommandContains(99) || currentCommandContains(546) || object_type_3_buffer[697] == 1) {
		if (g10(99, -1)) {
			if (object_type_3_buffer[99] == 0) { printMessage(72, 826, 0); } l12(0, 99, 0); printMessage(8, 825, 0);
			b26(); if (object_type_3_buffer[699] == 1) { printMessage(0, 805, 0); } b28();
		}
		else {
			if (currentCommandContains(99)) {
				printMessage(76, 818, 670);
			} return 0;
		}
	}
	else { printMessage(64, 949, 0); } longjmp(done_with_command, 1);
} int KilobyteInputBuffer8() {
	e6(0, object_type_3_buffer[PLAYER_LOCATION], 9);
	if (currentCommandContains(4) && object_type_3_buffer[4] == 0 && !isItemAtLocation(ITEM_KEYS, -1)) { printMessage(64, 820, 0); } (*command_by_location_dispatch_table[536])();
}
int u31() {
	if (!currentCommandContains(259)) return; if (object_type_3_buffer[PLAYER_LOCATION] == 259) {
		if (g10(27, -1)) {
			set_object_location(27, LOCATION_LIMBO);
			modifyObjectFlag('s', 27, 13); printMessage(64, 1154, 0);
		} printMessage(64, 1156, 0);
	} printMessage(76, 818, 670);
} int d36()
{
	if (currentCommandContains(579)) { printMessage(64, 837, 0); } e6(0, object_type_3_buffer[PLAYER_LOCATION], 9); if (object_type_3_buffer[697] == 2 && !g10(t11(object_type_3_buffer[670]), -1))
	{
		printMessage(76, 818, 670);
	} if (!currentCommandIsOneOf(111, 42, 49, 100, 106, 107, 118, ITEM_KEYS, 93, -1)) return
		0; if (currentCommandContains(111)) { printMessage(64, 1465, 0); } if (currentCommandContains(42)) { printMessage(64, 1464, 0); } if (currentCommandContains(49))
	{
		printMessage(64, 1383, 0);
	} if (currentCommandContains(100)) { printMessage(66, 719, 0); } if (currentCommandContains(106) || currentCommandContains(107))
	{
		z27();
	} if (currentCommandContains(118)) { t37(); } if (currentCommandContains(ITEM_KEYS)) { printMessage(64, 842, 0); } if (currentCommandContains(73))
	{
		if (object_type_3_buffer[PLAYER_LOCATION] == 225) { printMessage(64, 1597, 0); } printMessage(64, 1598, 0);
	} if (currentCommandContains(93)) {
		printMessage(64, 1254, 0);
	}
} int t44() {
	if (!currentCommandIsOneOf(4, 63, 35, -1)) return 0; z5(699, 670); if (object_type_3_buffer[699] == 1)
	{
		printMessage(76, 1127, 670);
	} if (!(currentCommandContains(35) || isItemAtLocation(ITEM_KEYS, -1))) {
		if (currentCommandContains(4)) {
			printMessage(76, 1699, 669);
		} printMessage(64, 820, 0);
	}
} int q39() {
	if (!currentCommandContains(4)) return; if (object_type_3_buffer[717] > 1 || isObjectFlagSet(t11(710), 3))
	{
		printMessage(0, 823, 0); if (object_type_3_buffer[717] > 1) {
			modifyObjectFlag('s', t11(710), 4); if (!(isObjectFlagSet(4, 13))) {
				modifyObjectFlag('s', 4, 13);
				printMessage(64, 934, 0);
			}
		} longjmp(done_with_command, 1);
	} l12(0, 4, 1); modifyObjectFlag('c', 144, 8); l12(0, 699, 1);
	if (currentCommandContains(536)) { object_type_3_buffer[699] += 1; } printMessage(76, 822, 699);
} int n30() {
	if (!currentCommandContains(63))
		return; if (object_type_3_buffer[38] == 0) { printMessage(64, 827, 0); } l12(0, 63, 1); l12(0, 38, 2); printMessage(64, 980, 0);
} int p41() {
	if (!currentCommandContains(6)) return; if (!g10(6, -1)) return 0; if (object_type_3_buffer[6] == 0)
	{
		printMessage(64, 916, 0);
	} printMessage(66, 719, 0);
} int u32() {
	if (!currentCommandContains(35)) return; if (!g10(35, -1))
		return 0; if (object_type_3_buffer[35] == 0) { printMessage(64, 1126, 0); } if (object_type_3_buffer[35] == 1) {
		printMessage(76, 1127, 670);
	} printMessage(64, 1128, 0);
} int b32() {
	if (!currentCommandContains(114)) return; if (!g10(114, -1)) return
		0; if (object_type_3_buffer[114] < 2) {
		l12(0, 114, 2); if (item_location[114] == 259) {
			set_object_location(27, 259); printMessage(64, 1152, 0);
		} printMessage(64, 1153, 0);
	} printMessage(76, 1127, 670);
} int e32() {
	if (currentCommandContains(617) && isObjectFlagSet(t11(710), 5))
	{
		j41();
	} e6(0, object_type_3_buffer[PLAYER_LOCATION], 9); if (object_type_3_buffer[697] == 2 && !g10(t11(object_type_3_buffer[670]), -1)) {
		printMessage(76, 818, 670);
	} if (!currentCommandIsOneOf(111, 6, 100, 114, -1)) return 0; if (currentCommandContains(111)) { printMessage(64, 1465, 0); } if
		(currentCommandContains(6)) {
		printMessage(64, 821, 0);
	} if (currentCommandContains(100)) { printMessage(66, 719, 0); } if (currentCommandContains(114)) {
		if (object_type_3_buffer[114] < 2) { printMessage(76, 1129, 670); } printMessage(64, 1602, 0);
	}
} int u33() {
	if (!currentCommandIsOneOf(4, 63, 35, -1))
		return 0; z5(699, 670); if (object_type_3_buffer[699] != 1) { printMessage(76, 1129, 670); } c16(670, 0);
	if (currentCommandContains(4)) { printMessage(72, 822, 0); } if (currentCommandContains(35)) { printMessage(64, 1130, 0); } if (object_type_3_buffer[PLAYER_LOCATION] == 299)
	{
		if (isItemAtLocation(63, -1)) { set_object_location(63, PLAYER_LOCATION); } if (g10(38, -1)) {
			set_object_location(38, PLAYER_LOCATION); l12(0, 38, 1);
			printMessage(64, 982, 0);
		} l12(0, 63, 2); printMessage(64, 981, 0);
	} printMessage(64, 983, 0);
} int e22() {
	if (object_type_3_buffer[PLAYER_LOCATION] == 461) {
		printMessage(9, 1456, 20); if (y10(1457)) {
			object_type_3_buffer[707] += 20; processMoveCommand(136, -object_type_3_buffer[685]);
		} longjmp(done_with_command, 1);
	} if (((168 <= object_type_3_buffer[671] && object_type_3_buffer[671] <= 193) || (300 <= object_type_3_buffer[671]
		&& object_type_3_buffer[671] <= 311) || (328 <= object_type_3_buffer[671] && object_type_3_buffer[671] <= 364)) && !(isObjectFlagSet(t11(671), 8)))
	{
		compute_score(); if (object_type_3_buffer[708] > 99) { printMessage(64, 1648, 0); } printMessage(9, 1647, 20); if (y10(1457))
		{
			object_type_3_buffer[707] += 20; *getObjectPointer(675) = -1; object_type_3_buffer[675] = ITEM_MIN_ID - 1; while (++object_type_3_buffer[675] <= ITEM_MAX_ID) {
				if
					(isItemAtLocation(t11(object_type_3_buffer[675]), 1029)) {
					set_object_location(object_type_3_buffer[675], PLAYER_LOCATION);
				}
			} if (isItemAtLocation(80, -1)) {
				set_object_location(80, PLAYER_LOCATION);
			} printMessage(2, 685, 0); if ((168 <= object_type_3_buffer[671] && object_type_3_buffer[671] <= 193)) { processMoveCommand(167, -2); } if ((300 <= object_type_3_buffer[671]
				&& object_type_3_buffer[671] <= 311)) {
				processMoveCommand(195, -2);
			} if ((328 <= object_type_3_buffer[671] && object_type_3_buffer[671] <= 364)) {
				processMoveCommand(327, -2);
			}
		} longjmp(done_with_command, 1);
	} if (object_type_3_buffer[720] == 0) { l12(0, 720, 1); } if ((object_type_3_buffer[PLAYER_LOCATION] == 427
		|| object_type_3_buffer[PLAYER_LOCATION] == 428) && !(isObjectFlagSet(t11(671), 14))) {
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
		} if (isObjectFlagSet(t11(670), 1)) { processMoveCommand(object_type_3_buffer[670], -object_type_3_buffer[685]); } printMessage(64, 915, 0);
	} if (object_type_3_buffer[697] == 1)
	{
		printMessage(64, 1325, 0);
	} if (g10(t11(object_type_3_buffer[670]), -1)) {
		if (currentCommandContains(60)) {
			printMessage(64, 1552, 0);
		} printMessage(64, 915, 0);
	}
} int i36() {
	if (object_type_3_buffer[697] == 2) {
		if (isObjectFlagSet(t11(670), 8)) {
			(*command_by_location_dispatch_table[549])();
		}
		else {
			if (currentCommandContains(26) && g10(26, -1)) {
				if (g10(28, -1)) {
					printMessage(64, 1164, 0);
				} set_object_location(28, object_type_3_buffer[671]); printMessage(64, 1165, 0);
			} if (currentCommandContains(10)) { (*command_by_location_dispatch_table[COMMAND_BREAK])(); }
		}
	}
} int
n22() {
	b26(); if (object_type_3_buffer[699] == 1) {
		if (object_type_3_buffer[697] == 1 && g10(85, -1) || currentCommandContains(85))
		{
			printMessage(64, 1303, 0);
		} printMessage(64, 1075, 0);
	} if (currentCommandContains(134) && object_type_3_buffer[717] == 3 && g10(134, -1))
	{
		printMessage(0, 1381, 0); die();
	} if (currentCommandContains(34)) { (*command_by_location_dispatch_table[551])(); } e6(0, object_type_3_buffer[PLAYER_LOCATION], 8);
	if (object_type_3_buffer[697] == 1) { if (object_type_3_buffer[670] == 1718) { printMessage(64, 830, 0); } return 0; } if (!currentCommandIsOneOf(22, 134, 20, 7, 101, 38, 107, 106, 24, 17,
		27, 121, 25, 135, 82, 87, 91, 28, -1)) return 0; if (!g10(t11(object_type_3_buffer[670]), -1)) return
		0; if (currentCommandContains(22)) { printMessage(64, 967, 0); } if (currentCommandContains(134)) { h25(); }
		else {
			if (currentCommandContains(20))
			{
				u25();
			}
			else {
				if (currentCommandContains(7)) { printMessage(64, 832, 0); } if (currentCommandContains(17)) {
					printMessage(64, 1138, 0);
				} if (currentCommandContains(38)) { printMessage(76, 975, 38); } if (currentCommandContains(106) || currentCommandContains(107)) {
					printMessage(64, 953, 0);
				} if (currentCommandContains(24)) { l33(); }
				else {
					if (currentCommandContains(135)) {
						if (y10(836)) {
							printMessage(64, 1317, 0);
						} printMessage(12, 1222, 669); printMessage(76, 1223, 670);
					} if (currentCommandContains(27)) { printMessage(64, 1149, 0); } if
						(currentCommandContains(121)) {
						printMessage(0, 1155, 0); die();
					} if (currentCommandContains(25)) {
						if (object_type_3_buffer[25] < 2) {
							printMessage(0, 1145, 0);
							die();
						} printMessage(64, 976, 0);
					} if (currentCommandContains(28)) { printMessage(64, 1646, 0); } if (currentCommandContains(82)) {
						printMessage(64, 1277, 0);
					} if (currentCommandContains(87)) { printMessage(64, 1304, 0); } if (currentCommandContains(91)) { i46(); }
					else {
						if (currentCommandContains(101))
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
	modifyObjectFlag('c', t11(697), 2); f3(719, 777); printMessage(2, 719, 0); printBlankLine(); modifyObjectFlag('s', t11(697), 3);
	y21(); modifyObjectFlag('c', t11(697), 3); longjmp(done_with_command, 1);
} int x34() {
	if (!currentCommandIsOneOf(38, 22, 101, 7, 134, 20, 25,
		121, 82, -1)) return 0; if (g10(t11(object_type_3_buffer[670]), -1)) {
		if (currentCommandContains(38)) {
			if (g10(110, -1))
			{
				l12(0, 38, 1); if (isItemAtLocation(110, -1)) {} set_object_location(110, 484); if (object_type_3_buffer[115] == 1) {
					l12(0, 115, 0);
				} printMessage(64, 977, 0);
			} printMessage(64, 907, 0);
		} if (currentCommandContains(22)) { printMessage(64, 994, 0); } if (currentCommandContains(7))
		{
			if (isItemAtLocation(ITEM_BIRD, -1)) { b27(); printMessage(64, 906, 0); } printMessage(64, 907, 0);
		} if (currentCommandContains(134))
		{
			if (object_type_3_buffer[717] > 1) { printMessage(64, 915, 0); } modifyObjectFlag('s', 134, 14); printMessage(64, 908, 0);
		} if (currentCommandContains(101))
		{
			printMessage(64, 905, 0);
		} if (currentCommandContains(20)) {
			if (object_type_3_buffer[20] == 0) { printMessage(64, 907, 0); } printMessage(64, 976, 0);
		} if (currentCommandContains(25)) { if (object_type_3_buffer[25] < 2) { printMessage(64, 907, 0); } printMessage(64, 976, 0); } if (currentCommandContains(121))
		{
			printMessage(64, 1150, 0);
		} if (currentCommandContains(82)) {
			if (g10(110, -1)) {
				set_object_location(110, 484); set_object_location(84, object_type_3_buffer[671]);
				printMessage(64, 1279, 0);
			} printMessage(64, 1278, 0);
		}
	} printMessage(76, 818, 670);
} int u34() {
	if (!(object_type_3_buffer[697] == 1))
	{
		printMessage(64, 915, 0);
	}
} 

int command_score_595() {
	l12(0, 718, 1); 
	compute_score(); 
	printMessage(13, 1034, 708); 
	printMessage(13, 1035, 709); // If  you  were  to  quit  now,  you  would score a total of 0 points, of a
	printMessage(13, 1036, 712); // possible maximum of 0 points, using  turn.
	longjmp(done_with_command, 1);
} 

int p28() { printMessage(64, 1037, 0); } int p27()
{
	printMessage(64, 800, 0);
} int d31() { printMessage(64, 800, 0); } int u21() {
	printMessage(64, 1475, 0);
} int r23() { printMessage(64, 837, 0); } int v45() {
	if (object_type_3_buffer[717] > 1) {
		printMessage(64, 828, 0);
	} if (!currentCommandIsOneOf(509, 508, 507, 581, -1)) return 0; l12(0, 714, 0); printMessage(64, 804, 0);
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
	if (object_type_3_buffer[697] == 2 && !currentCommandContains(COMMAND_SAY))
	{
		printMessage(64, 858, 0);
	} if (object_type_3_buffer[714] == 2) {
		if (item_location[50] == 222 || isObjectFlagSet(50, 14)) {
			printMessage(0, 828, 0);
			if (item_location[50] == 222) { printMessage(0, 1069, 0); }
		}
		else {
			if (g10(50, -1)) {
				l12(0, 50, 1);
			}
			else { if (object_type_3_buffer[PLAYER_LOCATION] == 222) { l12(0, 50, 0); } else { l12(0, 50, 2); } } if (isItemAtLocation(50, -1))
			{
				set_object_location(50, PLAYER_LOCATION);
			} printMessage(0, 50, 0); l12(0, 50, 0); if (isObjectFlagSet(50, 13)) {
				modifyObjectFlag('c', 50, 13);
				modifyObjectFlag('s', 22, 13); if (object_type_3_buffer[22] == 1 || object_type_3_buffer[22] == 2) {
					if (g10(23, -1)) {
						printMessage(0, 1448, 0);
					} l12(0, 22, 0); set_object_location(22, 244); set_object_location(23, 484);
				}
			} set_object_location(50, 222); if (object_type_3_buffer[135] == 2) {
				l12(0, 135, 3); object_type_3_buffer[757] = cheezy_rand(5 - 3 + 1) + 3;
			}
		} l12(0, 714, 0);
	}
	else { o22(); }
	longjmp(done_with_command, 1);
} int j33() { printMessage(64, 1468, 0); } int t27() {
	printMessage(64, 828, 0);
} int r21() { printMessage(64, 828, 0); } int l28() { printMessage(64, 1466, 0); } int d37() {
	if
		(!currentCommandContains(617)) return; if (isObjectFlagSet(t11(671), 7) && !(isObjectFlagSet(145, 4))) { printMessage(64, 844, 0); }
	printMessage(64, 845, 0);
} int d38() {
	if (object_type_3_buffer[697] > 1) {
		if (isObjectFlagSet(t11(670), 0)) {
			if (isObjectFlagSet(t11(710), 5))
			{
				if (isItemAtLocation(t11(object_type_3_buffer[670]), -1)) { printMessage(76, 813, 670); } t10(676, 670); processMoveCommand(object_type_3_buffer[676], -2);
			} if (g10(t11(object_type_3_buffer[670]), -1)) {
				if (isItemAtLocation(t11(object_type_3_buffer[670]), -1) || currentCommandContains(16)) {
					printMessage(64, 900, 0);
				} printMessage(64, 1400, 0);
			} printMessage(64, 846, 0);
		} if (isObjectFlagSet(t11(670), 1)) {
			if (object_type_3_buffer[PLAYER_LOCATION] == t11(object_type_3_buffer[670]))
			{
				printMessage(64, 938, 0);
			} printMessage(64, 846, 0);
		} printMessage(64, 858, 0);
	}
} int b25() {
	printMessage(64, 949, 0);
} int y24() {
	if (!currentCommandContains(53)) return; if (!g10(53, -1)) return 0; set_object_location(53, LOCATION_LIMBO);
	set_object_location(54, object_type_3_buffer[671]); printMessage(64, 1011, 0);
} int v46() {
	if (!currentCommandContains(118)) return; if (!g10(118, -1))
		return 0; t37();
} int x35() {
	if (!currentCommandContains(10)) return; if (!g10(10, -1)) return
		0; if (object_type_3_buffer[717] == 3) { printMessage(0, 1371, 0); die(); } printMessage(64, 1379, 0);
} int j45() {
	if (!currentCommandContains(53)) return; if (!g10(54, -1)) return 0; printMessage(64, 948, 0);
} int c33()
{
	if (!currentCommandContains(41)) return; if (g10(41, -1)) { printMessage(64, 948, 0); }
} int b33() {
	if
		(!currentCommandContains(53)) return; if (g10(53, -1)) {
		if (isObjectFlagSet(t11(671), 9) || object_type_3_buffer[PLAYER_LOCATION] == 158) {
			if (isItemAtLocation(53, -1)) { object_type_3_buffer[705] -= 1; } set_object_location(53, LOCATION_LIMBO); set_object_location(54, object_type_3_buffer[671]); printMessage(64, 947, 0);
		} printMessage(64, 946, 0);
	}
} int z29() {
	if (!currentCommandContains(114)) return; if (isItemAtLocation(114, -1)) {
		if (object_type_3_buffer[114] < 2) { printMessage(64, 1370, 0); } if (object_type_3_buffer[114] == 2) {
			if (isObjectFlagSet(t11(671), 9))
			{
				l12(0, 114, 3); printMessage(76, 913, 112);
			} if (object_type_3_buffer[PLAYER_LOCATION] == 158) {
				l12(0, 114, 4); printMessage(76, 913, 113);
			} if (isObjectFlagSet(t11(671), 13)) { printMessage(64, 874, 0); } printMessage(76, 911, 114);
		} printMessage(64, 1369, 0);
	} printMessage(76, 1027, 670);
} int p42() {
	if (!currentCommandContains(111)) return; if (isItemAtLocation(111, -1)) {
		if (object_type_3_buffer[111] == 2) {
			if (isObjectFlagSet(t11(671), 9)) { l12(0, 111, 3); printMessage(76, 912, 112); }
			if (object_type_3_buffer[PLAYER_LOCATION] == 158) { l12(0, 111, 4); printMessage(76, 912, 113); } printMessage(76, 911, 111);
		} printMessage(64, 910, 0);
	} printMessage(76, 1027, 670);
} int p43() {
	if (!currentCommandContains(81)) return; if (isItemAtLocation(81, -1)) {
		if
			(isObjectFlagSet(t11(671), 9)) {
			if (object_type_3_buffer[PLAYER_LOCATION] == 412) { printMessage(64, 1268, 0); } modifyObjectFlag('s', 81, 13); modifyObjectFlag('s', 81, 14);
			printMessage(64, 1269, 0);
		} printMessage(76, 911, 81);
	} printMessage(76, 1027, 670);
} int z30() {
	if (object_type_3_buffer[697] > 1
		&& g10(t11(object_type_3_buffer[670]), -1)) {
		printMessage(64, 914, 0);
	}
} int l35() {
	if (!currentCommandIsOneOf(111, 114, 81, 118, -1))
		return 0; if (!(isItemAtLocation(t11(object_type_3_buffer[670]), -1))) { printMessage(76, 1027, 670); }
} int e33() {
	if (!currentCommandContains(81)) return; if (isObjectFlagSet(81, 13)) { printMessage(64, 1322, 0); } printMessage(64, 1270, 0);
}
int n31() {
	if (!currentCommandContains(111)) return; if (g10(111, 4) || g10(111, 3)) {
		f3(670, 112);
		if (g10(111, 4)) { f3(670, 113); } (*command_by_location_dispatch_table[553])();
	}
	else { printMessage(0, 1270, 0); }
	longjmp(done_with_command, 1);
} int f27() {
	if (!currentCommandContains(114)) return; if (object_type_3_buffer[114] < 2) {
		(*command_by_location_dispatch_table[536])();
		longjmp(done_with_command, 1);
	} if (object_type_3_buffer[114] == 2) { printMessage(64, 1270, 0); } if (object_type_3_buffer[114] == 3) {
		f3(670, 112);
	}
	else { f3(670, 113); } if (isItemAtLocation(t11(object_type_3_buffer[670]), -1)) { set_object_location(object_type_3_buffer[670], 435); } (*command_by_location_dispatch_table[553])();
	longjmp(done_with_command, 1);
} int g35() {
	if (currentCommandContains(118)) { printMessage(64, 801, 0); } if (object_type_3_buffer[697] == 2)
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
	if (!currentCommandIsOneOf(134, 7, 101, 20, 22, 38, 19, 24, 25, 121, 82, -1)) return
		0; if (!g10(t11(object_type_3_buffer[670]), -1)) return 0; printMessage(64, 803, 0);
} int b34() {
	if (g10(110, -1))
	{
		if (currentCommandContains(110) || object_type_3_buffer[697] == 1) { set_object_location(110, 484); printMessage(64, 868, 0); }
	} if (g10(119, -1))
	{
		if (currentCommandContains(119) || object_type_3_buffer[697] == 1) {
			l12(0, 722, 30); object_type_3_buffer[722] += object_type_3_buffer[724]; l12(0, 721, 12);
			modifyObjectFlag('c', 434, 8); l12(0, 119, 2); set_object_location(119, LOCATION_LIMBO); printMessage(64, 119, 0);
		}
	} if (object_type_3_buffer[697] == 1)
	{
		printMessage(64, 984, 0);
	} if (!currentCommandIsOneOf(134, 20, 101, 7, 38, 22, 11, 24, 25, 121, -1)) return 0;
	printMessage(64, 867, 0);
} int j46() {
	if (isObjectFlagSet(t11(670), 0)) {
		if (g10(t11(object_type_3_buffer[670]), -1))
		{
			printMessage(64, 874, 0);
		}
	}
} int q40() {
	if (!currentCommandContains(99)) return; if (!g10(99, -1)) return
		0; printMessage(76, 872, 670);
} int o29() {
	if (!currentCommandContains(89)) return; if (!g10(89, -1)) return
		0; printMessage(76, 1694, 89);
} int m26() {
	if (!currentCommandContains(103)) return; if (g10(103, -1) &&
		object_type_3_buffer[103] < 2) {
		if (isItemAtLocation(123, -1)) {
			l12(0, 103, 2); l12(0, 123, 2); printMessage(76, 1362, 669);
		} printMessage(76, 1548, 669);
	}
} int x36() {
	if (!currentCommandContains(259)) return; if (object_type_3_buffer[PLAYER_LOCATION] == 259)
	{
		printMessage(64, 873, 0);
	} printMessage(76, 818, 259);
} int c34() {
	if (object_type_3_buffer[697] > 1) {
		if (isObjectFlagSet(t11(670), 0))
		{
			if (g10(t11(object_type_3_buffer[670]), -1)) {
				if (isObjectFlagSet(t11(670), 8) && !currentCommandContains(106) && !currentCommandContains(107)
					&& !currentCommandContains(82)) {
					printMessage(64, 915, 0);
				} printMessage(64, 873, 0);
			}
		}
	}
} int u17() {
	if (isObjectFlagSet(t11(671), 6)
		|| isObjectFlagSet(t11(672), 6) || object_type_3_buffer[672] == 0) {
		printMessage(64, 896, 0);
	} processMoveCommand(object_type_3_buffer[672], -2);
} int
v33() {
	if (object_type_3_buffer[PLAYER_LOCATION] == LOCATION_GRAY_NOWHERE) { printMessage(64, 1595, 0); } if (object_type_3_buffer[PLAYER_LOCATION] == 151 || object_type_3_buffer[PLAYER_LOCATION] == 150
		|| object_type_3_buffer[PLAYER_LOCATION] == 152 || object_type_3_buffer[PLAYER_LOCATION] == 165 || object_type_3_buffer[PLAYER_LOCATION] == 166 || object_type_3_buffer[PLAYER_LOCATION] == 230 || object_type_3_buffer[PLAYER_LOCATION] == 237
		|| object_type_3_buffer[PLAYER_LOCATION] == 239 || object_type_3_buffer[PLAYER_LOCATION] == 244 || object_type_3_buffer[PLAYER_LOCATION] == 431 || object_type_3_buffer[PLAYER_LOCATION] == 432 || object_type_3_buffer[PLAYER_LOCATION] == LOCATION_ROCK_IN_MIST
		|| g10(21, -1)) {
		printMessage(64, 866, 0);
	} printMessage(72, 818, 584);
} int s10() {
	if (object_type_3_buffer[PLAYER_LOCATION] == 225
		|| object_type_3_buffer[PLAYER_LOCATION] == 392 || object_type_3_buffer[PLAYER_LOCATION] == 429) {
		printMessage(64, 1234, 0);
	} printMessage(76, 818, 73);
} int u8()
{
	if (object_type_3_buffer[PLAYER_LOCATION] == 408) { printMessage(64, 1435, 0); } if (g10(18, -1)) { printMessage(64, 780, 0); }
	printMessage(76, 818, 18);
} 

int f4() {
	if (object_type_3_buffer[PLAYER_LOCATION] == 255 || object_type_3_buffer[PLAYER_LOCATION] == 256 || object_type_3_buffer[PLAYER_LOCATION] == 257) // south end of fog filled room, ?, foggy room by cairn of rocks
	{
		printMessage(64, 1470, 0); //  A real pea-souper.  Dead easy to get lost in.
	} 
	printMessage(76, 818, 14); // I see no fog here.
} 

int m27() {
	if (!currentCommandIsOneOf(501, 497, 498, 504, 503, 500,
		505, 496, 506, 499, 511, 502, 579, 510, 509, 508, 507, 581, -1)) return 0; (*command_by_location_dispatch_table[object_type_3_buffer[670]])();
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
		} printMessage(2, 719, 0); printBlankLine();
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
			} processMoveCommand(object_type_3_buffer[671], -1); printMessage(2, 719, 0); printBlankLine();
		}
		else {
			printMessage(9, 1061, 30); printBlankLine();
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
	if (currentCommandContains(81) && g10(81, -1)) { if (isObjectFlagSet(81, 13)) { j37(); } printMessage(64, 1270, 0); }
	if (object_type_3_buffer[697] == 1 && g10(81, 1037)) { j37(); } if (currentCommandContains(113)) {
		printMessage(64, 814, 0);
	} if (object_type_3_buffer[697] == 1 || currentCommandContains(112) || currentCommandContains(111) || currentCommandContains(114)) {
		if (isObjectFlagSet(t11(671), 9)
			&& !currentCommandContains(111) && !currentCommandContains(114)) {
			f3(699, 869); l12(0, 700, 900); a25();
		} if (currentCommandContains(111)
			|| currentCommandContains(114)) {
			if (!(isItemAtLocation(t11(object_type_3_buffer[670]), -1))) {
				if (q8(t11(object_type_3_buffer[670]), -1)) {
					printMessage(76, 1700, 670);
				} printMessage(76, 818, 670);
			} z5(699, 670); if (object_type_3_buffer[699] == 4) { printMessage(64, 1702, 0); } if (currentCommandContains(114)
				&& object_type_3_buffer[114] < 2) {
				printMessage(64, 1703, 0);
			} if (object_type_3_buffer[699] == 2) { printMessage(76, 1701, 670); }
		} if
			(g10(111, 3) && !currentCommandContains(114)) {
			f3(699, 871); l12(0, 111, 2); l12(0, 700, 600); a25();
		} if (g10(114, 3)) { f3(699, 1367); l12(0, 114, 2); l12(0, 700, 400); a25(); }
		if (currentCommandContains(112)) { printMessage(76, 818, 670); } printMessage(64, 1064, 0);
	} if (isObjectFlagSet(t11(670), 0)) {
		if (g10(t11(object_type_3_buffer[670]), -1)) {
			if (currentCommandContains(118)) { printMessage(64, 1422, 0); } printMessage(64, 915, 0);
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
	if (!currentCommandContains(120)) return; if (object_type_3_buffer[PLAYER_LOCATION] == 137
		|| object_type_3_buffer[PLAYER_LOCATION] == 391 || object_type_3_buffer[PLAYER_LOCATION] == 403) {
		printMessage(64, 1459, 0);
	} if (object_type_3_buffer[PLAYER_LOCATION] == LOCATION_MAGNIFICENT_VIEW) {
		modifyObjectFlag('s', t11(697), 4);
		if (object_type_3_buffer[120] == 0) { printMessage(0, 120, 0); l12(0, 120, 1); } printMessage(0, 120, 0); modifyObjectFlag('c', t11(697), 4);
		longjmp(done_with_command, 1);
	}
} int o30() {
	if (object_type_3_buffer[697] > 1) {
		if (currentCommandContains(88)) {
			if (g10(86, 0))
			{
				printMessage(76, 1716, 670);
			} if (g10(86, 1)) { printMessage(64, 1331, 0); } if (g10(88, -1)) {
				printMessage(64, 1316, 0);
			}
		} if (currentCommandContains(71) && isItemAtLocation(89, -1) && !g10(71, -1)) {
			printMessage(64, 1255, 0);
		} if (currentCommandContains(660) && g10(71, -1)) { u23(); } if (currentCommandContains(124)) {
			if (object_type_3_buffer[PLAYER_LOCATION] == 229)
			{
				printMessage(64, 1010, 0);
			}
		} if (isObjectFlagSet(t11(670), 0)) {
			if (g10(t11(object_type_3_buffer[670]), -1)) {
				if
					(currentCommandContains(108)) {
					printMessage(64, 1002, 0);
				} if (currentCommandContains(29)) { printMessage(64, 1003, 0); } if (currentCommandContains(89))
				{
					printMessage(64, 1255, 0);
				} if (currentCommandContains(660) && object_type_3_buffer[PLAYER_LOCATION] == LOCATION_ROCK_IN_MIST || currentCommandContains(71)) { u23(); } if (currentCommandContains(70))
				{
					printMessage(64, 1344, 0);
				} if (currentCommandContains(107)) { k21(); } if (currentCommandContains(34)) {
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
	if (object_type_3_buffer[PLAYER_LOCATION] == 461) { printMessage(64, 1346, 0); } if ((437 <= object_type_3_buffer[671] && object_type_3_buffer[671] <= 461))
	{
		printMessage(64, 1347, 0);
	} printMessage(64, 1022, 0);
} int g30() { printMessage(64, 865, 0); } int m23()
{
	if (g10(31, 0)) {
		l12(0, 31, 1); modifyObjectFlag('c', 254, 8); l12(0, 733, 9); if (object_type_3_buffer[135] < 4)
		{
			set_object_location(135, LOCATION_LIMBO); l12(0, 135, 0);
		} printMessage(64, 1139, 0);
	} printMessage(64, 828, 0);
} int y19()
{
	if (currentCommandContains(500)) { printMessage(64, 804, 0); } if (isObjectFlagSet(t11(710), 9)) {
		modifyObjectFlag('c', t11(710), 9);
		printMessage(64, 828, 0);
	} if (object_type_3_buffer[717] > 2 || !(isObjectFlagSet(324, 4)) || !g10(99, -1)) {
		printMessage(64, 828, 0);
	} modifyObjectFlag('s', t11(710), 9); printMessage(66, 719, 0);
} int d28() {
	if (isObjectFlagSet(t11(710), 9)) {
		if (isItemAtLocation(99, -1)) { printMessage(0, 1085, 0); die(); } if (object_type_3_buffer[698] > 40) {
			set_object_location(99, LOCATION_LIMBO); l12(0, 39, 3);
			l12(0, 99, 0); l12(0, 698, 0); if (cheezy_rand(100) < 50) {
				printMessage(0, 1086, 0); b26(); if (object_type_3_buffer[699] == 1)
				{
					printMessage(0, 805, 0);
				}
			}
			else { printMessage(0, 1087, 0); die(); }
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
		if (isItemAtLocation(116, -1)) { printMessage(8, 1334, 0); }
		else {
			printMessage(8, 1334, 1);
		} if (isObjectFlagSet(t11(710), 10)) { printMessage(0, 1336, 0); } set_object_location(116, LOCATION_LIMBO); set_object_location(64, object_type_3_buffer[671]); modifyObjectFlag('s', 64, 4);
		l12(0, 733, 7);
	} longjmp(done_with_command, 1);
} int z20() { r30(); } int v28() {
	r30();
} int o17() { r30(); } int i33() { r30(); } int p31() {
	if (currentCommandContains(60)) {
		(*command_by_location_dispatch_table[569])();
	} if ((object_type_3_buffer[697] == 1 || currentCommandContains(28)) && g10(28, -1)) {
		set_object_location(28, 484); processMoveCommand(239, -1163);
	} if ((object_type_3_buffer[697] == 1 || currentCommandContains(82)) && g10(82, -1)) {
		if (object_type_3_buffer[717] == 3) {
			*getObjectPointer(675) =
				-1; object_type_3_buffer[675] = ITEM_MIN_ID - 1; while (++object_type_3_buffer[675] <= ITEM_MAX_ID) {
				if (isItemAtLocation(t11(object_type_3_buffer[675]), -1)) {
					set_object_location(object_type_3_buffer[675], LOCATION_LIMBO);
				}
			} l12(0, 717, 4); modifyObjectFlag('s', LOCATION_GRAY_NOWHERE, 4); processMoveCommand(LOCATION_GRAY_NOWHERE, -1380);
		} printMessage(0, 1274, 0); r7();
	}
}
int n21() {
	modifyObjectFlag('s', 27, 14); if (isObjectFlagSet(t11(671), 7) || object_type_3_buffer[717] > 2) {
		printMessage(0, 828, 0);
	}
	else {
		if (g10(111, 3) || isObjectFlagSet(t11(671), 9)) {
			if (cheezy_rand(100) < 85) {
				printMessage(0, 828, 0);
			}
			else {
				if (cheezy_rand(100) < 95) { printMessage(0, 1171, 0); die(); } printMessage(0, 1172, 0); if (y10(1173))
				{
					printMessage(0, 1174, 0);
				} r7();
			}
		}
		else {
			if (g10(115, -1) || g10(116, -1)) {
				if
					(g10(115, -1)) {
					printMessage(0, 1175, 0); set_object_location(115, LOCATION_LIMBO);
				} if (g10(116, -1)) {
					printMessage(0, 1176, 0);
					set_object_location(116, LOCATION_LIMBO);
				}
			}
			else {
				object_type_3_buffer[699] = cheezy_rand(3); object_type_3_buffer[699] *= 2; if (object_type_3_buffer[134] > 1) {
					object_type_3_buffer[699] += 1;
				} if (g10(134, -1)) {
					if (cheezy_rand(100) < 70) {
						f3(700, 1177); object_type_3_buffer[699]
							+= object_type_3_buffer[700]; printMessage(2, 699, 0); l12(1, 704, 134); r27();
					}
					else {
						f3(700, 1183); object_type_3_buffer[699]
							+= object_type_3_buffer[700]; printMessage(2, 699, 0); die();
					}
				}
				else { printMessage(0, 828, 0); }
			}
		}
	} longjmp(done_with_command, 1);
}
