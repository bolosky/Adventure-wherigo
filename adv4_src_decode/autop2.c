/* Adventure4+ - copyleft @ M.L.Arnautov 1991 */
#pragma warning(disable:4033) // function must return a value
#pragma warning(disable:4013) // function undefined; assuming extern returning int
#pragma warning(disable:4716) // must return a value
#pragma warning(disable:4715) // not all control paths return a value
#include "advkern.h"
int s15() {
	if (currentCommandContains(COMMAND_LOOK)) { return 0; } processMoveCommand(237, 0, COMMAND_SOUTH, -10); processMoveCommand(397, 0, -COMMAND_WEST);
	if (!currentCommandIsOneOf(COMMAND_NORTH, COMMAND_CROSS, -1)) return 0; printMessage(PRINT_MESSAGE_END_COMMAND, 1162, 0);
} int u10() {
	if (currentCommandContains(COMMAND_LOOK))
	{
		return 0;
	} processMoveCommand(241, 0, COMMAND_NORTH, 241, -625); processMoveCommand(242, 0, -242); if (!currentCommandIsOneOf(COMMAND_SOUTH, COMMAND_CROSS, -1))
		return 0; if (g10(28, -1)) { set_object_location(28, 484); processMoveCommand(239, -1163); } printMessage(PRINT_MESSAGE_END_COMMAND, 1162, 0);
} int c20() { processMoveCommand(240, 0, COMMAND_SOUTH, -239); processMoveCommand(242, 0, COMMAND_NORTHEAST, -242); } 

int balcony_above_treasure_chamber_242() {
	processMoveCommand(241, 0, COMMAND_WEST, COMMAND_EXIT, -241);
	processMoveCommand(240, 0, -239); 
	if (!currentCommandIsNotOneOf(COMMAND_JUMP, -1)) 
		return 0; 
	processMoveCommand(LOCATION_LIMBO, -1); 
	v37();
} 

int j16()
{
	processMoveCommand(180, 0, -COMMAND_SOUTHEAST);
} 

int c21() {
	if (currentCommandContains(COMMAND_LOOK)) { 
		return 0; 
	} 
	processMoveCommand(246, 0, COMMAND_SOUTHWEST, COMMAND_DOWN, 246, -249);

	if (currentCommandContains(COMMAND_THROW)) {
		if (object_type_3_buffer[697] == 1 || g10(23, -1)) { 
			return 0; 
		} 
		
		if (currentCommandContains(ITEM_AXE) ||	currentCommandContains(ITEM_SWORD)) {
			if (isItemAtLocation(dereference(object_type_3_buffer[670]), -1)) { 
				set_object_location(object_type_3_buffer[670], PLAYER_LOCATION); 
				printMessage(76, 968, 670); 
			}
			return 0;
		} 
		
		if (isObjectFlagSet(dereference(670), 0)) {
			if (isObjectFlagSet(dereference(670), 5)) {
				if (isItemAtLocation(dereference(object_type_3_buffer[670]), -1))
				{
					if (currentCommandContains(50)) {
						if (isObjectFlagSet(22, 13)) {
							set_value(0, 22, 0); 
							set_object_location(50, LOCATION_LIMBO); 
							modifyObjectFlag('s', 50, 14);
							printMessage(PRINT_MESSAGE_END_COMMAND, MESSAGE_TROLL_EGGS, 0);
						} 
						modifyObjectFlag('s', 50, 13);
					} 
					set_value(0, 22, 1); 
					set_object_location(22, 484); 
					set_object_location(23, 244); 
					set_object_location(object_type_3_buffer[670], LOCATION_LIMBO);
					printMessage(76, 969, 670);
				}
			}
		}
	} 
	
	if (currentCommandContains(COMMAND_JUMP)) {
		if (object_type_3_buffer[21] == 0) { printMessage(PRINT_MESSAGE_END_COMMAND, 902, 0); } processMoveCommand(LOCATION_LIMBO, -1);
		v37();
	} if (currentCommandContains(9)) { set_object_location(9, object_type_3_buffer[PLAYER_LOCATION]); } if (currentCommandContains(120)) {
		if (currentCommandContains(562) || currentCommandContains(COMMAND_LOOK))
		{
			printMessage(PRINT_MESSAGE_END_COMMAND, 1397, 0);
		} printMessage(PRINT_MESSAGE_END_COMMAND, MESSAGE_RIDICULOUS, 0);
	} if (!currentCommandIsOneOf(COMMAND_CROSS, COMMAND_NORTHEAST, -1)) return 0; if (object_type_3_buffer[21] > 0)
	{
		printMessage(PRINT_MESSAGE_END_COMMAND, 971, 0);
	} if (object_type_3_buffer[22] == 0) { printMessage(PRINT_MESSAGE_END_COMMAND, 970, 0); } if (object_type_3_buffer[22] == 2) {
		set_value(0, 22, 0);
		set_object_location(22, 244); set_object_location(23, 484); printMessage(PRINT_MESSAGE_END_COMMAND, MESSAGE_TROLL, 0);
	} if (object_type_3_buffer[22] == 1) { set_value(0, 22, 2); }
	processMoveCommand(245, -2);
} 

int sloping_corridor_246() {
	if (currentCommandContains(COMMAND_LOOK)) { 
		return 0; 
	} 
	

	processMoveCommand(213, 0, COMMAND_DOWN, COMMAND_SOUTHWEST, COMMAND_EXIT, -213);
	processMoveCommand(244, 0, COMMAND_UP, COMMAND_NORTHEAST , -21);
} 

int f7() {
	processMoveCommand(210, 0, COMMAND_NORTH, -COMMAND_EXIT); if (currentCommandContains(60)) {
		if
			(object_type_3_buffer[20] == 0) {
			printMessage(PRINT_MESSAGE_END_COMMAND, 1032, 0);
		}
	} if (!currentCommandIsOneOf(529, COMMAND_EAST, -1)) return 0; if (object_type_3_buffer[20] == 0)
	{
		w25(); printMessage(PRINT_MESSAGE_END_COMMAND, 956, 0);
	} processMoveCommand(215, -2);
} int i20() {
	processMoveCommand(215, 0, COMMAND_EAST, -COMMAND_EXIT); if
		(currentCommandContains(60)) {
		if (object_type_3_buffer[20] == 0) { printMessage(PRINT_MESSAGE_END_COMMAND, 1032, 0); }
	} if (!currentCommandIsOneOf(529, COMMAND_NORTH, -1)) return
		0; if (object_type_3_buffer[20] == 0) { w25(); printMessage(PRINT_MESSAGE_END_COMMAND, 956, 0); } processMoveCommand(210, -2);
} int r14() {
	if
		((currentCommandContains(535) || currentCommandContains(COMMAND_THROW)) && currentCommandContains(38)) {
		if (isItemAtLocation(38, -1) && g10(22, -1)) {
			set_value(0, 22, 3);
			set_object_location(22, LOCATION_LIMBO); set_object_location(23, 244); set_object_location(38, PLAYER_LOCATION); printMessage(0, 1698, 0); printMessage(PRINT_MESSAGE_END_COMMAND, 973, 0);
		}
	} if (currentCommandContains(COMMAND_THROW))
	{
		if (object_type_3_buffer[697] == 1 || g10(23, -1)) { return 0; } if (currentCommandContains(ITEM_AXE) || currentCommandContains(ITEM_SWORD)) {
			if (isItemAtLocation(dereference(object_type_3_buffer[670]), -1)) { set_object_location(object_type_3_buffer[670], PLAYER_LOCATION); printMessage(76, 968, 670); } return 0;
		}
		if (isObjectFlagSet(dereference(670), 0)) {
			if (isObjectFlagSet(dereference(670), 5)) {
				if (isItemAtLocation(dereference(object_type_3_buffer[670]), -1)) {
					if
						(currentCommandContains(50)) {
						if (isObjectFlagSet(22, 13)) {
							set_value(0, 22, 0); set_object_location(50, LOCATION_LIMBO); modifyObjectFlag('s', 50, 14); printMessage(PRINT_MESSAGE_END_COMMAND, MESSAGE_TROLL_EGGS, 0);
						} modifyObjectFlag('s', 50, 13);
					} set_value(0, 22, 1); set_object_location(22, 484); set_object_location(23, 244); set_object_location(object_type_3_buffer[670], LOCATION_LIMBO);
					printMessage(76, 969, 670);
				}
			}
		}
	} if (currentCommandContains(COMMAND_JUMP)) {
		if (object_type_3_buffer[21] == 0) { printMessage(PRINT_MESSAGE_END_COMMAND, 902, 0); } processMoveCommand(LOCATION_LIMBO, -1);
		v37();
	} if (currentCommandContains(COMMAND_LOOK)) { return 0; } processMoveCommand(249, 0, COMMAND_NORTHEAST, -249); processMoveCommand(250, 0, -250);
	processMoveCommand(252, 0, -619); processMoveCommand(298, 0, -298); if (currentCommandContains(9)) { set_object_location(9, object_type_3_buffer[PLAYER_LOCATION]); } if (!currentCommandIsOneOf(COMMAND_CROSS, COMMAND_SOUTHWEST, -1))
		return 0; if (object_type_3_buffer[21] > 0) { printMessage(PRINT_MESSAGE_END_COMMAND, 971, 0); } if (object_type_3_buffer[22] == 0) {
		printMessage(PRINT_MESSAGE_END_COMMAND, 970, 0);
	} if (object_type_3_buffer[22] == 2) { set_value(0, 22, 0); set_object_location(22, 244); set_object_location(23, 484); printMessage(PRINT_MESSAGE_END_COMMAND, MESSAGE_TROLL, 0); }
	if (object_type_3_buffer[22] == 1) { set_value(0, 22, 2); } if (isItemAtLocation(38, -1)) {
		printMessage(0, 972, 0); set_value(0, 21, 1);
		set_object_location(23, 484); processMoveCommand(LOCATION_LIMBO, -1); die();
	} if (object_type_3_buffer[22] == 3 && isObjectFlagSet(22, 13)) {
		if (g10(38, -1))
		{
			set_object_location(38, r5); set_value(0, 21, 1); printMessage(0, 1100, 0);
		}
		else {
			set_value(0, 21, 2); printMessage(0, 1101, 0);
		} set_object_location(23, 484); processMoveCommand(LOCATION_LIMBO, -1); die();
	} processMoveCommand(244, -2);
} int p18() {
	if (currentCommandContains(COMMAND_LOOK))
	{
		return 0;
	} processMoveCommand(245, 0, COMMAND_WEST, -21); processMoveCommand(250, 0, COMMAND_EAST, -250); processMoveCommand(252, 0, -619); processMoveCommand(298, 0, -298);
} int y14() {
	if (currentCommandContains(COMMAND_LOOK)) { return 0; } processMoveCommand(245, 0, -21); processMoveCommand(249, 0, COMMAND_WEST, -249);
	processMoveCommand(251, 0, -COMMAND_NORTHEAST); processMoveCommand(297, 0, COMMAND_SOUTHEAST, -COMMAND_DOWN); processMoveCommand(252, 0, -619); processMoveCommand(298, 0, -298);
} int
q15() {
	if (currentCommandContains(COMMAND_LOOK)) { return 0; } processMoveCommand(250, 0, COMMAND_SOUTH, -250); processMoveCommand(252, 0, COMMAND_NORTH, -619);
	processMoveCommand(296, 0, COMMAND_EAST, -627);
} 

int breath_taking_view_252() {
	if (currentCommandContains(COMMAND_LOOK)) { 
		return 0; 
	} 
	
	processMoveCommand(251, 0, COMMAND_SOUTH, COMMAND_EXIT, -625);
	processMoveCommand(250, 0, -250); 
	
	if (currentCommandContains(COMMAND_JUMP)) { 
		processMoveCommand(LOCATION_LIMBO, -1); 
		v37(); 
	} 
	
	if (currentCommandContains(9) && object_type_3_buffer[30] == 2)
	{
		set_object_location(9, object_type_3_buffer[PLAYER_LOCATION]);
	} 
	
	if (!currentCommandIsOneOf(LOCATION_VALLEY, COMMAND_CROSS, COMMAND_NORTH, -1))
		return 0; 
	
	if (object_type_3_buffer[30] == 0) {
		printMessage(PRINT_MESSAGE_END_COMMAND, 1120, 0); // I'm  afraid  I can't go that way - walking on red-hot lava is contrary to union regulations (and is bad for your health anyhow).
	} 
	
	if (isItemAtLocation(ITEM_RING, 2)) {
		if (isItemAtLocation(ITEM_BEAR, -1)) {
			printMessage(0, 1124, 0); // As  you  approach  the  center  of the archway, hot vapors saturated with brimstone drift up from the lava in the gorge  beneath  your  feet.   The
									  // mithril  ring  on your finger quivers and glows, and a swirling vortex of white vapor encircles you and protects you from the fumes.  The  bear  is
									  // not  so  lucky,  though,  since  the  vortex is rather small; the noxious gasses choke it and it staggers off of the side of the arch and  plummets
									  // into the gorge below.
			set_object_location(ITEM_BEAR, LOCATION_LIMBO); 
		} else {
			if (!(isObjectFlagSet(LOCATION_SOUTH_END_STONE_FACES, 4))) {
				modifyObjectFlag('c', 252, 8); 
				printMessage(0, 1122, 0); // As  you  approach  the  center  of the archway, hot vapors saturated with brimstone drift up from the lava in the gorge  beneath  your  feet.   The
										  // mithril  ring  on  your finger quivers and glows, and the fumes eddy away from the bridge without harming you.
			}
		} 
		
		if (!(isObjectFlagSet(LOCATION_SOUTH_END_STONE_FACES, 4))) {
			set_value(0, 733, 8);
		} 
		
		processMoveCommand(LOCATION_SOUTH_END_STONE_FACES, -2);
	} 
	
	if (isItemAtLocation(ITEM_BEAR, -1)) {
		printMessage(0, 1123, 0); // As  you  approach  the  center  of the archway, hot vapors saturated with brimstone drift up from the lava in the gorge beneath your feet.  You and
								  // the bear are both overcome by the noxious gasses  and,  with  your  lungs burned out, slip off of the bridge and plummet into the gorge.
	} else { 
		printMessage(0, 1121, 0); // As  you  approach  the  center  of the archway, hot vapors saturated with brimstone drift up from the lava in the gorge beneath your feet.  You are
							      // swiftly overcome by the foul gasses and, with your lungs burned out, fall off of the bridge and into the gorge.
	}

	if (isItemAtLocation(ITEM_RING, -1)) {
		printMessage(0, 1424, 0); // (Perhaps  you should have worn some sort of protection before taking that nonchalant stroll).
	} 
	
	processMoveCommand(LOCATION_LIMBO, -1); 
	die();
} 

