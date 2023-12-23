#pragma once

enum class AddressingMethod {
	/*0x00*/ _none,		//No Operand
	/*0x01*/ _elsewhere,//Oprerand specified in another table

	/* Direct Address (Memory address)*/

	/*0x02*/ A,			//Direct address : [Segment]:[Offset]

	/* Relative Address Displacement Operand */

	/*0x03*/ J,			//Relative offset
	/*0x04*/ O,			//Memory offset relative to the segment base

	/* ModRM Operand */

	/*0x05*/ E,			//ModRegRM specified a general purpose register or memory address
	/*0x06*/ M,			//ModRegRM only specified memory address

	/* General Register Operand */

	/*0x07*/ G,			//Reg field of ModRegRM specifies a general register

	/* Segment Register Operand */

	/*0x08*/ S,			//Reg field of ModRegRM specifies a segment register

	/* Immediate Operand */

	/*0x09*/ I,			//Immediate data

	/* Fixed Address Operand */

	/*0x0A*/ X,			//Memory address by the DS:rSI register pair
	/*0x0B*/ Y,			//Memory address by the ES:rSI register pair

	/*0x0C*/ LAST		//attacher
};

enum class GeneralRegister {
	/*0x00*/ _none,		//No Operand
	/*0x01*/ _elsewhere,			//Operand specified in another table

	/*0x0C*/ A = (int)AddressingMethod::LAST,	//General A register
	/*0x0F*/ C = A + 3,		//General C register
	/*0x12*/ D = C + 3,		//Gerenal D register 
	/*0x15*/ B = D + 3,		//Gerenal B register 
	/*0x18*/ SP = B + 3,	//Gerenal SP register
	/*0x1B*/ BP = SP + 3,	//Gerenal BP register
	/*0x1E*/ SI = BP + 3,	//Gerenal SI register 
	/*0x21*/ DI = SI + 3,	//Gerenal DI register

	/*0x24*/ LAST = DI + 3	//Attacher
};

enum class SegmentRegister {
	/*0x00*/ _none,		//No Operand
	/*0x01*/ _elsewhere,			//Operand specified in another table

	/*0x24*/ ES = (int)GeneralRegister::LAST,	//E Segment register
	/*0x27*/ CS = ES + 3,		//C Segment register
	/*0x2A*/ SS = CS + 3,		//S Segment register 
	/*0x2D*/ DS = SS + 3,		//D Segment register 
	/*0x30*/ FS = DS + 3,		//F Segment register
	/*0x33*/ GS = DS + 3,		//G Segment register

	/*0x36*/ LAST = GS + 3		//Attacher
};

enum class Constant {
	/*0x00*/ _none,			//No Operand
	/*0x01*/ _elsewhere,	//Operand Specified in another table

	/*0x36*/ ONE = (int)SegmentRegister::LAST, //The number one (used only by instruction group)

	/*0x37*/ LAST			//Attacher
};

enum class Size {
	/*0x00*/ _none,			//No Size
	/*0x01*/ _elsewhere,	//Size specified in another table

	/*0x02*/ byte,			//byte size (8)
	/*0x03*/ word,			//word size (16)
	/*0x04*/ dword,			//dword size (32)

	/*0x05*/ vword,			//word or dword, depending on operand-size
	/*0x06*/ uword,			//byte, word or dword depending on operand-size

	/*0x07*/ aword,			//Two word or two dword opreands in memory, depending on operand-size

	/*0x08*/ b32_ptr,		//32-bit pointer
};