#pragma once

// PUBG (2.4.0) SDKGen By @R_Boriel

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum slua_unreal.EPropertyClass
enum class EPropertyClass : uint8_t
{
	EPropertyClass__Byte           = 0,
	EPropertyClass__Int8           = 1,
	EPropertyClass__Int16          = 2,
	EPropertyClass__Int            = 3,
	EPropertyClass__Int64          = 4,
	EPropertyClass__UInt16         = 5,
	EPropertyClass__UInt32         = 6,
	EPropertyClass__UInt64         = 7,
	EPropertyClass__UnsizedInt     = 8,
	EPropertyClass__UnsizedUInt    = 9,
	EPropertyClass__Float          = 10,
	EPropertyClass__Double         = 11,
	EPropertyClass__Bool           = 12,
	EPropertyClass__SoftClass      = 13,
	EPropertyClass__WeakObject     = 14,
	EPropertyClass__LazyObject     = 15,
	EPropertyClass__SoftObject     = 16,
	EPropertyClass__Class          = 17,
	EPropertyClass__Object         = 18,
	EPropertyClass__Interface      = 19,
	EPropertyClass__Name           = 20,
	EPropertyClass__Str            = 21,
	EPropertyClass__Array          = 22,
	EPropertyClass__Map            = 23,
	EPropertyClass__Set            = 24,
	EPropertyClass__Struct         = 25,
	EPropertyClass__Delegate       = 26,
	EPropertyClass__MulticastDelegate = 27,
	EPropertyClass__Text           = 28,
	EPropertyClass__Enum           = 29,
	EPropertyClass__EPropertyClass_MAX = 30
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct slua_unreal.LuaNetSerialization
// 0x0050
struct FLuaNetSerialization
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct slua_unreal.SluaBPVar
// 0x0020
struct FSluaBPVar
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

}

