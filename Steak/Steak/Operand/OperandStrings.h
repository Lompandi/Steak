#pragma once

#define SZ_GENERAL_REGISTER 0x10

#ifndef STRING_SIZE_OFFSETS
#define STRING_SIZE_OFFSETS
	#define THIRTYTWO_BITS 0 +
	#define SIXTYFOUR_BITS 1 +
#endif // !STRING_SIZE_OFFSETS

#ifndef GENERAL_REGISTER_STRING
#define GENERAL_REGISTER_STRING
extern const char* GeneralRegisterString[SZ_GENERAL_REGISTER];
#endif // !GENERAL_REGISTER_STRING

#ifndef SEGMENT_REGISTER_STRING
#define SEGMENT_REGISTER_STRING
extern const char* ConstantString[1];
#endif // !SEGMENT_REGISTER_STRING

