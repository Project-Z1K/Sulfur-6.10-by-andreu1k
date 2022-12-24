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

// BlueprintGeneratedClass GC_NPC_Elemental_Fire.GC_NPC_Elemental_Fire_C
// 0x0098 (0x0430 - 0x0398)
class AGC_NPC_Elemental_Fire_C : public AGameplayCueNotify_Actor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0398(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_FireElemental_Ambient_AuxillaryObjs;                    // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Fire_Elemental_HeadFire;                                  // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Fire_Elemental_FX;                                        // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInterface*                          Elemental_Material;                                       // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPhysicalMaterial*                           Elemental_Physical_Material;                              // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Delay_Time_for_Restore_Previous_Material;                 // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03D4(0x0004) MISSED OFFSET
	class UFortFeedbackBank*                           Elemental_Feedback;                                       // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FName, struct FLinearColor>            MiniBoss_Vectors;                                         // 0x03E0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GC_NPC_Elemental_Fire.GC_NPC_Elemental_Fire_C");
		return ptr;
	}


	void Death_FX_Setup(bool Remove, class AEnemyPawn_Parent_C* Pawn);
	bool OnRemove(class AActor** MyTarget, struct FGameplayCueParameters* Parameters);
	void UserConstructionScript();
	void K2_HandleGameplayCue(class AActor** MyTarget, TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters);
	void Rerun();
	void ExecuteUbergraph_GC_NPC_Elemental_Fire(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
