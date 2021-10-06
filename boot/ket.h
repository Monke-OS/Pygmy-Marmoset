/* Keyboard Editor Tool */

#pragma once
#define KBD_SCAN_DOWN  0x50
#define KBD_SCAN_UP    0x48
#define KBD_SCAN_LEFT  0x4B
#define KBD_SCAN_RIGHT 0x4D
#define KBD_SCAN_ENTER 0x1C
#define KBD_SCAN_1     2
#define KBD_SCAN_9     10

int rd_scancode(int);
int rd_key(char * c);
