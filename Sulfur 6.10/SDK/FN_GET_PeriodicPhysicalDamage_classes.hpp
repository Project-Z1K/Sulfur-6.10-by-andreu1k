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

// BlueprintGeneratedClass GET_PeriodicPhysicalDamage.GET_PeriodicPhysicalDamage_C
// 0x0000 (0x05F0 - 0x05F0)
class UGET_PeriodicPhysicalDamage_C : public UGET_PeriodicDamageParent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GET_PeriodicPhysicalDamage.GET_PeriodicPhysicalDamage_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif