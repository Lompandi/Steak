
/*
Operator string
Same as Memorily, But string for output
*/

#include "OperatorStrings.h"

const char* MemorilyString[STR_MEMORILY_MAX] = {
	/*0x00*/ "_null",	//No op

	/* Mathmatic Instructions */

	/*0x01*/ "ADD",		//Add
	/*0x02*/ "SUB",		//Subtract
	/*0x03*/ "MUL",		//Multiply with unsigned val
	/*0x04*/ "DIV",		//Division with unsigned val
	/*0x05*/ "ADC",		//Add with carry
	/*0x06*/ "SBB",		//Intenger subtraction with borrow
	/*0x07*/ "IMUL",	//Multiply with signed val
	/*0x08*/ "IDIV",	//Division with signed val
	/*0x09*/ "INC",		//Increment by 1
	/*0x0A*/ "DEC",		//Decrement by 1

	/* Logical Instructions */

	/*0x0B*/ "NOT",		//Bitwise negation
	/*0x0C*/ "NEG",		//Two's negation
	/*0x0D*/ "AND",		//Logical AND
	/*0x0E*/ "OR",		//Logical OR
	/*0x0F*/ "XOR",		//Exclusive OR

	/* Shift Instructions */

	/*0x10*/ "ROL",		//Rotate left
	/*0x11*/ "ROR",		//Rotate right
	/*0x12*/ "RCL",		//Rotate left with carry
	/*0x13*/ "RCR",		//Rotate right with carry
	/*0x14*/ "SHL",		//Logical left shift
	/*0x15*/ "SHR",		//Logical right shift
	/*0x16*/ "SAL",		//Arithmetic left shift
	/*0x17*/ "SAR",		//Arithmetic right shift

	/* Push Instructions */

	/*0x18*/ "PUSH",	//Push word, dword, or qword onto the stack
	/*0x19*/ "PUSHA",	//Push all general-purpose registers
	/*0x1A*/ "PUSHAD",	//Push all general-purpose registers
	/*0x1B*/ "PUSHF",	//Push FLAGS register onto the stack
	/*0x1C*/ "PUSHFD",	//Push EFLAGS register onto the stack
	/*0x1D*/ "PUSHFQ",	//Push RFLAGS register onto the stack

	/* Pop Instructions */

	/*0x1E*/ "POP",		//Pop a value from the stack
	/*0x1F*/ "POPA",	//Pop all general-purpose registers
	/*0x20*/ "POPAD",	//Pop all general-purpose registers
	/*0x21(2)*/			//Maybe something here...
	/*0x21*/ "POPF",	//Pop stack into FLAGS register
	/*0x22*/ "POPFD",	//Pop stack into EFLAGS register
	/*0x23*/ "POPFQ",	//Pop stack into RFLAGS register

	/* Move Instructions */	//still a long way to go...

	/*0x24*/ "XCHG",		//Exchange register/memory with register
	/*0x25*/ "MOV",			//Move
	/*0x26*/ "MOVS",		//Move data from string to string
	/*0x27*/ "MOVSB",		//Move data from string to string
	/*0x28*/ "MOVSW",		//Move data from string to string
	/*0x29*/ "MOVSD",		//Move data from string to string
	/*0x2A*/ "MOVSQ",		//Move data from string to string

	/* Jump Instructions */

	/*0x2B*/ "JMP",		//Jump
	/*0x2C*/ "JA",		//Jump is above (CF = 0, ZF = 0)
	/*0x2D*/ "JAE",		//Jump if above or equal (CF = 0)
	/*0x2E*/ "JB",		//Jump if below (CF = 1)
	/*0x2F*/ "JBE",		//Jump if below or equal (CF = 1 or ZF = 1)
	/*0x30*/ "JC",		//Jump if carry (CF = 1)
	/*0x31*/ "JE",		//Jump if equal (ZF = 1)
	/*0x32*/ "JG",		//Jump if greater (ZF = 0, SF = OF)
	/*0x33*/ "JGE",		//Jump if greater or equal (SF = OF)
	/*0x34*/ "JL",		//Jump if less (SF != OF)
	/*0x35*/ "JLE",		//Jump if less or equal (ZF = 1 or SF != OF)
	/*0x36*/ "JNA",		//Jump if not above (CF = 1 or ZF = 1)
	/*0x37*/ "JNAE",	//Jump if not above or equal (CF = 1)
	/*0x38*/ "JNB",		//Jump if not below (CF = 0)
	/*0x39*/ "JNBE",	//Jump if not below or equal (CF = 0, ZF = 0)
	/*0x3A*/ "JNC",		//Jump if not carry (CF = 0)
	/*0x3B*/ "JNE",		//Jump if not equal (ZF = 0)
	/*0x3C*/ "JNG",		//Jump if not greater (ZF = 1 or SF != OF)
	/*0x3D*/ "JNGE",	//Jump if not greater or equal (SF != OF)
	/*0x3E*/ "JNL",		//Jump if not less (SF = OF)
	/*0x3F*/ "JNLE",	//Jump if not less or equal (ZF = 0, SF = OF)
	/*0x40*/ "JNO",		//Jump if not overflow (OF = 0)
	/*0x41*/ "JNP",		//Jump if not parity (PF = 0)
	/*0x42*/ "JNS",		//Jump if not sign (SF = 0)
	/*0x43*/ "JNZ",		//Jump if not zero (ZF = 0)
	/*0x44*/ "JO",		//Jump if overflow (OF = 1)
	/*0x45*/ "JP",		//Jump if parity (PF = 1)
	/*0x46*/ "JPE",		//Jump if parity even (PF = 1) (even number)
	/*0x47*/ "JPO",		//Jump if parity odd (PF = 0) (odd number)
	/*0x48*/ "JS",		//Jump if sign (SF = 1)
	/*0x49*/ "JZ",		//Jump if zero (ZF = 1)
	/*0x4A*/ "JCXZ",	//Jump if CX = 0 (16-bits)
	/*0x4B*/ "JECXZ",	//Jump if ECX = 0 (32-bits)

	/* Procedure Instructions */

	/*0x4C*/ "CALL"		//Call procedure
	/*0x4D*/ "RET",		//Return from procedure
	/*0x4E*/ "ENTE",	//Make stack frame for procedure params
	/*0x4F*/ "LEAV",	//High level procedure exit

	/* Interrupt Instructions */

	/*0x50*/ "INT",		//Call to interrupt procedure
	/*0x51*/ "INTO",	//Call to interrupt procedure
	/*0x52*/ "IRET",	//Interrupt return
	/*0x53*/ "IRETD",	//Interrupt return
	/*0x54*/ "IRETQ",	//Interrupt return

	/* Input Instructions */

	/*0x55*/ "IN",		//Input from port
	/*0x56*/ "INS",		//Input from port to string
	/*0x57*/ "INSB",	//Input from port to string
	/*0x58*/ "INSW",	//Input from port to string
	/*0x59*/ "INSD",	//Input from port to string

	/* Output Instructions */

	/*0x5A*/ "OUT",		//Output to port
	/*0x5B*/ "OUTS",	//Output string to port
	/*0x5C*/ "OUTSB",	//Output string to port
	/*0x5D*/ "OUTSW",	//Output string to port
	/*0x5E*/ "OUTSD",	//Output string to port

	/* Conversion Instructions */

	/*0x5F*/ "CBW",		//Convert byte to word
	/*0x60*/ "CWDE",	//Convert word to dword
	/*0x61*/ "CDQE",	//Convert dword to qword
	/*0x62*/ "CWD",		//Convert word to dword
	/*0x63*/ "CDQ",		//Convert dword to qword
	/*0x64*/ "CQO",		//Convert qword to double-qword

	/* Loop Instructions */

	/*0x65*/ "LOOPNE",	//Decrement count(ecx != 0), jump if count != 0 and ZF = 0
	/*0x66*/ "LOOPNZ",	//Decrement count(ecx != 0), jump if count != 0 and ZF = 0
	/*0x67*/ "LOOPE",	//Decrement count(ecx != 0), jump if count != 0 and ZF = 1
	/*0x68*/ "LOOPZ",	//Decrement count(ecx != 0), jump if count != 0 and ZF = 1
	/*0x69*/ "LOOP",	//Decrement count(ecx != 0), jump if count != 0

	/* ASCII Adjust Instructions */

	/*0x6A*/ "AAM",		//ASCII adjust AX after multiply
	/*0x6B*/ "AAD",		//ASCII adjust AX before division
	/*0x6C*/ "AAA",		//ASCII adjust after addition
	/*0x6D*/ "AAS",		//ASCII adjust AL after subtraction

	/* Decimal Adjust Instructions*/

	/*0x6E*/ "DAA",		//Decimal adjust AL after addition
	/*0x6F*/ "DAS",		//Decimal adjust AL after subtraction

	/* Compare Instructions */

	/*0x70*/ "TEST",	//Logical compare
	/*0x71*/ "CMP",		//Compare two operands
	/*0x72*/ "CMPS",	//Compare string operands
	/*0x73*/ "CMPSB",	//Compare string operands
	/*0x74*/ "CMPSW",	//Compare string operands
	/*0x75*/ "CMPSD",	//Compare string operands

	/* Flag Instructions */

	/*0x76*/ "CMC",		//Complete carry flag
	/*0x77*/ "CLC",		//Clear carry flag
	/*0x78*/ "STC",		//Set carry flag
	/*0x79*/ "CLI",		//Clear interrupt flag
	/*0x7A*/ "STI",		//Set Interrupt flag
	/*0x7B*/ "CLD",		//Clear direction flag
	/*0x7C*/ "STD",		//Set direction flag

	/* Load String Instructions */

	/*0x7D*/ "LODS",	//Load string
	/*0x7E*/ "LODSB",	//Load string
	/*0x7F*/ "LODSW",	//Load string
	/*0x80*/ "LODSD",	//Load string
	/*0x81*/ "LODSQ",	//Load string

	/* Scan String Instructions*/

	/*0x82*/ "SCAS",	//Scan string
	/*0x83*/ "SCASB",	//Scan string
	/*0x84*/ "SCASW",	//Scan string
	/*0x85*/ "SCASD",	//Scan string
	/*0x86*/ "SCASQ",	//Scan string

	/* Store String Instructions */

	/*0x87*/ "STOS",	//Store string
	/*0x88*/ "STOSB",	//Store string
	/*0x89*/ "STOSW",	//Store string
	/*0x8A*/ "STOSD",	//Store string
	/*0x8B*/ "STOSQ",	//Store string

	/* Obstruction Instructions */

	/*0x8C*/ "HLT",		//Halt
	/*0x8D*/ "WAIT",	//Wait
	/*0x8E*/ "FWAIT",	//Wait
	/*0x8F*/ "NOP",		//No operation
	/*0x90*/ "PAUSE",	//Spin loop hint

	/* Pointer Instructions */

	/*0x91*/ "LES",		//Load far pointer
	/*0x92*/ "LDS",		//Load far pointer

	/* Table Instructions */

	/*0x93*/ "XLAT",	//Table look-up translation
	/*0x94*/ "XLATB",	//Table look-up translation

	/* FLAGS Instructions */

	/*0x95*/ "SAHF",	//Store AH into FLAGS
	/*0x96*/ "LAHF",	//Load FLAGS into AH

	/* Effective Address Instruction */

	/*0x97*/ "LEA",		//Load effective address

	/* Array Instruction */

	/*0x98*/ "BOUND",	//Check array index against bounds

	/* Segment Instructions */

	/*0x99*/ "ARPL",	//Adjust RPL field of segment selector
};