#pragma once

#include "ModRegRMEnums.h"

struct ModRegRMSchema {
	struct {
		Mod mod;
		Size modSize;
	};

	struct {
		Reg reg;
		Size regSize;
	};

	struct {
		RM rm;
		Size rmSize;
		RM rm16;	//16-bit to 32-bit addressing mode
	};
};

extern const ModRegRMSchema EmptyModRegRMSchema;
extern const ModRegRMSchema ModRegRMSchemas[0x100];