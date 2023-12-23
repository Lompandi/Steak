#pragma once

#include "OperatorEnums.h"

struct OperatorSchema {
	Memorily memorily;
	Prefix prefix;
	Group group;

	OperatorSchema() : memorily(Memorily::_null), prefix(Prefix::_null), group(Group::_null) {};

	OperatorSchema(Memorily memorily) : memorily(memorily) {};
	OperatorSchema(Prefix prefix) : prefix(prefix) {};
	OperatorSchema(Group group) : group(group) {};
};

