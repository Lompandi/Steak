
#include "ModRegRMStrings.h"

const char* GeneralRegisterString[SZ_ARR_REGISTER_STRINGS] = {
	/* 8-bits Registers */	/* 16-bit Registers */	/* 32-bit Registers */	/* 64-bits Registers */

	/*0x00*/ "AL",			/*0x01*/ "AX",			/*0x03*/ "EAX",			/*0x04*/ "RAX",
	/*0x05*/ "CL",			/*0x06*/ "CX",			/*0x07*/ "ECX",			/*0x08*/ "RCX",
	/*0x09*/ "DL",			/*0x0A*/ "DX",			/*0x0B*/ "EDX",			/*0x0C*/ "RDX",
	/*0x0D*/ "BL",			/*0x0E*/ "BX",			/*0x0F*/ "EBX",			/*0x10*/ "RBX",
	/*0x11*/ "AH",			/*0x12*/ "SP",			/*0x13*/ "ESP",			/*0x14*/ "RSP",
	/*0x15*/ "CH",			/*0x16*/ "BP",			/*0x17*/ "EBP",			/*0x18*/ "RBP",
	/*0x19*/ "DH",			/*0x1A*/ "SI",			/*0x1B*/ "ESI",			/*0x1C*/ "RSI",
	/*0x1D*/ "BH",			/*0x1E*/ "DI",			/*0x1F*/ "EDI",			/*0x20*/ "RDI",
};

const char* RMString[SZ_ARR_REGISTER_STRINGS] = {
	/* 8-bit Addressing */	/* 16-bit Addressing */	/* 32-bit Addressing */	/* 64-bit Addressing */
	/*0x00*/ "_",			/*0x01*/ "BX + SI",		/*0x03*/ "EAX",			/*0x04*/ "RAX",
	/*0x05*/ "_",			/*0x06*/ "BX + DI",		/*0x07*/ "ECX",			/*0x08*/ "RCX",
	/*0x09*/ "_",			/*0x0A*/ "BP + SI",		/*0x0B*/ "EDX",			/*0x0C*/ "RDX",
	/*0x0D*/ "_",			/*0x0E*/ "BP + DI",		/*0x0F*/ "EBX",			/*0x10*/ "RBX",
	/*0x11*/ "_",			/*0x12*/ "SI",			/*0x13*/ "ESP",			/*0x14*/ "RSP",
	/*0x15*/ "_",			/*0x16*/ "DI",			/*0x17*/ "EBP",			/*0x18*/ "RBP",
	/*0x19*/ "_",			/*0x1A*/ "BP",			/*0x1B*/ "ESI",			/*0x1C*/ "RSI",
	/*0x1D*/ "_",			/*0x1E*/ "BX",			/*0x1F*/ "EDI",			/*0x20*/ "RDI",
};

const char* SegmentRegisterString[SZ_ARR_REGISTER_STRINGS] = {
	/*0x00*/ "ES",			/*0x01*/ "ES",			/*0x03*/ "ES",			/*0x04*/ "ES",
	/*0x05*/ "CS",			/*0x06*/ "CS",			/*0x07*/ "CS",			/*0x08*/ "CS",
	/*0x09*/ "SS",			/*0x0A*/ "SS",			/*0x0B*/ "SS",			/*0x0C*/ "SS",
	/*0x0D*/ "DS",			/*0x0E*/ "DS",			/*0x0F*/ "DS",			/*0x10*/ "DS",
	/*0x11*/ "FS",			/*0x12*/ "FS",			/*0x13*/ "FS",			/*0x14*/ "FS",
	/*0x15*/ "GS",			/*0x16*/ "GS",			/*0x17*/ "GS",			/*0x18*/ "GS",
	/*0x19*/ "??",			/*0x1A*/ "??",			/*0x1B*/ "??",			/*0x1C*/ "??",
	/*0x1D*/ "??",			/*0x1E*/ "??",			/*0x1F*/ "??",			/*0x20*/ "??",
};