#pragma once

// Fortnite (6.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GA_DefaultPlayer_BuildingRepaired.GA_DefaultPlayer_BuildingRepaired_C
// 0x0008 (0x08F8 - 0x08F0)
class UGA_DefaultPlayer_BuildingRepaired_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08F0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_DefaultPlayer_BuildingRepaired.GA_DefaultPlayer_BuildingRepaired_C");
		return ptr;
	}


	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void ExecuteUbergraph_GA_DefaultPlayer_BuildingRepaired(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
