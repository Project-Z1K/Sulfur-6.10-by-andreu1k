// Fortnite (6.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TournamentEventWindowDetails.TournamentEventWindowDetails_C.RefreshDataBP
// (Event, Protected, BlueprintEvent)

void UTournamentEventWindowDetails_C::RefreshDataBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentEventWindowDetails.TournamentEventWindowDetails_C.RefreshDataBP");

	UTournamentEventWindowDetails_C_RefreshDataBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TournamentEventWindowDetails.TournamentEventWindowDetails_C.ExecuteUbergraph_TournamentEventWindowDetails
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTournamentEventWindowDetails_C::ExecuteUbergraph_TournamentEventWindowDetails(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentEventWindowDetails.TournamentEventWindowDetails_C.ExecuteUbergraph_TournamentEventWindowDetails");

	UTournamentEventWindowDetails_C_ExecuteUbergraph_TournamentEventWindowDetails_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