int b17() {
	if (currentCommandContains(COMMAND_LOOK))
	{
		return 0;
	} processMoveCommand(251, 0, COMMAND_WEST, COMMAND_EXIT, -627); processMoveCommand(250, 0, -250); processMoveCommand(252, 0, -619);
}
int r16() {
	processMoveCommand(250, 0, COMMAND_NORTH, COMMAND_UP, -250); processMoveCommand(298, 0, COMMAND_SOUTH, COMMAND_DOWN, -298); processMoveCommand(252, 0, -619);
} int h12() {
	processMoveCommand(297, 0, COMMAND_WEST, -COMMAND_UP); processMoveCommand(250, 0, -250); processMoveCommand(299, 0, COMMAND_EAST, COMMAND_ENTER, -298);
	processMoveCommand(252, 0, -619); u28();
} int h13() {
	processMoveCommand(298, 0, COMMAND_WEST, -COMMAND_EXIT); processMoveCommand(250, 0, -250);
	processMoveCommand(252, 0, -619); if (!currentCommandIsNotOneOf(COMMAND_TAKE, ITEM_AXE, -1)) return 0; if (!g10(ITEM_AXE, -1)) return
		0; if (!(isItemAtLocation(ITEM_AXE, -1) || object_type_3_buffer[ITEM_AXE] == 0)) { printMessage(76, 1031, 670); }
} int o12() {
	processMoveCommand(300, 0, -COMMAND_WEST);
	processMoveCommand(303, 0, -COMMAND_SOUTHEAST); processMoveCommand(304, 0, -COMMAND_NORTHWEST); processMoveCommand(305, 0, -COMMAND_SOUTHWEST); processMoveCommand(306, 0, -COMMAND_NORTHEAST); processMoveCommand(307, 0, -COMMAND_UP);
	processMoveCommand(308, 0, -COMMAND_DOWN); processMoveCommand(309, 0, -COMMAND_NORTH); processMoveCommand(310, 0, -COMMAND_SOUTH); processMoveCommand(301, 0, -COMMAND_EAST);
} int q19()
{
	processMoveCommand(300, 0, -COMMAND_NORTHWEST); processMoveCommand(302, 0, -COMMAND_UP); processMoveCommand(304, 0, -COMMAND_NORTH); processMoveCommand(305, 0, -COMMAND_SOUTH); processMoveCommand(306, 0, -COMMAND_WEST);
	processMoveCommand(307, 0, -COMMAND_SOUTHWEST); processMoveCommand(308, 0, -COMMAND_NORTHEAST); processMoveCommand(309, 0, -COMMAND_EAST); processMoveCommand(310, 0, -COMMAND_DOWN); processMoveCommand(301, 0, -COMMAND_SOUTHEAST);
} int c23() {
	processMoveCommand(300, 0, -COMMAND_UP); processMoveCommand(302, 0, -COMMAND_DOWN); processMoveCommand(303, 0, -COMMAND_WEST); processMoveCommand(305, 0, -COMMAND_NORTHEAST);
	processMoveCommand(306, 0, -COMMAND_SOUTHWEST); processMoveCommand(307, 0, -COMMAND_EAST); processMoveCommand(308, 0, -COMMAND_NORTH); processMoveCommand(309, 0, -COMMAND_NORTHWEST); processMoveCommand(310, 0, -COMMAND_SOUTHEAST);
	processMoveCommand(301, 0, -COMMAND_SOUTH);
} int q20() {
	processMoveCommand(300, 0, -COMMAND_NORTHEAST); processMoveCommand(302, 0, -COMMAND_NORTH); processMoveCommand(303, 0, -COMMAND_NORTHWEST);
	processMoveCommand(304, 0, -COMMAND_SOUTHEAST); processMoveCommand(306, 0, -COMMAND_EAST); processMoveCommand(307, 0, -COMMAND_DOWN); processMoveCommand(308, 0, -COMMAND_SOUTH); processMoveCommand(309, 0, -COMMAND_UP);
	processMoveCommand(310, 0, -COMMAND_WEST); processMoveCommand(301, 0, -COMMAND_SOUTHWEST);
} int t20() {
	processMoveCommand(300, 0, -COMMAND_NORTH); processMoveCommand(302, 0, -COMMAND_SOUTHEAST);
	processMoveCommand(303, 0, -COMMAND_DOWN); processMoveCommand(304, 0, -COMMAND_SOUTH); processMoveCommand(305, 0, -COMMAND_EAST); processMoveCommand(307, 0, -COMMAND_WEST); processMoveCommand(308, 0, -COMMAND_SOUTHWEST);
	processMoveCommand(309, 0, -COMMAND_NORTHEAST); processMoveCommand(310, 0, -COMMAND_NORTHWEST); processMoveCommand(301, 0, -COMMAND_UP);
} int m14() {
	processMoveCommand(300, 0, -COMMAND_EAST);
	processMoveCommand(302, 0, -COMMAND_WEST); processMoveCommand(303, 0, -COMMAND_UP); processMoveCommand(304, 0, -COMMAND_SOUTHWEST); processMoveCommand(305, 0, -COMMAND_DOWN); processMoveCommand(306, 0, -COMMAND_SOUTH);
	processMoveCommand(308, 0, -COMMAND_NORTHWEST); processMoveCommand(309, 0, -COMMAND_SOUTHEAST); processMoveCommand(310, 0, -COMMAND_NORTHEAST); processMoveCommand(301, 0, -COMMAND_NORTH);
} int d22()
{
	processMoveCommand(300, 0, -COMMAND_SOUTHEAST); processMoveCommand(302, 0, -COMMAND_NORTHEAST); processMoveCommand(303, 0, -COMMAND_SOUTH); processMoveCommand(304, 0, -COMMAND_DOWN); processMoveCommand(305, 0, -COMMAND_UP);
	processMoveCommand(306, 0, -COMMAND_NORTHWEST); processMoveCommand(307, 0, -COMMAND_NORTH); processMoveCommand(309, 0, -COMMAND_SOUTHWEST); processMoveCommand(310, 0, -COMMAND_EAST); processMoveCommand(301, 0, -COMMAND_WEST);
} int g20() {
	processMoveCommand(300, 0, -COMMAND_DOWN); processMoveCommand(302, 0, -COMMAND_EAST); processMoveCommand(303, 0, -COMMAND_NORTHEAST); processMoveCommand(304, 0, -COMMAND_UP);
	processMoveCommand(305, 0, -COMMAND_WEST); processMoveCommand(306, 0, -COMMAND_NORTH); processMoveCommand(307, 0, -COMMAND_SOUTH); processMoveCommand(308, 0, -COMMAND_SOUTHEAST); processMoveCommand(310, 0, -COMMAND_SOUTHWEST);
	processMoveCommand(301, 0, -COMMAND_NORTHWEST);
} int p20() {
	processMoveCommand(300, 0, -COMMAND_SOUTHWEST); processMoveCommand(302, 0, -COMMAND_NORTHWEST); processMoveCommand(303, 0, -COMMAND_EAST);
	processMoveCommand(304, 0, -COMMAND_WEST); processMoveCommand(305, 0, -COMMAND_NORTH); processMoveCommand(306, 0, -COMMAND_DOWN); processMoveCommand(307, 0, -COMMAND_SOUTHEAST); processMoveCommand(308, 0, -COMMAND_UP);
	processMoveCommand(309, 0, -COMMAND_SOUTH); processMoveCommand(301, 0, -COMMAND_NORTHEAST);
} int v19() {
	processMoveCommand(301, 0, COMMAND_NORTH, -COMMAND_EXIT); if (!currentCommandIsNotOneOf(535, 48, -1))
		return 0; if (!isItemAtLocation(48, -1)) return 0; set_object_location(48, LOCATION_LIMBO); set_object_location(39, object_type_3_buffer[PLAYER_LOCATION]); modifyObjectFlag('s', 39, 4);
	set_value(0, 34, 1); printMessage(PRINT_MESSAGE_END_COMMAND, 1494, 0);
} int KilobyteInputBuffer5() { processMoveCommand(LOCATION_BUILDING, 0, -COMMAND_EXIT); } int h14() {
	processMoveCommand(320, 0, -COMMAND_DOWN); check_command_steps(); processMoveCommand(151, 0, COMMAND_WEST, COMMAND_EXIT, -151);
} int m15() {
	processMoveCommand(LOCATION_MT_KING, 0, COMMAND_SOUTH, -COMMAND_EXIT);
} 

int command_vaulted_ceiling_316() {
	if (currentCommandContains(COMMAND_ENTER)) {
		if (object_type_3_buffer[35] == 1) {
			set_value(SET_VALUE_DEREFERENCE, 680, PLAYER_LOCATION); 
			processMoveCommand(462, -2);
		} 
		printMessage(PRINT_MESSAGE_END_COMMAND, 1160, 0); // The safe's door is closed, and you can't get in!
	} 
	
	if (!currentCommandIsOneOf(COMMAND_UP, COMMAND_EXIT, COMMAND_NORTH, -1)) 
		return 0; 
	
	if (object_type_3_buffer[35] == 1) {
		printMessage(PRINT_MESSAGE_END_COMMAND, 1135, 0); // The  safe's  door is blocking the exit passage - you'll have to close the safe to get out of here.
	} 
	processMoveCommand(LOCATION_MT_KING, -2);
} 

int KilobyteInputBuffer4() {
	processMoveCommand(object_type_3_buffer[680], 0, -COMMAND_EXIT); if (!currentCommandIsNotOneOf(35, -1)) return 0;
	if (object_type_3_buffer[697] == 1) { modifyObjectFlag('s', dereference(697), 5); printMessage(76, 1023, 35); } if (currentCommandContains(COMMAND_CLOSE)) {
		printMessage(PRINT_MESSAGE_END_COMMAND, 1161, 0);
	} if (currentCommandContains(536)) { printMessage(76, 1127, 670); } if (currentCommandContains(COMMAND_LOOK)) { printMessage(PRINT_MESSAGE_END_COMMAND, 1603, 0); } printMessage(PRINT_MESSAGE_END_COMMAND, MESSAGE_RIDICULOUS, 0);
} int x18() { processMoveCommand(LOCATION_MT_KING, 0, -COMMAND_SOUTH); processMoveCommand(317, 0, -COMMAND_NORTH); } int x19() {
	processMoveCommand(316, 0, COMMAND_SOUTH, COMMAND_NORTHWEST, -COMMAND_WEST);
	processMoveCommand(318, 0, COMMAND_NORTH, COMMAND_NORTHEAST, -COMMAND_EAST); processMoveCommand(318, 0, -COMMAND_EAST);
} int KilobyteInputBuffer0() {
	processMoveCommand(317, 0, COMMAND_EXIT, -COMMAND_SOUTH);
} int f8() { processMoveCommand(LOCATION_MT_KING, 0, -COMMAND_SOUTH); processMoveCommand(321, 0, -COMMAND_NORTH); processMoveCommand(320, 0, -COMMAND_EAST); } int i24()
{
	processMoveCommand(312, 0, COMMAND_UP, -COMMAND_EAST); check_command_steps(); processMoveCommand(319, 0, COMMAND_SOUTH, 249, -COMMAND_EXIT);
} int m16() {
	processMoveCommand(319, 0, COMMAND_EXIT, COMMAND_NORTH, -249);
} int a17() { processMoveCommand(LOCATION_GIANT_ROOM, 0, -COMMAND_SOUTH); processMoveCommand(323, 0, -COMMAND_NORTH); } int x20() {
	processMoveCommand(322, 0, -COMMAND_SOUTH);
	if (!currentCommandIsOneOf(COMMAND_NORTH, 324, -1)) return 0; if (g10(24, -1)) { w25(); printMessage(PRINT_MESSAGE_END_COMMAND, 1114, 0); }
	processMoveCommand(324, -2);
} 

int h15() { 
	processMoveCommand(325, 0, -COMMAND_EAST); 
	processMoveCommand(323, 0, -COMMAND_WEST); 
} 

int brink_of_bottomless_pit_325() {
	processMoveCommand(324, 0, -COMMAND_NORTH); 
	processMoveCommand(326, 0, -COMMAND_WEST); 
	processMoveCommand(365, 0, -COMMAND_EAST); 
	processMoveCommand(324, 0, -COMMAND_NORTH); 
	if (!currentCommandIsNotOneOf(COMMAND_JUMP, -1))
		return 0; 
	jump_into_bottomless_pit();
} 

