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

// WidgetBlueprintGeneratedClass GlobalActionKeybindWidget.GlobalActionKeybindWidget_C
// 0x0019 (0x08A1 - 0x0888)
class UGlobalActionKeybindWidget_C : public UActionDetailsSourceKeybindWidget_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0888(0x0008) (Transient, DuplicateTransient)
	EFortGlobalAction                                  GlobalAction;                                             // 0x0890(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0891(0x0007) MISSED OFFSET
	class UFortStandardGlobalActionDetailsDataSource*  TypedActionSource;                                        // 0x0898(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FFortGlobalActionDetailsFunctionContext     ActionDetailsContext;                                     // 0x08A0(0x0001) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GlobalActionKeybindWidget.GlobalActionKeybindWidget_C");
		return ptr;
	}


	void PropagateActionDetailsContext();
	void SetActionDetailsContext(const struct FFortGlobalActionDetailsFunctionContext& Value);
	void SetGlobalAction(EFortGlobalAction Value);
	void PropagateGlobalAction();
	void OnInitialized();
	void ExecuteUbergraph_GlobalActionKeybindWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
