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

// BlueprintGeneratedClass B_Athena_VendingMachine.B_Athena_VendingMachine_C
// 0x0130 (0x0940 - 0x0810)
class AB_Athena_VendingMachine_C : public ABuildingItemCollectorActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0810(0x0008) (Transient, DuplicateTransient)
	class USpotLightComponent*                         SpotLight;                                                // 0x0818(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UForceFeedbackComponent*                     ForceFeedbackFail;                                        // 0x0820(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UForceFeedbackComponent*                     ForceFeedbackSuccess;                                     // 0x0828(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             VendingMachine_Ambient_Cue;                               // 0x0830(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Loot_Effect_Vending;                                    // 0x0838(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_VendingMachineQuest;                                   // 0x0840(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0848(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              VendWobble_Flash_70FB301E43A001CE1340FE8051EE86B5;        // 0x0850(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              VendWobble_WobbleTime_70FB301E43A001CE1340FE8051EE86B5;   // 0x0854(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    VendWobble__Direction_70FB301E43A001CE1340FE8051EE86B5;   // 0x0858(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0859(0x0007) MISSED OFFSET
	class UTimelineComponent*                          VendWobble;                                               // 0x0860(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              SwitchHitch_Slide_A93D31CA462BFD95FDDD9E8A0BE99DA5;       // 0x0868(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SwitchHitch_Flash_A93D31CA462BFD95FDDD9E8A0BE99DA5;       // 0x086C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SwitchHitch_Wobble_A93D31CA462BFD95FDDD9E8A0BE99DA5;      // 0x0870(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    SwitchHitch__Direction_A93D31CA462BFD95FDDD9E8A0BE99DA5;  // 0x0874(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0875(0x0003) MISSED OFFSET
	class UTimelineComponent*                          SwitchHitch;                                              // 0x0878(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MontiorMat;                                               // 0x0880(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MetalMat;                                                 // 0x0888(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentCaptureCount;                                      // 0x0890(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0894(0x0004) MISSED OFFSET
	struct FText                                       Vend_String;                                              // 0x0898(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                                  SearchSound;                                              // 0x08B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  VendFailedSound;                                          // 0x08B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  CycleSound;                                               // 0x08C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CostAmount;                                               // 0x08C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x08CC(0x0004) MISSED OFFSET
	class UTexture*                                    MaterialType;                                             // 0x08D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Vend_Succeeded_Sound;                                     // 0x08D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               VendSuccess;                                              // 0x08E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WasHit;                                                   // 0x08E1(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x08E2(0x0002) MISSED OFFSET
	float                                              CycleSoundVolume;                                         // 0x08E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FCurveTableRowHandle                        TossOnGroundSetting;                                      // 0x08E8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Wood_String;                                              // 0x08F8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Stone_String;                                             // 0x0910(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Metal_String;                                             // 0x0928(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Athena_VendingMachine.B_Athena_VendingMachine_C");
		return ptr;
	}


	void SetRarityColors(const struct FLinearColor& Color);
	struct FText BlueprintGetInteractionString(class AFortPawn** InteractingPawn);
	void UserConstructionScript();
	void SwitchHitch__FinishedFunc();
	void SwitchHitch__UpdateFunc();
	void VendWobble__FinishedFunc();
	void VendWobble__UpdateFunc();
	void VendWobble__Start_FF_Time__EventFunc();
	void BlueprintOnInteract(class AFortPawn** InteractingPawn);
	void BlueprintOnBeginInteract();
	void PlayVendFX();
	void UpdateCollectorsActiveItem(int* StartingSeedValue, class UFortWorldItemDefinition** InputItem, class UTexture** InputTexture, int* CurrentGoal, int* CurrentCollectedAmount, int* CurrentCaptureCount, class UTexture** OutputTexture);
	void PlayVendFailFX();
	void ReceiveBeginPlay();
	void OnForcedCycle();
	void ExecuteUbergraph_B_Athena_VendingMachine(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