int p21() {
	processMoveCommand(325, 0, -COMMAND_NORTH); processMoveCommand(327, 0, -COMMAND_SOUTHEAST); if (!currentCommandIsNotOneOf(COMMAND_JUMP, -1))
		return 0; jump_into_bottomless_pit();
} int o13() {
	if (currentCommandContains(COMMAND_LOOK)) { return 0; } processMoveCommand(326, 0, -COMMAND_NORTHWEST);
	processMoveCommand(328, 1112, COMMAND_DOWN, COMMAND_EAST, -328);
} int h16() {
	if (currentCommandContains(COMMAND_LOOK)) { return 0; } processMoveCommand(332, 0, -COMMAND_SOUTH);
	processMoveCommand(335, 0, -COMMAND_NORTHWEST); if (!currentCommandIsOneOf(328, COMMAND_UP, COMMAND_NORTH, COMMAND_CLIMB, -1)) return 0; printMessage(PRINT_MESSAGE_END_COMMAND, 1113, 0);
}
int b18() { processMoveCommand(331, 0, -COMMAND_WEST); processMoveCommand(330, 0, -COMMAND_NORTH); } int w17() {
	processMoveCommand(329, 0, -COMMAND_SOUTH);
} int KilobyteInputBuffer1() { processMoveCommand(329, 0, -COMMAND_EAST); processMoveCommand(333, 0, -COMMAND_WEST); processMoveCommand(332, 0, -COMMAND_NORTH); } int e16()
{
	processMoveCommand(328, 0, -COMMAND_NORTH); processMoveCommand(331, 0, -COMMAND_SOUTH);
} int n17() {
	processMoveCommand(331, 0, -COMMAND_EAST); processMoveCommand(334, 0, -COMMAND_NORTH);
} int f9() { processMoveCommand(333, 0, -COMMAND_SOUTH); } int x21() {
	processMoveCommand(328, 0, -COMMAND_EAST); processMoveCommand(336, 0, -COMMAND_WEST);
} int c24() { processMoveCommand(335, 0, -COMMAND_NORTHEAST); processMoveCommand(337, 0, -COMMAND_SOUTH); } int l20() {
	processMoveCommand(336, 0, -COMMAND_NORTH);
	processMoveCommand(338, 0, -COMMAND_SOUTH); processMoveCommand(340, 0, -COMMAND_WEST);
} int a18() { processMoveCommand(337, 0, -COMMAND_NORTH); } int o14()
{
	processMoveCommand(340, 0, -COMMAND_NORTH);
} int s17() {
	processMoveCommand(337, 0, -COMMAND_EAST); processMoveCommand(339, 0, -COMMAND_SOUTH); processMoveCommand(341, 0, -COMMAND_NORTH);
} int c25() { processMoveCommand(340, 0, -COMMAND_SOUTH); processMoveCommand(342, 0, -COMMAND_NORTHWEST); } int f10() {
	processMoveCommand(341, 0, -COMMAND_EAST);
	processMoveCommand(343, 0, -COMMAND_WEST);
} int q21() {
	processMoveCommand(342, 0, -COMMAND_NORTHEAST); processMoveCommand(344, 0, -COMMAND_SOUTH); processMoveCommand(347, 0, -COMMAND_WEST);
} int w18() { processMoveCommand(343, 0, -COMMAND_NORTH); processMoveCommand(345, 0, -COMMAND_SOUTH); } int e17() {
	processMoveCommand(344, 0, -COMMAND_NORTH);
} int d23() { processMoveCommand(348, 0, -COMMAND_NORTH); } int s18() {
	processMoveCommand(343, 0, -COMMAND_EAST); processMoveCommand(348, 0, -COMMAND_SOUTH);
	processMoveCommand(349, 0, -COMMAND_NORTHWEST);
} int b19() { processMoveCommand(346, 0, -COMMAND_SOUTH); processMoveCommand(347, 0, -COMMAND_NORTH); } int f11()
{
	processMoveCommand(347, 0, -COMMAND_EAST); processMoveCommand(350, 0, -COMMAND_WEST);
} int z10() {
	processMoveCommand(349, 0, -COMMAND_NORTHEAST); processMoveCommand(351, 0, -COMMAND_SOUTH);
} int s19() {
	processMoveCommand(350, 0, -COMMAND_NORTH); processMoveCommand(352, 0, -COMMAND_SOUTH); processMoveCommand(354, 0, -COMMAND_WEST); processMoveCommand(355, 0, -COMMAND_NORTHWEST);
} int u13() { processMoveCommand(351, 0, -COMMAND_NORTH); processMoveCommand(353, 0, -COMMAND_WEST); } int i25() {
	processMoveCommand(352, 0, -COMMAND_EAST);
	processMoveCommand(354, 0, -COMMAND_NORTH);
} int r17() { processMoveCommand(351, 0, -COMMAND_EAST); processMoveCommand(353, 0, -COMMAND_SOUTH); } int p22()
{
	processMoveCommand(351, 0, -COMMAND_SOUTHEAST); processMoveCommand(356, 0, -COMMAND_NORTHWEST);
} int m17() {
	processMoveCommand(355, 0, -COMMAND_EAST); processMoveCommand(357, 0, -COMMAND_WEST);
} int z11() { processMoveCommand(356, 0, -COMMAND_NORTHEAST); processMoveCommand(358, 0, -COMMAND_SOUTH); processMoveCommand(363, 0, -COMMAND_WEST); } int n18()
{
	processMoveCommand(357, 0, -COMMAND_NORTH); processMoveCommand(359, 0, -COMMAND_SOUTH); processMoveCommand(361, 0, -COMMAND_WEST); processMoveCommand(362, 0, -COMMAND_NORTHWEST);
} int
a19() { processMoveCommand(358, 0, -COMMAND_NORTH); processMoveCommand(360, 0, -COMMAND_NORTHWEST); } int b20() {
	processMoveCommand(359, 0, -COMMAND_SOUTHEAST); processMoveCommand(361, 0, -COMMAND_NORTH);
} int i26() { processMoveCommand(358, 0, -COMMAND_EAST); processMoveCommand(360, 0, -COMMAND_SOUTH); } int p23() {
	processMoveCommand(358, 0, -COMMAND_SOUTHEAST);
	processMoveCommand(363, 0, -COMMAND_NORTH);
} int g22() {
	processMoveCommand(357, 0, -COMMAND_EAST); processMoveCommand(362, 0, -COMMAND_SOUTH); processMoveCommand(364, 0, -COMMAND_NORTHWEST);
} 

int small_icy_chamber_364() {
	processMoveCommand(363, 0, -COMMAND_EAST); 
	processMoveCommand(327, object_type_3_buffer[685], -COMMAND_THURB);

	if (currentCommandContains(ITEM_NOTICE)) {
		printMessage(76, 1645, 670); // There is no "notice" here.  Just insubstantial glowing letters hanging in mid-air.   They  spell "This way out", just as they did the last time you looked.
	}
} 

int k12() {
	processMoveCommand(325, 0, -COMMAND_NORTH); processMoveCommand(366, 0, COMMAND_NORTHEAST, -616); if (!currentCommandIsNotOneOf(COMMAND_JUMP, -1)) return
		0; jump_into_bottomless_pit();
} int s20() { processMoveCommand(365, 0, -COMMAND_SOUTHWEST); processMoveCommand(367, 0, -COMMAND_SOUTHEAST); } 

int north_end_of_tight_passage_367() {
	processMoveCommand(366, 0, -COMMAND_WEST);
	if (!currentCommandIsNotOneOf(COMMAND_SOUTH, -1)) 
		return 0; 
	
	if (g10(ITEM_SLIME, -1)) {
		printMessage(0, 1084, 0); 
		die(); 
	} 
	
	processMoveCommand(368, -2);
} 

int z12() { processMoveCommand(367, 0, -COMMAND_NORTH); processMoveCommand(369, 0, COMMAND_SOUTH, -627); } int r18() {
	processMoveCommand(368, 0, COMMAND_NORTH, COMMAND_EXIT, -627);
} int r19() {
	processMoveCommand(231, 0, -COMMAND_WEST); if (!currentCommandIsOneOf(COMMAND_EAST, COMMAND_CROSS, -1)) return 0; if (object_type_3_buffer[32] == 0
		|| isItemAtLocation(106, -1) || isItemAtLocation(107, -1)) {
		set_value(0, 32, 0); if (isObjectFlagSet(32, 13)) {
			printMessage(0, 1083, 0);
		}
		else { printMessage(0, 1082, 0); modifyObjectFlag('s', 32, 13); } processMoveCommand(LOCATION_LIMBO, -1); die();
	} set_value(0, 32, 0);
	processMoveCommand(371, -2);
} int q23() {
	processMoveCommand(372, 0, -COMMAND_NORTH); if (!currentCommandIsOneOf(COMMAND_WEST, COMMAND_CROSS, -1)) return 0;
	if (object_type_3_buffer[32] == 0) {
		if (isObjectFlagSet(32, 13)) { printMessage(0, 1083, 0); }
		else {
			printMessage(0, 1082, 0); modifyObjectFlag('s', 32, 13);
		} processMoveCommand(LOCATION_LIMBO, -1); die();
	} set_value(0, 32, 0); processMoveCommand(370, -2);
} int n19() {
	processMoveCommand(371, 0, -COMMAND_SOUTH);
	processMoveCommand(375, 0, COMMAND_NORTH, -375); processMoveCommand(373, 0, COMMAND_EAST, -373);
} int f12() {
	processMoveCommand(372, 0, -COMMAND_NORTHWEST); processMoveCommand(376, 0, -COMMAND_SOUTHWEST);
} int v21() {
	if (currentCommandContains(COMMAND_LOOK)) { return 0; } processMoveCommand(375, 0, -COMMAND_WEST); processMoveCommand(377, 0, COMMAND_DOWN, -5);
	check_command_steps();
} 

int w27() {
	set_value(0, 41, 1); 
	if (!currentCommandIsOneOf(COMMAND_UP, 376, 5, COMMAND_WEST, -1)) 
		return 0; 
	processMoveCommand(376, -2);
} 

int z28() {
	check_command_steps(); 
	
	if (!currentCommandIsOneOf(ITEM_WATER, COMMAND_FILL, COMMAND_DRINK, -1))
		return 0; 
	
	if (currentCommandContains(ITEM_WATER) || currentCommandContains(COMMAND_DRINK))
	{
		if (isItemAtLocation(ITEM_FLASK, 3) || isItemAtLocation(ITEM_BOTTLE, 3)) {
			return 0; 
		}
	} 

	printMessage(PRINT_MESSAGE_END_COMMAND, 870, 0); // I'm afraid that all that's available here is salt water, which isn't good for anything much...  you'd better try elsewhere.
} 

int u14() {
	processMoveCommand(374, 0, -COMMAND_SOUTH); processMoveCommand(372, 0, -COMMAND_WEST);
} int o15() {
	processMoveCommand(373, 0, COMMAND_NORTH, -COMMAND_EXIT); if (currentCommandContains(13))
	{
		printMessage(PRINT_MESSAGE_END_COMMAND, 1469, 0);
	}
} int a12() {
	processMoveCommand(254, 0, -COMMAND_NORTH); if (currentCommandContains(9) && object_type_3_buffer[30] == 2)
	{
		set_object_location(9, object_type_3_buffer[PLAYER_LOCATION]);
	} if (!currentCommandIsOneOf(COMMAND_CROSS, 30, COMMAND_SOUTH, -1)) return 0; if (object_type_3_buffer[30] == 0) {
		printMessage(PRINT_MESSAGE_END_COMMAND, 1120, 0);
	} if (isItemAtLocation(64, -1)) {
		if (isItemAtLocation(56, -1)) {
			printMessage(0, 1125, 0); processMoveCommand(LOCATION_LIMBO, -1); set_value(0, 30, 0);
			die();
		} processMoveCommand(252, -2);
	} printMessage(0, 1121, 0); processMoveCommand(LOCATION_LIMBO, -1); die();
} 

int north_end_stone_faces_254() 
{
	if (object_type_3_buffer[31] == 1) {
		processMoveCommand(255, 0, -COMMAND_NORTHWEST); 
		processMoveCommand(263, 0, -COMMAND_NORTH); 
		processMoveCommand(292, 0, -COMMAND_NORTHEAST);
	} 
	processMoveCommand(LOCATION_SOUTH_END_STONE_FACES, 0, -COMMAND_SOUTH);
} 

int south_end_fog_filled_room_255() {
	processMoveCommand(254, 0, -COMMAND_SOUTH); 
	if (!currentCommandIsNotOneOf(COMMAND_NORTH, -1)) 
		return 0; 
	
	set_value(0, 14, 0); 
	set_object_location(14, 256);
	processMoveCommand(256, -2);
} 

int in_fog_256() {
	if (!currentCommandIsOneOf(COMMAND_NORTH, COMMAND_EAST, COMMAND_SOUTH, COMMAND_WEST, COMMAND_NORTHEAST, COMMAND_NORTHWEST, COMMAND_SOUTHEAST, COMMAND_SOUTHWEST, -1)) 
		return 0; 
	
	f3(676, LOCATION_LIMBO); 
	j36(); 
	
	f3(699, COMMAND_NORTH); 
	
	object_type_3_buffer[699] += object_type_3_buffer[15]; 
	
	if ((object_type_3_buffer[699] == object_type_3_buffer[670]
			&& object_type_3_buffer[697] == 2 || object_type_3_buffer[699] == object_type_3_buffer[669]) && g10(15, -1)) {
		
		set_value(0, 14, 8); 
		object_type_3_buffer[684] = cheezy_rand(1351 - 1348 + 1) + 1348; 
		processMoveCommand(257, -2);
	} 
	
	processMoveCommand(256, -2);
} 

int a13() {
	if (currentCommandContains(COMMAND_DOWN))
	{
		set_object_location(14, 255); processMoveCommand(258, -2);
	} if (!currentCommandIsOneOf(COMMAND_NORTH, COMMAND_EAST, COMMAND_SOUTH, COMMAND_WEST, COMMAND_NORTHEAST, COMMAND_NORTHWEST, COMMAND_SOUTHEAST, COMMAND_SOUTHWEST, -1))
		return 0; set_value(0, 14, 0); processMoveCommand(256, -2);
} int i21() {
	processMoveCommand(259, 0, COMMAND_NORTH, -259); if
		(!currentCommandIsOneOf(COMMAND_UP, COMMAND_SOUTH, -1)) return 0; set_object_location(14, 256); processMoveCommand(257, -2);
} int h32() {
	if (!currentCommandIsNotOneOf(535, 114, -1))
		return 0; if (!isItemAtLocation(114, -1)) return 0; if (object_type_3_buffer[114] == 1) {
		set_object_location(114, PLAYER_LOCATION); set_value(0, 114, 0);
		printMessage(PRINT_MESSAGE_END_COMMAND, 1189, 0);
	}
} int q38() {
	processMoveCommand(258, 0, COMMAND_WEST, COMMAND_EXIT, -258); processMoveCommand(260, 0, COMMAND_NORTH, 616, -260);
	if (!currentCommandIsNotOneOf(COMMAND_LOOK, 259, -1)) return 0; printMessage(PRINT_MESSAGE_END_COMMAND, 1511, 0);
} int t17() {
	if (currentCommandContains(COMMAND_LOOK))
	{
		return 0;
	} processMoveCommand(261, 0, COMMAND_UP, COMMAND_CLIMB, -261); processMoveCommand(259, 0, COMMAND_SOUTH, 616, -259);
} int x16()
{
	if (currentCommandContains(COMMAND_LOOK)) { return 0; } processMoveCommand(260, 0, COMMAND_DOWN, COMMAND_CLIMB, -260); processMoveCommand(262, 0, COMMAND_SOUTH, 328, -261);
	processMoveCommand(463, 0, -COMMAND_NORTHWEST);
} int n15() {
	if (currentCommandContains(COMMAND_LOOK)) { return 0; } processMoveCommand(255, 1112, COMMAND_SOUTH, COMMAND_DOWN, -328);
	processMoveCommand(261, 0, -COMMAND_NORTH); processMoveCommand(260, 0, 260, -261);
} int o9() {
	processMoveCommand(254, 0, -COMMAND_SOUTH); if (currentCommandContains(COMMAND_NORTH))
	{
		object_type_3_buffer[25] += 1; if (object_type_3_buffer[25] == 1) { printMessage(0, 1142, 0); } processMoveCommand(264, -2);
	}
} 

