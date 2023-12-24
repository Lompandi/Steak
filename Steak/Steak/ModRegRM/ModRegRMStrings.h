#pragma once

#define SZ_ARR_REGISTER_STRINGS 32

#ifndef STRING_SZ_OFFSET
#define STRING_SZ_OFFSET
	#define EIGHT_BIT		0 +
	#define SIXTEEN_BIT		1 +
	#define THIRTYTWO_BIT	2 +
	#define SIXTYFOUR_BIT	3 +
#endif // !STRING_SZ_OFFSET

#ifndef GENERAL_REGISTER_STRING
#define GENERAL_REGISTER_STRING
extern const char* GeneralRegisterString[SZ_ARR_REGISTER_STRINGS];
#endif // !GENERAL_REGISTER_STRING

extern const char* RMString[SZ_ARR_REGISTER_STRINGS];

#ifndef SEGMENT_REGISTER_STRING
#define SEGMENT_REGISTER_STRING
extern const char* SegmentRegisterString[SZ_ARR_REGISTER_STRINGS];
#endif // !SEGMENT_REGISTER_STRING

