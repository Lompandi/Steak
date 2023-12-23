#pragma once

#include "OperandEnums.h"

struct OperandSchema {

	GeneralRegister generalRegister;
	SegmentRegister segmentRegister;
	Constant constant;

	struct {
		AddressingMethod addressingMethod;
		Size operandSize;
	};

	OperandSchema() : addressingMethod(AddressingMethod::_none), operandSize(Size::_none), generalRegister(GeneralRegister::_none), segmentRegister(SegmentRegister::_none), constant(Constant::_none) {};
	OperandSchema(AddressingMethod addressingMethod, Size operandSize) : addressingMethod(addressingMethod), operandSize(operandSize) {};
	OperandSchema(GeneralRegister generalRegister, Size operandSize) : generalRegister(generalRegister), operandSize(operandSize) {};
	OperandSchema(SegmentRegister generalRegister, Size operandSize) : segmentRegister(segmentRegister), operandSize(operandSize) {};
	OperandSchema(Constant constant, Size operandSize) : constant(constant), operandSize(operandSize) {};
};

extern const OperandSchema EmptyOperandSchema;