#pragma once

// Fortnite (6.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function T2_Main.T2_Main_C.PreConstruct
struct UT2_Main_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function T2_Main.T2_Main_C.Construct
struct UT2_Main_C_Construct_Params
{
};

// Function T2_Main.T2_Main_C.ExecuteUbergraph_T2_Main
struct UT2_Main_C_ExecuteUbergraph_T2_Main_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
