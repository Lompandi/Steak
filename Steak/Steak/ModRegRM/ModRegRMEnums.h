#pragma once

enum class Mod {
	/*0x00*/ _none,		//Default mod
	/*0x01*/ no_disp,	//Register indirect addressing mode, SIB with no displacement
	/*0x02*/ disp,		//Displacement (32-bit)
	/*0x03*/ reg,		//Register addressing mode
};

enum class Reg {
	/*0x00*/ _none,			//Default reg

	/*0x01*/ A,				//General A register
	/*0x04*/ C = A + 3,		//General C register
	/*0x07*/ D = C + 3,		//Gerenal D register 
	/*0x0A*/ B = D + 3,		//Gerenal B register 
	/*0x0D*/ SP = B + 3,	//Gerenal SP register
	/*0x10*/ BP = SP + 3,	//Gerenal BP register
	/*0x13*/ SI = BP + 3,	//Gerenal SI register 
	/*0x16*/ DI = SI + 3,	//Gerenal DI register
};

enum class RM {
	/*0x00*/ _none,			//Default rm
	/*0x01*/ _elsewhere,	//Specified elsewhere

	/*0x02*/ A,				//[EAX] or [RAX] (64-bit)
	/*0x05*/ C = A + 3,		//[ECX] or [RCX] (64-bit)
	/*0x08*/ D = C + 3,		//[EDX] or [RDX] (64-bit)
	/*0x0B*/ B = D + 3,		//[EBX] or [RBX] (64-bit)
	/*0x0E*/ SP = B + 3,	//[ESP] or [RSP] (64-bit)
	/*0x11*/ BP = SP + 3,	//[EBP] or [RBP] (64-bit)
	/*0x14*/ SI = BP + 3,	//[ESI] or [RSI] (64-bit)
	/*0x17*/ DI = SI + 3,	//[EDI] or [RDI] (64-bit)

	/*0x1A*/ Disp = DI + 3,	//Displacement (32-bit)

	/*0x1B*/ SIB,			//The SIB byte is used
};

enum class Size {
	/*0x00*/ _none,			//No size
	/*0x01*/ _elsewhere,	//Size specified elsewhere

	/*0x02*/ byte,			//Byte, regardless of operand-size (8 bits)
	/*0x03*/ word,			//Word, regardless of operand-size (16 bits)
	/*0x04*/ dword,			//Dword regardless of operand-size (32 bits)

	/*0x05*/ w_dword,		//Word or doubleword, depending on operand-size
	/*0x06*/ b_w_dword,		//Byte, word or doubleword depending on operand-size

	/*0x07*/ x2_w_dword,	//Two word or two doubleword operands in memory, depending on operand-size
	/*0x08*/ b32_ptr,		//32-bit pointer
};