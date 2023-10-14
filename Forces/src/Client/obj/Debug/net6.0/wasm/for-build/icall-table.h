#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
228,
235,
237,
239,
258,
265,
266,
267,
268,
269,
270,
271,
272,
273,
276,
277,
462,
463,
465,
498,
499,
500,
520,
521,
522,
523,
524,
615,
616,
617,
618,
619,
620,
621,
624,
716,
717,
718,
719,
720,
721,
722,
723,
726,
736,
737,
739,
741,
759,
762,
767,
775,
776,
777,
778,
779,
780,
781,
782,
783,
784,
785,
786,
787,
788,
789,
790,
791,
792,
793,
795,
796,
797,
798,
799,
800,
801,
802,
898,
899,
900,
901,
902,
903,
904,
905,
906,
907,
908,
909,
910,
911,
912,
913,
914,
916,
917,
918,
919,
920,
921,
922,
923,
1010,
1011,
1016,
1082,
1083,
1092,
1095,
1097,
1103,
1104,
1106,
1107,
1111,
1113,
1115,
1116,
1117,
1118,
1120,
1121,
1122,
1125,
1126,
1129,
1130,
1131,
1209,
1211,
1213,
1221,
1222,
1223,
1224,
1225,
1229,
1230,
1231,
1232,
1233,
1234,
1236,
1237,
1238,
1240,
1241,
1243,
1248,
1249,
1250,
1524,
1753,
1757,
1785,
1786,
11667,
11668,
11670,
11671,
11672,
11673,
11674,
11675,
11676,
11678,
11679,
11680,
11682,
11683,
11685,
11686,
11687,
11689,
11711,
11713,
11722,
11723,
11725,
11727,
11729,
11731,
11733,
11791,
11803,
11804,
11805,
11807,
11808,
11809,
11810,
11811,
11813,
11815,
11816,
11817,
14180,
14184,
14188,
14189,
14190,
14191,
18295,
18296,
18297,
18298,
18319,
18320,
18321,
18322,
18323,
18324,
18327,
18329,
18330,
18331,
18332,
18545,
18546,
18547,
18548,
19053,
19056,
19071,
19072,
19073,
19074,
19075,
19076,
19700,
19701,
19702,
19707,
19708,
19709,
19788,
19789,
19790,
19835,
19841,
19848,
19858,
19862,
19918,
19962,
19974,
19975,
19976,
19999,
20000,
20001,
20002,
20003,
20004,
20005,
20006,
20007,
20016,
20032,
20054,
20055,
20066,
20068,
20075,
20076,
20079,
20081,
20086,
20087,
20103,
20104,
20111,
20113,
20122,
20125,
20128,
20129,
20130,
20141,
20153,
20159,
20160,
20161,
20163,
20164,
20175,
20195,
20234,
20235,
20236,
20237,
20238,
20239,
20240,
20241,
20242,
20243,
20244,
20245,
20262,
20268,
20273,
20274,
20275,
20312,
20313,
21114,
21115,
21122,
21123,
21223,
21337,
21397,
21730,
21731,
21767,
21768,
21769,
21776,
21868,
21869,
21924,
22126,
22127,
23865,
23867,
23869,
26152,
26171,
26178,
26179,
26181,
};
void ves_icall_System_ArgIterator_Setup (int,int,int);
void ves_icall_System_ArgIterator_IntGetNextArg (int,int);
void ves_icall_System_ArgIterator_IntGetNextArgWithType (int,int,int);
int ves_icall_System_ArgIterator_IntGetNextArgType (int);
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementType_raw (int,int);
int ves_icall_System_Array_IsValueOfElementType_raw (int,int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy_raw (int,int,int,int,int,int);
int ves_icall_System_Array_GetLength_raw (int,int,int);
int ves_icall_System_Array_GetLowerBound_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
int ves_icall_System_Array_GetValueImpl_raw (int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
int ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
int ves_icall_System_Enum_ToObject_raw (int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType_raw (int,int);
int ves_icall_System_Enum_get_underlying_type_raw (int,int);
int ves_icall_System_Enum_InternalHasFlag_raw (int,int,int);
int mono_environment_exitcode_get ();
void mono_environment_exitcode_set (int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_Exit (int);
int ves_icall_System_Environment_GetCommandLineArgs_raw (int);
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
int ves_icall_System_GC_GetCollectionCount (int);
int ves_icall_System_GC_GetMaxGeneration ();
void ves_icall_System_GC_InternalCollect (int);
void ves_icall_System_GC_RecordPressure (int64_t);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
int64_t ves_icall_System_GC_GetAllocatedBytesForCurrentThread ();
int64_t ves_icall_System_GC_GetTotalAllocatedBytes_raw (int,int);
int ves_icall_System_GC_GetGeneration_raw (int,int);
void ves_icall_System_GC_WaitForPendingFinalizers ();
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
int64_t ves_icall_System_GC_GetTotalMemory (int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Abs_double (double);
float ves_icall_System_Math_Abs_single (float);
double ves_icall_System_Math_Acos (double);
double ves_icall_System_Math_Acosh (double);
double ves_icall_System_Math_Asin (double);
double ves_icall_System_Math_Asinh (double);
double ves_icall_System_Math_Atan (double);
double ves_icall_System_Math_Atan2 (double,double);
double ves_icall_System_Math_Atanh (double);
double ves_icall_System_Math_Cbrt (double);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Cosh (double);
double ves_icall_System_Math_Exp (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sinh (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_Tanh (double);
double ves_icall_System_Math_FusedMultiplyAdd (double,double,double);
int ves_icall_System_Math_ILogB (double);
double ves_icall_System_Math_Log2 (double);
double ves_icall_System_Math_ModF (double,int);
float ves_icall_System_MathF_Acos (float);
float ves_icall_System_MathF_Acosh (float);
float ves_icall_System_MathF_Asin (float);
float ves_icall_System_MathF_Asinh (float);
float ves_icall_System_MathF_Atan (float);
float ves_icall_System_MathF_Atan2 (float,float);
float ves_icall_System_MathF_Atanh (float);
float ves_icall_System_MathF_Cbrt (float);
float ves_icall_System_MathF_Ceiling (float);
float ves_icall_System_MathF_Cos (float);
float ves_icall_System_MathF_Cosh (float);
float ves_icall_System_MathF_Exp (float);
float ves_icall_System_MathF_Floor (float);
float ves_icall_System_MathF_Log (float);
float ves_icall_System_MathF_Log10 (float);
float ves_icall_System_MathF_Pow (float,float);
float ves_icall_System_MathF_Sin (float);
float ves_icall_System_MathF_Sinh (float);
float ves_icall_System_MathF_Sqrt (float);
float ves_icall_System_MathF_Tan (float);
float ves_icall_System_MathF_Tanh (float);
float ves_icall_System_MathF_FusedMultiplyAdd (float,float,float);
int ves_icall_System_MathF_ILogB (float);
float ves_icall_System_MathF_Log2 (float);
float ves_icall_System_MathF_ModF (float,int);
int ves_icall_System_RuntimeFieldHandle_GetValueDirect_raw (int,int,int,int,int);
void ves_icall_System_RuntimeFieldHandle_SetValueDirect_raw (int,int,int,int,int,int);
int ves_icall_RuntimeMethodHandle_GetFunctionPointer_raw (int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_make_array_type_raw (int,int,int);
int ves_icall_RuntimeType_make_byref_type_raw (int,int);
int ves_icall_RuntimeType_MakePointerType_raw (int,int);
int ves_icall_RuntimeType_MakeGenericType_raw (int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
void ves_icall_RuntimeType_GetInterfaceMapData_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetPacking_raw (int,int,int,int);
int ves_icall_System_Activator_CreateInstanceInternal_raw (int,int);
int ves_icall_RuntimeType_get_DeclaringMethod_raw (int,int);
int ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericArguments_raw (int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition_raw (int,int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetInterfaces_raw (int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_get_DeclaringType_raw (int,int);
int ves_icall_RuntimeType_get_Name_raw (int,int);
int ves_icall_RuntimeType_get_Namespace_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType_raw (int,int);
int ves_icall_RuntimeTypeHandle_HasInstantiation_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsComObject_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetModule_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsGenericVariable_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of (int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
int ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_String_InternalIsInterned_raw (int,int);
int ves_icall_System_String_InternalIntern_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
void ves_icall_System_TypedReference_InternalMakeTypedReference_raw (int,int,int,int,int);
int ves_icall_System_TypedReference_ToObject_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
float ves_icall_System_Threading_Interlocked_CompareExchange_Single (int,float,float);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Decrement_Long (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
float ves_icall_System_Threading_Interlocked_Exchange_Single (int,float);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
double ves_icall_System_Threading_Interlocked_CompareExchange_Double (int,double,double);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
double ves_icall_System_Threading_Interlocked_Exchange_Double (int,double);
int64_t ves_icall_System_Threading_Interlocked_Read_Long (int);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
int64_t ves_icall_System_Threading_Interlocked_Add_Long (int,int64_t);
void ves_icall_System_Threading_Interlocked_MemoryBarrierProcessWide ();
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
int ves_icall_System_Threading_Monitor_Monitor_test_owner_raw (int,int);
int64_t ves_icall_System_Threading_Monitor_Monitor_LockContentionCount ();
int ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw (int);
uint64_t ves_icall_System_Threading_Thread_GetCurrentOSThreadId_raw (int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
int ves_icall_System_Threading_Thread_Join_internal_raw (int,int,int);
void ves_icall_System_Threading_Thread_Interrupt_internal_raw (int,int);
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_DestroyStructure_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_OffsetOf_raw (int,int,int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw (int,int);
void ves_icall_System_Runtime_InteropServices_Marshal_PtrToStructureInternal_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetDelegateForFunctionPointerInternal_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetFunctionPointerForDelegateInternal_raw (int,int);
void ves_icall_System_Runtime_InteropServices_Marshal_Prelink_raw (int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadFromPath_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
void ves_icall_System_Runtime_InteropServices_NativeLibrary_FreeLib_raw (int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_GetSymbol_raw (int,int,int,int);
int mono_object_hash_icall_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_PrepareMethod_raw (int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunModuleConstructor_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw (int,int);
int ves_icall_System_Reflection_Assembly_GetCallingAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
void ves_icall_System_Reflection_Assembly_InternalGetAssemblyName_raw (int,int,int,int);
void mono_digest_get_public_token (int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_System_Reflection_AssemblyName_ParseAssemblyName (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_GetCurrentMethod_raw (int);
int ves_icall_System_Reflection_RuntimeAssembly_get_EntryPoint_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetTopLevelForwardedTypes_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_location_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_InternalImageRuntimeVersion_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInfoInternal_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
int ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw (int,int);
int ves_icall_System_Reflection_Assembly_InternalGetReferencedAssemblies_raw (int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_FieldInfo_GetTypeModifiers_raw (int,int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodBodyInternal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_GetMDStreamVersion_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw (int,int);
void ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw (int,int,int);
int ves_icall_System_Reflection_RuntimeModule_GetGlobalType_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveTypeToken_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveFieldToken_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveStringToken_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMemberToken_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveSignature_raw (int,int,int,int);
void ves_icall_System_Reflection_RuntimeModule_GetPEKind_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw (int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_RuntimePropertyInfo_GetTypeModifiers_raw (int,int,int);
int ves_icall_property_info_get_default_value_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_AssemblyExtensions_ApplyUpdateEnabled (int);
void ves_icall_AssemblyExtensions_ApplyUpdate (int,int,int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
int ves_icall_CustomAttributeBuilder_GetBlob_raw (int,int,int,int,int,int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int);
void ves_icall_EnumBuilder_setup_enum_type_raw (int,int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_SignatureHelper_get_signature_local_raw (int,int);
int ves_icall_SignatureHelper_get_signature_field_raw (int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_Debugger_IsAttached_internal ();
int ves_icall_System_Diagnostics_Debugger_IsLogging ();
void ves_icall_System_Diagnostics_Debugger_Log (int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
void ves_icall_Mono_RuntimeMarshal_FreeAssemblyName (int,int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 228,
ves_icall_System_ArgIterator_Setup,
// token 235,
ves_icall_System_ArgIterator_IntGetNextArg,
// token 237,
ves_icall_System_ArgIterator_IntGetNextArgWithType,
// token 239,
ves_icall_System_ArgIterator_IntGetNextArgType,
// token 258,
ves_icall_System_Array_InternalCreate,
// token 265,
ves_icall_System_Array_GetCorElementTypeOfElementType_raw,
// token 266,
ves_icall_System_Array_IsValueOfElementType_raw,
// token 267,
ves_icall_System_Array_CanChangePrimitive,
// token 268,
ves_icall_System_Array_FastCopy_raw,
// token 269,
ves_icall_System_Array_GetLength_raw,
// token 270,
ves_icall_System_Array_GetLowerBound_raw,
// token 271,
ves_icall_System_Array_GetGenericValue_icall,
// token 272,
ves_icall_System_Array_GetValueImpl_raw,
// token 273,
ves_icall_System_Array_SetGenericValue_icall,
// token 276,
ves_icall_System_Array_SetValueImpl_raw,
// token 277,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 462,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 463,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 465,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 498,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 499,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 500,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 520,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 521,
ves_icall_System_Enum_ToObject_raw,
// token 522,
ves_icall_System_Enum_InternalGetCorElementType_raw,
// token 523,
ves_icall_System_Enum_get_underlying_type_raw,
// token 524,
ves_icall_System_Enum_InternalHasFlag_raw,
// token 615,
mono_environment_exitcode_get,
// token 616,
mono_environment_exitcode_set,
// token 617,
ves_icall_System_Environment_get_ProcessorCount,
// token 618,
ves_icall_System_Environment_get_TickCount,
// token 619,
ves_icall_System_Environment_get_TickCount64,
// token 620,
ves_icall_System_Environment_Exit,
// token 621,
ves_icall_System_Environment_GetCommandLineArgs_raw,
// token 624,
ves_icall_System_Environment_FailFast_raw,
// token 716,
ves_icall_System_GC_GetCollectionCount,
// token 717,
ves_icall_System_GC_GetMaxGeneration,
// token 718,
ves_icall_System_GC_InternalCollect,
// token 719,
ves_icall_System_GC_RecordPressure,
// token 720,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 721,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 722,
ves_icall_System_GC_GetAllocatedBytesForCurrentThread,
// token 723,
ves_icall_System_GC_GetTotalAllocatedBytes_raw,
// token 726,
ves_icall_System_GC_GetGeneration_raw,
// token 736,
ves_icall_System_GC_WaitForPendingFinalizers,
// token 737,
ves_icall_System_GC_SuppressFinalize_raw,
// token 739,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 741,
ves_icall_System_GC_GetTotalMemory,
// token 759,
ves_icall_System_GC_GetGCMemoryInfo,
// token 762,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 767,
ves_icall_System_Object_MemberwiseClone_raw,
// token 775,
ves_icall_System_Math_Abs_double,
// token 776,
ves_icall_System_Math_Abs_single,
// token 777,
ves_icall_System_Math_Acos,
// token 778,
ves_icall_System_Math_Acosh,
// token 779,
ves_icall_System_Math_Asin,
// token 780,
ves_icall_System_Math_Asinh,
// token 781,
ves_icall_System_Math_Atan,
// token 782,
ves_icall_System_Math_Atan2,
// token 783,
ves_icall_System_Math_Atanh,
// token 784,
ves_icall_System_Math_Cbrt,
// token 785,
ves_icall_System_Math_Ceiling,
// token 786,
ves_icall_System_Math_Cos,
// token 787,
ves_icall_System_Math_Cosh,
// token 788,
ves_icall_System_Math_Exp,
// token 789,
ves_icall_System_Math_Floor,
// token 790,
ves_icall_System_Math_Log,
// token 791,
ves_icall_System_Math_Log10,
// token 792,
ves_icall_System_Math_Pow,
// token 793,
ves_icall_System_Math_Sin,
// token 795,
ves_icall_System_Math_Sinh,
// token 796,
ves_icall_System_Math_Sqrt,
// token 797,
ves_icall_System_Math_Tan,
// token 798,
ves_icall_System_Math_Tanh,
// token 799,
ves_icall_System_Math_FusedMultiplyAdd,
// token 800,
ves_icall_System_Math_ILogB,
// token 801,
ves_icall_System_Math_Log2,
// token 802,
ves_icall_System_Math_ModF,
// token 898,
ves_icall_System_MathF_Acos,
// token 899,
ves_icall_System_MathF_Acosh,
// token 900,
ves_icall_System_MathF_Asin,
// token 901,
ves_icall_System_MathF_Asinh,
// token 902,
ves_icall_System_MathF_Atan,
// token 903,
ves_icall_System_MathF_Atan2,
// token 904,
ves_icall_System_MathF_Atanh,
// token 905,
ves_icall_System_MathF_Cbrt,
// token 906,
ves_icall_System_MathF_Ceiling,
// token 907,
ves_icall_System_MathF_Cos,
// token 908,
ves_icall_System_MathF_Cosh,
// token 909,
ves_icall_System_MathF_Exp,
// token 910,
ves_icall_System_MathF_Floor,
// token 911,
ves_icall_System_MathF_Log,
// token 912,
ves_icall_System_MathF_Log10,
// token 913,
ves_icall_System_MathF_Pow,
// token 914,
ves_icall_System_MathF_Sin,
// token 916,
ves_icall_System_MathF_Sinh,
// token 917,
ves_icall_System_MathF_Sqrt,
// token 918,
ves_icall_System_MathF_Tan,
// token 919,
ves_icall_System_MathF_Tanh,
// token 920,
ves_icall_System_MathF_FusedMultiplyAdd,
// token 921,
ves_icall_System_MathF_ILogB,
// token 922,
ves_icall_System_MathF_Log2,
// token 923,
ves_icall_System_MathF_ModF,
// token 1010,
ves_icall_System_RuntimeFieldHandle_GetValueDirect_raw,
// token 1011,
ves_icall_System_RuntimeFieldHandle_SetValueDirect_raw,
// token 1016,
ves_icall_RuntimeMethodHandle_GetFunctionPointer_raw,
// token 1082,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 1083,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 1092,
ves_icall_RuntimeType_make_array_type_raw,
// token 1095,
ves_icall_RuntimeType_make_byref_type_raw,
// token 1097,
ves_icall_RuntimeType_MakePointerType_raw,
// token 1103,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 1104,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 1106,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 1107,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 1111,
ves_icall_RuntimeType_GetInterfaceMapData_raw,
// token 1113,
ves_icall_RuntimeType_GetPacking_raw,
// token 1115,
ves_icall_System_Activator_CreateInstanceInternal_raw,
// token 1116,
ves_icall_RuntimeType_get_DeclaringMethod_raw,
// token 1117,
ves_icall_System_RuntimeType_getFullName_raw,
// token 1118,
ves_icall_RuntimeType_GetGenericArguments_raw,
// token 1120,
ves_icall_RuntimeType_GetGenericParameterPosition_raw,
// token 1121,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 1122,
ves_icall_RuntimeType_GetFields_native_raw,
// token 1125,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 1126,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 1129,
ves_icall_RuntimeType_get_DeclaringType_raw,
// token 1130,
ves_icall_RuntimeType_get_Name_raw,
// token 1131,
ves_icall_RuntimeType_get_Namespace_raw,
// token 1209,
ves_icall_RuntimeTypeHandle_GetAttributes_raw,
// token 1211,
ves_icall_reflection_get_token_raw,
// token 1213,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 1221,
ves_icall_RuntimeTypeHandle_GetCorElementType_raw,
// token 1222,
ves_icall_RuntimeTypeHandle_HasInstantiation_raw,
// token 1223,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 1224,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 1225,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 1229,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 1230,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 1231,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 1232,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 1233,
ves_icall_RuntimeTypeHandle_IsGenericVariable_raw,
// token 1234,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 1236,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 1237,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw,
// token 1238,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 1240,
ves_icall_RuntimeTypeHandle_is_subclass_of,
// token 1241,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 1243,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 1248,
ves_icall_System_String_FastAllocateString_raw,
// token 1249,
ves_icall_System_String_InternalIsInterned_raw,
// token 1250,
ves_icall_System_String_InternalIntern_raw,
// token 1524,
ves_icall_System_Type_internal_from_handle_raw,
// token 1753,
ves_icall_System_TypedReference_InternalMakeTypedReference_raw,
// token 1757,
ves_icall_System_TypedReference_ToObject_raw,
// token 1785,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1786,
ves_icall_System_ValueType_Equals_raw,
// token 11667,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 11668,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 11670,
ves_icall_System_Threading_Interlocked_CompareExchange_Single,
// token 11671,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 11672,
ves_icall_System_Threading_Interlocked_Decrement_Long,
// token 11673,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 11674,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 11675,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 11676,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 11678,
ves_icall_System_Threading_Interlocked_Exchange_Single,
// token 11679,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 11680,
ves_icall_System_Threading_Interlocked_CompareExchange_Double,
// token 11682,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 11683,
ves_icall_System_Threading_Interlocked_Exchange_Double,
// token 11685,
ves_icall_System_Threading_Interlocked_Read_Long,
// token 11686,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 11687,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 11689,
ves_icall_System_Threading_Interlocked_MemoryBarrierProcessWide,
// token 11711,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 11713,
mono_monitor_exit_icall_raw,
// token 11722,
ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw,
// token 11723,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 11725,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 11727,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 11729,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 11731,
ves_icall_System_Threading_Monitor_Monitor_test_owner_raw,
// token 11733,
ves_icall_System_Threading_Monitor_Monitor_LockContentionCount,
// token 11791,
ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw,
// token 11803,
ves_icall_System_Threading_Thread_GetCurrentOSThreadId_raw,
// token 11804,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 11805,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 11807,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 11808,
ves_icall_System_Threading_Thread_GetState_raw,
// token 11809,
ves_icall_System_Threading_Thread_SetState_raw,
// token 11810,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 11811,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 11813,
ves_icall_System_Threading_Thread_YieldInternal,
// token 11815,
ves_icall_System_Threading_Thread_Join_internal_raw,
// token 11816,
ves_icall_System_Threading_Thread_Interrupt_internal_raw,
// token 11817,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 14180,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 14184,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 14188,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 14189,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 14190,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 14191,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 18295,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 18296,
ves_icall_System_GCHandle_InternalFree_raw,
// token 18297,
ves_icall_System_GCHandle_InternalGet_raw,
// token 18298,
ves_icall_System_GCHandle_InternalSet_raw,
// token 18319,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 18320,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 18321,
ves_icall_System_Runtime_InteropServices_Marshal_DestroyStructure_raw,
// token 18322,
ves_icall_System_Runtime_InteropServices_Marshal_OffsetOf_raw,
// token 18323,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 18324,
ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw,
// token 18327,
ves_icall_System_Runtime_InteropServices_Marshal_PtrToStructureInternal_raw,
// token 18329,
ves_icall_System_Runtime_InteropServices_Marshal_GetDelegateForFunctionPointerInternal_raw,
// token 18330,
ves_icall_System_Runtime_InteropServices_Marshal_GetFunctionPointerForDelegateInternal_raw,
// token 18331,
ves_icall_System_Runtime_InteropServices_Marshal_Prelink_raw,
// token 18332,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 18545,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadFromPath_raw,
// token 18546,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 18547,
ves_icall_System_Runtime_InteropServices_NativeLibrary_FreeLib_raw,
// token 18548,
ves_icall_System_Runtime_InteropServices_NativeLibrary_GetSymbol_raw,
// token 19053,
mono_object_hash_icall_raw,
// token 19056,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 19071,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_PrepareMethod_raw,
// token 19072,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 19073,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 19074,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw,
// token 19075,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunModuleConstructor_raw,
// token 19076,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 19700,
ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw,
// token 19701,
ves_icall_System_Reflection_Assembly_GetCallingAssembly_raw,
// token 19702,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 19707,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 19708,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 19709,
ves_icall_System_Reflection_Assembly_InternalGetAssemblyName_raw,
// token 19788,
mono_digest_get_public_token,
// token 19789,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 19790,
ves_icall_System_Reflection_AssemblyName_ParseAssemblyName,
// token 19835,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 19841,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 19848,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 19858,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 19862,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 19918,
ves_icall_GetCurrentMethod_raw,
// token 19962,
ves_icall_System_Reflection_RuntimeAssembly_get_EntryPoint_raw,
// token 19974,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 19975,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 19976,
ves_icall_System_Reflection_RuntimeAssembly_GetTopLevelForwardedTypes_raw,
// token 19999,
ves_icall_System_Reflection_RuntimeAssembly_get_location_raw,
// token 20000,
ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw,
// token 20001,
ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw,
// token 20002,
ves_icall_System_Reflection_RuntimeAssembly_InternalImageRuntimeVersion_raw,
// token 20003,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInfoInternal_raw,
// token 20004,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 20005,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 20006,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 20007,
ves_icall_System_Reflection_Assembly_InternalGetReferencedAssemblies_raw,
// token 20016,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 20032,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 20054,
ves_icall_reflection_get_token_raw,
// token 20055,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 20066,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 20068,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 20075,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 20076,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 20079,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 20081,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 20086,
ves_icall_reflection_get_token_raw,
// token 20087,
ves_icall_System_Reflection_FieldInfo_GetTypeModifiers_raw,
// token 20103,
ves_icall_get_method_info_raw,
// token 20104,
ves_icall_get_method_attributes,
// token 20111,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 20113,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 20122,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodBodyInternal_raw,
// token 20125,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 20128,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 20129,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 20130,
ves_icall_reflection_get_token_raw,
// token 20141,
ves_icall_InternalInvoke_raw,
// token 20153,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 20159,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 20160,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 20161,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 20163,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 20164,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 20175,
ves_icall_InternalInvoke_raw,
// token 20195,
ves_icall_reflection_get_token_raw,
// token 20234,
ves_icall_reflection_get_token_raw,
// token 20235,
ves_icall_System_Reflection_RuntimeModule_GetMDStreamVersion_raw,
// token 20236,
ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw,
// token 20237,
ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw,
// token 20238,
ves_icall_System_Reflection_RuntimeModule_GetGlobalType_raw,
// token 20239,
ves_icall_System_Reflection_RuntimeModule_ResolveTypeToken_raw,
// token 20240,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 20241,
ves_icall_System_Reflection_RuntimeModule_ResolveFieldToken_raw,
// token 20242,
ves_icall_System_Reflection_RuntimeModule_ResolveStringToken_raw,
// token 20243,
ves_icall_System_Reflection_RuntimeModule_ResolveMemberToken_raw,
// token 20244,
ves_icall_System_Reflection_RuntimeModule_ResolveSignature_raw,
// token 20245,
ves_icall_System_Reflection_RuntimeModule_GetPEKind_raw,
// token 20262,
ves_icall_reflection_get_token_raw,
// token 20268,
ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw,
// token 20273,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 20274,
ves_icall_RuntimePropertyInfo_GetTypeModifiers_raw,
// token 20275,
ves_icall_property_info_get_default_value_raw,
// token 20312,
ves_icall_reflection_get_token_raw,
// token 20313,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 21114,
ves_icall_AssemblyExtensions_ApplyUpdateEnabled,
// token 21115,
ves_icall_AssemblyExtensions_ApplyUpdate,
// token 21122,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 21123,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 21223,
ves_icall_CustomAttributeBuilder_GetBlob_raw,
// token 21337,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 21397,
ves_icall_EnumBuilder_setup_enum_type_raw,
// token 21730,
ves_icall_ModuleBuilder_basic_init_raw,
// token 21731,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 21767,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 21768,
ves_icall_ModuleBuilder_getToken_raw,
// token 21769,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 21776,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 21868,
ves_icall_SignatureHelper_get_signature_local_raw,
// token 21869,
ves_icall_SignatureHelper_get_signature_field_raw,
// token 21924,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 22126,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 22127,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 23865,
ves_icall_System_Diagnostics_Debugger_IsAttached_internal,
// token 23867,
ves_icall_System_Diagnostics_Debugger_IsLogging,
// token 23869,
ves_icall_System_Diagnostics_Debugger_Log,
// token 26152,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 26171,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 26178,
ves_icall_Mono_RuntimeMarshal_FreeAssemblyName,
// token 26179,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 26181,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_handles [] = {
0,
0,
0,
0,
0,
1,
1,
0,
1,
1,
1,
0,
1,
0,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
1,
1,
0,
0,
0,
0,
1,
1,
0,
1,
1,
0,
1,
1,
0,
0,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
0,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
};
