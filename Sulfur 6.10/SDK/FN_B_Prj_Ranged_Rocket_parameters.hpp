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

// Function B_Prj_Ranged_Rocket.B_Prj_Ranged_Rocket_C.UserConstructionScript
struct AB_Prj_Ranged_Rocket_C_UserConstructionScript_Params
{
};

// Function B_Prj_Ranged_Rocket.B_Prj_Ranged_Rocket_C.PPFader__FinishedFunc
struct AB_Prj_Ranged_Rocket_C_PPFader__FinishedFunc_Params
{
};

// Function B_Prj_Ranged_Rocket.B_Prj_Ranged_Rocket_C.PPFader__UpdateFunc
struct AB_Prj_Ranged_Rocket_C_PPFader__UpdateFunc_Params
{
};

// Function B_Prj_Ranged_Rocket.B_Prj_Ranged_Rocket_C.OnBounce
struct AB_Prj_Ranged_Rocket_C_OnBounce_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_Ranged_Rocket.B_Prj_Ranged_Rocket_C.OnStop
struct AB_Prj_Ranged_Rocket_C_OnStop_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_Ranged_Rocket.B_Prj_Ranged_Rocket_C.ReceiveBeginPlay
struct AB_Prj_Ranged_Rocket_C_ReceiveBeginPlay_Params
{
};

// Function B_Prj_Ranged_Rocket.B_Prj_Ranged_Rocket_C.FuseTimerMax
struct AB_Prj_Ranged_Rocket_C_FuseTimerMax_Params
{
};

// Function B_Prj_Ranged_Rocket.B_Prj_Ranged_Rocket_C.OnExploded
struct AB_Prj_Ranged_Rocket_C_OnExploded_Params
{
	TArray<class AActor*>*                             HitActors;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FHitResult>*                         HitResults;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function B_Prj_Ranged_Rocket.B_Prj_Ranged_Rocket_C.ReceiveTick
struct AB_Prj_Ranged_Rocket_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Ranged_Rocket.B_Prj_Ranged_Rocket_C.ReceiveDestroyed
struct AB_Prj_Ranged_Rocket_C_ReceiveDestroyed_Params
{
};

// Function B_Prj_Ranged_Rocket.B_Prj_Ranged_Rocket_C.ParticleCollide
struct AB_Prj_Ranged_Rocket_C_ParticleCollide_Params
{
	struct FName                                       EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              EmitterTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ParticleTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPhysicalMaterial*                           PhysMat;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Ranged_Rocket.B_Prj_Ranged_Rocket_C.ExecuteUbergraph_B_Prj_Ranged_Rocket
struct AB_Prj_Ranged_Rocket_C_ExecuteUbergraph_B_Prj_Ranged_Rocket_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
