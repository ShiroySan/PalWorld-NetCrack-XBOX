#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x430 (0x6A8 - 0x278)
// WidgetBlueprintGeneratedClass WBP_Key_Settings.WBP_Key_Settings_C
class UWBP_Key_Settings_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                          VerticalBox_GP;                                    // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_GP_Action;                             // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_GP_UI;                                 // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_KM;                                    // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_KM_Action;                             // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_KM_UI;                                 // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         SomethingChanged;                                  // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44AB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UVerticalBox*>                  VerticalBoxs;                                      // 0x2B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UWBP_PalCommonButtonBase_C*>    FirstRows;                                         // 0x2C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        Current;                                           // 0x2D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44AC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, class UWBP_OptionSettings_ListContent_C*> InputActionsMap_KM;                                // 0x2E0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<class FName, class UWBP_OptionSettings_ListContent_C*> InputActionsMap_GP;                                // 0x330(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<class FName, class UWBP_OptionSettings_ListContent_C*> UIActionsMap_KM;                                   // 0x380(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<class FName, class UWBP_OptionSettings_ListContent_C*> UIActionsMap_GP;                                   // 0x3D0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FPalKeyConfigSettings                 KeyConfigSettingsCache;                            // 0x420(0x160)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, struct FPalKeyAction>      AxisMap;                                           // 0x580(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FPalKeyAction, class FName>      ReverseAxisMap;                                    // 0x5D0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         BackFromSetting;                                   // 0x620(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44AD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  CachedSettingKey;                                  // 0x628(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class FName>                          FilterActionKeys;                                  // 0x640(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         KeyConflict_KM;                                    // 0x650(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UIKeyConflict_KM;                                  // 0x651(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         KeyConflict_GP;                                    // 0x652(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UIKeyConflict_GP;                                  // 0x653(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44AE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, class FName>               MultiKeyMap;                                       // 0x658(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_Key_Settings_C* GetDefaultObj();

	void SetDefault(const TArray<class FName>& Temp, enum class EPalKeyConfigAxisFilterType Temp_byte_Variable, enum class EPalKeyConfigAxisFilterType Temp_byte_Variable_1, bool Temp_bool_Variable, enum class EPalKeyConfigAxisFilterType Temp_byte_Variable_2, enum class EPalKeyConfigAxisFilterType Temp_byte_Variable_3, bool Temp_bool_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Array_Index_Variable_4, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Array_Index_Variable_5, int32 Temp_int_Loop_Counter_Variable_5, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 Temp_int_Array_Index_Variable_6, int32 Temp_int_Loop_Counter_Variable_6, int32 CallFunc_Add_IntInt_ReturnValue_6, bool CallFunc_IsVisible_ReturnValue, TArray<struct FPalAxisKeyConfigKeys>& K2Node_MakeArray_Array, TArray<struct FPalAxisKeyConfigKeys>& K2Node_MakeArray_Array_1, TArray<class FName>& CallFunc_Map_Keys_Keys, int32 Temp_int_Loop_Counter_Variable_7, int32 CallFunc_Add_IntInt_ReturnValue_7, TArray<class FName>& CallFunc_Map_Keys_Keys_1, int32 Temp_int_Array_Index_Variable_7, TArray<class FName>& CallFunc_Map_Keys_Keys_2, TArray<class FName>& CallFunc_Map_Keys_Keys_3, class FName CallFunc_Array_Get_Item, class FName CallFunc_Array_Get_Item_1, class UWBP_OptionSettings_ListContent_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UWBP_OptionSettings_ListContent_C* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class UInputSettings* CallFunc_GetInputSettings_ReturnValue, class FName CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, TArray<struct FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings, bool CallFunc_Less_IntInt_ReturnValue_2, const struct FInputActionKeyMapping& CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, const struct FPalKeyConfigKeys& K2Node_MakeStruct_PalKeyConfigKeys, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_Key_IsKeyboardKey_ReturnValue, class UWBP_OptionSettings_ListContent_C* CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, const struct FPalKeyAction& CallFunc_Map_Find_Value_3, bool CallFunc_Map_Find_ReturnValue_3, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_1, TArray<struct FInputAxisKeyMapping>& CallFunc_GetAxisMappingByName_OutMappings, const struct FInputAxisKeyMapping& CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_4, bool CallFunc_Key_IsKeyboardKey_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, class FName Temp_name_Variable, enum class EPalKeyConfigAxisFilterType K2Node_Select_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FPalAxisKeyConfigKeys& K2Node_MakeStruct_PalAxisKeyConfigKeys, class FName CallFunc_Array_Get_Item_5, const struct FPalKeyAction& CallFunc_Map_Find_Value_4, bool CallFunc_Map_Find_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_1, TArray<struct FInputAxisKeyMapping>& CallFunc_GetAxisMappingByName_OutMappings_1, class UWBP_OptionSettings_ListContent_C* CallFunc_Map_Find_Value_5, bool CallFunc_Map_Find_ReturnValue_5, const struct FInputAxisKeyMapping& CallFunc_Array_Get_Item_6, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_5, bool CallFunc_Key_IsGamepadKey_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, TArray<struct FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings_1, const struct FInputActionKeyMapping& CallFunc_Array_Get_Item_7, enum class EPalKeyConfigAxisFilterType K2Node_Select_Default_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, const struct FPalKeyConfigKeys& K2Node_MakeStruct_PalKeyConfigKeys_1, bool CallFunc_Key_IsGamepadKey_ReturnValue_1, const struct FPalAxisKeyConfigKeys& K2Node_MakeStruct_PalAxisKeyConfigKeys_1, int32 CallFunc_Array_Length_ReturnValue_6, int32 CallFunc_Array_Length_ReturnValue_7, bool CallFunc_Less_IntInt_ReturnValue_6, bool CallFunc_Less_IntInt_ReturnValue_7, class FName Temp_name_Variable_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, class UWBP_OptionSettings_ListContent_C* CallFunc_Map_Find_Value_6, bool CallFunc_Map_Find_ReturnValue_6, class UWBP_OptionSettings_ListContent_C* CallFunc_Map_Find_Value_7, bool CallFunc_Map_Find_ReturnValue_7, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_1);
	void UI_Key_Conflict_Check(enum class EPalKeyConfigCategory FilterType, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, enum class EPalKeyConfigCategory Temp_byte_Variable, bool K2Node_SwitchEnum_CmpSuccess_1, TMap<class FName, class UWBP_OptionSettings_ListContent_C*> K2Node_Select_Default, TArray<class FName>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, TArray<class FName>& CallFunc_Get_UI_Conflict_Actions_KeyActions, class FName CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class UWBP_OptionSettings_ListContent_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, class UWBP_OptionSettings_ListContent_C* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue);
	void On_UI_Action_Key_Changed(class FName ActionName, const struct FKey& NewKey, enum class EPalKeyConfigCategory InputType, enum class EPalKeyConfigAxisFilterType AxisType, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, enum class ECommonInputType Temp_byte_Variable, enum class ECommonInputType Temp_byte_Variable_1, bool Temp_bool_Variable_3, enum class ECommonInputType K2Node_Select_Default, const struct FPalKeyConfigKeys& K2Node_MakeStruct_PalKeyConfigKeys, TMap<class FName, class UWBP_OptionSettings_ListContent_C*> K2Node_Select_Default_1, bool CallFunc_EqualEqual_NameName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class FName Temp_name_Variable, bool CallFunc_EqualEqual_KeyKey_ReturnValue, class UWBP_OptionSettings_ListContent_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TMap<class FName, struct FPalKeyConfigKeys> K2Node_Select_Default_2, TMap<class FName, struct FKey> K2Node_Select_Default_3);
	void On_UI_Key_Config_Changing(class FName KeyName, enum class ECommonInputType InputType, enum class EPalKeyConfigAxisFilterType AxisType, class UBP_HUDDispatchParameter_KeyConfig_C* CallFunc_CreateDispatchParameterForK2Node_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, const struct FGuid& CallFunc_Push_ReturnValue);
	void Multi_Key_Setting(TMap<class FName, struct FPalKeyConfigKeys>& TargetMap, class FName& ActionName, struct FPalKeyConfigKeys& Key, class FName CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void Key_Conflict_Check(enum class EPalKeyConfigCategory FilterType, bool Temp_bool_Variable, bool K2Node_SwitchEnum_CmpSuccess, enum class EPalKeyConfigAxisFilterType Temp_byte_Variable, bool Temp_bool_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool Temp_bool_Variable_2, bool K2Node_SwitchEnum_CmpSuccess_1, int32 Temp_int_Loop_Counter_Variable_1, enum class EPalKeyConfigCategory Temp_byte_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TMap<class FName, class UWBP_OptionSettings_ListContent_C*> K2Node_Select_Default, TArray<class FName>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_OptionSettings_ListContent_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FPalKeyAction& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, enum class EPalKeyConfigAxisFilterType K2Node_Select_Default_1, class FName K2Node_Select_Default_2, const struct FPalKeyAction& K2Node_MakeStruct_PalKeyAction, TArray<struct FPalKeyAction>& CallFunc_Get_Conflict_Actions_KeyActions, int32 CallFunc_Array_Length_ReturnValue_1, const struct FPalKeyAction& CallFunc_Array_Get_Item_1, bool CallFunc_Greater_IntInt_ReturnValue, class FName CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_2, class FName K2Node_Select_Default_3, bool CallFunc_Less_IntInt_ReturnValue_1, class UWBP_OptionSettings_ListContent_C* CallFunc_Map_Find_Value_3, bool CallFunc_Map_Find_ReturnValue_3);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Get_Actions_By_Key(const struct FKey& Key, enum class ECommonInputType InputType, TArray<struct FPalKeyAction>* KeyActions, const TArray<struct FPalKeyAction>& MappedActions, const TArray<struct FPalKeyAction>& TempActions, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, TArray<class FName>& CallFunc_Map_Values_Values, bool Temp_bool_Variable, TMap<class FName, struct FPalKeyConfigKeys> K2Node_Select_Default, TArray<class FName>& CallFunc_Map_Keys_Keys, int32 Temp_int_Loop_Counter_Variable_2, class FName CallFunc_Array_Get_Item, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, const struct FPalKeyAction& K2Node_MakeStruct_PalKeyAction, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsSetableAction_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, const struct FPalKeyConfigKeys& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue, TArray<struct FPalAxisKeyConfigKeys>& K2Node_Select_Default_1, bool CallFunc_BooleanAND_ReturnValue, const struct FPalAxisKeyConfigKeys& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_1, const struct FPalKeyAction& K2Node_MakeStruct_PalKeyAction_1, int32 CallFunc_Array_Add_ReturnValue_2, TArray<struct FPalKeyAction>& CallFunc_GetActionsByKey_ReturnValue, bool CallFunc_IsSetableAction_ReturnValue_1, const struct FPalKeyAction& CallFunc_Array_Get_Item_2, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsSetableAction_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, bool CallFunc_Array_Contains_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_4);
	bool IsSetableAction(struct FPalKeyAction& Key, enum class ECommonInputType InputType, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_Map_Contains_ReturnValue, bool CallFunc_Map_Contains_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_Select_Default);
	void Get_UI_Conflict_Actions(class FName& CheckingAction, enum class EPalKeyConfigCategory FilterType, TArray<class FName>* KeyActions, const TArray<class FName>& Actions, const struct FSlateBrush& CurrentBrush, enum class EPalKeyConfigCategory Temp_byte_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TMap<class FName, class UWBP_OptionSettings_ListContent_C*> K2Node_Select_Default, class UWBP_OptionSettings_ListContent_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<class FName>& CallFunc_Map_Keys_Keys, class FName CallFunc_Array_Get_Item, const struct FSlateBrush& CallFunc_GetCurrentIcon_Brush, int32 CallFunc_Array_Add_ReturnValue, class UWBP_OptionSettings_ListContent_C* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FSlateBrush& CallFunc_GetCurrentIcon_Brush_1, bool CallFunc_EqualEqual_SlateBrush_ReturnValue);
	void On_Action_Key_Changed(class FName ActionName, const struct FKey& NewKey, enum class EPalKeyConfigCategory InputType, enum class EPalKeyConfigAxisFilterType AxisType, enum class ECommonInputType Temp_byte_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, const struct FPalKeyConfigKeys& K2Node_MakeStruct_PalKeyConfigKeys, enum class ECommonInputType Temp_byte_Variable_1, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable_2, bool CallFunc_EqualEqual_KeyKey_ReturnValue, enum class ECommonInputType K2Node_Select_Default, bool Temp_bool_Variable_3, const struct FPalKeyAction& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FPalAxisKeyConfigKeys& K2Node_MakeStruct_PalAxisKeyConfigKeys, TMap<class FName, class UWBP_OptionSettings_ListContent_C*> K2Node_Select_Default_1, class UWBP_OptionSettings_ListContent_C* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, TMap<class FName, struct FPalKeyConfigKeys> K2Node_Select_Default_2, TArray<struct FPalAxisKeyConfigKeys>& K2Node_Select_Default_3, const struct FPalAxisKeyConfigKeys& CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void Get_Conflict_Actions(struct FPalKeyAction& CheckingAction, enum class EPalKeyConfigCategory FilterType, TArray<struct FPalKeyAction>* KeyActions, const struct FKey& CheckKey, enum class EPalKeyConfigCategory Temp_byte_Variable, const struct FKey& CallFunc_GetKeybyAction_Key, enum class ECommonInputType Temp_byte_Variable_1, enum class ECommonInputType Temp_byte_Variable_2, enum class ECommonInputType K2Node_Select_Default, TArray<struct FPalKeyAction>& CallFunc_Get_Actions_By_Key_KeyActions);
	void On_Key_Config_Changing(class FName KeyName, enum class ECommonInputType InputType, enum class EPalKeyConfigAxisFilterType AxisType, class UBP_HUDDispatchParameter_KeyConfig_C* CallFunc_CreateDispatchParameterForK2Node_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, const struct FGuid& CallFunc_Push_ReturnValue);
	void GetDesiredFocusTarget(class UWidget** Target, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Min_ReturnValue, class UWBP_PalCommonButtonBase_C* CallFunc_Array_Get_Item);
	void GetKeybyAction(struct FPalKeyAction& PalKeyAction, enum class EPalKeyConfigCategory FilterType, struct FKey* Key, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 Temp_int_Loop_Counter_Variable, enum class EPalKeyConfigCategory Temp_byte_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UPalPlayerInput* CallFunc_GetLocalPalPlayerInput_ReturnValue, enum class EPalKeyConfigCategory Temp_byte_Variable_1, const struct FPalKeyConfigKeys& CallFunc_GetAxisConfigKeys_ReturnValue, class UPalPlayerInput* CallFunc_GetLocalPalPlayerInput_ReturnValue_1, TArray<struct FPalAxisKeyConfigKeys>& K2Node_Select_Default, const struct FPalKeyConfigKeys& CallFunc_GetActionConfigKeys_ReturnValue, const struct FPalAxisKeyConfigKeys& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TMap<class FName, struct FPalKeyConfigKeys> K2Node_Select_Default_1, const struct FPalKeyConfigKeys& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void Construct();
	void ApplySettings();
	void SwitchTab(bool Next);
	void SwitchPanel(int32 Index);
	void OnInitialized();
	void ExecuteUbergraph_WBP_Key_Settings(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, int32 Temp_int_Variable, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, class UPalOptionSubsystem* CallFunc_GetOptionSubsystem_ReturnValue, bool K2Node_CustomEvent_Next, int32 Temp_int_Array_Index_Variable_3, class UVerticalBox* CallFunc_Array_Get_Item, class UVerticalBox* CallFunc_Array_Get_Item_1, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue, class UVerticalBox* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 K2Node_CustomEvent_Index, class UVerticalBox* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UWidget* CallFunc_GetDesiredFocusTarget_Target, class UWidget* CallFunc_GetDesiredFocusTarget_Target_1, enum class EPalSupportedPlatformType CallFunc_GetPlatformType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_4, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_5, class UVerticalBox* CallFunc_Array_Get_Item_4, TArray<class FName>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UWBP_OptionSettings_ListContent_C* CallFunc_Create_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, int32 CallFunc_Array_Add_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalOptionSubsystem* CallFunc_GetOptionSubsystem_ReturnValue_1, const struct FPalKeyConfigSettings& CallFunc_GetKeyConfigSettings_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable_1, TArray<class FName>& CallFunc_Map_Keys_Keys_1, class FName CallFunc_Array_Get_Item_5, int32 CallFunc_Array_Length_ReturnValue_3, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, int32 Temp_int_Variable_1, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue_1, class UVerticalBox* CallFunc_Array_Get_Item_6, class UWBP_OptionSettings_ListContent_C* CallFunc_Create_ReturnValue_1, const struct FMargin& K2Node_MakeStruct_Margin_1, int32 Temp_int_Array_Index_Variable_4, int32 CallFunc_Array_Add_ReturnValue_1, class FName CallFunc_Array_Get_Item_7, const struct FPalKeyAction& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_1, enum class EPalSupportedPlatformType CallFunc_GetPlatformType_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, TArray<class FName>& CallFunc_Map_Keys_Keys_2, class FName CallFunc_Array_Get_Item_8, int32 CallFunc_Array_Length_ReturnValue_4, const class FString& CallFunc_Conv_NameToString_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class FName CallFunc_Conv_StringToName_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_2, class FName CallFunc_Conv_StringToName_ReturnValue_3, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue_2, const struct FKey& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class UWBP_OptionSettings_ListContent_C* CallFunc_Create_ReturnValue_2, const struct FMargin& K2Node_MakeStruct_Margin_2, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_Select_Default, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue_3, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_2, class UWBP_OptionSettings_ListContent_C* CallFunc_Create_ReturnValue_3, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_3, enum class EPalKeyConfigAxisFilterType Temp_byte_Variable, const struct FMargin& K2Node_MakeStruct_Margin_3, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, enum class EPalKeyConfigAxisFilterType K2Node_Select_Default_1, class UVerticalBox* K2Node_Select_Default_2, TArray<class UVerticalBox*>& K2Node_MakeArray_Array, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, TArray<class FName>& CallFunc_Map_Keys_Keys_3, int32 CallFunc_Array_Length_ReturnValue_5, class FName CallFunc_Array_Get_Item_9, bool CallFunc_Less_IntInt_ReturnValue_5, const class FString& CallFunc_Conv_NameToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, class FName CallFunc_Conv_StringToName_ReturnValue_4, class FName CallFunc_Conv_StringToName_ReturnValue_5, const struct FKey& CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_3);
};

}