int north_of_basilisk_264()
{
	processMoveCommand(265, 0, -COMMAND_NORTH); 
	if (currentCommandContains(COMMAND_SOUTH)) {
		object_type_3_buffer[25] -= 1; 
		if (object_type_3_buffer[25] == 0) {
			w25(); 
			if (isItemAtLocation(ITEM_PLATE, 2)) {
				printMessage(0, 1143, 0); 
				set_value(0, 25, 2); 
				modifyObjectFlag('c', 264, 8);
			} else {
				printMessage(0, 1144, 0);
				die();
			}
		} 
		processMoveCommand(263, -2);
	}
} 

int m13() {
	if (currentCommandContains(COMMAND_LOOK)) { return 0; } processMoveCommand(315, 0, COMMAND_NORTH, -315);
	processMoveCommand(264, 0, -COMMAND_SOUTH); processMoveCommand(266, 0, COMMAND_DOWN, -5); check_command_steps();
} 

int peelgrunt_room_315() {
	if (currentCommandContains(COMMAND_ENTER)) {
		if	(object_type_3_buffer[35] == 1) {
			set_value(SET_VALUE_DEREFERENCE, 680, PLAYER_LOCATION); 
			processMoveCommand(462, -2);
		} 
		printMessage(PRINT_MESSAGE_END_COMMAND, 1160, 0); // The safe's door is closed, and you can't get in!
	} 
	
	if (!currentCommandIsOneOf(COMMAND_SOUTH, COMMAND_EXIT, 250, -1))
		return 0; 
	
	if (object_type_3_buffer[35] == 1) { 
		printMessage(PRINT_MESSAGE_END_COMMAND, 1135, 0); 
	} 
	processMoveCommand(265, -2);
} 

int o10() {
	if
		(currentCommandContains(COMMAND_LOOK)) {
		return 0;
	} processMoveCommand(265, 0, -COMMAND_UP); processMoveCommand(267, 0, COMMAND_DOWN, -5); check_command_steps();
} int a14()
{
	if (currentCommandContains(COMMAND_LOOK)) { return 0; } processMoveCommand(266, 0, -COMMAND_UP); processMoveCommand(268, 0, COMMAND_DOWN, -5); processMoveCommand(269, 0, COMMAND_NORTH, -COMMAND_EXIT);
	check_command_steps();
} int s16() {
	if (currentCommandContains(COMMAND_LOOK)) { return 0; } processMoveCommand(267, 0, COMMAND_UP, -5); check_command_steps();
} 

int q16() {
	processMoveCommand(267, 0, -COMMAND_SOUTH); 
	processMoveCommand(271, 0, -COMMAND_WEST); 
	processMoveCommand(270, 0, -COMMAND_EAST); 
	if (!currentCommandIsOneOf(COMMAND_PLUGH, LOCATION_PLOVER, -1))
		return 0; 
	
	if (isObjectFlagSet(dereference(710), 3)) { 
		printMessage(PRINT_MESSAGE_END_COMMAND, MESSAGE_NOTHING_HAPPENS, 0); 
	} 
	
	processMoveCommand(382, -object_type_3_buffer[685]);
} int
b16() { processMoveCommand(269, 0, COMMAND_WEST, -COMMAND_DOWN); processMoveCommand(271, 0, -COMMAND_UP); } int u12() {
	processMoveCommand(291, 0, -COMMAND_EAST);
	processMoveCommand(281, 0, -COMMAND_WEST);
} int g18() { processMoveCommand(290, 0, -COMMAND_WEST); } int w16() {
	processMoveCommand(254, 0, -COMMAND_NORTHWEST);
	processMoveCommand(293, 0, -COMMAND_NORTH);
} int k11() {
	processMoveCommand(294, 0, COMMAND_NORTHEAST, -294); processMoveCommand(295, 0, COMMAND_NORTHWEST, -295); processMoveCommand(292, 0, -COMMAND_SOUTH);
} int e15() { processMoveCommand(293, 0, COMMAND_SOUTH, -COMMAND_EXIT); } 

int room_with_translucent_walls_295() {
	if (!currentCommandIsOneOf(COMMAND_EXIT, COMMAND_EAST, COMMAND_RETREAT, -1))
		return 0; 
	
	if (item_location[ITEM_GOBLINS] == 484) {
		set_object_location(ITEM_GOBLINS, object_type_3_buffer[PLAYER_LOCATION]);
		set_value(0, ITEM_GOBLINS, 0); 
	} 
	
	processMoveCommand(293, -2);
} 

int q26() {
	processMoveCommand(269, object_type_3_buffer[685], COMMAND_PLUGH, -LOCATION_PLOVER); if (!currentCommandIsOneOf(COMMAND_DOWN, COMMAND_CLIMB, COMMAND_NORTH, COMMAND_SOUTH, COMMAND_EAST, COMMAND_WEST, COMMAND_NORTHEAST,
		COMMAND_NORTHWEST, COMMAND_SOUTHEAST, COMMAND_SOUTHWEST, COMMAND_JUMP, -1)) return 0; printMessage(0, 1136, 0); processMoveCommand(LOCATION_LIMBO, -1); die();
} 

