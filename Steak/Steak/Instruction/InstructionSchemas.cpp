
#include "InstructionSchemas.h"
#include "../Operator/OperatorEnums.h"
#include "../Operand/OperandEnums.h"

InstructionSchema& operator|=(InstructionSchema& left, const InstructionSchema& right) {
	left.operatorSchema.memorily = right.operatorSchema.memorily;

	for (int i = 0; i < NUM_OPERANDS; i++) {
		if (left.operandSchema[i].addressingMethod == AddressingMethod::_elsewhere)
			left.operandSchema[i].addressingMethod = right.operandSchema[i].addressingMethod;

		if (left.operandSchema[i].operandSize == Size::_elsewhere)
			left.operandSchema[i].operandSize = right.operandSchema[i].operandSize;
	}

	return left;
}

const InstructionSchema EmptyInstructionSchemas = { Memorily::_null, {{AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none},{AddressingMethod::_none, Size::_none}} };

const InstructionSchema InstructionSchemas[0x100] = {
	/*0x00*/ {Memorily::ADD,	{ {AddressingMethod::E, Size::byte},	{AddressingMethod::G, Size::byte}, {AddressingMethod::_none, Size::_none} } },
	/*0x01*/ {Memorily::ADD,	{ {AddressingMethod::E, Size::vword},	{AddressingMethod::G, Size::vword}, {AddressingMethod::_none, Size::_none} } },
	/*0x02*/ {Memorily::ADD,	{ {AddressingMethod::G, Size::byte},	{AddressingMethod::E, Size::byte}, {AddressingMethod::_none, Size::_none} } },
	/*0x03*/ {Memorily::ADD,	{ {AddressingMethod::G, Size::vword},	{AddressingMethod::E, Size::vword}, {AddressingMethod::_none, Size::_none} } },
	/*0x04*/ {Memorily::ADD,	{ {GeneralRegister::A, Size::byte},		{AddressingMethod::I, Size::byte}, {AddressingMethod::_none, Size::_none} } },
	/*0x05*/ {Memorily::ADD,	{ {GeneralRegister::A, Size::vword},	{AddressingMethod::I, Size::vword}, {AddressingMethod::_none, Size::_none} } },

	/*0x06*/ {Memorily::PUSH,	{ {SegmentRegister::ES, Size::_none},	{AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none} } },
	/*0x07*/ {Memorily::POP,	{ {SegmentRegister::ES, Size::_none},	{AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none} } },

	/*0x08*/ {Memorily::OR, { {AddressingMethod::E, Size::byte},		{AddressingMethod::G, Size::byte}, {AddressingMethod::_none, Size::_none} } },
	/*0x09*/ {Memorily::OR, { {AddressingMethod::E, Size::vword},		{AddressingMethod::G, Size::vword}, {AddressingMethod::_none, Size::_none} } },
	/*0x0A*/ {Memorily::OR, { {AddressingMethod::G, Size::byte},		{AddressingMethod::E, Size::byte}, {AddressingMethod::_none, Size::_none} } },
	/*0x0B*/ {Memorily::OR, { {AddressingMethod::G, Size::vword},		{AddressingMethod::E, Size::vword}, {AddressingMethod::_none, Size::_none} } },
	/*0x0C*/ {Memorily::OR, { {GeneralRegister::A, Size::byte},			{AddressingMethod::I, Size::byte}, {AddressingMethod::_none, Size::_none} } },
	/*0x0D*/ {Memorily::OR, { {GeneralRegister::A, Size::vword},		{AddressingMethod::I, Size::vword}, {AddressingMethod::_none, Size::_none} } },

	/*0x0E*/ {Memorily::PUSH, { {SegmentRegister::CS, Size::_none},		{AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none} } },
	/*0x0F*/ {Memorily::_null, { {SegmentRegister::_none, Size::_none}, {AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none} } },	//not vaild by itself

	/*0x10*/ {Memorily::ADC, { {AddressingMethod::E, Size::byte},		{AddressingMethod::G, Size::byte}, {AddressingMethod::_none, Size::_none} } },
	/*0x11*/ {Memorily::ADC, { {AddressingMethod::E, Size::vword},		{AddressingMethod::G, Size::vword}, {AddressingMethod::_none, Size::_none} } },
	/*0x12*/ {Memorily::ADC, { {AddressingMethod::G, Size::byte},		{AddressingMethod::E, Size::byte}, {AddressingMethod::_none, Size::_none} } },
	/*0x13*/ {Memorily::ADC, { {AddressingMethod::G, Size::vword},		{AddressingMethod::E, Size::vword}, {AddressingMethod::_none, Size::_none} } },
	/*0x14*/ {Memorily::ADC, { {GeneralRegister::A, Size::byte},		{AddressingMethod::I, Size::byte}, {AddressingMethod::_none, Size::_none} } },
	/*0x15*/ {Memorily::ADC, { {GeneralRegister::A, Size::vword},		{AddressingMethod::I, Size::vword}, {AddressingMethod::_none, Size::_none} } },
		
	/*0x16*/ {Memorily::PUSH, { {SegmentRegister::SS, Size::_none},		{AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none} } },
	/*0x17*/ {Memorily::POP, { {SegmentRegister::SS, Size::_none},		{AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none} } },

	/*0x18*/ {Memorily::SBB, { {AddressingMethod::E, Size::byte},		{AddressingMethod::G, Size::byte}, {AddressingMethod::_none, Size::_none} } },
	/*0x19*/ {Memorily::SBB, { {AddressingMethod::E, Size::vword},		{AddressingMethod::G, Size::vword}, {AddressingMethod::_none, Size::_none} } },
	/*0x1A*/ {Memorily::SBB, { {AddressingMethod::G, Size::byte},		{AddressingMethod::E, Size::byte}, {AddressingMethod::_none, Size::_none} } },
	/*0x1B*/ {Memorily::SBB, { {AddressingMethod::G, Size::vword},		{AddressingMethod::E, Size::vword}, {AddressingMethod::_none, Size::_none} } },
	/*0x1C*/ {Memorily::SBB, { {GeneralRegister::A, Size::byte},		{AddressingMethod::I, Size::byte}, {AddressingMethod::_none, Size::_none} } },
	/*0x1D*/ {Memorily::SBB, { {GeneralRegister::A, Size::vword},		{AddressingMethod::I, Size::vword}, {AddressingMethod::_none, Size::_none} } },

	/*0x1E*/ {Memorily::PUSH, { {SegmentRegister::DS, Size::_none},		{AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none} } },
	/*0x1F*/ {Memorily::POP, { {SegmentRegister::DS, Size::_none},		{AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none} } },

	/*0x20*/ {Memorily::AND, { {AddressingMethod::E, Size::byte},		{AddressingMethod::G, Size::byte}, {AddressingMethod::_none, Size::_none} } },
	/*0x21*/ {Memorily::AND, { {AddressingMethod::E, Size::vword},		{AddressingMethod::G, Size::vword}, {AddressingMethod::_none, Size::_none} } },
	/*0x22*/ {Memorily::AND, { {AddressingMethod::G, Size::byte},		{AddressingMethod::E, Size::byte}, {AddressingMethod::_none, Size::_none} } },
	/*0x23*/ {Memorily::AND, { {AddressingMethod::G, Size::vword},		{AddressingMethod::E, Size::vword}, {AddressingMethod::_none, Size::_none} } },
	/*0x24*/ {Memorily::AND, { {GeneralRegister::A, Size::byte},		{AddressingMethod::I, Size::byte}, {AddressingMethod::_none, Size::_none} } },
	/*0x25*/ {Memorily::AND, { {GeneralRegister::A, Size::vword},		{AddressingMethod::I, Size::vword}, {AddressingMethod::_none, Size::_none} } },
		
	/*0x26*/ {Prefix::ES,	{ {AddressingMethod::_none, Size::_none},	{AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none} } },
	/*0x27*/ {Memorily::DAA, { {AddressingMethod::_none, Size::_none},	{AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none} } },

	/*0x28*/ {Memorily::SUB, { {AddressingMethod::E, Size::byte},		{AddressingMethod::G, Size::byte}, {AddressingMethod::_none, Size::_none} } },
	/*0x29*/ {Memorily::SUB, { {AddressingMethod::E, Size::vword},		{AddressingMethod::G, Size::vword}, {AddressingMethod::_none, Size::_none} } },
	/*0x2A*/ {Memorily::SUB, { {AddressingMethod::G, Size::byte},		{AddressingMethod::E, Size::byte}, {AddressingMethod::_none, Size::_none} } },
	/*0x2B*/{ Memorily::SUB, { {AddressingMethod::G, Size::vword},		{AddressingMethod::E, Size::vword}, {AddressingMethod::_none, Size::_none} } },
	/*0x2C*/{ Memorily::SUB, { {GeneralRegister::A, Size::byte},		{AddressingMethod::I, Size::byte}, {AddressingMethod::_none, Size::_none} } },
	/*0x2D*/{ Memorily::SUB, { {GeneralRegister::A, Size::vword},		{AddressingMethod::I, Size::vword}, {AddressingMethod::_none, Size::_none} } },
	
	/*0x2E*/{ Prefix::CS, { {AddressingMethod::_none, Size::_none},		{AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none} } },
	/*0x2F*/{ Memorily::DAS, { {AddressingMethod::_none, Size::_none},	{AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none} } },
	
	/*0x30*/{ Memorily::XOR, { {AddressingMethod::E, Size::byte},		{AddressingMethod::G, Size::byte}, {AddressingMethod::_none, Size::_none} } },
	/*0x31*/{ Memorily::XOR, { {AddressingMethod::E, Size::vword},		{AddressingMethod::G, Size::vword}, {AddressingMethod::_none, Size::_none} } },
	/*0x32*/{ Memorily::XOR, { {AddressingMethod::G, Size::byte},		{AddressingMethod::E, Size::byte}, {AddressingMethod::_none, Size::_none} } },
	/*0x33*/{ Memorily::XOR, { {AddressingMethod::G, Size::vword},		{AddressingMethod::E, Size::vword}, {AddressingMethod::_none, Size::_none} } },
	/*0x34*/{ Memorily::XOR, { {GeneralRegister::A, Size::byte},		{AddressingMethod::I, Size::byte}, {AddressingMethod::_none, Size::_none} } },
	/*0x35*/{ Memorily::XOR, { {GeneralRegister::A, Size::vword},		{AddressingMethod::I, Size::vword}, {AddressingMethod::_none, Size::_none} } },
	
	/*0x36*/{ Prefix::SS,	{ {AddressingMethod::_none, Size::_none},	{AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none} } },
	/*0x37*/{ Memorily::AAA, { {AddressingMethod::_none, Size::_none},	{AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none} } },
	
	/*0x38*/{ Memorily::CMP, { {AddressingMethod::E, Size::byte},		{AddressingMethod::G, Size::byte}, {AddressingMethod::_none, Size::_none} } },
	/*0x39*/{ Memorily::CMP, { {AddressingMethod::E, Size::vword},		{AddressingMethod::G, Size::vword}, {AddressingMethod::_none, Size::_none} } },
	/*0x3A*/{ Memorily::CMP, { {AddressingMethod::G, Size::byte},		{AddressingMethod::E, Size::byte}, {AddressingMethod::_none, Size::_none} } },
	/*0x3B*/{ Memorily::CMP, { {AddressingMethod::G, Size::vword},		{AddressingMethod::E, Size::vword}, {AddressingMethod::_none, Size::_none} } },
	/*0x3C*/{ Memorily::CMP, { {GeneralRegister::A, Size::byte},		{AddressingMethod::I, Size::byte}, {AddressingMethod::_none, Size::_none} } },
	/*0x3D*/{ Memorily::CMP, { {GeneralRegister::A, Size::vword},		{AddressingMethod::I, Size::vword}, {AddressingMethod::_none, Size::_none} } },
	
	/*0x3E*/{ Prefix::DS,	 { {AddressingMethod::_none, Size::_none},	{AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none} } },
	/*0x3F*/{ Memorily::AAS, { {AddressingMethod::_none, Size::_none},	{AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none} } },
	
	/*0x40*/{ Memorily::INC, { {GeneralRegister::A,  Size::vword},		{AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none} } },
	/*0x41*/{ Memorily::INC, { {GeneralRegister::C,  Size::vword},		{AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none} } },
	/*0x42*/{ Memorily::INC, { {GeneralRegister::D,  Size::vword},		{AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none} } },
	/*0x43*/{ Memorily::INC, { {GeneralRegister::B,  Size::vword},		{AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none} } },
	/*0x44*/{ Memorily::INC, { {GeneralRegister::SP, Size::vword},		{AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none} } },
	/*0x45*/{ Memorily::INC, { {GeneralRegister::BP, Size::vword},		{AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none} } },
	/*0x46*/{ Memorily::INC, { {GeneralRegister::SI, Size::vword},		{AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none} } },
	/*0x47*/{ Memorily::INC, { {GeneralRegister::DI, Size::vword},		{AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none} } },
	
	/*0x48*/{ Memorily::DEC, { {GeneralRegister::A,  Size::vword},		{AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none} } },
	/*0x49*/{ Memorily::DEC, { {GeneralRegister::C,  Size::vword},		{AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none} } },
	/*0x4A*/{ Memorily::DEC, { {GeneralRegister::D,  Size::vword},		{AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none} } },
	/*0x4B*/{ Memorily::DEC, { {GeneralRegister::B,  Size::vword},		{AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none} } },
	/*0x4C*/{ Memorily::DEC, { {GeneralRegister::SP, Size::vword},		{AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none} } },
	/*0x4D*/{ Memorily::DEC, { {GeneralRegister::BP, Size::vword},		{AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none} } },
	/*0x4E*/{ Memorily::DEC, { {GeneralRegister::SI, Size::vword},		{AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none} } },
	/*0x4F*/{ Memorily::DEC, { {GeneralRegister::DI, Size::vword},		{AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none} } },
	
	/*0x50*/{ Memorily::PUSH, { {GeneralRegister::A,  Size::vword},		{AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none} } },
	/*0x51*/{ Memorily::PUSH, { {GeneralRegister::C,  Size::vword},		{AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none} } },
	/*0x52*/{ Memorily::PUSH, { {GeneralRegister::D,  Size::vword},		{AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none} } },
	/*0x53*/{ Memorily::PUSH, { {GeneralRegister::B,  Size::vword},		{AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none} } },
	/*0x54*/{ Memorily::PUSH, { {GeneralRegister::SP, Size::vword},		{AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none} } },
	/*0x55*/{ Memorily::PUSH, { {GeneralRegister::BP, Size::vword},		{AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none} } },
	/*0x56*/{ Memorily::PUSH, { {GeneralRegister::SI, Size::vword},		{AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none} } },
	/*0x57*/{ Memorily::PUSH, { {GeneralRegister::DI, Size::vword},		{AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none} } },
	
	/*0x58*/{ Memorily::POP, { {GeneralRegister::A,  Size::vword},		{AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none} } },
	/*0x59*/{ Memorily::POP, { {GeneralRegister::C,  Size::vword},		{AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none} } },
	/*0x5A*/{ Memorily::POP, { {GeneralRegister::D,  Size::vword},		{AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none} } },
	/*0x5B*/{ Memorily::POP, { {GeneralRegister::B,  Size::vword},		{AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none} } },
	/*0x5C*/{ Memorily::POP, { {GeneralRegister::SP, Size::vword},		{AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none} } },
	/*0x5D*/{ Memorily::POP, { {GeneralRegister::BP, Size::vword},		{AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none} } },
	/*0x5E*/{ Memorily::POP, { {GeneralRegister::SI, Size::vword},		{AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none} } },
	/*0x5F*/{ Memorily::POP, { {GeneralRegister::DI, Size::vword},		{AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none} } },
	
	/*0x60*/{ Memorily::PUSHA,	{ {AddressingMethod::_none,  Size::_none}, {AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none} } },
	/*0x61*/{ Memorily::POPA,	{ {AddressingMethod::_none,  Size::_none}, {AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none} } },
	/*0x62*/{ Memorily::BOUND,	{ {AddressingMethod::G,  Size::vword}, {AddressingMethod::M, Size::aword}, {AddressingMethod::_none, Size::_none} } },
	/*0x63*/{ Memorily::ARPL,	{ {AddressingMethod::E,  Size::word}, {AddressingMethod::G, Size::word}, {AddressingMethod::_none, Size::_none} } },
	/*0x64*/{ Prefix::FS,		{ {AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none} } },
	/*0x65*/{ Prefix::GS,		{ {AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none} } },
	/*0x66*/{ Prefix::OPERAND,	{ {AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none} } },
	/*0x67*/{ Prefix::ADDRESS,	{ {AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none}, {AddressingMethod::_none, Size::_none} } },
	
	/*0x68*/{ Memorily::PUSH,	{ {AddressingMethod::I, Size::vword}, {AddressingMethod::_none, Size::_none},	{AddressingMethod::_none,	Size::_none} } },
	/*0x69*/{ Memorily::IMUL,	{ {AddressingMethod::G, Size::vword}, {AddressingMethod::E,		Size::vword},	{AddressingMethod::I,		Size::vword} } },
	/*0x6A*/{ Memorily::PUSH,	{ {AddressingMethod::I, Size::byte},  {AddressingMethod::_none, Size::_none},	{AddressingMethod::_none,	Size::_none} } },
	/*0x6B*/{ Memorily::IMUL,	{ {AddressingMethod::G, Size::vword}, {AddressingMethod::E,		Size::vword},	{AddressingMethod::I,		Size::byte} } },
	/*0x6C*/{ Memorily::INS,	{ {AddressingMethod::Y, Size::byte},  {GeneralRegister::D,		Size::word},	{AddressingMethod::_none,	Size::_none} } },
	/*0x6D*/{ Memorily::INS,	{ {AddressingMethod::Y, Size::vword}, {GeneralRegister::D,		Size::word},	{AddressingMethod::_none,	Size::_none} } },
	/*0x6E*/{ Memorily::OUTS,	{ {GeneralRegister::D, Size::word},   {AddressingMethod::X,		Size::byte},	{AddressingMethod::_none,	Size::_none} } },
	/*0x6F*/{ Memorily::OUTS,	{ {GeneralRegister::D, Size::word},   {AddressingMethod::X,		Size::vword},	{AddressingMethod::_none,	Size::_none} } },
	
	/*0x70*/{ Memorily::JO,		{ {AddressingMethod::J,  Size::byte}, {AddressingMethod::_none, Size::_none},	{AddressingMethod::_none,	Size::_none} } },
	/*0x71*/{ Memorily::JNO,	{ {AddressingMethod::J,  Size::byte}, {AddressingMethod::_none, Size::_none},	{AddressingMethod::_none,	Size::_none} } },
	/*0x72*/{ Memorily::JB,		{ {AddressingMethod::J,  Size::byte}, {AddressingMethod::_none, Size::_none},	{AddressingMethod::_none,	Size::_none} } },
	/*0x73*/{ Memorily::JNB,	{ {AddressingMethod::J,  Size::byte}, {AddressingMethod::_none, Size::_none},	{AddressingMethod::_none,	Size::_none} } },
	/*0x74*/{ Memorily::JZ,		{ {AddressingMethod::J,  Size::byte}, {AddressingMethod::_none, Size::_none},	{AddressingMethod::_none,	Size::_none} } },
	/*0x75*/{ Memorily::JNZ,	{ {AddressingMethod::J,  Size::byte}, {AddressingMethod::_none, Size::_none},	{AddressingMethod::_none,	Size::_none} } },
	/*0x76*/{ Memorily::JBE,	{ {AddressingMethod::J,  Size::byte}, {AddressingMethod::_none, Size::_none},	{AddressingMethod::_none,	Size::_none} } },
	/*0x77*/{ Memorily::JNBE,	{ {AddressingMethod::J,  Size::byte}, {AddressingMethod::_none, Size::_none},	{AddressingMethod::_none,	Size::_none} } },
	
	/*0x78*/{ Memorily::JS,		{ {AddressingMethod::J,  Size::byte}, {AddressingMethod::_none, Size::_none},	{AddressingMethod::_none,	Size::_none} } },
	/*0x79*/{ Memorily::JNS,	{ {AddressingMethod::J,  Size::byte}, {AddressingMethod::_none, Size::_none},	{AddressingMethod::_none,	Size::_none} } },
	/*0x7A*/{ Memorily::JP,		{ {AddressingMethod::J,  Size::byte}, {AddressingMethod::_none, Size::_none},	{AddressingMethod::_none,	Size::_none} } },
	/*0x7B*/{ Memorily::JNP,	{ {AddressingMethod::J,  Size::byte}, {AddressingMethod::_none, Size::_none},	{AddressingMethod::_none,	Size::_none} } },
	/*0x7C*/{ Memorily::JL,		{ {AddressingMethod::J,  Size::byte}, {AddressingMethod::_none, Size::_none},	{AddressingMethod::_none,	Size::_none} } },
	/*0x7D*/{ Memorily::JNL,	{ {AddressingMethod::J,  Size::byte}, {AddressingMethod::_none, Size::_none},	{AddressingMethod::_none,	Size::_none} } },
	/*0x7E*/{ Memorily::JLE,	{ {AddressingMethod::J,  Size::byte}, {AddressingMethod::_none, Size::_none},	{AddressingMethod::_none,	Size::_none} } },
	/*0x7F*/{ Memorily::JNLE,	{ {AddressingMethod::J,  Size::byte}, {AddressingMethod::_none, Size::_none},	{AddressingMethod::_none,	Size::_none} } },
	
	/*0x80*/{ Group::Immediate, { {AddressingMethod::E,	 Size::byte}, {AddressingMethod::I,		Size::byte},	{AddressingMethod::_none,	Size::_none} } },
	/*0x81*/{ Group::Immediate, { {AddressingMethod::E,	 Size::vword},{AddressingMethod::I,		Size::vword},	{AddressingMethod::_none,	Size::_none} } },
	/*0x82*/{ Group::Immediate, { {AddressingMethod::E,	 Size::byte}, {AddressingMethod::I,		Size::byte},	{AddressingMethod::_none,	Size::_none} } },
	/*0x83*/{ Group::Immediate, { {AddressingMethod::E,	 Size::vword}, {AddressingMethod::I,	Size::byte},	{AddressingMethod::_none,	Size::_none} } },
	/*0x84*/{ Memorily::TEST,	{ {AddressingMethod::E,	 Size::byte}, {AddressingMethod::G,		Size::byte},	{AddressingMethod::_none,	Size::_none} } },
	/*0x85*/{ Memorily::TEST,	{ {AddressingMethod::E,	 Size::vword},{AddressingMethod::G,		Size::vword},	{AddressingMethod::_none,	Size::_none} } },
	/*0x86*/{ Memorily::XCHG,	{ {AddressingMethod::E,	 Size::byte}, {AddressingMethod::G,		Size::byte},	{AddressingMethod::_none,	Size::_none} } },
	/*0x87*/{ Memorily::XCHG,	{ {AddressingMethod::E,	 Size::vword},{AddressingMethod::G,		Size::vword},	{AddressingMethod::_none,	Size::_none} } },

	/*0x88*/{ Memorily::MOV,	{ {AddressingMethod::E,  Size::byte}, {AddressingMethod::G,		Size::byte},	{AddressingMethod::_none,	Size::_none} } },
	/*0x89*/{ Memorily::MOV,	{ {AddressingMethod::E,  Size::vword},{AddressingMethod::G,		Size::vword},	{AddressingMethod::_none,	Size::_none} } },
	/*0x8A*/{ Memorily::MOV,	{ {AddressingMethod::G,  Size::byte}, {AddressingMethod::E,		Size::byte},	{AddressingMethod::_none,	Size::_none} } },
	/*0x8B*/{ Memorily::MOV,	{ {AddressingMethod::G,  Size::vword},{AddressingMethod::E,		Size::vword},	{AddressingMethod::_none,	Size::_none} } },
	/*0x8C*/{ Memorily::MOV,	{ {AddressingMethod::E,  Size::vword},{AddressingMethod::S,		Size::word},	{AddressingMethod::_none,	Size::_none} } },
	/*0x8D*/{ Memorily::LEA,	{ {AddressingMethod::G,  Size::vword},{AddressingMethod::M,		Size::_none},	{AddressingMethod::_none,	Size::_none} } },
	/*0x8E*/{ Memorily::MOV,	{ {AddressingMethod::S,  Size::word}, {AddressingMethod::E,		Size::word},	{AddressingMethod::_none,	Size::_none} } },
	/*0x8F*/{ Memorily::POP,	{ {AddressingMethod::E,  Size::vword},{AddressingMethod::_none, Size::_none},	{AddressingMethod::_none,	Size::_none} } },

	/*0x90*/{ Memorily::XCHG,	{ {GeneralRegister::A,  Size::vword},	{GeneralRegister::A,  Size::vword},		{AddressingMethod::_none, Size::_none} } },
	/*0x91*/{ Memorily::XCHG,	{ {GeneralRegister::A,  Size::vword},	{GeneralRegister::C,  Size::vword},		{AddressingMethod::_none, Size::_none} } },
	/*0x92*/{ Memorily::XCHG,	{ {GeneralRegister::A,  Size::vword},	{GeneralRegister::D,  Size::vword},		{AddressingMethod::_none, Size::_none} } },
	/*0x93*/{ Memorily::XCHG,	{ {GeneralRegister::A,  Size::vword},	{GeneralRegister::B,  Size::vword},		{AddressingMethod::_none, Size::_none} } },
	/*0x94*/{ Memorily::XCHG,	{ {GeneralRegister::A,	Size::vword},	{GeneralRegister::SP, Size::vword},		{AddressingMethod::_none, Size::_none} } },
	/*0x95*/{ Memorily::XCHG,	{ {GeneralRegister::A,	Size::vword},	{GeneralRegister::BP, Size::vword},		{AddressingMethod::_none, Size::_none} } },
	/*0x96*/{ Memorily::XCHG,	{ {GeneralRegister::A,	Size::vword},	{GeneralRegister::SI, Size::vword},		{AddressingMethod::_none, Size::_none} } },
	/*0x97*/{ Memorily::XCHG,	{ {GeneralRegister::A,	Size::vword},	{GeneralRegister::DI, Size::vword},		{AddressingMethod::_none, Size::_none} } },
};
