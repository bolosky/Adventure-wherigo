/* Adventure4+ - copyleft @ M.L.Arnautov 1991 */
#include <setjmp.h>
extern jmp_buf done_with_command; extern int object_type_3_buffer[]; extern int j0[]; extern short object_type_0_buffer[];
extern short object_type_1_buffer[]; extern short object_type_2_buffer[]; extern short *getObjectPointer(); extern int isObjectFlagSet();
extern int(*command_by_location_dispatch_table[])();
#include "autod1.h"
#ifdef b7
extern v0;
#endif

#define printBlankLine() printMessage(0, 776, 0)

#define ITEM_LAMP	99
#define ITEM_CAGE	100
#define ITEM_BIRD	101
#define ITEM_ROD	102

#define LOCATION_END_OF_ROAD	136
#define LOCATION_BUILDING		141
#define LOCATION_VALLEY			142
#define LOCATION_MT_KING		155
#define LOCATION_Y2				163

#define COMMAND_BUILDING		141	// interestingly, same as LOCATION_BUILDING
#define COMMAND_SAY				493
#define COMMAND_XYZZY			497
#define COMMAND_PLUGH			501
#define COMMAND_FEE				510
#define	COMMAND_NORTH			514
#define COMMAND_NORTHEAST		515
#define COMMAND_EAST			516
#define COMMAND_SOUTHEAST		517
#define COMMAND_SOUTH			518
#define COMMAND_SOUTHWEST		519
#define COMMAND_WEST			520
#define COMMAND_NORTHWEST		521
#define COMMAND_UP				523
#define COMMAND_DOWN			524
#define COMMAND_ENTER			526
#define COMMAND_EXIT			527
#define COMMAND_RETREAT			530
#define COMMAND_JUMP			531
#define COMMAND_TAKE			534
#define COMMAND_CLOSE			538	// Also lock
#define COMMAND_CHANGE			563
#define COMMAND_BREAK			564
#define COMMAND_BRIEF			574
#define COMMAND_HELP			580
#define COMMAND_INVENTORY		594
#define COMMAND_BLAST			597
#define COMMAND_CLIMB			598