int g16()
{
	if (currentCommandContains(661)) { 
		printMessage(PRINT_MESSAGE_END_COMMAND, 1599, 0); // As  could be plainly inferred from the description by anybody with even a very modest amount of  intelligence,  this  strange  place  has  no  such conventional  features  as  walls.   Before you ask, no, it has no floor, ceiling, doors or windows either.  I hope, the fact does not  come  as  a surprise.
	}

	processMoveCommand(LOCATION_GRAY_NOWHERE, 0, COMMAND_NORTH, COMMAND_NORTHEAST, COMMAND_EAST, COMMAND_SOUTHEAST, COMMAND_SOUTH, COMMAND_SOUTHWEST, COMMAND_WEST, COMMAND_NORTHWEST, COMMAND_UP, -COMMAND_DOWN);

	if (!currentCommandIsOneOf(496, COMMAND_XYZZY, 498, 499, 500, COMMAND_PLUGH, 502, 503, 504, 505, 506, 507, 508, 509, COMMAND_FEE, 511, -1))
		return 0; 

	if (currentCommandContains(COMMAND_SAY)) { 
		set_value(SET_VALUE_DEREFERENCE, 699, 670); 
	} else {
		if (object_type_3_buffer[697] == 1) {
			set_value(SET_VALUE_DEREFERENCE, 699, 669);
		} else { 
			printMessage(PRINT_MESSAGE_END_COMMAND, 804, 0); // Hey, not so fast!  I can only deal with one at a time - there is only one of me, you know...
		}
	} 

	set_value(SET_VALUE_DEREFERENCE, 701, 699); 
	f3(700, 495); 
	object_type_3_buffer[700] += 1; 
	object_type_3_buffer[701] -= object_type_3_buffer[700]; 

	if (object_type_3_buffer[701] == object_type_3_buffer[725]) {
			f3(700, 512); 
			object_type_3_buffer[700] -= 1; 
			if (object_type_3_buffer[699] == object_type_3_buffer[700])
			{
				set_value(0, 717, 5); 
				if (item_location[ITEM_STARSTONE] == LOCATION_MAGNIFICENT_VIEW) { 
					set_object_location(ITEM_STARSTONE, LOCATION_GRAY_NOWHERE); 
				} else { 
					set_object_location(ITEM_STARSTONE, LOCATION_LIMBO); 
				} 
				
				modifyObjectFlag('c', ITEM_STARSTONE, 3);
				*getObjectPointer(675) = -1; object_type_3_buffer[675] = ITEM_MIN_ID - 1; 
				
				while (++object_type_3_buffer[675] <= ITEM_MAX_ID) {
					if (isObjectFlagSet(dereference(675), 3))
					{
						if (item_location[object_type_3_buffer[675]] == LOCATION_BUILDING) { 
							set_object_location(object_type_3_buffer[675], LOCATION_GRAY_NOWHERE); 
						} else { 
							set_object_location(object_type_3_buffer[675], LOCATION_LIMBO); 
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
					if (cheezy_rand(100) < 20|| !(isObjectFlagSet(dereference(735), 4))) {								
						printMessage(0, 1450, 0); // What's  the  matter,  can't you follow a simple rule?  Now you'll have to start all over again...
						modifyObjectFlag('s', dereference(735), 4);
					} else {
						printMessage(0, 802, 0); // Naturally enough, nothing happens.
					}
				} else { 
					printMessage(0, MESSAGE_NOTHING_HAPPENS, 0); // Nothing happens.
				}
			} 
			set_value(0, 725, 0);
		} 
	longjmp(done_with_command, 1);
} 

int d20() {
	if (!currentCommandIsOneOf(COMMAND_NORTH, COMMAND_NORTHEAST, COMMAND_EAST, COMMAND_SOUTHEAST, COMMAND_SOUTH, COMMAND_SOUTHWEST, COMMAND_WEST, COMMAND_NORTHWEST, COMMAND_UP, COMMAND_DOWN, -1)) return 0; set_value(SET_VALUE_DEREFERENCE, 701, 736);
	f3(678, 272); f3(679, 271); z24(); set_value(SET_VALUE_DEREFERENCE, 736, 702); longjmp(done_with_command, 1);
} int i22()
{
	if (!currentCommandIsOneOf(COMMAND_NORTH, COMMAND_NORTHEAST, COMMAND_EAST, COMMAND_SOUTHEAST, COMMAND_SOUTH, COMMAND_SOUTHWEST, COMMAND_WEST, COMMAND_NORTHWEST, COMMAND_UP, COMMAND_DOWN, -1)) return 0; set_value(SET_VALUE_DEREFERENCE, 701, 737);
	f3(678, 273); f3(679, 271); z24(); set_value(SET_VALUE_DEREFERENCE, 737, 702); longjmp(done_with_command, 1);
} int a15()
{
	if (!currentCommandIsOneOf(COMMAND_NORTH, COMMAND_NORTHEAST, COMMAND_EAST, COMMAND_SOUTHEAST, COMMAND_SOUTH, COMMAND_SOUTHWEST, COMMAND_WEST, COMMAND_NORTHWEST, COMMAND_UP, COMMAND_DOWN, -1)) return 0; set_value(SET_VALUE_DEREFERENCE, 701, 738);
	f3(678, 274); f3(679, 272); z24(); set_value(SET_VALUE_DEREFERENCE, 738, 702); longjmp(done_with_command, 1);
} int u11()
{
	if (!currentCommandIsOneOf(COMMAND_NORTH, COMMAND_NORTHEAST, COMMAND_EAST, COMMAND_SOUTHEAST, COMMAND_SOUTH, COMMAND_SOUTHWEST, COMMAND_WEST, COMMAND_NORTHWEST, COMMAND_UP, COMMAND_DOWN, -1)) return 0; set_value(SET_VALUE_DEREFERENCE, 701, 739);
	f3(678, 275); f3(679, 273); z24(); set_value(SET_VALUE_DEREFERENCE, 739, 702); longjmp(done_with_command, 1);
} int g17()
{
	if (!currentCommandIsOneOf(COMMAND_NORTH, COMMAND_NORTHEAST, COMMAND_EAST, COMMAND_SOUTHEAST, COMMAND_SOUTH, COMMAND_SOUTHWEST, COMMAND_WEST, COMMAND_NORTHWEST, COMMAND_UP, COMMAND_DOWN, -1)) return 0; set_value(SET_VALUE_DEREFERENCE, 701, 740);
	f3(678, 276); f3(679, 274); z24(); set_value(SET_VALUE_DEREFERENCE, 740, 702); longjmp(done_with_command, 1);
} int i23()
{
	if (!currentCommandIsOneOf(COMMAND_NORTH, COMMAND_NORTHEAST, COMMAND_EAST, COMMAND_SOUTHEAST, COMMAND_SOUTH, COMMAND_SOUTHWEST, COMMAND_WEST, COMMAND_NORTHWEST, COMMAND_UP, COMMAND_DOWN, -1)) return 0; set_value(SET_VALUE_DEREFERENCE, 701, 741);
	f3(678, 277); f3(679, 275); z24(); set_value(SET_VALUE_DEREFERENCE, 741, 702); longjmp(done_with_command, 1);
} int t18()
{
	if (!currentCommandIsOneOf(COMMAND_NORTH, COMMAND_NORTHEAST, COMMAND_EAST, COMMAND_SOUTHEAST, COMMAND_SOUTH, COMMAND_SOUTHWEST, COMMAND_WEST, COMMAND_NORTHWEST, COMMAND_UP, COMMAND_DOWN, -1)) return 0; set_value(SET_VALUE_DEREFERENCE, 701, 742);
	f3(678, 278); f3(679, 276); z24(); set_value(SET_VALUE_DEREFERENCE, 742, 702); longjmp(done_with_command, 1);
} int c22()
{
	if (!currentCommandIsOneOf(COMMAND_NORTH, COMMAND_NORTHEAST, COMMAND_EAST, COMMAND_SOUTHEAST, COMMAND_SOUTH, COMMAND_SOUTHWEST, COMMAND_WEST, COMMAND_NORTHWEST, COMMAND_UP, COMMAND_DOWN, -1)) return 0; set_value(SET_VALUE_DEREFERENCE, 701, 743);
	f3(678, 279); f3(679, 277); z24(); set_value(SET_VALUE_DEREFERENCE, 743, 702); longjmp(done_with_command, 1);
} int w15()
{
	if (!currentCommandIsOneOf(COMMAND_NORTH, COMMAND_NORTHEAST, COMMAND_EAST, COMMAND_SOUTHEAST, COMMAND_SOUTH, COMMAND_SOUTHWEST, COMMAND_WEST, COMMAND_NORTHWEST, COMMAND_UP, COMMAND_DOWN, -1)) return 0; set_value(SET_VALUE_DEREFERENCE, 701, 744);
	f3(678, 280); f3(679, 278); z24(); set_value(SET_VALUE_DEREFERENCE, 744, 702); longjmp(done_with_command, 1);
} int n16()
{
	if (!currentCommandIsOneOf(COMMAND_NORTH, COMMAND_NORTHEAST, COMMAND_EAST, COMMAND_SOUTHEAST, COMMAND_SOUTH, COMMAND_SOUTHWEST, COMMAND_WEST, COMMAND_NORTHWEST, COMMAND_UP, COMMAND_DOWN, -1)) return 0; set_value(SET_VALUE_DEREFERENCE, 701, 745);
	f3(678, 281); f3(679, 279); z24(); set_value(SET_VALUE_DEREFERENCE, 745, 702); longjmp(done_with_command, 1);
} int q17()
{
	if (!currentCommandIsOneOf(COMMAND_NORTH, COMMAND_NORTHEAST, COMMAND_EAST, COMMAND_SOUTHEAST, COMMAND_SOUTH, COMMAND_SOUTHWEST, COMMAND_WEST, COMMAND_NORTHWEST, COMMAND_UP, COMMAND_DOWN, -1)) return 0; set_value(SET_VALUE_DEREFERENCE, 701, 746);
	f3(678, 282); f3(679, 289); z24(); set_value(SET_VALUE_DEREFERENCE, 746, 702); longjmp(done_with_command, 1);
} int r15()
{
	if (!currentCommandIsOneOf(COMMAND_NORTH, COMMAND_NORTHEAST, COMMAND_EAST, COMMAND_SOUTHEAST, COMMAND_SOUTH, COMMAND_SOUTHWEST, COMMAND_WEST, COMMAND_NORTHWEST, COMMAND_UP, COMMAND_DOWN, -1)) return 0; set_value(SET_VALUE_DEREFERENCE, 701, 747);
	f3(678, 283); f3(679, 281); z24(); set_value(SET_VALUE_DEREFERENCE, 747, 702); longjmp(done_with_command, 1);
} int a16()
{
	if (!currentCommandIsOneOf(COMMAND_NORTH, COMMAND_NORTHEAST, COMMAND_EAST, COMMAND_SOUTHEAST, COMMAND_SOUTH, COMMAND_SOUTHWEST, COMMAND_WEST, COMMAND_NORTHWEST, COMMAND_UP, COMMAND_DOWN, -1)) return 0; set_value(SET_VALUE_DEREFERENCE, 701, 748);
	f3(678, 284); f3(679, 282); z24(); set_value(SET_VALUE_DEREFERENCE, 748, 702); longjmp(done_with_command, 1);
} int d21()
{
	if (!currentCommandIsOneOf(COMMAND_NORTH, COMMAND_NORTHEAST, COMMAND_EAST, COMMAND_SOUTHEAST, COMMAND_SOUTH, COMMAND_SOUTHWEST, COMMAND_WEST, COMMAND_NORTHWEST, COMMAND_UP, COMMAND_DOWN, -1)) return 0; set_value(SET_VALUE_DEREFERENCE, 701, 749);
	f3(678, 285); f3(679, 283); z24(); set_value(SET_VALUE_DEREFERENCE, 749, 702); longjmp(done_with_command, 1);
} int x17()
{
	if (!currentCommandIsOneOf(COMMAND_NORTH, COMMAND_NORTHEAST, COMMAND_EAST, COMMAND_SOUTHEAST, COMMAND_SOUTH, COMMAND_SOUTHWEST, COMMAND_WEST, COMMAND_NORTHWEST, COMMAND_UP, COMMAND_DOWN, -1)) return 0; set_value(SET_VALUE_DEREFERENCE, 701, 750);
	f3(678, 286); f3(679, 284); z24(); set_value(SET_VALUE_DEREFERENCE, 750, 702); longjmp(done_with_command, 1);
} int v18()
{
	if (!currentCommandIsOneOf(COMMAND_NORTH, COMMAND_NORTHEAST, COMMAND_EAST, COMMAND_SOUTHEAST, COMMAND_SOUTH, COMMAND_SOUTHWEST, COMMAND_WEST, COMMAND_NORTHWEST, COMMAND_UP, COMMAND_DOWN, -1)) return 0; set_value(SET_VALUE_DEREFERENCE, 701, 751);
	f3(678, 287); f3(679, 285); z24(); set_value(SET_VALUE_DEREFERENCE, 751, 702); longjmp(done_with_command, 1);
} int o11()
{
	if (!currentCommandIsOneOf(COMMAND_NORTH, COMMAND_NORTHEAST, COMMAND_EAST, COMMAND_SOUTHEAST, COMMAND_SOUTH, COMMAND_SOUTHWEST, COMMAND_WEST, COMMAND_NORTHWEST, COMMAND_UP, COMMAND_DOWN, -1)) return 0; set_value(SET_VALUE_DEREFERENCE, 701, 752);
	f3(678, 288); f3(679, 287); z24(); set_value(SET_VALUE_DEREFERENCE, 752, 702); longjmp(done_with_command, 1);
} int j19()
{
	if (!currentCommandIsOneOf(COMMAND_NORTH, COMMAND_NORTHEAST, COMMAND_EAST, COMMAND_SOUTHEAST, COMMAND_SOUTH, COMMAND_SOUTHWEST, COMMAND_WEST, COMMAND_NORTHWEST, COMMAND_UP, COMMAND_DOWN, -1)) return 0; set_value(SET_VALUE_DEREFERENCE, 701, 753);
	f3(678, 269); f3(679, 287); z24(); set_value(SET_VALUE_DEREFERENCE, 753, 702); longjmp(done_with_command, 1);
} int p19()
{
	if (currentCommandContains(COMMAND_EAST)) { if (!(isObjectFlagSet(290, 4))) { set_value(0, 733, 10); } processMoveCommand(290, -2); } if (!currentCommandIsOneOf(COMMAND_NORTH, COMMAND_NORTHEAST, COMMAND_SOUTHEAST, COMMAND_SOUTH, COMMAND_SOUTHWEST, COMMAND_WEST, COMMAND_NORTHWEST, COMMAND_UP, COMMAND_DOWN, -1))
		return 0; set_value(SET_VALUE_DEREFERENCE, 701, 754); f3(678, 280); f3(679, 281); z24(); set_value(SET_VALUE_DEREFERENCE, 754, 702);
	longjmp(done_with_command, 1);
} int o16() { processMoveCommand(161, 0, -COMMAND_UP); processMoveCommand(394, 0, -COMMAND_DOWN); check_command_steps(); } 

int cellar_view_394() {
	if (currentCommandContains(COMMAND_CLIMB)) { 
		printMessage(PRINT_MESSAGE_END_COMMAND, 1660, 0); // Climb the portcullis?  You'd only get rusty all over.  There is no way to get to the other side up there either
	} 
	
	if (currentCommandContains(77)) {
		printMessage(PRINT_MESSAGE_END_COMMAND, 1659, 0); // The drain is on the other side of the portcullis, too far from here
	} 
	
	if	((currentCommandContains(ITEM_ORB) || currentCommandContains(604)) && item_location[ITEM_ORB] == LOCATION_CELLAR) {
		printMessage(PRINT_MESSAGE_END_COMMAND, 1227, 0); // The globe lies out of reach on the cellar floor.
	} 
	
	if (currentCommandContains(72)) {
		if (!(currentCommandContains(113) || currentCommandContains(COMMAND_LOOK))) {
			printMessage(PRINT_MESSAGE_END_COMMAND, 1226, 0); // If  you  are  trying  to  open the rusty portcullis, you are wasting your time.
		}
	} 
	
	processMoveCommand(395, 0, COMMAND_UP, -5); 
	check_command_steps();
} 

int
k8() {
	processMoveCommand(204, 0, -COMMAND_CLIMB); processMoveCommand(235, 0, -COMMAND_NORTH); processMoveCommand(205, 0, -COMMAND_WEST); processMoveCommand(408, 0, -COMMAND_UP); processMoveCommand(407, 0, -COMMAND_DOWN);
	check_command_steps();
} int m9() { processMoveCommand(203, 0, COMMAND_EAST, -COMMAND_EXIT); } 

int living_quarters_383() {
	processMoveCommand(384, 0, -COMMAND_NORTH); 
	processMoveCommand(385, 0, -COMMAND_SOUTH);
	processMoveCommand(LOCATION_PANTRY, 0, -COMMAND_EAST); 
	if (!currentCommandIsNotOneOf(634, -1)) 
		return 0; 
	
	printMessage(72, MESSAGE_FIXTURE, 634);
} 

int n13()
{
	processMoveCommand(203, 0, COMMAND_EXIT, -COMMAND_DOWN);
} int w19() {
	processMoveCommand(383, 0, -COMMAND_SOUTH); if (currentCommandContains(74)) {
		if (currentCommandContains(561))
		{
			set_value(0, PREVIOUS_LOCATION, 0); processMoveCommand(405, -1235);
		} if (currentCommandContains(COMMAND_LOOK)) { printMessage(PRINT_MESSAGE_END_COMMAND, 1617, 0); } printMessage(PRINT_MESSAGE_END_COMMAND, MESSAGE_RIDICULOUS, 0);
	}
} int f13() {
	processMoveCommand(412, 0, -412); processMoveCommand(386, 0, -COMMAND_EAST); processMoveCommand(389, 0, -COMMAND_WEST); processMoveCommand(390, 0, -COMMAND_UP);
	processMoveCommand(387, 0, -COMMAND_DOWN); processMoveCommand(383, 0, -COMMAND_NORTH);
} int k13() {
	processMoveCommand(385, 0, -COMMAND_NORTH); processMoveCommand(386, 0, COMMAND_EAST, -COMMAND_DOWN);
	processMoveCommand(389, 0, -COMMAND_WEST); processMoveCommand(387, 0, -COMMAND_SOUTH); processMoveCommand(388, 0, -COMMAND_UP);
} int u15() {
	processMoveCommand(386, 0, -COMMAND_NORTH);
	processMoveCommand(387, 0, COMMAND_EAST, -COMMAND_DOWN); processMoveCommand(385, 0, -COMMAND_WEST); processMoveCommand(388, 0, -COMMAND_SOUTH); processMoveCommand(389, 0, -COMMAND_UP);
} int
o27() {
	if (!currentCommandIsNotOneOf(COMMAND_THROW, ITEM_AXE, -1)) return 0; if (!isItemAtLocation(ITEM_AXE, -1)) return 0; if (!g10(87, -1))
		return 0; set_value(0, ITEM_AXE, 2); set_object_location(ITEM_AXE, PLAYER_LOCATION); printMessage(PRINT_MESSAGE_END_COMMAND, 1324, 0);
} int f25() {
	if (currentCommandContains(COMMAND_TAKE))
	{
		e6(0, object_type_3_buffer[PLAYER_LOCATION], 3); if (currentCommandContains(ITEM_AXE) && object_type_3_buffer[ITEM_AXE] == 2) { printMessage(PRINT_MESSAGE_END_COMMAND, 1304, 0); }
	} if (currentCommandContains(88)
		&& object_type_3_buffer[86] == 1) {
		printMessage(PRINT_MESSAGE_END_COMMAND, 1331, 0);
	} processMoveCommand(386, 0, -COMMAND_NORTH); processMoveCommand(390, 0, -COMMAND_WEST); processMoveCommand(387, 0, -COMMAND_EAST);
	processMoveCommand(389, 0, -COMMAND_UP); if (currentCommandContains(COMMAND_SOUTH)) {
		w25(); if (object_type_3_buffer[86] == 0) { printMessage(PRINT_MESSAGE_END_COMMAND, 1304, 0); }
		if (object_type_3_buffer[86] == 1) { printMessage(PRINT_MESSAGE_END_COMMAND, 1330, 0); } processMoveCommand(433, -2);
	} if (currentCommandContains(COMMAND_ENTER) && object_type_3_buffer[86] == 2)
	{
		processMoveCommand(433, -2);
	}
} int t22() {
	processMoveCommand(390, 0, -COMMAND_NORTH); processMoveCommand(385, 0, -COMMAND_EAST); processMoveCommand(389, 0, COMMAND_WEST, -COMMAND_UP);
	processMoveCommand(388, 0, -COMMAND_SOUTH); processMoveCommand(387, 0, -COMMAND_DOWN);
} int h18() {
	processMoveCommand(389, 0, COMMAND_WEST, -COMMAND_NORTH); processMoveCommand(385, 0, -COMMAND_EAST);
	processMoveCommand(388, 0, -COMMAND_SOUTH); processMoveCommand(389, 0, -COMMAND_UP); processMoveCommand(386, 0, -COMMAND_DOWN);
} 

int basement_391() {
	processMoveCommand(392, 0, COMMAND_UP, -5);
	
	u28(); 
	maybe_look_at_slab(); 
	check_command_steps(); 
	processMoveCommand(LOCATION_CELLAR, 1233, COMMAND_ENTER, -COMMAND_SOUTH);
} 

int cellar_393() {
	if (currentCommandContains(ITEM_PORTCULLIS)) {
		if (!(currentCommandContains(113) || currentCommandContains(COMMAND_LOOK))) { 
			printMessage(PRINT_MESSAGE_END_COMMAND, 1226, 0); // If  you  are  trying  to  open the rusty portcullis, you are wasting your time.
		}
	} 
	maybe_look_at_slab(); 
	check_command_steps(); 
	
	if (currentCommandContains(ITEM_DRAIN) && currentCommandContains(COMMAND_GO) || currentCommandContains(COMMAND_DOWN)) {
		printMessage(PRINT_MESSAGE_END_COMMAND, 1364, 0); // Would  you  perhaps  care to explain how you propose to squeeze through a ten inch drain?  Be serious!
	}
} 

int curtain_entrance_392() {
	processMoveCommand(391, 0, -COMMAND_DOWN);
	processMoveCommand(LOCATION_PANTRY, 0, -COMMAND_UP);
	check_command_steps(); 
	processMoveCommand(225, 0, COMMAND_NORTHWEST, COMMAND_ENTER, -225);
} 

int west_of_causeway_396() {
	processMoveCommand(397, 0, COMMAND_EAST, -COMMAND_CROSS);
	processMoveCommand(432, 0, COMMAND_WEST, COMMAND_NORTH, COMMAND_SOUTH, COMMAND_NORTHWEST, -COMMAND_SOUTHWEST); 
	
	if (currentCommandContains(COMMAND_DOWN)) {
		printMessage(0, 1247, 0); 
		processMoveCommand(LOCATION_LIMBO, -1);
		die();
	} 
	
	if (currentCommandContains(640)) { 
		printMessage(PRINT_MESSAGE_END_COMMAND, 1550, 0); 
	}
} 

int east_of_causeway_397() {
	processMoveCommand(396, 0, COMMAND_WEST, -COMMAND_CROSS);
	processMoveCommand(239, 0, COMMAND_SOUTH, COMMAND_SOUTHEAST, COMMAND_EAST, -239); 
	if (currentCommandContains(COMMAND_DOWN)) {
		printMessage(0, 1247, 0); 
		processMoveCommand(LOCATION_LIMBO, -1); 
		die();
	} 
	
	if (currentCommandContains(640)) { 
		printMessage(PRINT_MESSAGE_END_COMMAND, 1550, 0); 
	}
} 

int a20() {
	processMoveCommand(408, 0, COMMAND_NORTH, -COMMAND_EXIT); processMoveCommand(399, 0, COMMAND_UP, -COMMAND_CLIMB);
	check_command_steps();
} int k14() { processMoveCommand(398, 0, -COMMAND_DOWN); processMoveCommand(400, 0, COMMAND_UP, -COMMAND_CLIMB); check_command_steps(); } int z15()
{
	processMoveCommand(399, 0, -COMMAND_DOWN); processMoveCommand(401, 0, COMMAND_UP, -COMMAND_CLIMB); b30(); check_command_steps();
} int p24() {
	if (currentCommandContains(COMMAND_DOWN))
	{
		if (cheezy_rand(100) < 80) { processMoveCommand(402, -2); } processMoveCommand(400, -2);
	} check_command_steps(); if (!currentCommandIsOneOf(COMMAND_UP, COMMAND_CLIMB, -1))
		return 0; if (cheezy_rand(100) < 80) { processMoveCommand(400, -2); } processMoveCommand(402, -2);
} int h19() {
	processMoveCommand(403, 0, COMMAND_UP, -COMMAND_CLIMB);
	processMoveCommand(401, 0, -COMMAND_DOWN); b30(); check_command_steps();
} int g23() {
	processMoveCommand(404, 0, COMMAND_UP, -COMMAND_CLIMB); processMoveCommand(402, 0, -COMMAND_DOWN);
	u28(); if (currentCommandContains(6)) {
		if (currentCommandContains(536) || currentCommandContains(COMMAND_BREAK)) { printMessage(76, 1420, 670); } if (currentCommandContains(COMMAND_CLOSE))
		{
			printMessage(76, 1129, 670);
		} if (currentCommandContains(113)) {
			if (isItemAtLocation(114, 4) || isItemAtLocation(ITEM_BOTTLE, 4)) {
				if (isItemAtLocation(ITEM_BOTTLE, 4))
				{
					set_value(0, ITEM_BOTTLE, 2);
				}
				else { set_value(0, 114, 2); } printMessage(12, 1489, 113); printMessage(76, 1490, 6);
			} printMessage(76, 1027, 669);
		} if (currentCommandContains(COMMAND_LOOK)) { printMessage(PRINT_MESSAGE_END_COMMAND, 1604, 0); } printMessage(PRINT_MESSAGE_END_COMMAND, MESSAGE_RIDICULOUS, 0);
	} if
		(currentCommandContains(120)) {
		if (currentCommandContains(562) || currentCommandContains(COMMAND_LOOK)) { printMessage(PRINT_MESSAGE_END_COMMAND, 1605, 0); } printMessage(PRINT_MESSAGE_END_COMMAND, MESSAGE_RIDICULOUS, 0);
	} check_command_steps();
} int k15() {
	processMoveCommand(403, 0, -COMMAND_DOWN); b30(); check_command_steps(); if (!currentCommandIsOneOf(COMMAND_UP, COMMAND_CLIMB, -1)) return
		0; f3(677, 1249); object_type_3_buffer[677] += object_type_3_buffer[730]; if (object_type_3_buffer[730] == 2) {
		if (ask_user_yes_or_no_question(object_type_3_buffer[677]))
		{
			object_type_3_buffer[677] += 1;
		}
		else { printMessage(PRINT_MESSAGE_END_COMMAND, 1253, 0); }
	}
		else { object_type_3_buffer[730] += 1; } printMessage(PRINT_MESSAGE_DEREFERENCE_MSG, 677, 0);
		if (isItemAtLocation(ITEM_LAMP, -1)) { set_object_location(ITEM_LAMP, PLAYER_LOCATION); } *getObjectPointer(675) = -1; object_type_3_buffer[675] = ITEM_MIN_ID - 1; while (++object_type_3_buffer[675] <= ITEM_MAX_ID)
		{
			if (isItemAtLocation(dereference(object_type_3_buffer[675]), -1)) { set_object_location(object_type_3_buffer[675], LOCATION_LIMBO); }
		} die();
} int s22() {
	processMoveCommand(406, 0, COMMAND_DOWN, -COMMAND_SOUTH);
	if (currentCommandContains(COMMAND_UP)) { set_value(0, PREVIOUS_LOCATION, 0); processMoveCommand(384, -1578); }
} int k16() {
	processMoveCommand(405, 0, COMMAND_NORTH, -COMMAND_UP);
	if (currentCommandContains(COMMAND_CLIMB)) {
		if (object_type_3_buffer[717] < 2) { set_value(0, PREVIOUS_LOCATION, 0); processMoveCommand(LOCATION_BUILDING, -1236); } printMessage(PRINT_MESSAGE_END_COMMAND, 1577, 0);
	} if (!currentCommandIsNotOneOf(638, -1)) return 0; printMessage(PRINT_MESSAGE_END_COMMAND, 938, 0);
} int i29() {
	processMoveCommand(203, 0, COMMAND_UP, COMMAND_EXIT, -5);
	check_command_steps(); if (!currentCommandIsNotOneOf(631, -1)) return 0; printMessage(72, MESSAGE_FIXTURE, 631);
} int z16() {
	if (currentCommandContains(COMMAND_LOOK))
	{
		return 0;
	} 
	processMoveCommand(203, 0, COMMAND_DOWN, -5); 
	processMoveCommand(409, 0, -COMMAND_NORTH); 
	processMoveCommand(398, 0, -COMMAND_SOUTH); 
	processMoveCommand(LOCATION_PANTRY, 0, COMMAND_WEST, -LOCATION_PANTRY);
	if (currentCommandContains(18)) { printMessage(PRINT_MESSAGE_END_COMMAND, 1379, 0); } check_command_steps();
} int m19() {
	processMoveCommand(408, 0, -COMMAND_SOUTH); processMoveCommand(410, 0, -COMMAND_NORTH);
	processMoveCommand(LOCATION_PANTRY, 0, COMMAND_SOUTHWEST, -412);
} 

int m20() { 
	processMoveCommand(409, 0, -COMMAND_SOUTH); 
	processMoveCommand(411, 0, COMMAND_NORTH, -COMMAND_ENTER); 
}

int q27() {
	processMoveCommand(410, 0, -COMMAND_SOUTH); processMoveCommand(409, 0, -COMMAND_EXIT); if (currentCommandContains(632)) {
		printMessage(PRINT_MESSAGE_END_COMMAND, 1545, 0);
	} if (!currentCommandIsNotOneOf(633, -1)) return 0; printMessage(72, MESSAGE_FIXTURE, 633);
} int q28() {
	if (currentCommandContains(COMMAND_LOOK))
	{
		return 0;
	} processMoveCommand(408, 0, -COMMAND_EAST); processMoveCommand(409, 0, -COMMAND_NORTHEAST); processMoveCommand(392, 0, COMMAND_NORTH, COMMAND_DOWN, -5); processMoveCommand(383, 0, -COMMAND_WEST);
} 

int unsafe_passage_413() {
	if (currentCommandContains(COMMAND_LOOK)) { 
		return 0; 
	} 
	
	processMoveCommand(235, 0, -COMMAND_SOUTH); 
	processMoveCommand(414, 0, -COMMAND_NORTH);
	if (!currentCommandIsOneOf(COMMAND_WEST, 616, 621, 143, -1)) 
		return 0; 
	
	e25(); 
	
	processMoveCommand(415, -2);
} 

int end_of_very_unsafe_tunnel_414() {
	processMoveCommand(413, 0, -COMMAND_SOUTH);
} 

int very_low_room_415() {
	processMoveCommand(416, 0, -COMMAND_WEST); 
	processMoveCommand(416, 0, -COMMAND_UPSTREAM); 
	if (currentCommandContains(COMMAND_DOWN))
	{
		if (isObjectFlagSet(ITEM_RAT, 13)) {
			processMoveCommand(418, -2); 
		} 
		processMoveCommand(417, -2);
	} 
	
	if (!currentCommandIsOneOf(COMMAND_UP, COMMAND_EAST, 616, 621, 143, -1))
		return 0; 
	
	e25(); 
	
	processMoveCommand(413, -2);
} 

int d24() {
	if (currentCommandContains(94)) {
		printMessage(PRINT_MESSAGE_END_COMMAND, 1257, 0);
	} processMoveCommand(415, 0, COMMAND_EAST, COMMAND_DOWN, -COMMAND_EXIT);
} 

int r33() {
	if (!currentCommandIsOneOf(COMMAND_UP, COMMAND_EXIT, COMMAND_RETREAT, -1)) 
		return 0; 
	
	modifyObjectFlag('s', ITEM_RAT, 13); 
	set_value(0, ITEM_RAT, 0); 
	object_type_3_buffer[SEWAGE_COUNT] = cheezy_rand(4); 
	processMoveCommand(415, -2);
} 

int w28()
{
	if (!currentCommandIsOneOf(COMMAND_DOWN, COMMAND_JUMP, -1)) return 0; 
	printMessage(0, 1246, 0); 
	printMessage(0, 1245, 0); 
	processMoveCommand(419, -1);
	die();
} 

int i30() {
	processMoveCommand(415, 0, COMMAND_UP, -COMMAND_EXIT); if (!currentCommandIsOneOf(COMMAND_JUMP, COMMAND_DOWN, -1)) return 0;
	modifyObjectFlag('c', ITEM_RAT, 13); modifyObjectFlag('s', ITEM_RAT, 14); processMoveCommand(420, -1246);
} int g24() {
	processMoveCommand(419, 0, -COMMAND_NORTH);
	processMoveCommand(421, 0, -COMMAND_SOUTH);
} 

int sea_view_419() {
	processMoveCommand(420, 0, COMMAND_SOUTH, -COMMAND_EXIT); 
	if (currentCommandContains(ITEM_GRILL)) {
		printMessage(PRINT_MESSAGE_END_COMMAND, 1296, 0); // If you are trying to get through a solid metal grill, you're wasting your time.
	}
} 

int south_end_of_culvert_421() {
	if (currentCommandContains(ITEM_RAT) && object_type_3_buffer[697] > 1) { 
		i46(); 
	} 
	
	processMoveCommand(420, 0, -COMMAND_NORTH); 
	processMoveCommand(425, 0, -COMMAND_SOUTHWEST);
	processMoveCommand(426, 0, COMMAND_WEST, -COMMAND_NORTHWEST);
	processMoveCommand(422, 0, COMMAND_EAST, COMMAND_SOUTH, -COMMAND_SOUTHEAST);
} 

int x23() {
	processMoveCommand(421, 0, -COMMAND_NORTH);
	processMoveCommand(423, 0, COMMAND_SOUTHEAST, -COMMAND_SOUTHWEST);
} int q29() { processMoveCommand(422, 0, -COMMAND_NORTH); processMoveCommand(424, 0, COMMAND_SOUTH, -COMMAND_SOUTHEAST); }
int h20() { processMoveCommand(423, 0, COMMAND_NORTH, -COMMAND_EXIT); } 

int partially_collapsed_junction_425() {
	processMoveCommand(421, 0, -COMMAND_NORTHEAST); 
	if (!currentCommandIsOneOf(COMMAND_UP, COMMAND_ENTER, 627, -1))
		return 0; 
	
	set_value(0, 720, 1); 
	processMoveCommand(427, -2);
} 

int dead_end_426() { 
	processMoveCommand(421, 0, COMMAND_EAST, -COMMAND_EXIT); 
}

int l34() 
{ 
	if (!currentCommandIsOneOf(COMMAND_DOWN, COMMAND_DOWNSTREAM, -1)) 
		return 0; 
	modifyObjectFlag('s', ITEM_RAT, 14); 
	processMoveCommand(425, -2); 
}

int v41() {
	processMoveCommand(425, 0, COMMAND_DOWN, -COMMAND_DOWNSTREAM); 
	if (currentCommandContains(626)) { 
		printMessage(PRINT_MESSAGE_END_COMMAND, 924, 0); 
	} 
	
	if (!currentCommandIsOneOf(COMMAND_NORTH, COMMAND_NORTHEAST, COMMAND_EAST, COMMAND_SOUTHEAST, COMMAND_SOUTH, COMMAND_SOUTHWEST, COMMAND_WEST, COMMAND_NORTHWEST, COMMAND_UP, COMMAND_UPSTREAM, -1))
		return 0; 
	
	set_value(0, 731, 0); 
	processMoveCommand(428, -2);
} 

int j43() {
	if (currentCommandContains(COMMAND_UP) && !(isObjectFlagSet(ITEM_RAT, 14)))
	{
		if (object_type_3_buffer[731] < 2) { 
			f3(676, 419); 
			j36(); 
			object_type_3_buffer[731] += 1; 
			processMoveCommand(428, -2); 
		} 
		
		set_value(0, 731, 0);
		modifyObjectFlag('c', ITEM_RAT, 14); 
		processMoveCommand(164, -2);
	} 
	
	if (currentCommandContains(626)) { 
		printMessage(PRINT_MESSAGE_END_COMMAND, 924, 0); 
	} 
	
	if (!currentCommandIsOneOf(COMMAND_DOWN, COMMAND_DOWNSTREAM, -1))
		return 0; 
	
	if (cheezy_rand(100) < 10) { 
		processMoveCommand(427, -2); 
	}
} 

int h33() {
	if (!currentCommandIsOneOf(COMMAND_NORTH, COMMAND_SOUTH, COMMAND_EAST, COMMAND_WEST, COMMAND_NORTHEAST, COMMAND_SOUTHEAST, COMMAND_NORTHWEST, COMMAND_SOUTHWEST, COMMAND_UPSTREAM, COMMAND_DOWN, COMMAND_DOWNSTREAM, COMMAND_UP, -1))
		return 0; f3(676, 419); j36(); object_type_3_buffer[731] += 1; processMoveCommand(428, -2);
} int f15() {
	processMoveCommand(225, 0, -COMMAND_WEST);
	processMoveCommand(430, 0, -COMMAND_NORTH);
} int i31() { processMoveCommand(429, 0, -COMMAND_SOUTH); processMoveCommand(431, 0, -COMMAND_NORTH); } int h21()
{
	processMoveCommand(430, 0, -COMMAND_SOUTHWEST); processMoveCommand(432, 0, -COMMAND_NORTH);
} 

int lost_in_mist_move_command() {
	if (!currentCommandIsOneOf(COMMAND_NORTH, COMMAND_NORTHEAST, COMMAND_EAST, COMMAND_SOUTHEAST, COMMAND_SOUTH, COMMAND_SOUTHWEST, COMMAND_WEST, COMMAND_NORTHWEST, -1))
		return 0; 

	f3(676, LOCATION_LIMBO); 
	j36();
} 

int g34() {
	if (!currentCommandIsOneOf(COMMAND_EAST, COMMAND_WEST, -1)) 
		return 0; 
	a27(); 
	
	longjmp(done_with_command, 1);
} 

int i47() {
	if (!currentCommandIsOneOf(COMMAND_SOUTH, COMMAND_SOUTHEAST, COMMAND_SOUTHWEST, -1)) return 0;
	if (cheezy_rand(100) < 33) { processMoveCommand(431, -2); } a27();
} int n28() {
	if (!currentCommandIsOneOf(COMMAND_NORTH, COMMAND_NORTHEAST, COMMAND_NORTHWEST, -1))
		return 0; if (cheezy_rand(100) < 33) { processMoveCommand(396, -2); } a27();
} 

int small_dank_cave_433() {
	if (!currentCommandIsOneOf(COMMAND_NORTH, COMMAND_RETREAT, COMMAND_EXIT, -1))
		return 0; 
	
	processMoveCommand(388, -2);
} 

int rock_in_mist_434() {
	if (!currentCommandIsOneOf(COMMAND_NORTH, COMMAND_NORTHEAST, COMMAND_EAST, COMMAND_SOUTHEAST, COMMAND_SOUTH, COMMAND_SOUTHWEST, COMMAND_WEST, COMMAND_NORTHWEST, COMMAND_RETREAT, -1))
		return 0; 
	processMoveCommand(432, -2);
} 

int dwarves_stores_435() { 
	processMoveCommand(403, 0, -COMMAND_EXIT); 
} 

int d15() {
	processMoveCommand(139, 0, 138, 457, COMMAND_EXIT, -COMMAND_SOUTHEAST);
	if (currentCommandContains(COMMAND_BUILDING)) { 
		f3(679, 139); 
		f3(678, 136); 
		h31(); 
	} 
	
	if (currentCommandContains(COMMAND_JUMP)) {
		processMoveCommand(LOCATION_LIMBO, -1);
		v37();
	} 
	
	if (!currentCommandIsOneOf(635, 636, -1)) 
		return 0; 
	
	if (currentCommandContains(COMMAND_LOOK)) {
		if (currentCommandContains(635)) {
			printMessage(PRINT_MESSAGE_END_COMMAND, 1547, 0);
		} 
		printMessage(PRINT_MESSAGE_END_COMMAND, 1641, 0);
	} 
	
	if (currentCommandContains(635)) { 
		printMessage(72, MESSAGE_FIXTURE, 635); 
	} 
	
	printMessage(PRINT_MESSAGE_END_COMMAND, MESSAGE_RIDICULOUS, 0);
} 

int s11() {
	processMoveCommand(139, 0, -COMMAND_WEST); 
	processMoveCommand(457, 0, -COMMAND_SOUTHEAST); 
	
	if (currentCommandContains(COMMAND_BUILDING)) {
		f3(679, LOCATION_MAGNIFICENT_VIEW); f3(678, 136);
		h31();
	} 
	
	if (!currentCommandIsNotOneOf(COMMAND_GO, 457, -1)) 
		return 0; 
	
	f3(678, 139); 
	f3(679, 457); 
	n25();
} 

int i16() {
	processMoveCommand(138, 0, -COMMAND_EAST); processMoveCommand(LOCATION_MAGNIFICENT_VIEW, 0, -COMMAND_NORTHWEST); if (currentCommandContains(COMMAND_BUILDING)) {
		f3(679, LOCATION_MAGNIFICENT_VIEW);
		f3(678, 136); h31();
	} if (!currentCommandIsNotOneOf(COMMAND_GO, 457, -1)) return 0; f3(678, 138); f3(679, LOCATION_MAGNIFICENT_VIEW);
	n25();
} int f18() {
	if (currentCommandContains(COMMAND_LOOK)) { return 0; } processMoveCommand(138, 0, COMMAND_NORTHWEST, -138); processMoveCommand(437, 0, COMMAND_NORTH, -622);
	processMoveCommand(441, 0, -COMMAND_NORTHEAST); processMoveCommand(440, 0, -COMMAND_EAST); processMoveCommand(136, 0, -COMMAND_SOUTHEAST); processMoveCommand(137, 0, -COMMAND_SOUTH); processMoveCommand(438, 0, COMMAND_SOUTHWEST, -COMMAND_WEST);
	if (currentCommandContains(COMMAND_BUILDING)) { f3(679, LOCATION_MAGNIFICENT_VIEW); f3(678, 136); h31(); } if (!currentCommandIsNotOneOf(COMMAND_GO, 457, -1)) return
		0; f3(678, 136); f3(679, 138); n25();
} int y17() {
	if (currentCommandContains(COMMAND_LOOK)) {
		return
			0;
	} processMoveCommand(442, 0, COMMAND_NORTH, -622); processMoveCommand(443, 0, -COMMAND_NORTHEAST); processMoveCommand(444, 0, -COMMAND_EAST); processMoveCommand(459, 0, -COMMAND_SOUTHEAST);
	processMoveCommand(136, 0, COMMAND_SOUTHWEST, -COMMAND_BUILDING); processMoveCommand(440, 0, -COMMAND_WEST); processMoveCommand(441, 0, -COMMAND_NORTHWEST); if (currentCommandContains(COMMAND_SOUTH)) {
		if (cheezy_rand(100) < 50)
		{
			processMoveCommand(459, -2);
		} processMoveCommand(136, -2);
	}
} int f19() {
	if (currentCommandContains(COMMAND_LOOK)) { return 0; } processMoveCommand(444, 0, -COMMAND_NORTH);
	processMoveCommand(445, 0, -COMMAND_NORTHEAST); processMoveCommand(446, 0, COMMAND_EAST, -622); processMoveCommand(448, 0, -COMMAND_SOUTHEAST); processMoveCommand(447, 0, -COMMAND_SOUTH); processMoveCommand(460, 0, -COMMAND_SOUTHWEST);
	processMoveCommand(458, 0, -COMMAND_NORTHWEST); processMoveCommand(136, 0, -COMMAND_BUILDING); if (currentCommandContains(COMMAND_WEST)) {
		if (cheezy_rand(100) < 50) {
			processMoveCommand(458, -2);
		} processMoveCommand(460, -2);
	}
} int u16() {
	if (currentCommandContains(COMMAND_LOOK)) { return 0; } processMoveCommand(459, 0, -COMMAND_NORTHEAST);
	processMoveCommand(447, 0, -COMMAND_EAST); processMoveCommand(449, 0, -COMMAND_SOUTHEAST); processMoveCommand(454, 0, COMMAND_SOUTH, -622); processMoveCommand(143, 0, -COMMAND_SOUTHWEST); processMoveCommand(LOCATION_VALLEY, 0, COMMAND_WEST, -COMMAND_DOWN);
	processMoveCommand(136, 0, COMMAND_NORTHWEST, -COMMAND_BUILDING); if (currentCommandContains(COMMAND_NORTH)) {
		if (cheezy_rand(100) < 50) { processMoveCommand(459, -2); } processMoveCommand(136, -2);
	}
} int f16() {
	if (currentCommandContains(COMMAND_LOOK)) { return 0; } processMoveCommand(LOCATION_OUTSIDE_GRATE, 0, COMMAND_NORTH, -LOCATION_OUTSIDE_GRATE); processMoveCommand(136, 0, -COMMAND_BUILDING);
	processMoveCommand(143, 0, -143); processMoveCommand(LOCATION_VALLEY, 0, -142); processMoveCommand(455, 0, -COMMAND_NORTHEAST); processMoveCommand(456, 0, -COMMAND_EAST); processMoveCommand(453, 0, COMMAND_WEST, -622);
	processMoveCommand(452, 0, -COMMAND_NORTHWEST); if (currentCommandContains(COMMAND_CLIMB)) { printMessage(PRINT_MESSAGE_END_COMMAND, 1224, 0); }
} int t25() {
	processMoveCommand(461, 0, COMMAND_NORTH, COMMAND_NORTHEAST, COMMAND_WEST, -COMMAND_NORTHWEST);
	processMoveCommand(441, 0, -COMMAND_EAST); processMoveCommand(440, 0, -COMMAND_SOUTHEAST); processMoveCommand(457, 0, COMMAND_SOUTH, -COMMAND_SOUTHWEST);
} int l21() {
	processMoveCommand(457, 0, COMMAND_NORTHEAST, -COMMAND_EAST);
	processMoveCommand(137, 0, -COMMAND_SOUTHEAST); processMoveCommand(461, 0, COMMAND_SOUTH, COMMAND_SOUTHWEST, -COMMAND_WEST); processMoveCommand(439, 0, -COMMAND_NORTHWEST);
} int v25() {
	processMoveCommand(461, 0, COMMAND_NORTH, COMMAND_SOUTHEAST, COMMAND_SOUTH, COMMAND_SOUTHWEST, COMMAND_WEST, -COMMAND_NORTHWEST);
	processMoveCommand(438, 0, COMMAND_NORTHEAST, -COMMAND_EAST);
} int d25() {
	processMoveCommand(441, 0, -COMMAND_NORTH); processMoveCommand(442, 0, -COMMAND_NORTHEAST); processMoveCommand(458, 0, -COMMAND_EAST);
	processMoveCommand(136, 0, COMMAND_SOUTHEAST, COMMAND_SOUTH, COMMAND_SOUTHWEST, -COMMAND_BUILDING); processMoveCommand(457, 0, -COMMAND_WEST); processMoveCommand(437, 0, -COMMAND_NORTHWEST);
} int g25()
{
	processMoveCommand(461, 0, COMMAND_NORTH, COMMAND_NORTHEAST, -COMMAND_NORTHWEST); processMoveCommand(442, 0, -COMMAND_EAST); processMoveCommand(458, 0, -COMMAND_SOUTHEAST); processMoveCommand(440, 0, -COMMAND_SOUTH);
	processMoveCommand(457, 0, -COMMAND_SOUTHWEST); processMoveCommand(437, 0, -COMMAND_WEST);
} int l22() {
	processMoveCommand(461, 0, COMMAND_NORTH, COMMAND_NORTHEAST, -COMMAND_NORTHWEST); processMoveCommand(443, 0, -COMMAND_EAST);
	processMoveCommand(444, 0, -COMMAND_SOUTHEAST); processMoveCommand(458, 0, -COMMAND_SOUTH); processMoveCommand(440, 0, -COMMAND_SOUTHWEST); processMoveCommand(441, 0, -COMMAND_WEST);
} int n20()
{
	processMoveCommand(461, 0, COMMAND_NORTH, COMMAND_NORTHEAST, COMMAND_EAST, -COMMAND_NORTHWEST); processMoveCommand(445, 0, -COMMAND_SOUTHEAST); processMoveCommand(444, 0, -COMMAND_SOUTH); processMoveCommand(458, 0, -COMMAND_SOUTHWEST);
	processMoveCommand(442, 0, -COMMAND_WEST);
} int v26() {
	processMoveCommand(443, 0, -COMMAND_NORTH); processMoveCommand(461, 0, -COMMAND_NORTHEAST); processMoveCommand(445, 0, -COMMAND_EAST);
	processMoveCommand(446, 0, -COMMAND_SOUTHEAST); processMoveCommand(459, 0, -COMMAND_SOUTH); processMoveCommand(458, 0, -COMMAND_WEST); processMoveCommand(442, 0, -COMMAND_NORTHWEST); if (currentCommandContains(COMMAND_SOUTHWEST))
	{
		if (cheezy_rand(100) < 50) { processMoveCommand(458, -2); } processMoveCommand(459, -2);
	}
} int t26() {
	processMoveCommand(461, 0, COMMAND_NORTH, COMMAND_NORTHEAST, COMMAND_EAST, -COMMAND_SOUTHEAST);
	processMoveCommand(446, 0, -COMMAND_SOUTH); processMoveCommand(459, 0, -COMMAND_SOUTHWEST); processMoveCommand(444, 0, -COMMAND_WEST); processMoveCommand(443, 0, -COMMAND_NORTHWEST);
} int q30()
{
	processMoveCommand(445, 0, -COMMAND_NORTH); processMoveCommand(461, 0, COMMAND_NORTHEAST, COMMAND_EAST, -COMMAND_SOUTHEAST); processMoveCommand(448, 0, -COMMAND_SOUTH); processMoveCommand(447, 0, -COMMAND_SOUTHWEST);
	processMoveCommand(459, 0, -COMMAND_WEST); processMoveCommand(444, 0, -COMMAND_NORTHWEST);
} int s23() {
	processMoveCommand(459, 0, -COMMAND_NORTH); processMoveCommand(446, 0, -COMMAND_NORTHEAST);
	processMoveCommand(448, 0, -COMMAND_EAST); processMoveCommand(461, 0, -COMMAND_SOUTHEAST); processMoveCommand(449, 0, -COMMAND_SOUTH); processMoveCommand(454, 0, -COMMAND_SOUTHWEST); processMoveCommand(460, 0, -COMMAND_WEST);
	if (currentCommandContains(COMMAND_NORTHWEST)) { if (cheezy_rand(100) < 50) { processMoveCommand(459, -2); } processMoveCommand(460, -2); }
} int KilobyteInputBuffer3()
{
	processMoveCommand(446, 0, -COMMAND_NORTH); processMoveCommand(461, 0, COMMAND_NORTHEAST, COMMAND_EAST, COMMAND_SOUTHEAST, -COMMAND_SOUTH); processMoveCommand(449, 0, -COMMAND_SOUTHWEST); processMoveCommand(447, 0, -COMMAND_WEST);
	processMoveCommand(459, 0, -COMMAND_NORTHWEST);
} int g26() {
	processMoveCommand(447, 0, -COMMAND_NORTH); processMoveCommand(448, 0, -COMMAND_NORTHEAST); processMoveCommand(461, 0, COMMAND_EAST, COMMAND_SOUTHEAST, -COMMAND_SOUTH);
	processMoveCommand(455, 0, -COMMAND_SOUTHWEST); processMoveCommand(454, 0, -COMMAND_WEST); processMoveCommand(460, 0, -COMMAND_NORTHWEST);
} int p26() {
	if (currentCommandContains(COMMAND_LOOK))
	{
		return 0;
	} processMoveCommand(136, 0, COMMAND_NORTH, -COMMAND_NORTHEAST); processMoveCommand(LOCATION_VALLEY, 0, COMMAND_DOWN, COMMAND_EAST, -142); processMoveCommand(143, 0, -COMMAND_SOUTHEAST);
	processMoveCommand(451, 0, -COMMAND_SOUTH); processMoveCommand(461, 0, COMMAND_SOUTHWEST, COMMAND_WEST, -COMMAND_NORTHWEST);
} int s24() {
	if (currentCommandContains(COMMAND_LOOK)) {
		return
			0;
	} processMoveCommand(450, 0, -COMMAND_NORTH); processMoveCommand(LOCATION_VALLEY, 0, -COMMAND_NORTHEAST); processMoveCommand(143, 0, COMMAND_EAST, COMMAND_DOWN, -142); processMoveCommand(LOCATION_OUTSIDE_GRATE, 0, -COMMAND_SOUTHEAST);
	processMoveCommand(452, 0, -COMMAND_SOUTH); processMoveCommand(461, 0, COMMAND_SOUTHWEST, COMMAND_WEST, -COMMAND_NORTHWEST);
} int m21() {
	if (currentCommandContains(COMMAND_LOOK)) {
		return
			0;
	} processMoveCommand(451, 0, -COMMAND_NORTH); processMoveCommand(143, 0, -COMMAND_NORTHEAST); processMoveCommand(LOCATION_OUTSIDE_GRATE, 0, COMMAND_EAST, COMMAND_DOWN, -142); processMoveCommand(436, 0, -COMMAND_SOUTHEAST);
	processMoveCommand(453, 0, -COMMAND_SOUTH); processMoveCommand(461, 0, COMMAND_SOUTHWEST, COMMAND_WEST, -COMMAND_NORTHWEST);
} int g27() {
	if (currentCommandContains(COMMAND_LOOK)) {
		return
			0;
	} processMoveCommand(452, 0, -COMMAND_NORTH); processMoveCommand(LOCATION_OUTSIDE_GRATE, 0, -COMMAND_NORTHEAST); processMoveCommand(436, 0, COMMAND_EAST, COMMAND_DOWN, -142); processMoveCommand(461, 0, COMMAND_SOUTHEAST, COMMAND_SOUTH, COMMAND_SOUTHWEST, COMMAND_WEST, -COMMAND_NORTHWEST);
} int d26() {
	if (currentCommandContains(COMMAND_LOOK)) { return 0; } processMoveCommand(460, 0, -COMMAND_NORTH); processMoveCommand(447, 0, -COMMAND_NORTHEAST);
	processMoveCommand(449, 0, -COMMAND_EAST); processMoveCommand(461, 0, -COMMAND_SOUTHEAST); processMoveCommand(455, 0, -COMMAND_SOUTH); processMoveCommand(LOCATION_OUTSIDE_GRATE, 0, -COMMAND_SOUTHWEST); processMoveCommand(143, 0, COMMAND_WEST, COMMAND_DOWN, -142);
	processMoveCommand(LOCATION_VALLEY, 0, -COMMAND_NORTHWEST);
} int e19() {
	if (currentCommandContains(COMMAND_LOOK)) { return 0; } processMoveCommand(454, 0, -COMMAND_NORTH);
	processMoveCommand(449, 0, -COMMAND_NORTHEAST); processMoveCommand(461, 0, COMMAND_EAST, -COMMAND_SOUTHEAST); processMoveCommand(456, 0, -COMMAND_SOUTH); processMoveCommand(436, 0, -COMMAND_SOUTHWEST); processMoveCommand(LOCATION_OUTSIDE_GRATE, 0, COMMAND_WEST, COMMAND_DOWN, -142);
	processMoveCommand(143, 0, -COMMAND_NORTHWEST);
} int f17() {
	if (currentCommandContains(COMMAND_LOOK)) { return 0; } processMoveCommand(455, 0, -COMMAND_NORTH);
	processMoveCommand(461, 0, COMMAND_NORTHEAST, COMMAND_EAST, COMMAND_SOUTHEAST, COMMAND_SOUTH, -COMMAND_SOUTHWEST); processMoveCommand(436, 0, COMMAND_WEST, COMMAND_DOWN, -142); processMoveCommand(LOCATION_OUTSIDE_GRATE, 0, -COMMAND_NORTHWEST);
} 

int command_lost_in_woods_461() {
	if (!currentCommandIsOneOf(COMMAND_NORTH, COMMAND_NORTHEAST, COMMAND_EAST, COMMAND_SOUTHEAST, COMMAND_SOUTH, COMMAND_SOUTHWEST, COMMAND_WEST, COMMAND_NORTHWEST, -1)) 
		return 0; 
	
	f3(700, COMMAND_EAST);
	set_value(SET_VALUE_DEREFERENCE, 699, 669); 
	
	if (object_type_3_buffer[697] > 1) { 
		set_value(SET_VALUE_DEREFERENCE, 699, 670); 
	} 
	
	object_type_3_buffer[699] -= object_type_3_buffer[700]; 
	
	if (object_type_3_buffer[762] < 0 && cheezy_rand(100) < 20) {
		set_value(SET_VALUE_DEREFERENCE, 762, 699);
	} 
	
	if (object_type_3_buffer[762] == object_type_3_buffer[699]) {
		printMessage(PRINT_MESSAGE_END_COMMAND, 1553, 0); // The forest in that direction is too dense to fight your way through.
	} 
	
	f3(676, LOCATION_LIMBO); 
	j36(); 
	set_value(0, 762, -1); 
	set_value(SET_VALUE_DEREFERENCE, 699, 763); 
	
	if (object_type_3_buffer[699] > 100) {
		set_value(0, 699, 100);
	} 
	
	if (cheezy_rand(100) < object_type_3_buffer[699]) {
		object_type_3_buffer[763] -= 10; 
		if (object_type_3_buffer[763] < 1) {
			set_value(0, 763, 1);
		} 
		processMoveCommand(461, -2);
	} 
	
	object_type_3_buffer[763] = cheezy_rand(160 - 120 + 1) + 120; 
	object_type_3_buffer[676] = cheezy_rand(456 - 437 + 1) + 437;
	
	processMoveCommand(object_type_3_buffer[676], -2);
} 

int v27() {
	if (currentCommandContains(COMMAND_LOOK)) { 
		return 0; 
	} 
	
	processMoveCommand(261, 0, COMMAND_EAST, -261);
	if (!currentCommandIsNotOneOf(COMMAND_JUMP, -1)) 
		return 0; 
	
	processMoveCommand(LOCATION_LIMBO, -1); v37();
} 

int q24() {
	processMoveCommand(379, 0, -COMMAND_SOUTHWEST);
	u28(); if (!currentCommandIsNotOneOf(COMMAND_TAKE, 11, -1)) return 0; printMessage(PRINT_MESSAGE_END_COMMAND, MESSAGE_DEEP_ROOTS, 0);
} int q25() {
	processMoveCommand(379, 0, -COMMAND_SOUTHWEST);
	processMoveCommand(381, 0, -COMMAND_NORTHEAST);
} int i27() {
	if (currentCommandContains(COMMAND_NORTHEAST)) {
		if (isObjectFlagSet(381, 4)) {
			processMoveCommand(380, -2);
		} processMoveCommand(378, -2);
	}
} int h17() {
	processMoveCommand(380, 0, -COMMAND_SOUTHWEST); processMoveCommand(482, 0, COMMAND_NORTHEAST, COMMAND_UP, COMMAND_SOUTH, COMMAND_WEST, -COMMAND_NORTH);
	if (!currentCommandIsOneOf(COMMAND_EAST, COMMAND_SOUTHEAST, COMMAND_DOWN, COMMAND_NORTHWEST, -1)) return 0; o24();
} int l23() {
	if (!currentCommandIsOneOf(COMMAND_NORTH, COMMAND_NORTHEAST, COMMAND_EAST, COMMAND_SOUTHEAST, COMMAND_SOUTH, COMMAND_SOUTHWEST, COMMAND_WEST, COMMAND_NORTHWEST, COMMAND_UP, COMMAND_DOWN, -1))
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

	set_value(0, 697, 1); 

	(*command_by_location_dispatch_table[object_type_3_buffer[670]])();
} 

int o28() {
	if (currentCommandContains(3)) {
		e6(1, object_type_3_buffer[PLAYER_LOCATION], 3);
	} if (object_type_3_buffer[717] == 3 && object_type_3_buffer[697] > 1) {
		set_value(SET_VALUE_DEREFERENCE, 699, 670); special_action(11, 699); if (object_type_3_buffer[699] == 0)
		{
			return 0;
		} 
		if (isObjectFlagSet(dereference(670), 3)) {
			if (q8(dereference(object_type_3_buffer[670]), -1) && object_type_3_buffer[CARRIED_ITEM_COUNT] < object_type_3_buffer[MAX_CARRIED_ITEMS])
			{
				modifyObjectFlag('s', dereference(670), 4);
			}
		}
	} 
	b26(); 
	
	if (object_type_3_buffer[699] == 1) {
		if (currentCommandContains(85) && g10(85, -1))
		{
			printMessage(PRINT_MESSAGE_END_COMMAND, 1303, 0);
		} 
		u26();
	} 
	
	set_value(0, 701, 0); 
	
	if (object_type_3_buffer[697] == 1) {
		set_value(0, 701, 1);
	} 
	
	e6(0, object_type_3_buffer[PLAYER_LOCATION], 3); 
	if (!currentCommandIsOneOf(101, 100, 113, 112, 63, 38, 106, ITEM_SWORD, 56, 109, ITEM_ORB, ITEM_STARSTONE, 82, -1))
		return 0; 
	
	if (currentCommandContains(ITEM_BIRD)) { 
		takeBird(); 
	} else {
		if (currentCommandContains(100)) { 
			i44(); 
		} else {	
			if (currentCommandContains(113)) { 
				fill_with_oil(); 
			} else {					
				if (currentCommandContains(112)) { 
					s28(); 
				} else {
					if (currentCommandContains(63) && object_type_3_buffer[PLAYER_LOCATION] == 299 && q8(63, -1) && object_type_3_buffer[63] != 1) {
						printMessage(PRINT_MESSAGE_END_COMMAND, 979, 0);
					} 
					if (currentCommandContains(38))
					{
						e30();
					} else {
						if (currentCommandContains(ITEM_SWORD)) {
							x29(); 
						} else {
							if (currentCommandContains(56)) { 
								s29(); 
							} else {
								if (currentCommandContains(109)) { 
									t36(); 
								} else {
									if (currentCommandContains(ITEM_ORB)) { 
										e28(); 
									} else {
										if (currentCommandContains(ITEM_STARSTONE))
										{
											p35();
										} else { 
											if (currentCommandContains(82) && q8(82, -1)) { 
												printMessage(PRINT_MESSAGE_END_COMMAND, 1665, 0); 
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
	if (object_type_3_buffer[697] == 1) { return 0; } if (!(isObjectFlagSet(dereference(670), 0))) {
		return
			0;
	} if (isItemAtLocation(dereference(object_type_3_buffer[670]), -1)) { printMessage(76, 813, 670); } if (!(g10(dereference(object_type_3_buffer[670]), -1)))
	{
		printMessage(76, MESSAGE_NO_X_HERE, 670);
	} if (currentCommandContains(84)) { (*command_by_location_dispatch_table[COMMAND_LOOK])(); longjmp(done_with_command, 1); } if (!(isObjectFlagSet(dereference(670), 3)))
	{
		printMessage(PRINT_MESSAGE_END_COMMAND, 814, 0);
	} if (currentCommandContains(60) && object_type_3_buffer[60] == 0) {
		if (isObjectFlagSet(dereference(735), 6)) {
			set_value(0, 699, 0);
		}
		else { modifyObjectFlag('s', dereference(735), 6); set_value(0, 699, 1); } printMessage(76, 1692, 699);
	} if (object_type_3_buffer[CARRIED_ITEM_COUNT] < object_type_3_buffer[MAX_CARRIED_ITEMS])
	{
		set_object_location(object_type_3_buffer[670], r5); printMessage(12, 1489, 669); if (currentCommandContains(ITEM_ROD_WITH_MARK) && object_type_3_buffer[701] > 0) {
			printMessage(12, 1490, 102);
		}
		else { printMessage(12, 1490, 670); } if (currentCommandContains(107) && object_type_3_buffer[717] == 3 && object_type_3_buffer[107] == 0) {
			printMessage(0, 1386, 0);
			set_value(0, 107, 1);
		} h29();
	}
	else { printMessage(0, 897, 0); clear_command(); } longjmp(done_with_command, 1);
} 

int b31() {
	e6(0, 486, -1); if (currentCommandContains(3)) { e6(1, 486, -1); } if (!currentCommandIsOneOf(101, 100, ITEM_BOTTLE, 113, 112, 53, 118, 27, 38,
		97, ITEM_STARSTONE, -1)) return 0; if (currentCommandContains(101)) { s27(); }
		else {
			if (currentCommandContains(100)) {
				g33();
			}
			else {
				if (currentCommandContains(ITEM_BOTTLE)) { a30(); }
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
									set_object_location(27, LOCATION_LIMBO); modifyObjectFlag('s', 27, 13); object_type_3_buffer[716] = cheezy_rand(12 - 4 + 1) + 4;
									set_value(SET_VALUE_DEREFERENCE, 724, 716); printMessage(PRINT_MESSAGE_END_COMMAND, 1154, 0);
								} if (currentCommandContains(38)) {
									if (isItemAtLocation(38, -1)) {
										set_object_location(38, PLAYER_LOCATION);
										printMessage(0, 1698, 0); printMessage(PRINT_MESSAGE_END_COMMAND, 776, 0);
									}
								}
								else {
									if (currentCommandContains(ITEM_STARSTONE)) { k22(); }
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
