﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.Collections.SortedList/Slot[]
struct SlotU5BU5D_t2550239568;
// System.Collections.IComparer
struct IComparer_t4168185511;
// System.String
struct String_t;
// Mono.Globalization.Unicode.SimpleCollator
struct SimpleCollator_t3965963888;
// System.Collections.Hashtable
struct Hashtable_t935084193;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t3258174674;
// System.AsyncCallback
struct AsyncCallback_t1572281515;
// System.Globalization.CultureInfo
struct CultureInfo_t3804668001;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t2207532535;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t1319266453;
// System.Globalization.TextInfo
struct TextInfo_t4038178256;
// System.Globalization.CompareInfo
struct CompareInfo_t2350495555;
// System.Globalization.Calendar[]
struct CalendarU5BU5D_t2772748138;
// System.Globalization.Calendar
struct Calendar_t762697739;
// System.Byte[]
struct ByteU5BU5D_t1979668241;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2081138196;
// System.Int32
struct Int32_t3124216352;
// System.Void
struct Void_t2089896717;
// System.Type
struct Type_t;
// System.Reflection.Emit.ILTokenInfo[]
struct ILTokenInfoU5BU5D_t1013548734;
// System.Reflection.Emit.ILGenerator/LabelData[]
struct LabelDataU5BU5D_t1692063519;
// System.Reflection.Emit.ILGenerator/LabelFixup[]
struct LabelFixupU5BU5D_t343170152;
// System.Reflection.Module
struct Module_t1613907595;
// System.Reflection.Emit.TokenGenerator
struct TokenGenerator_t3538027851;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t415391279;
// System.Int32[]
struct Int32U5BU5D_t2848674145;
// System.String[]
struct StringU5BU5D_t3875140506;
// System.Exception
struct Exception_t1123517734;
// System.IO.Stream
struct Stream_t403697452;
// System.Text.Encoding
struct Encoding_t3922168092;
// System.Text.Decoder
struct Decoder_t3172032832;
// System.Char[]
struct CharU5BU5D_t1224129074;
// System.IntPtr[]
struct IntPtrU5BU5D_t620782688;
// System.Collections.IDictionary
struct IDictionary_t2056990702;
// System.Diagnostics.StackFrame[]
struct StackFrameU5BU5D_t3663984227;
// System.Object[]
struct ObjectU5BU5D_t4013022837;
// System.Collections.Stack
struct Stack_t3341244347;
// System.Reflection.MethodBase
struct MethodBase_t1050654022;
// System.IO.TextReader
struct TextReader_t2183356407;
// System.IO.TextWriter
struct TextWriter_t2766919390;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Text.StringBuilder
struct StringBuilder_t438571287;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_t95036989;
// System.Security.Policy.Evidence
struct Evidence_t3294790873;
// System.Security.PermissionSet
struct PermissionSet_t2301341558;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t33408209;
// System.Boolean[]
struct BooleanU5BU5D_t2550303141;
// System.Collections.SortedList
struct SortedList_t54735423;
// System.Type[]
struct TypeU5BU5D_t791284206;
// System.Reflection.MemberFilter
struct MemberFilter_t1719784875;
// System.EventHandler
struct EventHandler_t1996995296;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t2954596631;
// System.Reflection.Emit.UnmanagedMarshal
struct UnmanagedMarshal_t3181639679;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t3257509038;
// System.Reflection.Emit.ParameterBuilder[]
struct ParameterBuilderU5BU5D_t863649823;
// System.Type[][]
struct TypeU5BU5DU5BU5D_t2913671835;
// System.Reflection.Emit.ModuleBuilder[]
struct ModuleBuilderU5BU5D_t3255797287;
// System.Reflection.Module[]
struct ModuleU5BU5D_t862211818;
// Mono.Security.StrongName
struct StrongName_t3758219189;
// System.IAsyncResult
struct IAsyncResult_t1420648888;
// System.Reflection.Emit.MethodBuilder
struct MethodBuilder_t3885551382;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef SORTEDLIST_T54735423_H
#define SORTEDLIST_T54735423_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList
struct  SortedList_t54735423  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.SortedList::inUse
	int32_t ___inUse_1;
	// System.Int32 System.Collections.SortedList::modificationCount
	int32_t ___modificationCount_2;
	// System.Collections.SortedList/Slot[] System.Collections.SortedList::table
	SlotU5BU5D_t2550239568* ___table_3;
	// System.Collections.IComparer System.Collections.SortedList::comparer
	RuntimeObject* ___comparer_4;
	// System.Int32 System.Collections.SortedList::defaultCapacity
	int32_t ___defaultCapacity_5;

public:
	inline static int32_t get_offset_of_inUse_1() { return static_cast<int32_t>(offsetof(SortedList_t54735423, ___inUse_1)); }
	inline int32_t get_inUse_1() const { return ___inUse_1; }
	inline int32_t* get_address_of_inUse_1() { return &___inUse_1; }
	inline void set_inUse_1(int32_t value)
	{
		___inUse_1 = value;
	}

	inline static int32_t get_offset_of_modificationCount_2() { return static_cast<int32_t>(offsetof(SortedList_t54735423, ___modificationCount_2)); }
	inline int32_t get_modificationCount_2() const { return ___modificationCount_2; }
	inline int32_t* get_address_of_modificationCount_2() { return &___modificationCount_2; }
	inline void set_modificationCount_2(int32_t value)
	{
		___modificationCount_2 = value;
	}

	inline static int32_t get_offset_of_table_3() { return static_cast<int32_t>(offsetof(SortedList_t54735423, ___table_3)); }
	inline SlotU5BU5D_t2550239568* get_table_3() const { return ___table_3; }
	inline SlotU5BU5D_t2550239568** get_address_of_table_3() { return &___table_3; }
	inline void set_table_3(SlotU5BU5D_t2550239568* value)
	{
		___table_3 = value;
		Il2CppCodeGenWriteBarrier((&___table_3), value);
	}

	inline static int32_t get_offset_of_comparer_4() { return static_cast<int32_t>(offsetof(SortedList_t54735423, ___comparer_4)); }
	inline RuntimeObject* get_comparer_4() const { return ___comparer_4; }
	inline RuntimeObject** get_address_of_comparer_4() { return &___comparer_4; }
	inline void set_comparer_4(RuntimeObject* value)
	{
		___comparer_4 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_4), value);
	}

	inline static int32_t get_offset_of_defaultCapacity_5() { return static_cast<int32_t>(offsetof(SortedList_t54735423, ___defaultCapacity_5)); }
	inline int32_t get_defaultCapacity_5() const { return ___defaultCapacity_5; }
	inline int32_t* get_address_of_defaultCapacity_5() { return &___defaultCapacity_5; }
	inline void set_defaultCapacity_5(int32_t value)
	{
		___defaultCapacity_5 = value;
	}
};

struct SortedList_t54735423_StaticFields
{
public:
	// System.Int32 System.Collections.SortedList::INITIAL_SIZE
	int32_t ___INITIAL_SIZE_0;

public:
	inline static int32_t get_offset_of_INITIAL_SIZE_0() { return static_cast<int32_t>(offsetof(SortedList_t54735423_StaticFields, ___INITIAL_SIZE_0)); }
	inline int32_t get_INITIAL_SIZE_0() const { return ___INITIAL_SIZE_0; }
	inline int32_t* get_address_of_INITIAL_SIZE_0() { return &___INITIAL_SIZE_0; }
	inline void set_INITIAL_SIZE_0(int32_t value)
	{
		___INITIAL_SIZE_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SORTEDLIST_T54735423_H
#ifndef CCGREGORIANCALENDAR_T3325920638_H
#define CCGREGORIANCALENDAR_T3325920638_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CCGregorianCalendar
struct  CCGregorianCalendar_t3325920638  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CCGREGORIANCALENDAR_T3325920638_H
#ifndef COMPAREINFO_T2350495555_H
#define COMPAREINFO_T2350495555_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CompareInfo
struct  CompareInfo_t2350495555  : public RuntimeObject
{
public:
	// System.Int32 System.Globalization.CompareInfo::culture
	int32_t ___culture_1;
	// System.String System.Globalization.CompareInfo::icu_name
	String_t* ___icu_name_2;
	// System.Int32 System.Globalization.CompareInfo::win32LCID
	int32_t ___win32LCID_3;
	// System.String System.Globalization.CompareInfo::m_name
	String_t* ___m_name_4;
	// Mono.Globalization.Unicode.SimpleCollator System.Globalization.CompareInfo::collator
	SimpleCollator_t3965963888 * ___collator_5;

public:
	inline static int32_t get_offset_of_culture_1() { return static_cast<int32_t>(offsetof(CompareInfo_t2350495555, ___culture_1)); }
	inline int32_t get_culture_1() const { return ___culture_1; }
	inline int32_t* get_address_of_culture_1() { return &___culture_1; }
	inline void set_culture_1(int32_t value)
	{
		___culture_1 = value;
	}

	inline static int32_t get_offset_of_icu_name_2() { return static_cast<int32_t>(offsetof(CompareInfo_t2350495555, ___icu_name_2)); }
	inline String_t* get_icu_name_2() const { return ___icu_name_2; }
	inline String_t** get_address_of_icu_name_2() { return &___icu_name_2; }
	inline void set_icu_name_2(String_t* value)
	{
		___icu_name_2 = value;
		Il2CppCodeGenWriteBarrier((&___icu_name_2), value);
	}

	inline static int32_t get_offset_of_win32LCID_3() { return static_cast<int32_t>(offsetof(CompareInfo_t2350495555, ___win32LCID_3)); }
	inline int32_t get_win32LCID_3() const { return ___win32LCID_3; }
	inline int32_t* get_address_of_win32LCID_3() { return &___win32LCID_3; }
	inline void set_win32LCID_3(int32_t value)
	{
		___win32LCID_3 = value;
	}

	inline static int32_t get_offset_of_m_name_4() { return static_cast<int32_t>(offsetof(CompareInfo_t2350495555, ___m_name_4)); }
	inline String_t* get_m_name_4() const { return ___m_name_4; }
	inline String_t** get_address_of_m_name_4() { return &___m_name_4; }
	inline void set_m_name_4(String_t* value)
	{
		___m_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_4), value);
	}

	inline static int32_t get_offset_of_collator_5() { return static_cast<int32_t>(offsetof(CompareInfo_t2350495555, ___collator_5)); }
	inline SimpleCollator_t3965963888 * get_collator_5() const { return ___collator_5; }
	inline SimpleCollator_t3965963888 ** get_address_of_collator_5() { return &___collator_5; }
	inline void set_collator_5(SimpleCollator_t3965963888 * value)
	{
		___collator_5 = value;
		Il2CppCodeGenWriteBarrier((&___collator_5), value);
	}
};

struct CompareInfo_t2350495555_StaticFields
{
public:
	// System.Boolean System.Globalization.CompareInfo::useManagedCollation
	bool ___useManagedCollation_0;
	// System.Collections.Hashtable System.Globalization.CompareInfo::collators
	Hashtable_t935084193 * ___collators_6;
	// System.Object System.Globalization.CompareInfo::monitor
	RuntimeObject * ___monitor_7;

public:
	inline static int32_t get_offset_of_useManagedCollation_0() { return static_cast<int32_t>(offsetof(CompareInfo_t2350495555_StaticFields, ___useManagedCollation_0)); }
	inline bool get_useManagedCollation_0() const { return ___useManagedCollation_0; }
	inline bool* get_address_of_useManagedCollation_0() { return &___useManagedCollation_0; }
	inline void set_useManagedCollation_0(bool value)
	{
		___useManagedCollation_0 = value;
	}

	inline static int32_t get_offset_of_collators_6() { return static_cast<int32_t>(offsetof(CompareInfo_t2350495555_StaticFields, ___collators_6)); }
	inline Hashtable_t935084193 * get_collators_6() const { return ___collators_6; }
	inline Hashtable_t935084193 ** get_address_of_collators_6() { return &___collators_6; }
	inline void set_collators_6(Hashtable_t935084193 * value)
	{
		___collators_6 = value;
		Il2CppCodeGenWriteBarrier((&___collators_6), value);
	}

	inline static int32_t get_offset_of_monitor_7() { return static_cast<int32_t>(offsetof(CompareInfo_t2350495555_StaticFields, ___monitor_7)); }
	inline RuntimeObject * get_monitor_7() const { return ___monitor_7; }
	inline RuntimeObject ** get_address_of_monitor_7() { return &___monitor_7; }
	inline void set_monitor_7(RuntimeObject * value)
	{
		___monitor_7 = value;
		Il2CppCodeGenWriteBarrier((&___monitor_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPAREINFO_T2350495555_H
#ifndef FILESTREAMASYNCRESULT_T1710504863_H
#define FILESTREAMASYNCRESULT_T1710504863_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileStreamAsyncResult
struct  FileStreamAsyncResult_t1710504863  : public RuntimeObject
{
public:
	// System.Object System.IO.FileStreamAsyncResult::state
	RuntimeObject * ___state_0;
	// System.Boolean System.IO.FileStreamAsyncResult::completed
	bool ___completed_1;
	// System.Threading.ManualResetEvent System.IO.FileStreamAsyncResult::wh
	ManualResetEvent_t3258174674 * ___wh_2;
	// System.AsyncCallback System.IO.FileStreamAsyncResult::cb
	AsyncCallback_t1572281515 * ___cb_3;
	// System.Int32 System.IO.FileStreamAsyncResult::Count
	int32_t ___Count_4;
	// System.Int32 System.IO.FileStreamAsyncResult::OriginalCount
	int32_t ___OriginalCount_5;
	// System.Int32 System.IO.FileStreamAsyncResult::BytesRead
	int32_t ___BytesRead_6;
	// System.AsyncCallback System.IO.FileStreamAsyncResult::realcb
	AsyncCallback_t1572281515 * ___realcb_7;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(FileStreamAsyncResult_t1710504863, ___state_0)); }
	inline RuntimeObject * get_state_0() const { return ___state_0; }
	inline RuntimeObject ** get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(RuntimeObject * value)
	{
		___state_0 = value;
		Il2CppCodeGenWriteBarrier((&___state_0), value);
	}

	inline static int32_t get_offset_of_completed_1() { return static_cast<int32_t>(offsetof(FileStreamAsyncResult_t1710504863, ___completed_1)); }
	inline bool get_completed_1() const { return ___completed_1; }
	inline bool* get_address_of_completed_1() { return &___completed_1; }
	inline void set_completed_1(bool value)
	{
		___completed_1 = value;
	}

	inline static int32_t get_offset_of_wh_2() { return static_cast<int32_t>(offsetof(FileStreamAsyncResult_t1710504863, ___wh_2)); }
	inline ManualResetEvent_t3258174674 * get_wh_2() const { return ___wh_2; }
	inline ManualResetEvent_t3258174674 ** get_address_of_wh_2() { return &___wh_2; }
	inline void set_wh_2(ManualResetEvent_t3258174674 * value)
	{
		___wh_2 = value;
		Il2CppCodeGenWriteBarrier((&___wh_2), value);
	}

	inline static int32_t get_offset_of_cb_3() { return static_cast<int32_t>(offsetof(FileStreamAsyncResult_t1710504863, ___cb_3)); }
	inline AsyncCallback_t1572281515 * get_cb_3() const { return ___cb_3; }
	inline AsyncCallback_t1572281515 ** get_address_of_cb_3() { return &___cb_3; }
	inline void set_cb_3(AsyncCallback_t1572281515 * value)
	{
		___cb_3 = value;
		Il2CppCodeGenWriteBarrier((&___cb_3), value);
	}

	inline static int32_t get_offset_of_Count_4() { return static_cast<int32_t>(offsetof(FileStreamAsyncResult_t1710504863, ___Count_4)); }
	inline int32_t get_Count_4() const { return ___Count_4; }
	inline int32_t* get_address_of_Count_4() { return &___Count_4; }
	inline void set_Count_4(int32_t value)
	{
		___Count_4 = value;
	}

	inline static int32_t get_offset_of_OriginalCount_5() { return static_cast<int32_t>(offsetof(FileStreamAsyncResult_t1710504863, ___OriginalCount_5)); }
	inline int32_t get_OriginalCount_5() const { return ___OriginalCount_5; }
	inline int32_t* get_address_of_OriginalCount_5() { return &___OriginalCount_5; }
	inline void set_OriginalCount_5(int32_t value)
	{
		___OriginalCount_5 = value;
	}

	inline static int32_t get_offset_of_BytesRead_6() { return static_cast<int32_t>(offsetof(FileStreamAsyncResult_t1710504863, ___BytesRead_6)); }
	inline int32_t get_BytesRead_6() const { return ___BytesRead_6; }
	inline int32_t* get_address_of_BytesRead_6() { return &___BytesRead_6; }
	inline void set_BytesRead_6(int32_t value)
	{
		___BytesRead_6 = value;
	}

	inline static int32_t get_offset_of_realcb_7() { return static_cast<int32_t>(offsetof(FileStreamAsyncResult_t1710504863, ___realcb_7)); }
	inline AsyncCallback_t1572281515 * get_realcb_7() const { return ___realcb_7; }
	inline AsyncCallback_t1572281515 ** get_address_of_realcb_7() { return &___realcb_7; }
	inline void set_realcb_7(AsyncCallback_t1572281515 * value)
	{
		___realcb_7 = value;
		Il2CppCodeGenWriteBarrier((&___realcb_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILESTREAMASYNCRESULT_T1710504863_H
#ifndef CULTUREINFO_T3804668001_H
#define CULTUREINFO_T3804668001_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CultureInfo
struct  CultureInfo_t3804668001  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_7;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_8;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_9;
	// System.Int32 System.Globalization.CultureInfo::specific_lcid
	int32_t ___specific_lcid_10;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_11;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_12;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_13;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t2207532535 * ___numInfo_14;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t1319266453 * ___dateTimeInfo_15;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t4038178256 * ___textInfo_16;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_17;
	// System.String System.Globalization.CultureInfo::displayname
	String_t* ___displayname_18;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_19;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_20;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_21;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_22;
	// System.String System.Globalization.CultureInfo::icu_name
	String_t* ___icu_name_23;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_24;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_25;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t2350495555 * ___compareInfo_26;
	// System.Int32* System.Globalization.CultureInfo::calendar_data
	int32_t* ___calendar_data_27;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_28;
	// System.Globalization.Calendar[] System.Globalization.CultureInfo::optional_calendars
	CalendarU5BU5D_t2772748138* ___optional_calendars_29;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t3804668001 * ___parent_culture_30;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_31;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t762697739 * ___calendar_32;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_33;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_t1979668241* ___cached_serialized_form_34;

public:
	inline static int32_t get_offset_of_m_isReadOnly_7() { return static_cast<int32_t>(offsetof(CultureInfo_t3804668001, ___m_isReadOnly_7)); }
	inline bool get_m_isReadOnly_7() const { return ___m_isReadOnly_7; }
	inline bool* get_address_of_m_isReadOnly_7() { return &___m_isReadOnly_7; }
	inline void set_m_isReadOnly_7(bool value)
	{
		___m_isReadOnly_7 = value;
	}

	inline static int32_t get_offset_of_cultureID_8() { return static_cast<int32_t>(offsetof(CultureInfo_t3804668001, ___cultureID_8)); }
	inline int32_t get_cultureID_8() const { return ___cultureID_8; }
	inline int32_t* get_address_of_cultureID_8() { return &___cultureID_8; }
	inline void set_cultureID_8(int32_t value)
	{
		___cultureID_8 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_9() { return static_cast<int32_t>(offsetof(CultureInfo_t3804668001, ___parent_lcid_9)); }
	inline int32_t get_parent_lcid_9() const { return ___parent_lcid_9; }
	inline int32_t* get_address_of_parent_lcid_9() { return &___parent_lcid_9; }
	inline void set_parent_lcid_9(int32_t value)
	{
		___parent_lcid_9 = value;
	}

	inline static int32_t get_offset_of_specific_lcid_10() { return static_cast<int32_t>(offsetof(CultureInfo_t3804668001, ___specific_lcid_10)); }
	inline int32_t get_specific_lcid_10() const { return ___specific_lcid_10; }
	inline int32_t* get_address_of_specific_lcid_10() { return &___specific_lcid_10; }
	inline void set_specific_lcid_10(int32_t value)
	{
		___specific_lcid_10 = value;
	}

	inline static int32_t get_offset_of_datetime_index_11() { return static_cast<int32_t>(offsetof(CultureInfo_t3804668001, ___datetime_index_11)); }
	inline int32_t get_datetime_index_11() const { return ___datetime_index_11; }
	inline int32_t* get_address_of_datetime_index_11() { return &___datetime_index_11; }
	inline void set_datetime_index_11(int32_t value)
	{
		___datetime_index_11 = value;
	}

	inline static int32_t get_offset_of_number_index_12() { return static_cast<int32_t>(offsetof(CultureInfo_t3804668001, ___number_index_12)); }
	inline int32_t get_number_index_12() const { return ___number_index_12; }
	inline int32_t* get_address_of_number_index_12() { return &___number_index_12; }
	inline void set_number_index_12(int32_t value)
	{
		___number_index_12 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_13() { return static_cast<int32_t>(offsetof(CultureInfo_t3804668001, ___m_useUserOverride_13)); }
	inline bool get_m_useUserOverride_13() const { return ___m_useUserOverride_13; }
	inline bool* get_address_of_m_useUserOverride_13() { return &___m_useUserOverride_13; }
	inline void set_m_useUserOverride_13(bool value)
	{
		___m_useUserOverride_13 = value;
	}

	inline static int32_t get_offset_of_numInfo_14() { return static_cast<int32_t>(offsetof(CultureInfo_t3804668001, ___numInfo_14)); }
	inline NumberFormatInfo_t2207532535 * get_numInfo_14() const { return ___numInfo_14; }
	inline NumberFormatInfo_t2207532535 ** get_address_of_numInfo_14() { return &___numInfo_14; }
	inline void set_numInfo_14(NumberFormatInfo_t2207532535 * value)
	{
		___numInfo_14 = value;
		Il2CppCodeGenWriteBarrier((&___numInfo_14), value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_15() { return static_cast<int32_t>(offsetof(CultureInfo_t3804668001, ___dateTimeInfo_15)); }
	inline DateTimeFormatInfo_t1319266453 * get_dateTimeInfo_15() const { return ___dateTimeInfo_15; }
	inline DateTimeFormatInfo_t1319266453 ** get_address_of_dateTimeInfo_15() { return &___dateTimeInfo_15; }
	inline void set_dateTimeInfo_15(DateTimeFormatInfo_t1319266453 * value)
	{
		___dateTimeInfo_15 = value;
		Il2CppCodeGenWriteBarrier((&___dateTimeInfo_15), value);
	}

	inline static int32_t get_offset_of_textInfo_16() { return static_cast<int32_t>(offsetof(CultureInfo_t3804668001, ___textInfo_16)); }
	inline TextInfo_t4038178256 * get_textInfo_16() const { return ___textInfo_16; }
	inline TextInfo_t4038178256 ** get_address_of_textInfo_16() { return &___textInfo_16; }
	inline void set_textInfo_16(TextInfo_t4038178256 * value)
	{
		___textInfo_16 = value;
		Il2CppCodeGenWriteBarrier((&___textInfo_16), value);
	}

	inline static int32_t get_offset_of_m_name_17() { return static_cast<int32_t>(offsetof(CultureInfo_t3804668001, ___m_name_17)); }
	inline String_t* get_m_name_17() const { return ___m_name_17; }
	inline String_t** get_address_of_m_name_17() { return &___m_name_17; }
	inline void set_m_name_17(String_t* value)
	{
		___m_name_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_17), value);
	}

	inline static int32_t get_offset_of_displayname_18() { return static_cast<int32_t>(offsetof(CultureInfo_t3804668001, ___displayname_18)); }
	inline String_t* get_displayname_18() const { return ___displayname_18; }
	inline String_t** get_address_of_displayname_18() { return &___displayname_18; }
	inline void set_displayname_18(String_t* value)
	{
		___displayname_18 = value;
		Il2CppCodeGenWriteBarrier((&___displayname_18), value);
	}

	inline static int32_t get_offset_of_englishname_19() { return static_cast<int32_t>(offsetof(CultureInfo_t3804668001, ___englishname_19)); }
	inline String_t* get_englishname_19() const { return ___englishname_19; }
	inline String_t** get_address_of_englishname_19() { return &___englishname_19; }
	inline void set_englishname_19(String_t* value)
	{
		___englishname_19 = value;
		Il2CppCodeGenWriteBarrier((&___englishname_19), value);
	}

	inline static int32_t get_offset_of_nativename_20() { return static_cast<int32_t>(offsetof(CultureInfo_t3804668001, ___nativename_20)); }
	inline String_t* get_nativename_20() const { return ___nativename_20; }
	inline String_t** get_address_of_nativename_20() { return &___nativename_20; }
	inline void set_nativename_20(String_t* value)
	{
		___nativename_20 = value;
		Il2CppCodeGenWriteBarrier((&___nativename_20), value);
	}

	inline static int32_t get_offset_of_iso3lang_21() { return static_cast<int32_t>(offsetof(CultureInfo_t3804668001, ___iso3lang_21)); }
	inline String_t* get_iso3lang_21() const { return ___iso3lang_21; }
	inline String_t** get_address_of_iso3lang_21() { return &___iso3lang_21; }
	inline void set_iso3lang_21(String_t* value)
	{
		___iso3lang_21 = value;
		Il2CppCodeGenWriteBarrier((&___iso3lang_21), value);
	}

	inline static int32_t get_offset_of_iso2lang_22() { return static_cast<int32_t>(offsetof(CultureInfo_t3804668001, ___iso2lang_22)); }
	inline String_t* get_iso2lang_22() const { return ___iso2lang_22; }
	inline String_t** get_address_of_iso2lang_22() { return &___iso2lang_22; }
	inline void set_iso2lang_22(String_t* value)
	{
		___iso2lang_22 = value;
		Il2CppCodeGenWriteBarrier((&___iso2lang_22), value);
	}

	inline static int32_t get_offset_of_icu_name_23() { return static_cast<int32_t>(offsetof(CultureInfo_t3804668001, ___icu_name_23)); }
	inline String_t* get_icu_name_23() const { return ___icu_name_23; }
	inline String_t** get_address_of_icu_name_23() { return &___icu_name_23; }
	inline void set_icu_name_23(String_t* value)
	{
		___icu_name_23 = value;
		Il2CppCodeGenWriteBarrier((&___icu_name_23), value);
	}

	inline static int32_t get_offset_of_win3lang_24() { return static_cast<int32_t>(offsetof(CultureInfo_t3804668001, ___win3lang_24)); }
	inline String_t* get_win3lang_24() const { return ___win3lang_24; }
	inline String_t** get_address_of_win3lang_24() { return &___win3lang_24; }
	inline void set_win3lang_24(String_t* value)
	{
		___win3lang_24 = value;
		Il2CppCodeGenWriteBarrier((&___win3lang_24), value);
	}

	inline static int32_t get_offset_of_territory_25() { return static_cast<int32_t>(offsetof(CultureInfo_t3804668001, ___territory_25)); }
	inline String_t* get_territory_25() const { return ___territory_25; }
	inline String_t** get_address_of_territory_25() { return &___territory_25; }
	inline void set_territory_25(String_t* value)
	{
		___territory_25 = value;
		Il2CppCodeGenWriteBarrier((&___territory_25), value);
	}

	inline static int32_t get_offset_of_compareInfo_26() { return static_cast<int32_t>(offsetof(CultureInfo_t3804668001, ___compareInfo_26)); }
	inline CompareInfo_t2350495555 * get_compareInfo_26() const { return ___compareInfo_26; }
	inline CompareInfo_t2350495555 ** get_address_of_compareInfo_26() { return &___compareInfo_26; }
	inline void set_compareInfo_26(CompareInfo_t2350495555 * value)
	{
		___compareInfo_26 = value;
		Il2CppCodeGenWriteBarrier((&___compareInfo_26), value);
	}

	inline static int32_t get_offset_of_calendar_data_27() { return static_cast<int32_t>(offsetof(CultureInfo_t3804668001, ___calendar_data_27)); }
	inline int32_t* get_calendar_data_27() const { return ___calendar_data_27; }
	inline int32_t** get_address_of_calendar_data_27() { return &___calendar_data_27; }
	inline void set_calendar_data_27(int32_t* value)
	{
		___calendar_data_27 = value;
	}

	inline static int32_t get_offset_of_textinfo_data_28() { return static_cast<int32_t>(offsetof(CultureInfo_t3804668001, ___textinfo_data_28)); }
	inline void* get_textinfo_data_28() const { return ___textinfo_data_28; }
	inline void** get_address_of_textinfo_data_28() { return &___textinfo_data_28; }
	inline void set_textinfo_data_28(void* value)
	{
		___textinfo_data_28 = value;
	}

	inline static int32_t get_offset_of_optional_calendars_29() { return static_cast<int32_t>(offsetof(CultureInfo_t3804668001, ___optional_calendars_29)); }
	inline CalendarU5BU5D_t2772748138* get_optional_calendars_29() const { return ___optional_calendars_29; }
	inline CalendarU5BU5D_t2772748138** get_address_of_optional_calendars_29() { return &___optional_calendars_29; }
	inline void set_optional_calendars_29(CalendarU5BU5D_t2772748138* value)
	{
		___optional_calendars_29 = value;
		Il2CppCodeGenWriteBarrier((&___optional_calendars_29), value);
	}

	inline static int32_t get_offset_of_parent_culture_30() { return static_cast<int32_t>(offsetof(CultureInfo_t3804668001, ___parent_culture_30)); }
	inline CultureInfo_t3804668001 * get_parent_culture_30() const { return ___parent_culture_30; }
	inline CultureInfo_t3804668001 ** get_address_of_parent_culture_30() { return &___parent_culture_30; }
	inline void set_parent_culture_30(CultureInfo_t3804668001 * value)
	{
		___parent_culture_30 = value;
		Il2CppCodeGenWriteBarrier((&___parent_culture_30), value);
	}

	inline static int32_t get_offset_of_m_dataItem_31() { return static_cast<int32_t>(offsetof(CultureInfo_t3804668001, ___m_dataItem_31)); }
	inline int32_t get_m_dataItem_31() const { return ___m_dataItem_31; }
	inline int32_t* get_address_of_m_dataItem_31() { return &___m_dataItem_31; }
	inline void set_m_dataItem_31(int32_t value)
	{
		___m_dataItem_31 = value;
	}

	inline static int32_t get_offset_of_calendar_32() { return static_cast<int32_t>(offsetof(CultureInfo_t3804668001, ___calendar_32)); }
	inline Calendar_t762697739 * get_calendar_32() const { return ___calendar_32; }
	inline Calendar_t762697739 ** get_address_of_calendar_32() { return &___calendar_32; }
	inline void set_calendar_32(Calendar_t762697739 * value)
	{
		___calendar_32 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_32), value);
	}

	inline static int32_t get_offset_of_constructed_33() { return static_cast<int32_t>(offsetof(CultureInfo_t3804668001, ___constructed_33)); }
	inline bool get_constructed_33() const { return ___constructed_33; }
	inline bool* get_address_of_constructed_33() { return &___constructed_33; }
	inline void set_constructed_33(bool value)
	{
		___constructed_33 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_34() { return static_cast<int32_t>(offsetof(CultureInfo_t3804668001, ___cached_serialized_form_34)); }
	inline ByteU5BU5D_t1979668241* get_cached_serialized_form_34() const { return ___cached_serialized_form_34; }
	inline ByteU5BU5D_t1979668241** get_address_of_cached_serialized_form_34() { return &___cached_serialized_form_34; }
	inline void set_cached_serialized_form_34(ByteU5BU5D_t1979668241* value)
	{
		___cached_serialized_form_34 = value;
		Il2CppCodeGenWriteBarrier((&___cached_serialized_form_34), value);
	}
};

struct CultureInfo_t3804668001_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t3804668001 * ___invariant_culture_info_4;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_5;
	// System.Int32 System.Globalization.CultureInfo::BootstrapCultureID
	int32_t ___BootstrapCultureID_6;
	// System.String System.Globalization.CultureInfo::MSG_READONLY
	String_t* ___MSG_READONLY_35;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_number
	Hashtable_t935084193 * ___shared_by_number_36;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_name
	Hashtable_t935084193 * ___shared_by_name_37;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map19
	Dictionary_2_t2081138196 * ___U3CU3Ef__switchU24map19_38;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map1A
	Dictionary_2_t2081138196 * ___U3CU3Ef__switchU24map1A_39;

public:
	inline static int32_t get_offset_of_invariant_culture_info_4() { return static_cast<int32_t>(offsetof(CultureInfo_t3804668001_StaticFields, ___invariant_culture_info_4)); }
	inline CultureInfo_t3804668001 * get_invariant_culture_info_4() const { return ___invariant_culture_info_4; }
	inline CultureInfo_t3804668001 ** get_address_of_invariant_culture_info_4() { return &___invariant_culture_info_4; }
	inline void set_invariant_culture_info_4(CultureInfo_t3804668001 * value)
	{
		___invariant_culture_info_4 = value;
		Il2CppCodeGenWriteBarrier((&___invariant_culture_info_4), value);
	}

	inline static int32_t get_offset_of_shared_table_lock_5() { return static_cast<int32_t>(offsetof(CultureInfo_t3804668001_StaticFields, ___shared_table_lock_5)); }
	inline RuntimeObject * get_shared_table_lock_5() const { return ___shared_table_lock_5; }
	inline RuntimeObject ** get_address_of_shared_table_lock_5() { return &___shared_table_lock_5; }
	inline void set_shared_table_lock_5(RuntimeObject * value)
	{
		___shared_table_lock_5 = value;
		Il2CppCodeGenWriteBarrier((&___shared_table_lock_5), value);
	}

	inline static int32_t get_offset_of_BootstrapCultureID_6() { return static_cast<int32_t>(offsetof(CultureInfo_t3804668001_StaticFields, ___BootstrapCultureID_6)); }
	inline int32_t get_BootstrapCultureID_6() const { return ___BootstrapCultureID_6; }
	inline int32_t* get_address_of_BootstrapCultureID_6() { return &___BootstrapCultureID_6; }
	inline void set_BootstrapCultureID_6(int32_t value)
	{
		___BootstrapCultureID_6 = value;
	}

	inline static int32_t get_offset_of_MSG_READONLY_35() { return static_cast<int32_t>(offsetof(CultureInfo_t3804668001_StaticFields, ___MSG_READONLY_35)); }
	inline String_t* get_MSG_READONLY_35() const { return ___MSG_READONLY_35; }
	inline String_t** get_address_of_MSG_READONLY_35() { return &___MSG_READONLY_35; }
	inline void set_MSG_READONLY_35(String_t* value)
	{
		___MSG_READONLY_35 = value;
		Il2CppCodeGenWriteBarrier((&___MSG_READONLY_35), value);
	}

	inline static int32_t get_offset_of_shared_by_number_36() { return static_cast<int32_t>(offsetof(CultureInfo_t3804668001_StaticFields, ___shared_by_number_36)); }
	inline Hashtable_t935084193 * get_shared_by_number_36() const { return ___shared_by_number_36; }
	inline Hashtable_t935084193 ** get_address_of_shared_by_number_36() { return &___shared_by_number_36; }
	inline void set_shared_by_number_36(Hashtable_t935084193 * value)
	{
		___shared_by_number_36 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_number_36), value);
	}

	inline static int32_t get_offset_of_shared_by_name_37() { return static_cast<int32_t>(offsetof(CultureInfo_t3804668001_StaticFields, ___shared_by_name_37)); }
	inline Hashtable_t935084193 * get_shared_by_name_37() const { return ___shared_by_name_37; }
	inline Hashtable_t935084193 ** get_address_of_shared_by_name_37() { return &___shared_by_name_37; }
	inline void set_shared_by_name_37(Hashtable_t935084193 * value)
	{
		___shared_by_name_37 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_name_37), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map19_38() { return static_cast<int32_t>(offsetof(CultureInfo_t3804668001_StaticFields, ___U3CU3Ef__switchU24map19_38)); }
	inline Dictionary_2_t2081138196 * get_U3CU3Ef__switchU24map19_38() const { return ___U3CU3Ef__switchU24map19_38; }
	inline Dictionary_2_t2081138196 ** get_address_of_U3CU3Ef__switchU24map19_38() { return &___U3CU3Ef__switchU24map19_38; }
	inline void set_U3CU3Ef__switchU24map19_38(Dictionary_2_t2081138196 * value)
	{
		___U3CU3Ef__switchU24map19_38 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map19_38), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1A_39() { return static_cast<int32_t>(offsetof(CultureInfo_t3804668001_StaticFields, ___U3CU3Ef__switchU24map1A_39)); }
	inline Dictionary_2_t2081138196 * get_U3CU3Ef__switchU24map1A_39() const { return ___U3CU3Ef__switchU24map1A_39; }
	inline Dictionary_2_t2081138196 ** get_address_of_U3CU3Ef__switchU24map1A_39() { return &___U3CU3Ef__switchU24map1A_39; }
	inline void set_U3CU3Ef__switchU24map1A_39(Dictionary_2_t2081138196 * value)
	{
		___U3CU3Ef__switchU24map1A_39 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1A_39), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFO_T3804668001_H
#ifndef CUSTOMATTRIBUTEBUILDER_T942700929_H
#define CUSTOMATTRIBUTEBUILDER_T942700929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.CustomAttributeBuilder
struct  CustomAttributeBuilder_t942700929  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMATTRIBUTEBUILDER_T942700929_H
#ifndef EVENTBUILDER_T2860922430_H
#define EVENTBUILDER_T2860922430_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.EventBuilder
struct  EventBuilder_t2860922430  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTBUILDER_T2860922430_H
#ifndef ILGENERATOR_T3257509038_H
#define ILGENERATOR_T3257509038_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ILGenerator
struct  ILGenerator_t3257509038  : public RuntimeObject
{
public:
	// System.Byte[] System.Reflection.Emit.ILGenerator::code
	ByteU5BU5D_t1979668241* ___code_1;
	// System.Int32 System.Reflection.Emit.ILGenerator::code_len
	int32_t ___code_len_2;
	// System.Int32 System.Reflection.Emit.ILGenerator::max_stack
	int32_t ___max_stack_3;
	// System.Int32 System.Reflection.Emit.ILGenerator::cur_stack
	int32_t ___cur_stack_4;
	// System.Int32 System.Reflection.Emit.ILGenerator::num_token_fixups
	int32_t ___num_token_fixups_5;
	// System.Reflection.Emit.ILTokenInfo[] System.Reflection.Emit.ILGenerator::token_fixups
	ILTokenInfoU5BU5D_t1013548734* ___token_fixups_6;
	// System.Reflection.Emit.ILGenerator/LabelData[] System.Reflection.Emit.ILGenerator::labels
	LabelDataU5BU5D_t1692063519* ___labels_7;
	// System.Reflection.Emit.ILGenerator/LabelFixup[] System.Reflection.Emit.ILGenerator::fixups
	LabelFixupU5BU5D_t343170152* ___fixups_8;
	// System.Int32 System.Reflection.Emit.ILGenerator::num_fixups
	int32_t ___num_fixups_9;
	// System.Reflection.Module System.Reflection.Emit.ILGenerator::module
	Module_t1613907595 * ___module_10;
	// System.Reflection.Emit.TokenGenerator System.Reflection.Emit.ILGenerator::token_gen
	RuntimeObject* ___token_gen_11;

public:
	inline static int32_t get_offset_of_code_1() { return static_cast<int32_t>(offsetof(ILGenerator_t3257509038, ___code_1)); }
	inline ByteU5BU5D_t1979668241* get_code_1() const { return ___code_1; }
	inline ByteU5BU5D_t1979668241** get_address_of_code_1() { return &___code_1; }
	inline void set_code_1(ByteU5BU5D_t1979668241* value)
	{
		___code_1 = value;
		Il2CppCodeGenWriteBarrier((&___code_1), value);
	}

	inline static int32_t get_offset_of_code_len_2() { return static_cast<int32_t>(offsetof(ILGenerator_t3257509038, ___code_len_2)); }
	inline int32_t get_code_len_2() const { return ___code_len_2; }
	inline int32_t* get_address_of_code_len_2() { return &___code_len_2; }
	inline void set_code_len_2(int32_t value)
	{
		___code_len_2 = value;
	}

	inline static int32_t get_offset_of_max_stack_3() { return static_cast<int32_t>(offsetof(ILGenerator_t3257509038, ___max_stack_3)); }
	inline int32_t get_max_stack_3() const { return ___max_stack_3; }
	inline int32_t* get_address_of_max_stack_3() { return &___max_stack_3; }
	inline void set_max_stack_3(int32_t value)
	{
		___max_stack_3 = value;
	}

	inline static int32_t get_offset_of_cur_stack_4() { return static_cast<int32_t>(offsetof(ILGenerator_t3257509038, ___cur_stack_4)); }
	inline int32_t get_cur_stack_4() const { return ___cur_stack_4; }
	inline int32_t* get_address_of_cur_stack_4() { return &___cur_stack_4; }
	inline void set_cur_stack_4(int32_t value)
	{
		___cur_stack_4 = value;
	}

	inline static int32_t get_offset_of_num_token_fixups_5() { return static_cast<int32_t>(offsetof(ILGenerator_t3257509038, ___num_token_fixups_5)); }
	inline int32_t get_num_token_fixups_5() const { return ___num_token_fixups_5; }
	inline int32_t* get_address_of_num_token_fixups_5() { return &___num_token_fixups_5; }
	inline void set_num_token_fixups_5(int32_t value)
	{
		___num_token_fixups_5 = value;
	}

	inline static int32_t get_offset_of_token_fixups_6() { return static_cast<int32_t>(offsetof(ILGenerator_t3257509038, ___token_fixups_6)); }
	inline ILTokenInfoU5BU5D_t1013548734* get_token_fixups_6() const { return ___token_fixups_6; }
	inline ILTokenInfoU5BU5D_t1013548734** get_address_of_token_fixups_6() { return &___token_fixups_6; }
	inline void set_token_fixups_6(ILTokenInfoU5BU5D_t1013548734* value)
	{
		___token_fixups_6 = value;
		Il2CppCodeGenWriteBarrier((&___token_fixups_6), value);
	}

	inline static int32_t get_offset_of_labels_7() { return static_cast<int32_t>(offsetof(ILGenerator_t3257509038, ___labels_7)); }
	inline LabelDataU5BU5D_t1692063519* get_labels_7() const { return ___labels_7; }
	inline LabelDataU5BU5D_t1692063519** get_address_of_labels_7() { return &___labels_7; }
	inline void set_labels_7(LabelDataU5BU5D_t1692063519* value)
	{
		___labels_7 = value;
		Il2CppCodeGenWriteBarrier((&___labels_7), value);
	}

	inline static int32_t get_offset_of_fixups_8() { return static_cast<int32_t>(offsetof(ILGenerator_t3257509038, ___fixups_8)); }
	inline LabelFixupU5BU5D_t343170152* get_fixups_8() const { return ___fixups_8; }
	inline LabelFixupU5BU5D_t343170152** get_address_of_fixups_8() { return &___fixups_8; }
	inline void set_fixups_8(LabelFixupU5BU5D_t343170152* value)
	{
		___fixups_8 = value;
		Il2CppCodeGenWriteBarrier((&___fixups_8), value);
	}

	inline static int32_t get_offset_of_num_fixups_9() { return static_cast<int32_t>(offsetof(ILGenerator_t3257509038, ___num_fixups_9)); }
	inline int32_t get_num_fixups_9() const { return ___num_fixups_9; }
	inline int32_t* get_address_of_num_fixups_9() { return &___num_fixups_9; }
	inline void set_num_fixups_9(int32_t value)
	{
		___num_fixups_9 = value;
	}

	inline static int32_t get_offset_of_module_10() { return static_cast<int32_t>(offsetof(ILGenerator_t3257509038, ___module_10)); }
	inline Module_t1613907595 * get_module_10() const { return ___module_10; }
	inline Module_t1613907595 ** get_address_of_module_10() { return &___module_10; }
	inline void set_module_10(Module_t1613907595 * value)
	{
		___module_10 = value;
		Il2CppCodeGenWriteBarrier((&___module_10), value);
	}

	inline static int32_t get_offset_of_token_gen_11() { return static_cast<int32_t>(offsetof(ILGenerator_t3257509038, ___token_gen_11)); }
	inline RuntimeObject* get_token_gen_11() const { return ___token_gen_11; }
	inline RuntimeObject** get_address_of_token_gen_11() { return &___token_gen_11; }
	inline void set_token_gen_11(RuntimeObject* value)
	{
		___token_gen_11 = value;
		Il2CppCodeGenWriteBarrier((&___token_gen_11), value);
	}
};

struct ILGenerator_t3257509038_StaticFields
{
public:
	// System.Type System.Reflection.Emit.ILGenerator::void_type
	Type_t * ___void_type_0;

public:
	inline static int32_t get_offset_of_void_type_0() { return static_cast<int32_t>(offsetof(ILGenerator_t3257509038_StaticFields, ___void_type_0)); }
	inline Type_t * get_void_type_0() const { return ___void_type_0; }
	inline Type_t ** get_address_of_void_type_0() { return &___void_type_0; }
	inline void set_void_type_0(Type_t * value)
	{
		___void_type_0 = value;
		Il2CppCodeGenWriteBarrier((&___void_type_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ILGENERATOR_T3257509038_H
#ifndef MARSHALBYREFOBJECT_T1482295433_H
#define MARSHALBYREFOBJECT_T1482295433_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t1482295433  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t415391279 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t1482295433, ____identity_0)); }
	inline ServerIdentity_t415391279 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t415391279 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t415391279 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T1482295433_H
#ifndef NUMBERFORMATINFO_T2207532535_H
#define NUMBERFORMATINFO_T2207532535_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.NumberFormatInfo
struct  NumberFormatInfo_t2207532535  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_0;
	// System.String System.Globalization.NumberFormatInfo::decimalFormats
	String_t* ___decimalFormats_1;
	// System.String System.Globalization.NumberFormatInfo::currencyFormats
	String_t* ___currencyFormats_2;
	// System.String System.Globalization.NumberFormatInfo::percentFormats
	String_t* ___percentFormats_3;
	// System.String System.Globalization.NumberFormatInfo::digitPattern
	String_t* ___digitPattern_4;
	// System.String System.Globalization.NumberFormatInfo::zeroPattern
	String_t* ___zeroPattern_5;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_6;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t2848674145* ___currencyGroupSizes_9;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_10;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_11;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_12;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_15;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_16;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_17;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_18;
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t2848674145* ___numberGroupSizes_19;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_20;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_21;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_22;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_23;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t2848674145* ___percentGroupSizes_24;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_27;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_28;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_29;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_30;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_31;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_32;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_34;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_35;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_t3875140506* ___nativeDigits_36;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_37;

public:
	inline static int32_t get_offset_of_isReadOnly_0() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t2207532535, ___isReadOnly_0)); }
	inline bool get_isReadOnly_0() const { return ___isReadOnly_0; }
	inline bool* get_address_of_isReadOnly_0() { return &___isReadOnly_0; }
	inline void set_isReadOnly_0(bool value)
	{
		___isReadOnly_0 = value;
	}

	inline static int32_t get_offset_of_decimalFormats_1() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t2207532535, ___decimalFormats_1)); }
	inline String_t* get_decimalFormats_1() const { return ___decimalFormats_1; }
	inline String_t** get_address_of_decimalFormats_1() { return &___decimalFormats_1; }
	inline void set_decimalFormats_1(String_t* value)
	{
		___decimalFormats_1 = value;
		Il2CppCodeGenWriteBarrier((&___decimalFormats_1), value);
	}

	inline static int32_t get_offset_of_currencyFormats_2() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t2207532535, ___currencyFormats_2)); }
	inline String_t* get_currencyFormats_2() const { return ___currencyFormats_2; }
	inline String_t** get_address_of_currencyFormats_2() { return &___currencyFormats_2; }
	inline void set_currencyFormats_2(String_t* value)
	{
		___currencyFormats_2 = value;
		Il2CppCodeGenWriteBarrier((&___currencyFormats_2), value);
	}

	inline static int32_t get_offset_of_percentFormats_3() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t2207532535, ___percentFormats_3)); }
	inline String_t* get_percentFormats_3() const { return ___percentFormats_3; }
	inline String_t** get_address_of_percentFormats_3() { return &___percentFormats_3; }
	inline void set_percentFormats_3(String_t* value)
	{
		___percentFormats_3 = value;
		Il2CppCodeGenWriteBarrier((&___percentFormats_3), value);
	}

	inline static int32_t get_offset_of_digitPattern_4() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t2207532535, ___digitPattern_4)); }
	inline String_t* get_digitPattern_4() const { return ___digitPattern_4; }
	inline String_t** get_address_of_digitPattern_4() { return &___digitPattern_4; }
	inline void set_digitPattern_4(String_t* value)
	{
		___digitPattern_4 = value;
		Il2CppCodeGenWriteBarrier((&___digitPattern_4), value);
	}

	inline static int32_t get_offset_of_zeroPattern_5() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t2207532535, ___zeroPattern_5)); }
	inline String_t* get_zeroPattern_5() const { return ___zeroPattern_5; }
	inline String_t** get_address_of_zeroPattern_5() { return &___zeroPattern_5; }
	inline void set_zeroPattern_5(String_t* value)
	{
		___zeroPattern_5 = value;
		Il2CppCodeGenWriteBarrier((&___zeroPattern_5), value);
	}

	inline static int32_t get_offset_of_currencyDecimalDigits_6() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t2207532535, ___currencyDecimalDigits_6)); }
	inline int32_t get_currencyDecimalDigits_6() const { return ___currencyDecimalDigits_6; }
	inline int32_t* get_address_of_currencyDecimalDigits_6() { return &___currencyDecimalDigits_6; }
	inline void set_currencyDecimalDigits_6(int32_t value)
	{
		___currencyDecimalDigits_6 = value;
	}

	inline static int32_t get_offset_of_currencyDecimalSeparator_7() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t2207532535, ___currencyDecimalSeparator_7)); }
	inline String_t* get_currencyDecimalSeparator_7() const { return ___currencyDecimalSeparator_7; }
	inline String_t** get_address_of_currencyDecimalSeparator_7() { return &___currencyDecimalSeparator_7; }
	inline void set_currencyDecimalSeparator_7(String_t* value)
	{
		___currencyDecimalSeparator_7 = value;
		Il2CppCodeGenWriteBarrier((&___currencyDecimalSeparator_7), value);
	}

	inline static int32_t get_offset_of_currencyGroupSeparator_8() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t2207532535, ___currencyGroupSeparator_8)); }
	inline String_t* get_currencyGroupSeparator_8() const { return ___currencyGroupSeparator_8; }
	inline String_t** get_address_of_currencyGroupSeparator_8() { return &___currencyGroupSeparator_8; }
	inline void set_currencyGroupSeparator_8(String_t* value)
	{
		___currencyGroupSeparator_8 = value;
		Il2CppCodeGenWriteBarrier((&___currencyGroupSeparator_8), value);
	}

	inline static int32_t get_offset_of_currencyGroupSizes_9() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t2207532535, ___currencyGroupSizes_9)); }
	inline Int32U5BU5D_t2848674145* get_currencyGroupSizes_9() const { return ___currencyGroupSizes_9; }
	inline Int32U5BU5D_t2848674145** get_address_of_currencyGroupSizes_9() { return &___currencyGroupSizes_9; }
	inline void set_currencyGroupSizes_9(Int32U5BU5D_t2848674145* value)
	{
		___currencyGroupSizes_9 = value;
		Il2CppCodeGenWriteBarrier((&___currencyGroupSizes_9), value);
	}

	inline static int32_t get_offset_of_currencyNegativePattern_10() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t2207532535, ___currencyNegativePattern_10)); }
	inline int32_t get_currencyNegativePattern_10() const { return ___currencyNegativePattern_10; }
	inline int32_t* get_address_of_currencyNegativePattern_10() { return &___currencyNegativePattern_10; }
	inline void set_currencyNegativePattern_10(int32_t value)
	{
		___currencyNegativePattern_10 = value;
	}

	inline static int32_t get_offset_of_currencyPositivePattern_11() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t2207532535, ___currencyPositivePattern_11)); }
	inline int32_t get_currencyPositivePattern_11() const { return ___currencyPositivePattern_11; }
	inline int32_t* get_address_of_currencyPositivePattern_11() { return &___currencyPositivePattern_11; }
	inline void set_currencyPositivePattern_11(int32_t value)
	{
		___currencyPositivePattern_11 = value;
	}

	inline static int32_t get_offset_of_currencySymbol_12() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t2207532535, ___currencySymbol_12)); }
	inline String_t* get_currencySymbol_12() const { return ___currencySymbol_12; }
	inline String_t** get_address_of_currencySymbol_12() { return &___currencySymbol_12; }
	inline void set_currencySymbol_12(String_t* value)
	{
		___currencySymbol_12 = value;
		Il2CppCodeGenWriteBarrier((&___currencySymbol_12), value);
	}

	inline static int32_t get_offset_of_nanSymbol_13() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t2207532535, ___nanSymbol_13)); }
	inline String_t* get_nanSymbol_13() const { return ___nanSymbol_13; }
	inline String_t** get_address_of_nanSymbol_13() { return &___nanSymbol_13; }
	inline void set_nanSymbol_13(String_t* value)
	{
		___nanSymbol_13 = value;
		Il2CppCodeGenWriteBarrier((&___nanSymbol_13), value);
	}

	inline static int32_t get_offset_of_negativeInfinitySymbol_14() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t2207532535, ___negativeInfinitySymbol_14)); }
	inline String_t* get_negativeInfinitySymbol_14() const { return ___negativeInfinitySymbol_14; }
	inline String_t** get_address_of_negativeInfinitySymbol_14() { return &___negativeInfinitySymbol_14; }
	inline void set_negativeInfinitySymbol_14(String_t* value)
	{
		___negativeInfinitySymbol_14 = value;
		Il2CppCodeGenWriteBarrier((&___negativeInfinitySymbol_14), value);
	}

	inline static int32_t get_offset_of_negativeSign_15() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t2207532535, ___negativeSign_15)); }
	inline String_t* get_negativeSign_15() const { return ___negativeSign_15; }
	inline String_t** get_address_of_negativeSign_15() { return &___negativeSign_15; }
	inline void set_negativeSign_15(String_t* value)
	{
		___negativeSign_15 = value;
		Il2CppCodeGenWriteBarrier((&___negativeSign_15), value);
	}

	inline static int32_t get_offset_of_numberDecimalDigits_16() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t2207532535, ___numberDecimalDigits_16)); }
	inline int32_t get_numberDecimalDigits_16() const { return ___numberDecimalDigits_16; }
	inline int32_t* get_address_of_numberDecimalDigits_16() { return &___numberDecimalDigits_16; }
	inline void set_numberDecimalDigits_16(int32_t value)
	{
		___numberDecimalDigits_16 = value;
	}

	inline static int32_t get_offset_of_numberDecimalSeparator_17() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t2207532535, ___numberDecimalSeparator_17)); }
	inline String_t* get_numberDecimalSeparator_17() const { return ___numberDecimalSeparator_17; }
	inline String_t** get_address_of_numberDecimalSeparator_17() { return &___numberDecimalSeparator_17; }
	inline void set_numberDecimalSeparator_17(String_t* value)
	{
		___numberDecimalSeparator_17 = value;
		Il2CppCodeGenWriteBarrier((&___numberDecimalSeparator_17), value);
	}

	inline static int32_t get_offset_of_numberGroupSeparator_18() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t2207532535, ___numberGroupSeparator_18)); }
	inline String_t* get_numberGroupSeparator_18() const { return ___numberGroupSeparator_18; }
	inline String_t** get_address_of_numberGroupSeparator_18() { return &___numberGroupSeparator_18; }
	inline void set_numberGroupSeparator_18(String_t* value)
	{
		___numberGroupSeparator_18 = value;
		Il2CppCodeGenWriteBarrier((&___numberGroupSeparator_18), value);
	}

	inline static int32_t get_offset_of_numberGroupSizes_19() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t2207532535, ___numberGroupSizes_19)); }
	inline Int32U5BU5D_t2848674145* get_numberGroupSizes_19() const { return ___numberGroupSizes_19; }
	inline Int32U5BU5D_t2848674145** get_address_of_numberGroupSizes_19() { return &___numberGroupSizes_19; }
	inline void set_numberGroupSizes_19(Int32U5BU5D_t2848674145* value)
	{
		___numberGroupSizes_19 = value;
		Il2CppCodeGenWriteBarrier((&___numberGroupSizes_19), value);
	}

	inline static int32_t get_offset_of_numberNegativePattern_20() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t2207532535, ___numberNegativePattern_20)); }
	inline int32_t get_numberNegativePattern_20() const { return ___numberNegativePattern_20; }
	inline int32_t* get_address_of_numberNegativePattern_20() { return &___numberNegativePattern_20; }
	inline void set_numberNegativePattern_20(int32_t value)
	{
		___numberNegativePattern_20 = value;
	}

	inline static int32_t get_offset_of_percentDecimalDigits_21() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t2207532535, ___percentDecimalDigits_21)); }
	inline int32_t get_percentDecimalDigits_21() const { return ___percentDecimalDigits_21; }
	inline int32_t* get_address_of_percentDecimalDigits_21() { return &___percentDecimalDigits_21; }
	inline void set_percentDecimalDigits_21(int32_t value)
	{
		___percentDecimalDigits_21 = value;
	}

	inline static int32_t get_offset_of_percentDecimalSeparator_22() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t2207532535, ___percentDecimalSeparator_22)); }
	inline String_t* get_percentDecimalSeparator_22() const { return ___percentDecimalSeparator_22; }
	inline String_t** get_address_of_percentDecimalSeparator_22() { return &___percentDecimalSeparator_22; }
	inline void set_percentDecimalSeparator_22(String_t* value)
	{
		___percentDecimalSeparator_22 = value;
		Il2CppCodeGenWriteBarrier((&___percentDecimalSeparator_22), value);
	}

	inline static int32_t get_offset_of_percentGroupSeparator_23() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t2207532535, ___percentGroupSeparator_23)); }
	inline String_t* get_percentGroupSeparator_23() const { return ___percentGroupSeparator_23; }
	inline String_t** get_address_of_percentGroupSeparator_23() { return &___percentGroupSeparator_23; }
	inline void set_percentGroupSeparator_23(String_t* value)
	{
		___percentGroupSeparator_23 = value;
		Il2CppCodeGenWriteBarrier((&___percentGroupSeparator_23), value);
	}

	inline static int32_t get_offset_of_percentGroupSizes_24() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t2207532535, ___percentGroupSizes_24)); }
	inline Int32U5BU5D_t2848674145* get_percentGroupSizes_24() const { return ___percentGroupSizes_24; }
	inline Int32U5BU5D_t2848674145** get_address_of_percentGroupSizes_24() { return &___percentGroupSizes_24; }
	inline void set_percentGroupSizes_24(Int32U5BU5D_t2848674145* value)
	{
		___percentGroupSizes_24 = value;
		Il2CppCodeGenWriteBarrier((&___percentGroupSizes_24), value);
	}

	inline static int32_t get_offset_of_percentNegativePattern_25() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t2207532535, ___percentNegativePattern_25)); }
	inline int32_t get_percentNegativePattern_25() const { return ___percentNegativePattern_25; }
	inline int32_t* get_address_of_percentNegativePattern_25() { return &___percentNegativePattern_25; }
	inline void set_percentNegativePattern_25(int32_t value)
	{
		___percentNegativePattern_25 = value;
	}

	inline static int32_t get_offset_of_percentPositivePattern_26() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t2207532535, ___percentPositivePattern_26)); }
	inline int32_t get_percentPositivePattern_26() const { return ___percentPositivePattern_26; }
	inline int32_t* get_address_of_percentPositivePattern_26() { return &___percentPositivePattern_26; }
	inline void set_percentPositivePattern_26(int32_t value)
	{
		___percentPositivePattern_26 = value;
	}

	inline static int32_t get_offset_of_percentSymbol_27() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t2207532535, ___percentSymbol_27)); }
	inline String_t* get_percentSymbol_27() const { return ___percentSymbol_27; }
	inline String_t** get_address_of_percentSymbol_27() { return &___percentSymbol_27; }
	inline void set_percentSymbol_27(String_t* value)
	{
		___percentSymbol_27 = value;
		Il2CppCodeGenWriteBarrier((&___percentSymbol_27), value);
	}

	inline static int32_t get_offset_of_perMilleSymbol_28() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t2207532535, ___perMilleSymbol_28)); }
	inline String_t* get_perMilleSymbol_28() const { return ___perMilleSymbol_28; }
	inline String_t** get_address_of_perMilleSymbol_28() { return &___perMilleSymbol_28; }
	inline void set_perMilleSymbol_28(String_t* value)
	{
		___perMilleSymbol_28 = value;
		Il2CppCodeGenWriteBarrier((&___perMilleSymbol_28), value);
	}

	inline static int32_t get_offset_of_positiveInfinitySymbol_29() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t2207532535, ___positiveInfinitySymbol_29)); }
	inline String_t* get_positiveInfinitySymbol_29() const { return ___positiveInfinitySymbol_29; }
	inline String_t** get_address_of_positiveInfinitySymbol_29() { return &___positiveInfinitySymbol_29; }
	inline void set_positiveInfinitySymbol_29(String_t* value)
	{
		___positiveInfinitySymbol_29 = value;
		Il2CppCodeGenWriteBarrier((&___positiveInfinitySymbol_29), value);
	}

	inline static int32_t get_offset_of_positiveSign_30() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t2207532535, ___positiveSign_30)); }
	inline String_t* get_positiveSign_30() const { return ___positiveSign_30; }
	inline String_t** get_address_of_positiveSign_30() { return &___positiveSign_30; }
	inline void set_positiveSign_30(String_t* value)
	{
		___positiveSign_30 = value;
		Il2CppCodeGenWriteBarrier((&___positiveSign_30), value);
	}

	inline static int32_t get_offset_of_ansiCurrencySymbol_31() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t2207532535, ___ansiCurrencySymbol_31)); }
	inline String_t* get_ansiCurrencySymbol_31() const { return ___ansiCurrencySymbol_31; }
	inline String_t** get_address_of_ansiCurrencySymbol_31() { return &___ansiCurrencySymbol_31; }
	inline void set_ansiCurrencySymbol_31(String_t* value)
	{
		___ansiCurrencySymbol_31 = value;
		Il2CppCodeGenWriteBarrier((&___ansiCurrencySymbol_31), value);
	}

	inline static int32_t get_offset_of_m_dataItem_32() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t2207532535, ___m_dataItem_32)); }
	inline int32_t get_m_dataItem_32() const { return ___m_dataItem_32; }
	inline int32_t* get_address_of_m_dataItem_32() { return &___m_dataItem_32; }
	inline void set_m_dataItem_32(int32_t value)
	{
		___m_dataItem_32 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_33() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t2207532535, ___m_useUserOverride_33)); }
	inline bool get_m_useUserOverride_33() const { return ___m_useUserOverride_33; }
	inline bool* get_address_of_m_useUserOverride_33() { return &___m_useUserOverride_33; }
	inline void set_m_useUserOverride_33(bool value)
	{
		___m_useUserOverride_33 = value;
	}

	inline static int32_t get_offset_of_validForParseAsNumber_34() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t2207532535, ___validForParseAsNumber_34)); }
	inline bool get_validForParseAsNumber_34() const { return ___validForParseAsNumber_34; }
	inline bool* get_address_of_validForParseAsNumber_34() { return &___validForParseAsNumber_34; }
	inline void set_validForParseAsNumber_34(bool value)
	{
		___validForParseAsNumber_34 = value;
	}

	inline static int32_t get_offset_of_validForParseAsCurrency_35() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t2207532535, ___validForParseAsCurrency_35)); }
	inline bool get_validForParseAsCurrency_35() const { return ___validForParseAsCurrency_35; }
	inline bool* get_address_of_validForParseAsCurrency_35() { return &___validForParseAsCurrency_35; }
	inline void set_validForParseAsCurrency_35(bool value)
	{
		___validForParseAsCurrency_35 = value;
	}

	inline static int32_t get_offset_of_nativeDigits_36() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t2207532535, ___nativeDigits_36)); }
	inline StringU5BU5D_t3875140506* get_nativeDigits_36() const { return ___nativeDigits_36; }
	inline StringU5BU5D_t3875140506** get_address_of_nativeDigits_36() { return &___nativeDigits_36; }
	inline void set_nativeDigits_36(StringU5BU5D_t3875140506* value)
	{
		___nativeDigits_36 = value;
		Il2CppCodeGenWriteBarrier((&___nativeDigits_36), value);
	}

	inline static int32_t get_offset_of_digitSubstitution_37() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t2207532535, ___digitSubstitution_37)); }
	inline int32_t get_digitSubstitution_37() const { return ___digitSubstitution_37; }
	inline int32_t* get_address_of_digitSubstitution_37() { return &___digitSubstitution_37; }
	inline void set_digitSubstitution_37(int32_t value)
	{
		___digitSubstitution_37 = value;
	}
};

struct NumberFormatInfo_t2207532535_StaticFields
{
public:
	// System.String[] System.Globalization.NumberFormatInfo::invariantNativeDigits
	StringU5BU5D_t3875140506* ___invariantNativeDigits_38;

public:
	inline static int32_t get_offset_of_invariantNativeDigits_38() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t2207532535_StaticFields, ___invariantNativeDigits_38)); }
	inline StringU5BU5D_t3875140506* get_invariantNativeDigits_38() const { return ___invariantNativeDigits_38; }
	inline StringU5BU5D_t3875140506** get_address_of_invariantNativeDigits_38() { return &___invariantNativeDigits_38; }
	inline void set_invariantNativeDigits_38(StringU5BU5D_t3875140506* value)
	{
		___invariantNativeDigits_38 = value;
		Il2CppCodeGenWriteBarrier((&___invariantNativeDigits_38), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NUMBERFORMATINFO_T2207532535_H
#ifndef REGIONINFO_T2026000002_H
#define REGIONINFO_T2026000002_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.RegionInfo
struct  RegionInfo_t2026000002  : public RuntimeObject
{
public:
	// System.Int32 System.Globalization.RegionInfo::lcid
	int32_t ___lcid_1;
	// System.Int32 System.Globalization.RegionInfo::regionId
	int32_t ___regionId_2;
	// System.String System.Globalization.RegionInfo::iso2Name
	String_t* ___iso2Name_3;
	// System.String System.Globalization.RegionInfo::iso3Name
	String_t* ___iso3Name_4;
	// System.String System.Globalization.RegionInfo::win3Name
	String_t* ___win3Name_5;
	// System.String System.Globalization.RegionInfo::englishName
	String_t* ___englishName_6;
	// System.String System.Globalization.RegionInfo::currencySymbol
	String_t* ___currencySymbol_7;
	// System.String System.Globalization.RegionInfo::isoCurrencySymbol
	String_t* ___isoCurrencySymbol_8;
	// System.String System.Globalization.RegionInfo::currencyEnglishName
	String_t* ___currencyEnglishName_9;

public:
	inline static int32_t get_offset_of_lcid_1() { return static_cast<int32_t>(offsetof(RegionInfo_t2026000002, ___lcid_1)); }
	inline int32_t get_lcid_1() const { return ___lcid_1; }
	inline int32_t* get_address_of_lcid_1() { return &___lcid_1; }
	inline void set_lcid_1(int32_t value)
	{
		___lcid_1 = value;
	}

	inline static int32_t get_offset_of_regionId_2() { return static_cast<int32_t>(offsetof(RegionInfo_t2026000002, ___regionId_2)); }
	inline int32_t get_regionId_2() const { return ___regionId_2; }
	inline int32_t* get_address_of_regionId_2() { return &___regionId_2; }
	inline void set_regionId_2(int32_t value)
	{
		___regionId_2 = value;
	}

	inline static int32_t get_offset_of_iso2Name_3() { return static_cast<int32_t>(offsetof(RegionInfo_t2026000002, ___iso2Name_3)); }
	inline String_t* get_iso2Name_3() const { return ___iso2Name_3; }
	inline String_t** get_address_of_iso2Name_3() { return &___iso2Name_3; }
	inline void set_iso2Name_3(String_t* value)
	{
		___iso2Name_3 = value;
		Il2CppCodeGenWriteBarrier((&___iso2Name_3), value);
	}

	inline static int32_t get_offset_of_iso3Name_4() { return static_cast<int32_t>(offsetof(RegionInfo_t2026000002, ___iso3Name_4)); }
	inline String_t* get_iso3Name_4() const { return ___iso3Name_4; }
	inline String_t** get_address_of_iso3Name_4() { return &___iso3Name_4; }
	inline void set_iso3Name_4(String_t* value)
	{
		___iso3Name_4 = value;
		Il2CppCodeGenWriteBarrier((&___iso3Name_4), value);
	}

	inline static int32_t get_offset_of_win3Name_5() { return static_cast<int32_t>(offsetof(RegionInfo_t2026000002, ___win3Name_5)); }
	inline String_t* get_win3Name_5() const { return ___win3Name_5; }
	inline String_t** get_address_of_win3Name_5() { return &___win3Name_5; }
	inline void set_win3Name_5(String_t* value)
	{
		___win3Name_5 = value;
		Il2CppCodeGenWriteBarrier((&___win3Name_5), value);
	}

	inline static int32_t get_offset_of_englishName_6() { return static_cast<int32_t>(offsetof(RegionInfo_t2026000002, ___englishName_6)); }
	inline String_t* get_englishName_6() const { return ___englishName_6; }
	inline String_t** get_address_of_englishName_6() { return &___englishName_6; }
	inline void set_englishName_6(String_t* value)
	{
		___englishName_6 = value;
		Il2CppCodeGenWriteBarrier((&___englishName_6), value);
	}

	inline static int32_t get_offset_of_currencySymbol_7() { return static_cast<int32_t>(offsetof(RegionInfo_t2026000002, ___currencySymbol_7)); }
	inline String_t* get_currencySymbol_7() const { return ___currencySymbol_7; }
	inline String_t** get_address_of_currencySymbol_7() { return &___currencySymbol_7; }
	inline void set_currencySymbol_7(String_t* value)
	{
		___currencySymbol_7 = value;
		Il2CppCodeGenWriteBarrier((&___currencySymbol_7), value);
	}

	inline static int32_t get_offset_of_isoCurrencySymbol_8() { return static_cast<int32_t>(offsetof(RegionInfo_t2026000002, ___isoCurrencySymbol_8)); }
	inline String_t* get_isoCurrencySymbol_8() const { return ___isoCurrencySymbol_8; }
	inline String_t** get_address_of_isoCurrencySymbol_8() { return &___isoCurrencySymbol_8; }
	inline void set_isoCurrencySymbol_8(String_t* value)
	{
		___isoCurrencySymbol_8 = value;
		Il2CppCodeGenWriteBarrier((&___isoCurrencySymbol_8), value);
	}

	inline static int32_t get_offset_of_currencyEnglishName_9() { return static_cast<int32_t>(offsetof(RegionInfo_t2026000002, ___currencyEnglishName_9)); }
	inline String_t* get_currencyEnglishName_9() const { return ___currencyEnglishName_9; }
	inline String_t** get_address_of_currencyEnglishName_9() { return &___currencyEnglishName_9; }
	inline void set_currencyEnglishName_9(String_t* value)
	{
		___currencyEnglishName_9 = value;
		Il2CppCodeGenWriteBarrier((&___currencyEnglishName_9), value);
	}
};

struct RegionInfo_t2026000002_StaticFields
{
public:
	// System.Globalization.RegionInfo System.Globalization.RegionInfo::currentRegion
	RegionInfo_t2026000002 * ___currentRegion_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.RegionInfo::<>f__switch$map1B
	Dictionary_2_t2081138196 * ___U3CU3Ef__switchU24map1B_10;

public:
	inline static int32_t get_offset_of_currentRegion_0() { return static_cast<int32_t>(offsetof(RegionInfo_t2026000002_StaticFields, ___currentRegion_0)); }
	inline RegionInfo_t2026000002 * get_currentRegion_0() const { return ___currentRegion_0; }
	inline RegionInfo_t2026000002 ** get_address_of_currentRegion_0() { return &___currentRegion_0; }
	inline void set_currentRegion_0(RegionInfo_t2026000002 * value)
	{
		___currentRegion_0 = value;
		Il2CppCodeGenWriteBarrier((&___currentRegion_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1B_10() { return static_cast<int32_t>(offsetof(RegionInfo_t2026000002_StaticFields, ___U3CU3Ef__switchU24map1B_10)); }
	inline Dictionary_2_t2081138196 * get_U3CU3Ef__switchU24map1B_10() const { return ___U3CU3Ef__switchU24map1B_10; }
	inline Dictionary_2_t2081138196 ** get_address_of_U3CU3Ef__switchU24map1B_10() { return &___U3CU3Ef__switchU24map1B_10; }
	inline void set_U3CU3Ef__switchU24map1B_10(Dictionary_2_t2081138196 * value)
	{
		___U3CU3Ef__switchU24map1B_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1B_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGIONINFO_T2026000002_H
#ifndef STREAMASYNCRESULT_T506316490_H
#define STREAMASYNCRESULT_T506316490_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StreamAsyncResult
struct  StreamAsyncResult_t506316490  : public RuntimeObject
{
public:
	// System.Object System.IO.StreamAsyncResult::state
	RuntimeObject * ___state_0;
	// System.Boolean System.IO.StreamAsyncResult::completed
	bool ___completed_1;
	// System.Boolean System.IO.StreamAsyncResult::done
	bool ___done_2;
	// System.Exception System.IO.StreamAsyncResult::exc
	Exception_t1123517734 * ___exc_3;
	// System.Int32 System.IO.StreamAsyncResult::nbytes
	int32_t ___nbytes_4;
	// System.Threading.ManualResetEvent System.IO.StreamAsyncResult::wh
	ManualResetEvent_t3258174674 * ___wh_5;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(StreamAsyncResult_t506316490, ___state_0)); }
	inline RuntimeObject * get_state_0() const { return ___state_0; }
	inline RuntimeObject ** get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(RuntimeObject * value)
	{
		___state_0 = value;
		Il2CppCodeGenWriteBarrier((&___state_0), value);
	}

	inline static int32_t get_offset_of_completed_1() { return static_cast<int32_t>(offsetof(StreamAsyncResult_t506316490, ___completed_1)); }
	inline bool get_completed_1() const { return ___completed_1; }
	inline bool* get_address_of_completed_1() { return &___completed_1; }
	inline void set_completed_1(bool value)
	{
		___completed_1 = value;
	}

	inline static int32_t get_offset_of_done_2() { return static_cast<int32_t>(offsetof(StreamAsyncResult_t506316490, ___done_2)); }
	inline bool get_done_2() const { return ___done_2; }
	inline bool* get_address_of_done_2() { return &___done_2; }
	inline void set_done_2(bool value)
	{
		___done_2 = value;
	}

	inline static int32_t get_offset_of_exc_3() { return static_cast<int32_t>(offsetof(StreamAsyncResult_t506316490, ___exc_3)); }
	inline Exception_t1123517734 * get_exc_3() const { return ___exc_3; }
	inline Exception_t1123517734 ** get_address_of_exc_3() { return &___exc_3; }
	inline void set_exc_3(Exception_t1123517734 * value)
	{
		___exc_3 = value;
		Il2CppCodeGenWriteBarrier((&___exc_3), value);
	}

	inline static int32_t get_offset_of_nbytes_4() { return static_cast<int32_t>(offsetof(StreamAsyncResult_t506316490, ___nbytes_4)); }
	inline int32_t get_nbytes_4() const { return ___nbytes_4; }
	inline int32_t* get_address_of_nbytes_4() { return &___nbytes_4; }
	inline void set_nbytes_4(int32_t value)
	{
		___nbytes_4 = value;
	}

	inline static int32_t get_offset_of_wh_5() { return static_cast<int32_t>(offsetof(StreamAsyncResult_t506316490, ___wh_5)); }
	inline ManualResetEvent_t3258174674 * get_wh_5() const { return ___wh_5; }
	inline ManualResetEvent_t3258174674 ** get_address_of_wh_5() { return &___wh_5; }
	inline void set_wh_5(ManualResetEvent_t3258174674 * value)
	{
		___wh_5 = value;
		Il2CppCodeGenWriteBarrier((&___wh_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMASYNCRESULT_T506316490_H
#ifndef VALUETYPE_T1386950462_H
#define VALUETYPE_T1386950462_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t1386950462  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t1386950462_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t1386950462_marshaled_com
{
};
#endif // VALUETYPE_T1386950462_H
#ifndef FILE_T351562146_H
#define FILE_T351562146_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.File
struct  File_t351562146  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILE_T351562146_H
#ifndef BINARYREADER_T3828778136_H
#define BINARYREADER_T3828778136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.BinaryReader
struct  BinaryReader_t3828778136  : public RuntimeObject
{
public:
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_t403697452 * ___m_stream_0;
	// System.Text.Encoding System.IO.BinaryReader::m_encoding
	Encoding_t3922168092 * ___m_encoding_1;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_t1979668241* ___m_buffer_2;
	// System.Text.Decoder System.IO.BinaryReader::decoder
	Decoder_t3172032832 * ___decoder_3;
	// System.Char[] System.IO.BinaryReader::charBuffer
	CharU5BU5D_t1224129074* ___charBuffer_4;
	// System.Boolean System.IO.BinaryReader::m_disposed
	bool ___m_disposed_5;

public:
	inline static int32_t get_offset_of_m_stream_0() { return static_cast<int32_t>(offsetof(BinaryReader_t3828778136, ___m_stream_0)); }
	inline Stream_t403697452 * get_m_stream_0() const { return ___m_stream_0; }
	inline Stream_t403697452 ** get_address_of_m_stream_0() { return &___m_stream_0; }
	inline void set_m_stream_0(Stream_t403697452 * value)
	{
		___m_stream_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_stream_0), value);
	}

	inline static int32_t get_offset_of_m_encoding_1() { return static_cast<int32_t>(offsetof(BinaryReader_t3828778136, ___m_encoding_1)); }
	inline Encoding_t3922168092 * get_m_encoding_1() const { return ___m_encoding_1; }
	inline Encoding_t3922168092 ** get_address_of_m_encoding_1() { return &___m_encoding_1; }
	inline void set_m_encoding_1(Encoding_t3922168092 * value)
	{
		___m_encoding_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_encoding_1), value);
	}

	inline static int32_t get_offset_of_m_buffer_2() { return static_cast<int32_t>(offsetof(BinaryReader_t3828778136, ___m_buffer_2)); }
	inline ByteU5BU5D_t1979668241* get_m_buffer_2() const { return ___m_buffer_2; }
	inline ByteU5BU5D_t1979668241** get_address_of_m_buffer_2() { return &___m_buffer_2; }
	inline void set_m_buffer_2(ByteU5BU5D_t1979668241* value)
	{
		___m_buffer_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_buffer_2), value);
	}

	inline static int32_t get_offset_of_decoder_3() { return static_cast<int32_t>(offsetof(BinaryReader_t3828778136, ___decoder_3)); }
	inline Decoder_t3172032832 * get_decoder_3() const { return ___decoder_3; }
	inline Decoder_t3172032832 ** get_address_of_decoder_3() { return &___decoder_3; }
	inline void set_decoder_3(Decoder_t3172032832 * value)
	{
		___decoder_3 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_3), value);
	}

	inline static int32_t get_offset_of_charBuffer_4() { return static_cast<int32_t>(offsetof(BinaryReader_t3828778136, ___charBuffer_4)); }
	inline CharU5BU5D_t1224129074* get_charBuffer_4() const { return ___charBuffer_4; }
	inline CharU5BU5D_t1224129074** get_address_of_charBuffer_4() { return &___charBuffer_4; }
	inline void set_charBuffer_4(CharU5BU5D_t1224129074* value)
	{
		___charBuffer_4 = value;
		Il2CppCodeGenWriteBarrier((&___charBuffer_4), value);
	}

	inline static int32_t get_offset_of_m_disposed_5() { return static_cast<int32_t>(offsetof(BinaryReader_t3828778136, ___m_disposed_5)); }
	inline bool get_m_disposed_5() const { return ___m_disposed_5; }
	inline bool* get_address_of_m_disposed_5() { return &___m_disposed_5; }
	inline void set_m_disposed_5(bool value)
	{
		___m_disposed_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYREADER_T3828778136_H
#ifndef DIRECTORY_T3773430507_H
#define DIRECTORY_T3773430507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Directory
struct  Directory_t3773430507  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIRECTORY_T3773430507_H
#ifndef EXCEPTION_T1123517734_H
#define EXCEPTION_T1123517734_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t1123517734  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t620782688* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t1123517734 * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t1123517734, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t620782688* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t620782688** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t620782688* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t1123517734, ___inner_exception_1)); }
	inline Exception_t1123517734 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t1123517734 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t1123517734 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t1123517734, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t1123517734, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t1123517734, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t1123517734, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t1123517734, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t1123517734, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t1123517734, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t1123517734, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t1123517734, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T1123517734_H
#ifndef CCMATH_T2576214750_H
#define CCMATH_T2576214750_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CCMath
struct  CCMath_t2576214750  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CCMATH_T2576214750_H
#ifndef CCFIXED_T8946670_H
#define CCFIXED_T8946670_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CCFixed
struct  CCFixed_t8946670  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CCFIXED_T8946670_H
#ifndef STACKTRACE_T3520982761_H
#define STACKTRACE_T3520982761_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.StackTrace
struct  StackTrace_t3520982761  : public RuntimeObject
{
public:
	// System.Diagnostics.StackFrame[] System.Diagnostics.StackTrace::frames
	StackFrameU5BU5D_t3663984227* ___frames_1;
	// System.Boolean System.Diagnostics.StackTrace::debug_info
	bool ___debug_info_2;

public:
	inline static int32_t get_offset_of_frames_1() { return static_cast<int32_t>(offsetof(StackTrace_t3520982761, ___frames_1)); }
	inline StackFrameU5BU5D_t3663984227* get_frames_1() const { return ___frames_1; }
	inline StackFrameU5BU5D_t3663984227** get_address_of_frames_1() { return &___frames_1; }
	inline void set_frames_1(StackFrameU5BU5D_t3663984227* value)
	{
		___frames_1 = value;
		Il2CppCodeGenWriteBarrier((&___frames_1), value);
	}

	inline static int32_t get_offset_of_debug_info_2() { return static_cast<int32_t>(offsetof(StackTrace_t3520982761, ___debug_info_2)); }
	inline bool get_debug_info_2() const { return ___debug_info_2; }
	inline bool* get_address_of_debug_info_2() { return &___debug_info_2; }
	inline void set_debug_info_2(bool value)
	{
		___debug_info_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKTRACE_T3520982761_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef STREAM_T403697452_H
#define STREAM_T403697452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_t403697452  : public RuntimeObject
{
public:

public:
};

struct Stream_t403697452_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t403697452 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(Stream_t403697452_StaticFields, ___Null_0)); }
	inline Stream_t403697452 * get_Null_0() const { return ___Null_0; }
	inline Stream_t403697452 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(Stream_t403697452 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_T403697452_H
#ifndef STACK_T3341244347_H
#define STACK_T3341244347_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Stack
struct  Stack_t3341244347  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.Stack::contents
	ObjectU5BU5D_t4013022837* ___contents_0;
	// System.Int32 System.Collections.Stack::current
	int32_t ___current_1;
	// System.Int32 System.Collections.Stack::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Stack::capacity
	int32_t ___capacity_3;
	// System.Int32 System.Collections.Stack::modCount
	int32_t ___modCount_4;

public:
	inline static int32_t get_offset_of_contents_0() { return static_cast<int32_t>(offsetof(Stack_t3341244347, ___contents_0)); }
	inline ObjectU5BU5D_t4013022837* get_contents_0() const { return ___contents_0; }
	inline ObjectU5BU5D_t4013022837** get_address_of_contents_0() { return &___contents_0; }
	inline void set_contents_0(ObjectU5BU5D_t4013022837* value)
	{
		___contents_0 = value;
		Il2CppCodeGenWriteBarrier((&___contents_0), value);
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(Stack_t3341244347, ___current_1)); }
	inline int32_t get_current_1() const { return ___current_1; }
	inline int32_t* get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(int32_t value)
	{
		___current_1 = value;
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Stack_t3341244347, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_capacity_3() { return static_cast<int32_t>(offsetof(Stack_t3341244347, ___capacity_3)); }
	inline int32_t get_capacity_3() const { return ___capacity_3; }
	inline int32_t* get_address_of_capacity_3() { return &___capacity_3; }
	inline void set_capacity_3(int32_t value)
	{
		___capacity_3 = value;
	}

	inline static int32_t get_offset_of_modCount_4() { return static_cast<int32_t>(offsetof(Stack_t3341244347, ___modCount_4)); }
	inline int32_t get_modCount_4() const { return ___modCount_4; }
	inline int32_t* get_address_of_modCount_4() { return &___modCount_4; }
	inline void set_modCount_4(int32_t value)
	{
		___modCount_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACK_T3341244347_H
#ifndef ENUMERATOR_T3840077057_H
#define ENUMERATOR_T3840077057_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Stack/Enumerator
struct  Enumerator_t3840077057  : public RuntimeObject
{
public:
	// System.Collections.Stack System.Collections.Stack/Enumerator::stack
	Stack_t3341244347 * ___stack_0;
	// System.Int32 System.Collections.Stack/Enumerator::modCount
	int32_t ___modCount_1;
	// System.Int32 System.Collections.Stack/Enumerator::current
	int32_t ___current_2;

public:
	inline static int32_t get_offset_of_stack_0() { return static_cast<int32_t>(offsetof(Enumerator_t3840077057, ___stack_0)); }
	inline Stack_t3341244347 * get_stack_0() const { return ___stack_0; }
	inline Stack_t3341244347 ** get_address_of_stack_0() { return &___stack_0; }
	inline void set_stack_0(Stack_t3341244347 * value)
	{
		___stack_0 = value;
		Il2CppCodeGenWriteBarrier((&___stack_0), value);
	}

	inline static int32_t get_offset_of_modCount_1() { return static_cast<int32_t>(offsetof(Enumerator_t3840077057, ___modCount_1)); }
	inline int32_t get_modCount_1() const { return ___modCount_1; }
	inline int32_t* get_address_of_modCount_1() { return &___modCount_1; }
	inline void set_modCount_1(int32_t value)
	{
		___modCount_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Enumerator_t3840077057, ___current_2)); }
	inline int32_t get_current_2() const { return ___current_2; }
	inline int32_t* get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(int32_t value)
	{
		___current_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3840077057_H
#ifndef SEARCHPATTERN_T4063995017_H
#define SEARCHPATTERN_T4063995017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.SearchPattern
struct  SearchPattern_t4063995017  : public RuntimeObject
{
public:

public:
};

struct SearchPattern_t4063995017_StaticFields
{
public:
	// System.Char[] System.IO.SearchPattern::WildcardChars
	CharU5BU5D_t1224129074* ___WildcardChars_0;
	// System.Char[] System.IO.SearchPattern::InvalidChars
	CharU5BU5D_t1224129074* ___InvalidChars_1;

public:
	inline static int32_t get_offset_of_WildcardChars_0() { return static_cast<int32_t>(offsetof(SearchPattern_t4063995017_StaticFields, ___WildcardChars_0)); }
	inline CharU5BU5D_t1224129074* get_WildcardChars_0() const { return ___WildcardChars_0; }
	inline CharU5BU5D_t1224129074** get_address_of_WildcardChars_0() { return &___WildcardChars_0; }
	inline void set_WildcardChars_0(CharU5BU5D_t1224129074* value)
	{
		___WildcardChars_0 = value;
		Il2CppCodeGenWriteBarrier((&___WildcardChars_0), value);
	}

	inline static int32_t get_offset_of_InvalidChars_1() { return static_cast<int32_t>(offsetof(SearchPattern_t4063995017_StaticFields, ___InvalidChars_1)); }
	inline CharU5BU5D_t1224129074* get_InvalidChars_1() const { return ___InvalidChars_1; }
	inline CharU5BU5D_t1224129074** get_address_of_InvalidChars_1() { return &___InvalidChars_1; }
	inline void set_InvalidChars_1(CharU5BU5D_t1224129074* value)
	{
		___InvalidChars_1 = value;
		Il2CppCodeGenWriteBarrier((&___InvalidChars_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SEARCHPATTERN_T4063995017_H
#ifndef CALENDAR_T762697739_H
#define CALENDAR_T762697739_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.Calendar
struct  Calendar_t762697739  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.Calendar::m_isReadOnly
	bool ___m_isReadOnly_0;
	// System.Int32 System.Globalization.Calendar::twoDigitYearMax
	int32_t ___twoDigitYearMax_1;
	// System.String[] System.Globalization.Calendar::M_AbbrEraNames
	StringU5BU5D_t3875140506* ___M_AbbrEraNames_2;
	// System.String[] System.Globalization.Calendar::M_EraNames
	StringU5BU5D_t3875140506* ___M_EraNames_3;

public:
	inline static int32_t get_offset_of_m_isReadOnly_0() { return static_cast<int32_t>(offsetof(Calendar_t762697739, ___m_isReadOnly_0)); }
	inline bool get_m_isReadOnly_0() const { return ___m_isReadOnly_0; }
	inline bool* get_address_of_m_isReadOnly_0() { return &___m_isReadOnly_0; }
	inline void set_m_isReadOnly_0(bool value)
	{
		___m_isReadOnly_0 = value;
	}

	inline static int32_t get_offset_of_twoDigitYearMax_1() { return static_cast<int32_t>(offsetof(Calendar_t762697739, ___twoDigitYearMax_1)); }
	inline int32_t get_twoDigitYearMax_1() const { return ___twoDigitYearMax_1; }
	inline int32_t* get_address_of_twoDigitYearMax_1() { return &___twoDigitYearMax_1; }
	inline void set_twoDigitYearMax_1(int32_t value)
	{
		___twoDigitYearMax_1 = value;
	}

	inline static int32_t get_offset_of_M_AbbrEraNames_2() { return static_cast<int32_t>(offsetof(Calendar_t762697739, ___M_AbbrEraNames_2)); }
	inline StringU5BU5D_t3875140506* get_M_AbbrEraNames_2() const { return ___M_AbbrEraNames_2; }
	inline StringU5BU5D_t3875140506** get_address_of_M_AbbrEraNames_2() { return &___M_AbbrEraNames_2; }
	inline void set_M_AbbrEraNames_2(StringU5BU5D_t3875140506* value)
	{
		___M_AbbrEraNames_2 = value;
		Il2CppCodeGenWriteBarrier((&___M_AbbrEraNames_2), value);
	}

	inline static int32_t get_offset_of_M_EraNames_3() { return static_cast<int32_t>(offsetof(Calendar_t762697739, ___M_EraNames_3)); }
	inline StringU5BU5D_t3875140506* get_M_EraNames_3() const { return ___M_EraNames_3; }
	inline StringU5BU5D_t3875140506** get_address_of_M_EraNames_3() { return &___M_EraNames_3; }
	inline void set_M_EraNames_3(StringU5BU5D_t3875140506* value)
	{
		___M_EraNames_3 = value;
		Il2CppCodeGenWriteBarrier((&___M_EraNames_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALENDAR_T762697739_H
#ifndef TEXTREADER_T2183356407_H
#define TEXTREADER_T2183356407_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextReader
struct  TextReader_t2183356407  : public RuntimeObject
{
public:

public:
};

struct TextReader_t2183356407_StaticFields
{
public:
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t2183356407 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(TextReader_t2183356407_StaticFields, ___Null_0)); }
	inline TextReader_t2183356407 * get_Null_0() const { return ___Null_0; }
	inline TextReader_t2183356407 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(TextReader_t2183356407 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTREADER_T2183356407_H
#ifndef PATH_T1696685898_H
#define PATH_T1696685898_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Path
struct  Path_t1696685898  : public RuntimeObject
{
public:

public:
};

struct Path_t1696685898_StaticFields
{
public:
	// System.Char[] System.IO.Path::InvalidPathChars
	CharU5BU5D_t1224129074* ___InvalidPathChars_0;
	// System.Char System.IO.Path::AltDirectorySeparatorChar
	Il2CppChar ___AltDirectorySeparatorChar_1;
	// System.Char System.IO.Path::DirectorySeparatorChar
	Il2CppChar ___DirectorySeparatorChar_2;
	// System.Char System.IO.Path::PathSeparator
	Il2CppChar ___PathSeparator_3;
	// System.String System.IO.Path::DirectorySeparatorStr
	String_t* ___DirectorySeparatorStr_4;
	// System.Char System.IO.Path::VolumeSeparatorChar
	Il2CppChar ___VolumeSeparatorChar_5;
	// System.Char[] System.IO.Path::PathSeparatorChars
	CharU5BU5D_t1224129074* ___PathSeparatorChars_6;
	// System.Boolean System.IO.Path::dirEqualsVolume
	bool ___dirEqualsVolume_7;

public:
	inline static int32_t get_offset_of_InvalidPathChars_0() { return static_cast<int32_t>(offsetof(Path_t1696685898_StaticFields, ___InvalidPathChars_0)); }
	inline CharU5BU5D_t1224129074* get_InvalidPathChars_0() const { return ___InvalidPathChars_0; }
	inline CharU5BU5D_t1224129074** get_address_of_InvalidPathChars_0() { return &___InvalidPathChars_0; }
	inline void set_InvalidPathChars_0(CharU5BU5D_t1224129074* value)
	{
		___InvalidPathChars_0 = value;
		Il2CppCodeGenWriteBarrier((&___InvalidPathChars_0), value);
	}

	inline static int32_t get_offset_of_AltDirectorySeparatorChar_1() { return static_cast<int32_t>(offsetof(Path_t1696685898_StaticFields, ___AltDirectorySeparatorChar_1)); }
	inline Il2CppChar get_AltDirectorySeparatorChar_1() const { return ___AltDirectorySeparatorChar_1; }
	inline Il2CppChar* get_address_of_AltDirectorySeparatorChar_1() { return &___AltDirectorySeparatorChar_1; }
	inline void set_AltDirectorySeparatorChar_1(Il2CppChar value)
	{
		___AltDirectorySeparatorChar_1 = value;
	}

	inline static int32_t get_offset_of_DirectorySeparatorChar_2() { return static_cast<int32_t>(offsetof(Path_t1696685898_StaticFields, ___DirectorySeparatorChar_2)); }
	inline Il2CppChar get_DirectorySeparatorChar_2() const { return ___DirectorySeparatorChar_2; }
	inline Il2CppChar* get_address_of_DirectorySeparatorChar_2() { return &___DirectorySeparatorChar_2; }
	inline void set_DirectorySeparatorChar_2(Il2CppChar value)
	{
		___DirectorySeparatorChar_2 = value;
	}

	inline static int32_t get_offset_of_PathSeparator_3() { return static_cast<int32_t>(offsetof(Path_t1696685898_StaticFields, ___PathSeparator_3)); }
	inline Il2CppChar get_PathSeparator_3() const { return ___PathSeparator_3; }
	inline Il2CppChar* get_address_of_PathSeparator_3() { return &___PathSeparator_3; }
	inline void set_PathSeparator_3(Il2CppChar value)
	{
		___PathSeparator_3 = value;
	}

	inline static int32_t get_offset_of_DirectorySeparatorStr_4() { return static_cast<int32_t>(offsetof(Path_t1696685898_StaticFields, ___DirectorySeparatorStr_4)); }
	inline String_t* get_DirectorySeparatorStr_4() const { return ___DirectorySeparatorStr_4; }
	inline String_t** get_address_of_DirectorySeparatorStr_4() { return &___DirectorySeparatorStr_4; }
	inline void set_DirectorySeparatorStr_4(String_t* value)
	{
		___DirectorySeparatorStr_4 = value;
		Il2CppCodeGenWriteBarrier((&___DirectorySeparatorStr_4), value);
	}

	inline static int32_t get_offset_of_VolumeSeparatorChar_5() { return static_cast<int32_t>(offsetof(Path_t1696685898_StaticFields, ___VolumeSeparatorChar_5)); }
	inline Il2CppChar get_VolumeSeparatorChar_5() const { return ___VolumeSeparatorChar_5; }
	inline Il2CppChar* get_address_of_VolumeSeparatorChar_5() { return &___VolumeSeparatorChar_5; }
	inline void set_VolumeSeparatorChar_5(Il2CppChar value)
	{
		___VolumeSeparatorChar_5 = value;
	}

	inline static int32_t get_offset_of_PathSeparatorChars_6() { return static_cast<int32_t>(offsetof(Path_t1696685898_StaticFields, ___PathSeparatorChars_6)); }
	inline CharU5BU5D_t1224129074* get_PathSeparatorChars_6() const { return ___PathSeparatorChars_6; }
	inline CharU5BU5D_t1224129074** get_address_of_PathSeparatorChars_6() { return &___PathSeparatorChars_6; }
	inline void set_PathSeparatorChars_6(CharU5BU5D_t1224129074* value)
	{
		___PathSeparatorChars_6 = value;
		Il2CppCodeGenWriteBarrier((&___PathSeparatorChars_6), value);
	}

	inline static int32_t get_offset_of_dirEqualsVolume_7() { return static_cast<int32_t>(offsetof(Path_t1696685898_StaticFields, ___dirEqualsVolume_7)); }
	inline bool get_dirEqualsVolume_7() const { return ___dirEqualsVolume_7; }
	inline bool* get_address_of_dirEqualsVolume_7() { return &___dirEqualsVolume_7; }
	inline void set_dirEqualsVolume_7(bool value)
	{
		___dirEqualsVolume_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PATH_T1696685898_H
#ifndef TEXTWRITER_T2766919390_H
#define TEXTWRITER_T2766919390_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextWriter
struct  TextWriter_t2766919390  : public RuntimeObject
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t1224129074* ___CoreNewLine_0;

public:
	inline static int32_t get_offset_of_CoreNewLine_0() { return static_cast<int32_t>(offsetof(TextWriter_t2766919390, ___CoreNewLine_0)); }
	inline CharU5BU5D_t1224129074* get_CoreNewLine_0() const { return ___CoreNewLine_0; }
	inline CharU5BU5D_t1224129074** get_address_of_CoreNewLine_0() { return &___CoreNewLine_0; }
	inline void set_CoreNewLine_0(CharU5BU5D_t1224129074* value)
	{
		___CoreNewLine_0 = value;
		Il2CppCodeGenWriteBarrier((&___CoreNewLine_0), value);
	}
};

struct TextWriter_t2766919390_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t2766919390 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t2766919390_StaticFields, ___Null_1)); }
	inline TextWriter_t2766919390 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t2766919390 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t2766919390 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((&___Null_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTWRITER_T2766919390_H
#ifndef STACKFRAME_T4182201286_H
#define STACKFRAME_T4182201286_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.StackFrame
struct  StackFrame_t4182201286  : public RuntimeObject
{
public:
	// System.Int32 System.Diagnostics.StackFrame::ilOffset
	int32_t ___ilOffset_1;
	// System.Int32 System.Diagnostics.StackFrame::nativeOffset
	int32_t ___nativeOffset_2;
	// System.Reflection.MethodBase System.Diagnostics.StackFrame::methodBase
	MethodBase_t1050654022 * ___methodBase_3;
	// System.String System.Diagnostics.StackFrame::fileName
	String_t* ___fileName_4;
	// System.Int32 System.Diagnostics.StackFrame::lineNumber
	int32_t ___lineNumber_5;
	// System.Int32 System.Diagnostics.StackFrame::columnNumber
	int32_t ___columnNumber_6;
	// System.String System.Diagnostics.StackFrame::internalMethodName
	String_t* ___internalMethodName_7;

public:
	inline static int32_t get_offset_of_ilOffset_1() { return static_cast<int32_t>(offsetof(StackFrame_t4182201286, ___ilOffset_1)); }
	inline int32_t get_ilOffset_1() const { return ___ilOffset_1; }
	inline int32_t* get_address_of_ilOffset_1() { return &___ilOffset_1; }
	inline void set_ilOffset_1(int32_t value)
	{
		___ilOffset_1 = value;
	}

	inline static int32_t get_offset_of_nativeOffset_2() { return static_cast<int32_t>(offsetof(StackFrame_t4182201286, ___nativeOffset_2)); }
	inline int32_t get_nativeOffset_2() const { return ___nativeOffset_2; }
	inline int32_t* get_address_of_nativeOffset_2() { return &___nativeOffset_2; }
	inline void set_nativeOffset_2(int32_t value)
	{
		___nativeOffset_2 = value;
	}

	inline static int32_t get_offset_of_methodBase_3() { return static_cast<int32_t>(offsetof(StackFrame_t4182201286, ___methodBase_3)); }
	inline MethodBase_t1050654022 * get_methodBase_3() const { return ___methodBase_3; }
	inline MethodBase_t1050654022 ** get_address_of_methodBase_3() { return &___methodBase_3; }
	inline void set_methodBase_3(MethodBase_t1050654022 * value)
	{
		___methodBase_3 = value;
		Il2CppCodeGenWriteBarrier((&___methodBase_3), value);
	}

	inline static int32_t get_offset_of_fileName_4() { return static_cast<int32_t>(offsetof(StackFrame_t4182201286, ___fileName_4)); }
	inline String_t* get_fileName_4() const { return ___fileName_4; }
	inline String_t** get_address_of_fileName_4() { return &___fileName_4; }
	inline void set_fileName_4(String_t* value)
	{
		___fileName_4 = value;
		Il2CppCodeGenWriteBarrier((&___fileName_4), value);
	}

	inline static int32_t get_offset_of_lineNumber_5() { return static_cast<int32_t>(offsetof(StackFrame_t4182201286, ___lineNumber_5)); }
	inline int32_t get_lineNumber_5() const { return ___lineNumber_5; }
	inline int32_t* get_address_of_lineNumber_5() { return &___lineNumber_5; }
	inline void set_lineNumber_5(int32_t value)
	{
		___lineNumber_5 = value;
	}

	inline static int32_t get_offset_of_columnNumber_6() { return static_cast<int32_t>(offsetof(StackFrame_t4182201286, ___columnNumber_6)); }
	inline int32_t get_columnNumber_6() const { return ___columnNumber_6; }
	inline int32_t* get_address_of_columnNumber_6() { return &___columnNumber_6; }
	inline void set_columnNumber_6(int32_t value)
	{
		___columnNumber_6 = value;
	}

	inline static int32_t get_offset_of_internalMethodName_7() { return static_cast<int32_t>(offsetof(StackFrame_t4182201286, ___internalMethodName_7)); }
	inline String_t* get_internalMethodName_7() const { return ___internalMethodName_7; }
	inline String_t** get_address_of_internalMethodName_7() { return &___internalMethodName_7; }
	inline void set_internalMethodName_7(String_t* value)
	{
		___internalMethodName_7 = value;
		Il2CppCodeGenWriteBarrier((&___internalMethodName_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKFRAME_T4182201286_H
#ifndef ATTRIBUTE_T3130690179_H
#define ATTRIBUTE_T3130690179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t3130690179  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T3130690179_H
#ifndef NULLTEXTREADER_T1435076756_H
#define NULLTEXTREADER_T1435076756_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextReader/NullTextReader
struct  NullTextReader_t1435076756  : public TextReader_t2183356407
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLTEXTREADER_T1435076756_H
#ifndef LABELFIXUP_T2539328613_H
#define LABELFIXUP_T2539328613_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ILGenerator/LabelFixup
struct  LabelFixup_t2539328613 
{
public:
	// System.Int32 System.Reflection.Emit.ILGenerator/LabelFixup::offset
	int32_t ___offset_0;
	// System.Int32 System.Reflection.Emit.ILGenerator/LabelFixup::pos
	int32_t ___pos_1;
	// System.Int32 System.Reflection.Emit.ILGenerator/LabelFixup::label_idx
	int32_t ___label_idx_2;

public:
	inline static int32_t get_offset_of_offset_0() { return static_cast<int32_t>(offsetof(LabelFixup_t2539328613, ___offset_0)); }
	inline int32_t get_offset_0() const { return ___offset_0; }
	inline int32_t* get_address_of_offset_0() { return &___offset_0; }
	inline void set_offset_0(int32_t value)
	{
		___offset_0 = value;
	}

	inline static int32_t get_offset_of_pos_1() { return static_cast<int32_t>(offsetof(LabelFixup_t2539328613, ___pos_1)); }
	inline int32_t get_pos_1() const { return ___pos_1; }
	inline int32_t* get_address_of_pos_1() { return &___pos_1; }
	inline void set_pos_1(int32_t value)
	{
		___pos_1 = value;
	}

	inline static int32_t get_offset_of_label_idx_2() { return static_cast<int32_t>(offsetof(LabelFixup_t2539328613, ___label_idx_2)); }
	inline int32_t get_label_idx_2() const { return ___label_idx_2; }
	inline int32_t* get_address_of_label_idx_2() { return &___label_idx_2; }
	inline void set_label_idx_2(int32_t value)
	{
		___label_idx_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LABELFIXUP_T2539328613_H
#ifndef SYNCHRONIZEDREADER_T738172272_H
#define SYNCHRONIZEDREADER_T738172272_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.SynchronizedReader
struct  SynchronizedReader_t738172272  : public TextReader_t2183356407
{
public:
	// System.IO.TextReader System.IO.SynchronizedReader::reader
	TextReader_t2183356407 * ___reader_1;

public:
	inline static int32_t get_offset_of_reader_1() { return static_cast<int32_t>(offsetof(SynchronizedReader_t738172272, ___reader_1)); }
	inline TextReader_t2183356407 * get_reader_1() const { return ___reader_1; }
	inline TextReader_t2183356407 ** get_address_of_reader_1() { return &___reader_1; }
	inline void set_reader_1(TextReader_t2183356407 * value)
	{
		___reader_1 = value;
		Il2CppCodeGenWriteBarrier((&___reader_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZEDREADER_T738172272_H
#ifndef STRINGREADER_T872515079_H
#define STRINGREADER_T872515079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StringReader
struct  StringReader_t872515079  : public TextReader_t2183356407
{
public:
	// System.String System.IO.StringReader::source
	String_t* ___source_1;
	// System.Int32 System.IO.StringReader::nextChar
	int32_t ___nextChar_2;
	// System.Int32 System.IO.StringReader::sourceLength
	int32_t ___sourceLength_3;

public:
	inline static int32_t get_offset_of_source_1() { return static_cast<int32_t>(offsetof(StringReader_t872515079, ___source_1)); }
	inline String_t* get_source_1() const { return ___source_1; }
	inline String_t** get_address_of_source_1() { return &___source_1; }
	inline void set_source_1(String_t* value)
	{
		___source_1 = value;
		Il2CppCodeGenWriteBarrier((&___source_1), value);
	}

	inline static int32_t get_offset_of_nextChar_2() { return static_cast<int32_t>(offsetof(StringReader_t872515079, ___nextChar_2)); }
	inline int32_t get_nextChar_2() const { return ___nextChar_2; }
	inline int32_t* get_address_of_nextChar_2() { return &___nextChar_2; }
	inline void set_nextChar_2(int32_t value)
	{
		___nextChar_2 = value;
	}

	inline static int32_t get_offset_of_sourceLength_3() { return static_cast<int32_t>(offsetof(StringReader_t872515079, ___sourceLength_3)); }
	inline int32_t get_sourceLength_3() const { return ___sourceLength_3; }
	inline int32_t* get_address_of_sourceLength_3() { return &___sourceLength_3; }
	inline void set_sourceLength_3(int32_t value)
	{
		___sourceLength_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGREADER_T872515079_H
#ifndef STREAMWRITER_T900566318_H
#define STREAMWRITER_T900566318_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StreamWriter
struct  StreamWriter_t900566318  : public TextWriter_t2766919390
{
public:
	// System.Text.Encoding System.IO.StreamWriter::internalEncoding
	Encoding_t3922168092 * ___internalEncoding_2;
	// System.IO.Stream System.IO.StreamWriter::internalStream
	Stream_t403697452 * ___internalStream_3;
	// System.Boolean System.IO.StreamWriter::iflush
	bool ___iflush_4;
	// System.Byte[] System.IO.StreamWriter::byte_buf
	ByteU5BU5D_t1979668241* ___byte_buf_5;
	// System.Int32 System.IO.StreamWriter::byte_pos
	int32_t ___byte_pos_6;
	// System.Char[] System.IO.StreamWriter::decode_buf
	CharU5BU5D_t1224129074* ___decode_buf_7;
	// System.Int32 System.IO.StreamWriter::decode_pos
	int32_t ___decode_pos_8;
	// System.Boolean System.IO.StreamWriter::DisposedAlready
	bool ___DisposedAlready_9;
	// System.Boolean System.IO.StreamWriter::preamble_done
	bool ___preamble_done_10;

public:
	inline static int32_t get_offset_of_internalEncoding_2() { return static_cast<int32_t>(offsetof(StreamWriter_t900566318, ___internalEncoding_2)); }
	inline Encoding_t3922168092 * get_internalEncoding_2() const { return ___internalEncoding_2; }
	inline Encoding_t3922168092 ** get_address_of_internalEncoding_2() { return &___internalEncoding_2; }
	inline void set_internalEncoding_2(Encoding_t3922168092 * value)
	{
		___internalEncoding_2 = value;
		Il2CppCodeGenWriteBarrier((&___internalEncoding_2), value);
	}

	inline static int32_t get_offset_of_internalStream_3() { return static_cast<int32_t>(offsetof(StreamWriter_t900566318, ___internalStream_3)); }
	inline Stream_t403697452 * get_internalStream_3() const { return ___internalStream_3; }
	inline Stream_t403697452 ** get_address_of_internalStream_3() { return &___internalStream_3; }
	inline void set_internalStream_3(Stream_t403697452 * value)
	{
		___internalStream_3 = value;
		Il2CppCodeGenWriteBarrier((&___internalStream_3), value);
	}

	inline static int32_t get_offset_of_iflush_4() { return static_cast<int32_t>(offsetof(StreamWriter_t900566318, ___iflush_4)); }
	inline bool get_iflush_4() const { return ___iflush_4; }
	inline bool* get_address_of_iflush_4() { return &___iflush_4; }
	inline void set_iflush_4(bool value)
	{
		___iflush_4 = value;
	}

	inline static int32_t get_offset_of_byte_buf_5() { return static_cast<int32_t>(offsetof(StreamWriter_t900566318, ___byte_buf_5)); }
	inline ByteU5BU5D_t1979668241* get_byte_buf_5() const { return ___byte_buf_5; }
	inline ByteU5BU5D_t1979668241** get_address_of_byte_buf_5() { return &___byte_buf_5; }
	inline void set_byte_buf_5(ByteU5BU5D_t1979668241* value)
	{
		___byte_buf_5 = value;
		Il2CppCodeGenWriteBarrier((&___byte_buf_5), value);
	}

	inline static int32_t get_offset_of_byte_pos_6() { return static_cast<int32_t>(offsetof(StreamWriter_t900566318, ___byte_pos_6)); }
	inline int32_t get_byte_pos_6() const { return ___byte_pos_6; }
	inline int32_t* get_address_of_byte_pos_6() { return &___byte_pos_6; }
	inline void set_byte_pos_6(int32_t value)
	{
		___byte_pos_6 = value;
	}

	inline static int32_t get_offset_of_decode_buf_7() { return static_cast<int32_t>(offsetof(StreamWriter_t900566318, ___decode_buf_7)); }
	inline CharU5BU5D_t1224129074* get_decode_buf_7() const { return ___decode_buf_7; }
	inline CharU5BU5D_t1224129074** get_address_of_decode_buf_7() { return &___decode_buf_7; }
	inline void set_decode_buf_7(CharU5BU5D_t1224129074* value)
	{
		___decode_buf_7 = value;
		Il2CppCodeGenWriteBarrier((&___decode_buf_7), value);
	}

	inline static int32_t get_offset_of_decode_pos_8() { return static_cast<int32_t>(offsetof(StreamWriter_t900566318, ___decode_pos_8)); }
	inline int32_t get_decode_pos_8() const { return ___decode_pos_8; }
	inline int32_t* get_address_of_decode_pos_8() { return &___decode_pos_8; }
	inline void set_decode_pos_8(int32_t value)
	{
		___decode_pos_8 = value;
	}

	inline static int32_t get_offset_of_DisposedAlready_9() { return static_cast<int32_t>(offsetof(StreamWriter_t900566318, ___DisposedAlready_9)); }
	inline bool get_DisposedAlready_9() const { return ___DisposedAlready_9; }
	inline bool* get_address_of_DisposedAlready_9() { return &___DisposedAlready_9; }
	inline void set_DisposedAlready_9(bool value)
	{
		___DisposedAlready_9 = value;
	}

	inline static int32_t get_offset_of_preamble_done_10() { return static_cast<int32_t>(offsetof(StreamWriter_t900566318, ___preamble_done_10)); }
	inline bool get_preamble_done_10() const { return ___preamble_done_10; }
	inline bool* get_address_of_preamble_done_10() { return &___preamble_done_10; }
	inline void set_preamble_done_10(bool value)
	{
		___preamble_done_10 = value;
	}
};

struct StreamWriter_t900566318_StaticFields
{
public:
	// System.IO.StreamWriter System.IO.StreamWriter::Null
	StreamWriter_t900566318 * ___Null_11;

public:
	inline static int32_t get_offset_of_Null_11() { return static_cast<int32_t>(offsetof(StreamWriter_t900566318_StaticFields, ___Null_11)); }
	inline StreamWriter_t900566318 * get_Null_11() const { return ___Null_11; }
	inline StreamWriter_t900566318 ** get_address_of_Null_11() { return &___Null_11; }
	inline void set_Null_11(StreamWriter_t900566318 * value)
	{
		___Null_11 = value;
		Il2CppCodeGenWriteBarrier((&___Null_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMWRITER_T900566318_H
#ifndef MEMORYSTREAM_T3268683499_H
#define MEMORYSTREAM_T3268683499_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.MemoryStream
struct  MemoryStream_t3268683499  : public Stream_t403697452
{
public:
	// System.Boolean System.IO.MemoryStream::canWrite
	bool ___canWrite_1;
	// System.Boolean System.IO.MemoryStream::allowGetBuffer
	bool ___allowGetBuffer_2;
	// System.Int32 System.IO.MemoryStream::capacity
	int32_t ___capacity_3;
	// System.Int32 System.IO.MemoryStream::length
	int32_t ___length_4;
	// System.Byte[] System.IO.MemoryStream::internalBuffer
	ByteU5BU5D_t1979668241* ___internalBuffer_5;
	// System.Int32 System.IO.MemoryStream::initialIndex
	int32_t ___initialIndex_6;
	// System.Boolean System.IO.MemoryStream::expandable
	bool ___expandable_7;
	// System.Boolean System.IO.MemoryStream::streamClosed
	bool ___streamClosed_8;
	// System.Int32 System.IO.MemoryStream::position
	int32_t ___position_9;
	// System.Int32 System.IO.MemoryStream::dirty_bytes
	int32_t ___dirty_bytes_10;

public:
	inline static int32_t get_offset_of_canWrite_1() { return static_cast<int32_t>(offsetof(MemoryStream_t3268683499, ___canWrite_1)); }
	inline bool get_canWrite_1() const { return ___canWrite_1; }
	inline bool* get_address_of_canWrite_1() { return &___canWrite_1; }
	inline void set_canWrite_1(bool value)
	{
		___canWrite_1 = value;
	}

	inline static int32_t get_offset_of_allowGetBuffer_2() { return static_cast<int32_t>(offsetof(MemoryStream_t3268683499, ___allowGetBuffer_2)); }
	inline bool get_allowGetBuffer_2() const { return ___allowGetBuffer_2; }
	inline bool* get_address_of_allowGetBuffer_2() { return &___allowGetBuffer_2; }
	inline void set_allowGetBuffer_2(bool value)
	{
		___allowGetBuffer_2 = value;
	}

	inline static int32_t get_offset_of_capacity_3() { return static_cast<int32_t>(offsetof(MemoryStream_t3268683499, ___capacity_3)); }
	inline int32_t get_capacity_3() const { return ___capacity_3; }
	inline int32_t* get_address_of_capacity_3() { return &___capacity_3; }
	inline void set_capacity_3(int32_t value)
	{
		___capacity_3 = value;
	}

	inline static int32_t get_offset_of_length_4() { return static_cast<int32_t>(offsetof(MemoryStream_t3268683499, ___length_4)); }
	inline int32_t get_length_4() const { return ___length_4; }
	inline int32_t* get_address_of_length_4() { return &___length_4; }
	inline void set_length_4(int32_t value)
	{
		___length_4 = value;
	}

	inline static int32_t get_offset_of_internalBuffer_5() { return static_cast<int32_t>(offsetof(MemoryStream_t3268683499, ___internalBuffer_5)); }
	inline ByteU5BU5D_t1979668241* get_internalBuffer_5() const { return ___internalBuffer_5; }
	inline ByteU5BU5D_t1979668241** get_address_of_internalBuffer_5() { return &___internalBuffer_5; }
	inline void set_internalBuffer_5(ByteU5BU5D_t1979668241* value)
	{
		___internalBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((&___internalBuffer_5), value);
	}

	inline static int32_t get_offset_of_initialIndex_6() { return static_cast<int32_t>(offsetof(MemoryStream_t3268683499, ___initialIndex_6)); }
	inline int32_t get_initialIndex_6() const { return ___initialIndex_6; }
	inline int32_t* get_address_of_initialIndex_6() { return &___initialIndex_6; }
	inline void set_initialIndex_6(int32_t value)
	{
		___initialIndex_6 = value;
	}

	inline static int32_t get_offset_of_expandable_7() { return static_cast<int32_t>(offsetof(MemoryStream_t3268683499, ___expandable_7)); }
	inline bool get_expandable_7() const { return ___expandable_7; }
	inline bool* get_address_of_expandable_7() { return &___expandable_7; }
	inline void set_expandable_7(bool value)
	{
		___expandable_7 = value;
	}

	inline static int32_t get_offset_of_streamClosed_8() { return static_cast<int32_t>(offsetof(MemoryStream_t3268683499, ___streamClosed_8)); }
	inline bool get_streamClosed_8() const { return ___streamClosed_8; }
	inline bool* get_address_of_streamClosed_8() { return &___streamClosed_8; }
	inline void set_streamClosed_8(bool value)
	{
		___streamClosed_8 = value;
	}

	inline static int32_t get_offset_of_position_9() { return static_cast<int32_t>(offsetof(MemoryStream_t3268683499, ___position_9)); }
	inline int32_t get_position_9() const { return ___position_9; }
	inline int32_t* get_address_of_position_9() { return &___position_9; }
	inline void set_position_9(int32_t value)
	{
		___position_9 = value;
	}

	inline static int32_t get_offset_of_dirty_bytes_10() { return static_cast<int32_t>(offsetof(MemoryStream_t3268683499, ___dirty_bytes_10)); }
	inline int32_t get_dirty_bytes_10() const { return ___dirty_bytes_10; }
	inline int32_t* get_address_of_dirty_bytes_10() { return &___dirty_bytes_10; }
	inline void set_dirty_bytes_10(int32_t value)
	{
		___dirty_bytes_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMORYSTREAM_T3268683499_H
#ifndef NULLTEXTWRITER_T2759580684_H
#define NULLTEXTWRITER_T2759580684_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextWriter/NullTextWriter
struct  NullTextWriter_t2759580684  : public TextWriter_t2766919390
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLTEXTWRITER_T2759580684_H
#ifndef ENUM_T573785843_H
#define ENUM_T573785843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t573785843  : public ValueType_t1386950462
{
public:

public:
};

struct Enum_t573785843_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t1224129074* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t573785843_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t1224129074* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t1224129074** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t1224129074* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t573785843_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t573785843_marshaled_com
{
};
#endif // ENUM_T573785843_H
#ifndef SYNCHRONIZEDWRITER_T4049806569_H
#define SYNCHRONIZEDWRITER_T4049806569_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.SynchronizedWriter
struct  SynchronizedWriter_t4049806569  : public TextWriter_t2766919390
{
public:
	// System.IO.TextWriter System.IO.SynchronizedWriter::writer
	TextWriter_t2766919390 * ___writer_2;
	// System.Boolean System.IO.SynchronizedWriter::neverClose
	bool ___neverClose_3;

public:
	inline static int32_t get_offset_of_writer_2() { return static_cast<int32_t>(offsetof(SynchronizedWriter_t4049806569, ___writer_2)); }
	inline TextWriter_t2766919390 * get_writer_2() const { return ___writer_2; }
	inline TextWriter_t2766919390 ** get_address_of_writer_2() { return &___writer_2; }
	inline void set_writer_2(TextWriter_t2766919390 * value)
	{
		___writer_2 = value;
		Il2CppCodeGenWriteBarrier((&___writer_2), value);
	}

	inline static int32_t get_offset_of_neverClose_3() { return static_cast<int32_t>(offsetof(SynchronizedWriter_t4049806569, ___neverClose_3)); }
	inline bool get_neverClose_3() const { return ___neverClose_3; }
	inline bool* get_address_of_neverClose_3() { return &___neverClose_3; }
	inline void set_neverClose_3(bool value)
	{
		___neverClose_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZEDWRITER_T4049806569_H
#ifndef NULLSTREAM_T4145547776_H
#define NULLSTREAM_T4145547776_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.NullStream
struct  NullStream_t4145547776  : public Stream_t403697452
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLSTREAM_T4145547776_H
#ifndef ILTOKENINFO_T4293645383_H
#define ILTOKENINFO_T4293645383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ILTokenInfo
struct  ILTokenInfo_t4293645383 
{
public:
	// System.Reflection.MemberInfo System.Reflection.Emit.ILTokenInfo::member
	MemberInfo_t * ___member_0;
	// System.Int32 System.Reflection.Emit.ILTokenInfo::code_pos
	int32_t ___code_pos_1;

public:
	inline static int32_t get_offset_of_member_0() { return static_cast<int32_t>(offsetof(ILTokenInfo_t4293645383, ___member_0)); }
	inline MemberInfo_t * get_member_0() const { return ___member_0; }
	inline MemberInfo_t ** get_address_of_member_0() { return &___member_0; }
	inline void set_member_0(MemberInfo_t * value)
	{
		___member_0 = value;
		Il2CppCodeGenWriteBarrier((&___member_0), value);
	}

	inline static int32_t get_offset_of_code_pos_1() { return static_cast<int32_t>(offsetof(ILTokenInfo_t4293645383, ___code_pos_1)); }
	inline int32_t get_code_pos_1() const { return ___code_pos_1; }
	inline int32_t* get_address_of_code_pos_1() { return &___code_pos_1; }
	inline void set_code_pos_1(int32_t value)
	{
		___code_pos_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.Emit.ILTokenInfo
struct ILTokenInfo_t4293645383_marshaled_pinvoke
{
	MemberInfo_t * ___member_0;
	int32_t ___code_pos_1;
};
// Native definition for COM marshalling of System.Reflection.Emit.ILTokenInfo
struct ILTokenInfo_t4293645383_marshaled_com
{
	MemberInfo_t * ___member_0;
	int32_t ___code_pos_1;
};
#endif // ILTOKENINFO_T4293645383_H
#ifndef INT32_T3124216352_H
#define INT32_T3124216352_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t3124216352 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t3124216352, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T3124216352_H
#ifndef ISOLATEDSTORAGEEXCEPTION_T2123582066_H
#define ISOLATEDSTORAGEEXCEPTION_T2123582066_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.IsolatedStorage.IsolatedStorageException
struct  IsolatedStorageException_t2123582066  : public Exception_t1123517734
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ISOLATEDSTORAGEEXCEPTION_T2123582066_H
#ifndef SLOT_T2990760861_H
#define SLOT_T2990760861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList/Slot
struct  Slot_t2990760861 
{
public:
	// System.Object System.Collections.SortedList/Slot::key
	RuntimeObject * ___key_0;
	// System.Object System.Collections.SortedList/Slot::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(Slot_t2990760861, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(Slot_t2990760861, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Collections.SortedList/Slot
struct Slot_t2990760861_marshaled_pinvoke
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___value_1;
};
// Native definition for COM marshalling of System.Collections.SortedList/Slot
struct Slot_t2990760861_marshaled_com
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___value_1;
};
#endif // SLOT_T2990760861_H
#ifndef METHODBASE_T1050654022_H
#define METHODBASE_T1050654022_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodBase
struct  MethodBase_t1050654022  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODBASE_T1050654022_H
#ifndef SUPPRESSMESSAGEATTRIBUTE_T3081390727_H
#define SUPPRESSMESSAGEATTRIBUTE_T3081390727_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
struct  SuppressMessageAttribute_t3081390727  : public Attribute_t3130690179
{
public:
	// System.String System.Diagnostics.CodeAnalysis.SuppressMessageAttribute::category
	String_t* ___category_0;
	// System.String System.Diagnostics.CodeAnalysis.SuppressMessageAttribute::checkId
	String_t* ___checkId_1;
	// System.String System.Diagnostics.CodeAnalysis.SuppressMessageAttribute::justification
	String_t* ___justification_2;
	// System.String System.Diagnostics.CodeAnalysis.SuppressMessageAttribute::messageId
	String_t* ___messageId_3;
	// System.String System.Diagnostics.CodeAnalysis.SuppressMessageAttribute::scope
	String_t* ___scope_4;
	// System.String System.Diagnostics.CodeAnalysis.SuppressMessageAttribute::target
	String_t* ___target_5;

public:
	inline static int32_t get_offset_of_category_0() { return static_cast<int32_t>(offsetof(SuppressMessageAttribute_t3081390727, ___category_0)); }
	inline String_t* get_category_0() const { return ___category_0; }
	inline String_t** get_address_of_category_0() { return &___category_0; }
	inline void set_category_0(String_t* value)
	{
		___category_0 = value;
		Il2CppCodeGenWriteBarrier((&___category_0), value);
	}

	inline static int32_t get_offset_of_checkId_1() { return static_cast<int32_t>(offsetof(SuppressMessageAttribute_t3081390727, ___checkId_1)); }
	inline String_t* get_checkId_1() const { return ___checkId_1; }
	inline String_t** get_address_of_checkId_1() { return &___checkId_1; }
	inline void set_checkId_1(String_t* value)
	{
		___checkId_1 = value;
		Il2CppCodeGenWriteBarrier((&___checkId_1), value);
	}

	inline static int32_t get_offset_of_justification_2() { return static_cast<int32_t>(offsetof(SuppressMessageAttribute_t3081390727, ___justification_2)); }
	inline String_t* get_justification_2() const { return ___justification_2; }
	inline String_t** get_address_of_justification_2() { return &___justification_2; }
	inline void set_justification_2(String_t* value)
	{
		___justification_2 = value;
		Il2CppCodeGenWriteBarrier((&___justification_2), value);
	}

	inline static int32_t get_offset_of_messageId_3() { return static_cast<int32_t>(offsetof(SuppressMessageAttribute_t3081390727, ___messageId_3)); }
	inline String_t* get_messageId_3() const { return ___messageId_3; }
	inline String_t** get_address_of_messageId_3() { return &___messageId_3; }
	inline void set_messageId_3(String_t* value)
	{
		___messageId_3 = value;
		Il2CppCodeGenWriteBarrier((&___messageId_3), value);
	}

	inline static int32_t get_offset_of_scope_4() { return static_cast<int32_t>(offsetof(SuppressMessageAttribute_t3081390727, ___scope_4)); }
	inline String_t* get_scope_4() const { return ___scope_4; }
	inline String_t** get_address_of_scope_4() { return &___scope_4; }
	inline void set_scope_4(String_t* value)
	{
		___scope_4 = value;
		Il2CppCodeGenWriteBarrier((&___scope_4), value);
	}

	inline static int32_t get_offset_of_target_5() { return static_cast<int32_t>(offsetof(SuppressMessageAttribute_t3081390727, ___target_5)); }
	inline String_t* get_target_5() const { return ___target_5; }
	inline String_t** get_address_of_target_5() { return &___target_5; }
	inline void set_target_5(String_t* value)
	{
		___target_5 = value;
		Il2CppCodeGenWriteBarrier((&___target_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUPPRESSMESSAGEATTRIBUTE_T3081390727_H
#ifndef FIELDINFO_T_H
#define FIELDINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDINFO_T_H
#ifndef DEBUGGERDISPLAYATTRIBUTE_T3742933662_H
#define DEBUGGERDISPLAYATTRIBUTE_T3742933662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.DebuggerDisplayAttribute
struct  DebuggerDisplayAttribute_t3742933662  : public Attribute_t3130690179
{
public:
	// System.String System.Diagnostics.DebuggerDisplayAttribute::value
	String_t* ___value_0;
	// System.String System.Diagnostics.DebuggerDisplayAttribute::type
	String_t* ___type_1;
	// System.String System.Diagnostics.DebuggerDisplayAttribute::name
	String_t* ___name_2;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(DebuggerDisplayAttribute_t3742933662, ___value_0)); }
	inline String_t* get_value_0() const { return ___value_0; }
	inline String_t** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(String_t* value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((&___value_0), value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(DebuggerDisplayAttribute_t3742933662, ___type_1)); }
	inline String_t* get_type_1() const { return ___type_1; }
	inline String_t** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(String_t* value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier((&___type_1), value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(DebuggerDisplayAttribute_t3742933662, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGGERDISPLAYATTRIBUTE_T3742933662_H
#ifndef DEBUGGERNONUSERCODEATTRIBUTE_T3744190064_H
#define DEBUGGERNONUSERCODEATTRIBUTE_T3744190064_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.DebuggerNonUserCodeAttribute
struct  DebuggerNonUserCodeAttribute_t3744190064  : public Attribute_t3130690179
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGGERNONUSERCODEATTRIBUTE_T3744190064_H
#ifndef TIMESPAN_T1843571538_H
#define TIMESPAN_T1843571538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t1843571538 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t1843571538, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t1843571538_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t1843571538  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t1843571538  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t1843571538  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t1843571538_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t1843571538  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t1843571538 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t1843571538  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t1843571538_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t1843571538  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t1843571538 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t1843571538  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t1843571538_StaticFields, ___Zero_2)); }
	inline TimeSpan_t1843571538  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t1843571538 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t1843571538  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T1843571538_H
#ifndef DEBUGGERTYPEPROXYATTRIBUTE_T101457274_H
#define DEBUGGERTYPEPROXYATTRIBUTE_T101457274_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.DebuggerTypeProxyAttribute
struct  DebuggerTypeProxyAttribute_t101457274  : public Attribute_t3130690179
{
public:
	// System.String System.Diagnostics.DebuggerTypeProxyAttribute::proxy_type_name
	String_t* ___proxy_type_name_0;

public:
	inline static int32_t get_offset_of_proxy_type_name_0() { return static_cast<int32_t>(offsetof(DebuggerTypeProxyAttribute_t101457274, ___proxy_type_name_0)); }
	inline String_t* get_proxy_type_name_0() const { return ___proxy_type_name_0; }
	inline String_t** get_address_of_proxy_type_name_0() { return &___proxy_type_name_0; }
	inline void set_proxy_type_name_0(String_t* value)
	{
		___proxy_type_name_0 = value;
		Il2CppCodeGenWriteBarrier((&___proxy_type_name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGGERTYPEPROXYATTRIBUTE_T101457274_H
#ifndef DEBUGGERSTEPTHROUGHATTRIBUTE_T787910407_H
#define DEBUGGERSTEPTHROUGHATTRIBUTE_T787910407_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.DebuggerStepThroughAttribute
struct  DebuggerStepThroughAttribute_t787910407  : public Attribute_t3130690179
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGGERSTEPTHROUGHATTRIBUTE_T787910407_H
#ifndef SYSTEMEXCEPTION_T1024823814_H
#define SYSTEMEXCEPTION_T1024823814_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t1024823814  : public Exception_t1123517734
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T1024823814_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef DATA_T2291962056_H
#define DATA_T2291962056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.TextInfo/Data
struct  Data_t2291962056 
{
public:
	// System.Int32 System.Globalization.TextInfo/Data::ansi
	int32_t ___ansi_0;
	// System.Int32 System.Globalization.TextInfo/Data::ebcdic
	int32_t ___ebcdic_1;
	// System.Int32 System.Globalization.TextInfo/Data::mac
	int32_t ___mac_2;
	// System.Int32 System.Globalization.TextInfo/Data::oem
	int32_t ___oem_3;
	// System.Byte System.Globalization.TextInfo/Data::list_sep
	uint8_t ___list_sep_4;

public:
	inline static int32_t get_offset_of_ansi_0() { return static_cast<int32_t>(offsetof(Data_t2291962056, ___ansi_0)); }
	inline int32_t get_ansi_0() const { return ___ansi_0; }
	inline int32_t* get_address_of_ansi_0() { return &___ansi_0; }
	inline void set_ansi_0(int32_t value)
	{
		___ansi_0 = value;
	}

	inline static int32_t get_offset_of_ebcdic_1() { return static_cast<int32_t>(offsetof(Data_t2291962056, ___ebcdic_1)); }
	inline int32_t get_ebcdic_1() const { return ___ebcdic_1; }
	inline int32_t* get_address_of_ebcdic_1() { return &___ebcdic_1; }
	inline void set_ebcdic_1(int32_t value)
	{
		___ebcdic_1 = value;
	}

	inline static int32_t get_offset_of_mac_2() { return static_cast<int32_t>(offsetof(Data_t2291962056, ___mac_2)); }
	inline int32_t get_mac_2() const { return ___mac_2; }
	inline int32_t* get_address_of_mac_2() { return &___mac_2; }
	inline void set_mac_2(int32_t value)
	{
		___mac_2 = value;
	}

	inline static int32_t get_offset_of_oem_3() { return static_cast<int32_t>(offsetof(Data_t2291962056, ___oem_3)); }
	inline int32_t get_oem_3() const { return ___oem_3; }
	inline int32_t* get_address_of_oem_3() { return &___oem_3; }
	inline void set_oem_3(int32_t value)
	{
		___oem_3 = value;
	}

	inline static int32_t get_offset_of_list_sep_4() { return static_cast<int32_t>(offsetof(Data_t2291962056, ___list_sep_4)); }
	inline uint8_t get_list_sep_4() const { return ___list_sep_4; }
	inline uint8_t* get_address_of_list_sep_4() { return &___list_sep_4; }
	inline void set_list_sep_4(uint8_t value)
	{
		___list_sep_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATA_T2291962056_H
#ifndef VOID_T2089896717_H
#define VOID_T2089896717_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t2089896717 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T2089896717_H
#ifndef STREAMREADER_T4114786898_H
#define STREAMREADER_T4114786898_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StreamReader
struct  StreamReader_t4114786898  : public TextReader_t2183356407
{
public:
	// System.Byte[] System.IO.StreamReader::input_buffer
	ByteU5BU5D_t1979668241* ___input_buffer_1;
	// System.Char[] System.IO.StreamReader::decoded_buffer
	CharU5BU5D_t1224129074* ___decoded_buffer_2;
	// System.Int32 System.IO.StreamReader::decoded_count
	int32_t ___decoded_count_3;
	// System.Int32 System.IO.StreamReader::pos
	int32_t ___pos_4;
	// System.Int32 System.IO.StreamReader::buffer_size
	int32_t ___buffer_size_5;
	// System.Int32 System.IO.StreamReader::do_checks
	int32_t ___do_checks_6;
	// System.Text.Encoding System.IO.StreamReader::encoding
	Encoding_t3922168092 * ___encoding_7;
	// System.Text.Decoder System.IO.StreamReader::decoder
	Decoder_t3172032832 * ___decoder_8;
	// System.IO.Stream System.IO.StreamReader::base_stream
	Stream_t403697452 * ___base_stream_9;
	// System.Boolean System.IO.StreamReader::mayBlock
	bool ___mayBlock_10;
	// System.Text.StringBuilder System.IO.StreamReader::line_builder
	StringBuilder_t438571287 * ___line_builder_11;
	// System.Boolean System.IO.StreamReader::foundCR
	bool ___foundCR_13;

public:
	inline static int32_t get_offset_of_input_buffer_1() { return static_cast<int32_t>(offsetof(StreamReader_t4114786898, ___input_buffer_1)); }
	inline ByteU5BU5D_t1979668241* get_input_buffer_1() const { return ___input_buffer_1; }
	inline ByteU5BU5D_t1979668241** get_address_of_input_buffer_1() { return &___input_buffer_1; }
	inline void set_input_buffer_1(ByteU5BU5D_t1979668241* value)
	{
		___input_buffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___input_buffer_1), value);
	}

	inline static int32_t get_offset_of_decoded_buffer_2() { return static_cast<int32_t>(offsetof(StreamReader_t4114786898, ___decoded_buffer_2)); }
	inline CharU5BU5D_t1224129074* get_decoded_buffer_2() const { return ___decoded_buffer_2; }
	inline CharU5BU5D_t1224129074** get_address_of_decoded_buffer_2() { return &___decoded_buffer_2; }
	inline void set_decoded_buffer_2(CharU5BU5D_t1224129074* value)
	{
		___decoded_buffer_2 = value;
		Il2CppCodeGenWriteBarrier((&___decoded_buffer_2), value);
	}

	inline static int32_t get_offset_of_decoded_count_3() { return static_cast<int32_t>(offsetof(StreamReader_t4114786898, ___decoded_count_3)); }
	inline int32_t get_decoded_count_3() const { return ___decoded_count_3; }
	inline int32_t* get_address_of_decoded_count_3() { return &___decoded_count_3; }
	inline void set_decoded_count_3(int32_t value)
	{
		___decoded_count_3 = value;
	}

	inline static int32_t get_offset_of_pos_4() { return static_cast<int32_t>(offsetof(StreamReader_t4114786898, ___pos_4)); }
	inline int32_t get_pos_4() const { return ___pos_4; }
	inline int32_t* get_address_of_pos_4() { return &___pos_4; }
	inline void set_pos_4(int32_t value)
	{
		___pos_4 = value;
	}

	inline static int32_t get_offset_of_buffer_size_5() { return static_cast<int32_t>(offsetof(StreamReader_t4114786898, ___buffer_size_5)); }
	inline int32_t get_buffer_size_5() const { return ___buffer_size_5; }
	inline int32_t* get_address_of_buffer_size_5() { return &___buffer_size_5; }
	inline void set_buffer_size_5(int32_t value)
	{
		___buffer_size_5 = value;
	}

	inline static int32_t get_offset_of_do_checks_6() { return static_cast<int32_t>(offsetof(StreamReader_t4114786898, ___do_checks_6)); }
	inline int32_t get_do_checks_6() const { return ___do_checks_6; }
	inline int32_t* get_address_of_do_checks_6() { return &___do_checks_6; }
	inline void set_do_checks_6(int32_t value)
	{
		___do_checks_6 = value;
	}

	inline static int32_t get_offset_of_encoding_7() { return static_cast<int32_t>(offsetof(StreamReader_t4114786898, ___encoding_7)); }
	inline Encoding_t3922168092 * get_encoding_7() const { return ___encoding_7; }
	inline Encoding_t3922168092 ** get_address_of_encoding_7() { return &___encoding_7; }
	inline void set_encoding_7(Encoding_t3922168092 * value)
	{
		___encoding_7 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_7), value);
	}

	inline static int32_t get_offset_of_decoder_8() { return static_cast<int32_t>(offsetof(StreamReader_t4114786898, ___decoder_8)); }
	inline Decoder_t3172032832 * get_decoder_8() const { return ___decoder_8; }
	inline Decoder_t3172032832 ** get_address_of_decoder_8() { return &___decoder_8; }
	inline void set_decoder_8(Decoder_t3172032832 * value)
	{
		___decoder_8 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_8), value);
	}

	inline static int32_t get_offset_of_base_stream_9() { return static_cast<int32_t>(offsetof(StreamReader_t4114786898, ___base_stream_9)); }
	inline Stream_t403697452 * get_base_stream_9() const { return ___base_stream_9; }
	inline Stream_t403697452 ** get_address_of_base_stream_9() { return &___base_stream_9; }
	inline void set_base_stream_9(Stream_t403697452 * value)
	{
		___base_stream_9 = value;
		Il2CppCodeGenWriteBarrier((&___base_stream_9), value);
	}

	inline static int32_t get_offset_of_mayBlock_10() { return static_cast<int32_t>(offsetof(StreamReader_t4114786898, ___mayBlock_10)); }
	inline bool get_mayBlock_10() const { return ___mayBlock_10; }
	inline bool* get_address_of_mayBlock_10() { return &___mayBlock_10; }
	inline void set_mayBlock_10(bool value)
	{
		___mayBlock_10 = value;
	}

	inline static int32_t get_offset_of_line_builder_11() { return static_cast<int32_t>(offsetof(StreamReader_t4114786898, ___line_builder_11)); }
	inline StringBuilder_t438571287 * get_line_builder_11() const { return ___line_builder_11; }
	inline StringBuilder_t438571287 ** get_address_of_line_builder_11() { return &___line_builder_11; }
	inline void set_line_builder_11(StringBuilder_t438571287 * value)
	{
		___line_builder_11 = value;
		Il2CppCodeGenWriteBarrier((&___line_builder_11), value);
	}

	inline static int32_t get_offset_of_foundCR_13() { return static_cast<int32_t>(offsetof(StreamReader_t4114786898, ___foundCR_13)); }
	inline bool get_foundCR_13() const { return ___foundCR_13; }
	inline bool* get_address_of_foundCR_13() { return &___foundCR_13; }
	inline void set_foundCR_13(bool value)
	{
		___foundCR_13 = value;
	}
};

struct StreamReader_t4114786898_StaticFields
{
public:
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t4114786898 * ___Null_12;

public:
	inline static int32_t get_offset_of_Null_12() { return static_cast<int32_t>(offsetof(StreamReader_t4114786898_StaticFields, ___Null_12)); }
	inline StreamReader_t4114786898 * get_Null_12() const { return ___Null_12; }
	inline StreamReader_t4114786898 ** get_address_of_Null_12() { return &___Null_12; }
	inline void set_Null_12(StreamReader_t4114786898 * value)
	{
		___Null_12 = value;
		Il2CppCodeGenWriteBarrier((&___Null_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMREADER_T4114786898_H
#ifndef SECURITYACTION_T226409739_H
#define SECURITYACTION_T226409739_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityAction
struct  SecurityAction_t226409739 
{
public:
	// System.Int32 System.Security.Permissions.SecurityAction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityAction_t226409739, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYACTION_T226409739_H
#ifndef METHODIMPLATTRIBUTES_T4131171285_H
#define METHODIMPLATTRIBUTES_T4131171285_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodImplAttributes
struct  MethodImplAttributes_t4131171285 
{
public:
	// System.Int32 System.Reflection.MethodImplAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MethodImplAttributes_t4131171285, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODIMPLATTRIBUTES_T4131171285_H
#ifndef CALLINGCONVENTIONS_T1478015210_H
#define CALLINGCONVENTIONS_T1478015210_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CallingConventions
struct  CallingConventions_t1478015210 
{
public:
	// System.Int32 System.Reflection.CallingConventions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CallingConventions_t1478015210, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLINGCONVENTIONS_T1478015210_H
#ifndef UNEXCEPTIONALSTREAMWRITER_T3789760441_H
#define UNEXCEPTIONALSTREAMWRITER_T3789760441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.UnexceptionalStreamWriter
struct  UnexceptionalStreamWriter_t3789760441  : public StreamWriter_t900566318
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNEXCEPTIONALSTREAMWRITER_T3789760441_H
#ifndef FIELDATTRIBUTES_T24346014_H
#define FIELDATTRIBUTES_T24346014_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.FieldAttributes
struct  FieldAttributes_t24346014 
{
public:
	// System.Int32 System.Reflection.FieldAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FieldAttributes_t24346014, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDATTRIBUTES_T24346014_H
#ifndef ASSEMBLY_T1073122682_H
#define ASSEMBLY_T1073122682_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Assembly
struct  Assembly_t1073122682  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	intptr_t ____mono_assembly_0;
	// System.Reflection.Assembly/ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_t95036989 * ___resolve_event_holder_1;
	// System.Security.Policy.Evidence System.Reflection.Assembly::_evidence
	Evidence_t3294790873 * ____evidence_2;
	// System.Security.PermissionSet System.Reflection.Assembly::_minimum
	PermissionSet_t2301341558 * ____minimum_3;
	// System.Security.PermissionSet System.Reflection.Assembly::_optional
	PermissionSet_t2301341558 * ____optional_4;
	// System.Security.PermissionSet System.Reflection.Assembly::_refuse
	PermissionSet_t2301341558 * ____refuse_5;
	// System.Security.PermissionSet System.Reflection.Assembly::_granted
	PermissionSet_t2301341558 * ____granted_6;
	// System.Security.PermissionSet System.Reflection.Assembly::_denied
	PermissionSet_t2301341558 * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t1073122682, ____mono_assembly_0)); }
	inline intptr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline intptr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(intptr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t1073122682, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_t95036989 * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_t95036989 ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_t95036989 * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((&___resolve_event_holder_1), value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t1073122682, ____evidence_2)); }
	inline Evidence_t3294790873 * get__evidence_2() const { return ____evidence_2; }
	inline Evidence_t3294790873 ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(Evidence_t3294790873 * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((&____evidence_2), value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t1073122682, ____minimum_3)); }
	inline PermissionSet_t2301341558 * get__minimum_3() const { return ____minimum_3; }
	inline PermissionSet_t2301341558 ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(PermissionSet_t2301341558 * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((&____minimum_3), value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t1073122682, ____optional_4)); }
	inline PermissionSet_t2301341558 * get__optional_4() const { return ____optional_4; }
	inline PermissionSet_t2301341558 ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(PermissionSet_t2301341558 * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((&____optional_4), value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t1073122682, ____refuse_5)); }
	inline PermissionSet_t2301341558 * get__refuse_5() const { return ____refuse_5; }
	inline PermissionSet_t2301341558 ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(PermissionSet_t2301341558 * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((&____refuse_5), value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t1073122682, ____granted_6)); }
	inline PermissionSet_t2301341558 * get__granted_6() const { return ____granted_6; }
	inline PermissionSet_t2301341558 ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(PermissionSet_t2301341558 * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((&____granted_6), value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t1073122682, ____denied_7)); }
	inline PermissionSet_t2301341558 * get__denied_7() const { return ____denied_7; }
	inline PermissionSet_t2301341558 ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(PermissionSet_t2301341558 * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((&____denied_7), value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t1073122682, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t1073122682, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLY_T1073122682_H
#ifndef DATETIMEKIND_T3790775121_H
#define DATETIMEKIND_T3790775121_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t3790775121 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t3790775121, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEKIND_T3790775121_H
#ifndef DELEGATE_T1392602965_H
#define DELEGATE_T1392602965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1392602965  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t33408209 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1392602965, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1392602965, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1392602965, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1392602965, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1392602965, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1392602965, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1392602965, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1392602965, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1392602965, ___data_8)); }
	inline DelegateData_t33408209 * get_data_8() const { return ___data_8; }
	inline DelegateData_t33408209 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t33408209 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1392602965_H
#ifndef CONSTRUCTORINFO_T596139080_H
#define CONSTRUCTORINFO_T596139080_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ConstructorInfo
struct  ConstructorInfo_t596139080  : public MethodBase_t1050654022
{
public:

public:
};

struct ConstructorInfo_t596139080_StaticFields
{
public:
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;

public:
	inline static int32_t get_offset_of_ConstructorName_0() { return static_cast<int32_t>(offsetof(ConstructorInfo_t596139080_StaticFields, ___ConstructorName_0)); }
	inline String_t* get_ConstructorName_0() const { return ___ConstructorName_0; }
	inline String_t** get_address_of_ConstructorName_0() { return &___ConstructorName_0; }
	inline void set_ConstructorName_0(String_t* value)
	{
		___ConstructorName_0 = value;
		Il2CppCodeGenWriteBarrier((&___ConstructorName_0), value);
	}

	inline static int32_t get_offset_of_TypeConstructorName_1() { return static_cast<int32_t>(offsetof(ConstructorInfo_t596139080_StaticFields, ___TypeConstructorName_1)); }
	inline String_t* get_TypeConstructorName_1() const { return ___TypeConstructorName_1; }
	inline String_t** get_address_of_TypeConstructorName_1() { return &___TypeConstructorName_1; }
	inline void set_TypeConstructorName_1(String_t* value)
	{
		___TypeConstructorName_1 = value;
		Il2CppCodeGenWriteBarrier((&___TypeConstructorName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRUCTORINFO_T596139080_H
#ifndef METHODATTRIBUTES_T2458231550_H
#define METHODATTRIBUTES_T2458231550_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodAttributes
struct  MethodAttributes_t2458231550 
{
public:
	// System.Int32 System.Reflection.MethodAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MethodAttributes_t2458231550, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODATTRIBUTES_T2458231550_H
#ifndef RESOURCEATTRIBUTES_T819111346_H
#define RESOURCEATTRIBUTES_T819111346_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ResourceAttributes
struct  ResourceAttributes_t819111346 
{
public:
	// System.Int32 System.Reflection.ResourceAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ResourceAttributes_t819111346, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCEATTRIBUTES_T819111346_H
#ifndef UNEXCEPTIONALSTREAMREADER_T2757880009_H
#define UNEXCEPTIONALSTREAMREADER_T2757880009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.UnexceptionalStreamReader
struct  UnexceptionalStreamReader_t2757880009  : public StreamReader_t4114786898
{
public:

public:
};

struct UnexceptionalStreamReader_t2757880009_StaticFields
{
public:
	// System.Boolean[] System.IO.UnexceptionalStreamReader::newline
	BooleanU5BU5D_t2550303141* ___newline_14;
	// System.Char System.IO.UnexceptionalStreamReader::newlineChar
	Il2CppChar ___newlineChar_15;

public:
	inline static int32_t get_offset_of_newline_14() { return static_cast<int32_t>(offsetof(UnexceptionalStreamReader_t2757880009_StaticFields, ___newline_14)); }
	inline BooleanU5BU5D_t2550303141* get_newline_14() const { return ___newline_14; }
	inline BooleanU5BU5D_t2550303141** get_address_of_newline_14() { return &___newline_14; }
	inline void set_newline_14(BooleanU5BU5D_t2550303141* value)
	{
		___newline_14 = value;
		Il2CppCodeGenWriteBarrier((&___newline_14), value);
	}

	inline static int32_t get_offset_of_newlineChar_15() { return static_cast<int32_t>(offsetof(UnexceptionalStreamReader_t2757880009_StaticFields, ___newlineChar_15)); }
	inline Il2CppChar get_newlineChar_15() const { return ___newlineChar_15; }
	inline Il2CppChar* get_address_of_newlineChar_15() { return &___newlineChar_15; }
	inline void set_newlineChar_15(Il2CppChar value)
	{
		___newlineChar_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNEXCEPTIONALSTREAMREADER_T2757880009_H
#ifndef MONOIOERROR_T3800409314_H
#define MONOIOERROR_T3800409314_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.MonoIOError
struct  MonoIOError_t3800409314 
{
public:
	// System.Int32 System.IO.MonoIOError::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MonoIOError_t3800409314, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOIOERROR_T3800409314_H
#ifndef SEEKORIGIN_T2826345235_H
#define SEEKORIGIN_T2826345235_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.SeekOrigin
struct  SeekOrigin_t2826345235 
{
public:
	// System.Int32 System.IO.SeekOrigin::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SeekOrigin_t2826345235, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SEEKORIGIN_T2826345235_H
#ifndef FILEATTRIBUTES_T894197436_H
#define FILEATTRIBUTES_T894197436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileAttributes
struct  FileAttributes_t894197436 
{
public:
	// System.Int32 System.IO.FileAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileAttributes_t894197436, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEATTRIBUTES_T894197436_H
#ifndef NULLSTREAMREADER_T440084836_H
#define NULLSTREAMREADER_T440084836_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StreamReader/NullStreamReader
struct  NullStreamReader_t440084836  : public StreamReader_t4114786898
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLSTREAMREADER_T440084836_H
#ifndef UNICODECATEGORY_T2493344627_H
#define UNICODECATEGORY_T2493344627_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.UnicodeCategory
struct  UnicodeCategory_t2493344627 
{
public:
	// System.Int32 System.Globalization.UnicodeCategory::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnicodeCategory_t2493344627, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNICODECATEGORY_T2493344627_H
#ifndef TEXTINFO_T4038178256_H
#define TEXTINFO_T4038178256_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.TextInfo
struct  TextInfo_t4038178256  : public RuntimeObject
{
public:
	// System.String System.Globalization.TextInfo::m_listSeparator
	String_t* ___m_listSeparator_0;
	// System.Boolean System.Globalization.TextInfo::m_isReadOnly
	bool ___m_isReadOnly_1;
	// System.String System.Globalization.TextInfo::customCultureName
	String_t* ___customCultureName_2;
	// System.Int32 System.Globalization.TextInfo::m_nDataItem
	int32_t ___m_nDataItem_3;
	// System.Boolean System.Globalization.TextInfo::m_useUserOverride
	bool ___m_useUserOverride_4;
	// System.Int32 System.Globalization.TextInfo::m_win32LangID
	int32_t ___m_win32LangID_5;
	// System.Globalization.CultureInfo System.Globalization.TextInfo::ci
	CultureInfo_t3804668001 * ___ci_6;
	// System.Boolean System.Globalization.TextInfo::handleDotI
	bool ___handleDotI_7;
	// System.Globalization.TextInfo/Data System.Globalization.TextInfo::data
	Data_t2291962056  ___data_8;

public:
	inline static int32_t get_offset_of_m_listSeparator_0() { return static_cast<int32_t>(offsetof(TextInfo_t4038178256, ___m_listSeparator_0)); }
	inline String_t* get_m_listSeparator_0() const { return ___m_listSeparator_0; }
	inline String_t** get_address_of_m_listSeparator_0() { return &___m_listSeparator_0; }
	inline void set_m_listSeparator_0(String_t* value)
	{
		___m_listSeparator_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_listSeparator_0), value);
	}

	inline static int32_t get_offset_of_m_isReadOnly_1() { return static_cast<int32_t>(offsetof(TextInfo_t4038178256, ___m_isReadOnly_1)); }
	inline bool get_m_isReadOnly_1() const { return ___m_isReadOnly_1; }
	inline bool* get_address_of_m_isReadOnly_1() { return &___m_isReadOnly_1; }
	inline void set_m_isReadOnly_1(bool value)
	{
		___m_isReadOnly_1 = value;
	}

	inline static int32_t get_offset_of_customCultureName_2() { return static_cast<int32_t>(offsetof(TextInfo_t4038178256, ___customCultureName_2)); }
	inline String_t* get_customCultureName_2() const { return ___customCultureName_2; }
	inline String_t** get_address_of_customCultureName_2() { return &___customCultureName_2; }
	inline void set_customCultureName_2(String_t* value)
	{
		___customCultureName_2 = value;
		Il2CppCodeGenWriteBarrier((&___customCultureName_2), value);
	}

	inline static int32_t get_offset_of_m_nDataItem_3() { return static_cast<int32_t>(offsetof(TextInfo_t4038178256, ___m_nDataItem_3)); }
	inline int32_t get_m_nDataItem_3() const { return ___m_nDataItem_3; }
	inline int32_t* get_address_of_m_nDataItem_3() { return &___m_nDataItem_3; }
	inline void set_m_nDataItem_3(int32_t value)
	{
		___m_nDataItem_3 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_4() { return static_cast<int32_t>(offsetof(TextInfo_t4038178256, ___m_useUserOverride_4)); }
	inline bool get_m_useUserOverride_4() const { return ___m_useUserOverride_4; }
	inline bool* get_address_of_m_useUserOverride_4() { return &___m_useUserOverride_4; }
	inline void set_m_useUserOverride_4(bool value)
	{
		___m_useUserOverride_4 = value;
	}

	inline static int32_t get_offset_of_m_win32LangID_5() { return static_cast<int32_t>(offsetof(TextInfo_t4038178256, ___m_win32LangID_5)); }
	inline int32_t get_m_win32LangID_5() const { return ___m_win32LangID_5; }
	inline int32_t* get_address_of_m_win32LangID_5() { return &___m_win32LangID_5; }
	inline void set_m_win32LangID_5(int32_t value)
	{
		___m_win32LangID_5 = value;
	}

	inline static int32_t get_offset_of_ci_6() { return static_cast<int32_t>(offsetof(TextInfo_t4038178256, ___ci_6)); }
	inline CultureInfo_t3804668001 * get_ci_6() const { return ___ci_6; }
	inline CultureInfo_t3804668001 ** get_address_of_ci_6() { return &___ci_6; }
	inline void set_ci_6(CultureInfo_t3804668001 * value)
	{
		___ci_6 = value;
		Il2CppCodeGenWriteBarrier((&___ci_6), value);
	}

	inline static int32_t get_offset_of_handleDotI_7() { return static_cast<int32_t>(offsetof(TextInfo_t4038178256, ___handleDotI_7)); }
	inline bool get_handleDotI_7() const { return ___handleDotI_7; }
	inline bool* get_address_of_handleDotI_7() { return &___handleDotI_7; }
	inline void set_handleDotI_7(bool value)
	{
		___handleDotI_7 = value;
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(TextInfo_t4038178256, ___data_8)); }
	inline Data_t2291962056  get_data_8() const { return ___data_8; }
	inline Data_t2291962056 * get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(Data_t2291962056  value)
	{
		___data_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTINFO_T4038178256_H
#ifndef NUMBERSTYLES_T2569473399_H
#define NUMBERSTYLES_T2569473399_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.NumberStyles
struct  NumberStyles_t2569473399 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NumberStyles_t2569473399, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NUMBERSTYLES_T2569473399_H
#ifndef GREGORIANCALENDARTYPES_T3704346331_H
#define GREGORIANCALENDARTYPES_T3704346331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.GregorianCalendarTypes
struct  GregorianCalendarTypes_t3704346331 
{
public:
	// System.Int32 System.Globalization.GregorianCalendarTypes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(GregorianCalendarTypes_t3704346331, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GREGORIANCALENDARTYPES_T3704346331_H
#ifndef FILEMODE_T3813783197_H
#define FILEMODE_T3813783197_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileMode
struct  FileMode_t3813783197 
{
public:
	// System.Int32 System.IO.FileMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileMode_t3813783197, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEMODE_T3813783197_H
#ifndef DATETIMESTYLES_T2724822328_H
#define DATETIMESTYLES_T2724822328_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.DateTimeStyles
struct  DateTimeStyles_t2724822328 
{
public:
	// System.Int32 System.Globalization.DateTimeStyles::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeStyles_t2724822328, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMESTYLES_T2724822328_H
#ifndef COMPAREOPTIONS_T2496838178_H
#define COMPAREOPTIONS_T2496838178_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CompareOptions
struct  CompareOptions_t2496838178 
{
public:
	// System.Int32 System.Globalization.CompareOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CompareOptions_t2496838178, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPAREOPTIONS_T2496838178_H
#ifndef DEBUGGERBROWSABLESTATE_T61367776_H
#define DEBUGGERBROWSABLESTATE_T61367776_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.DebuggerBrowsableState
struct  DebuggerBrowsableState_t61367776 
{
public:
	// System.Int32 System.Diagnostics.DebuggerBrowsableState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DebuggerBrowsableState_t61367776, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGGERBROWSABLESTATE_T61367776_H
#ifndef DEBUGGINGMODES_T921367568_H
#define DEBUGGINGMODES_T921367568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.DebuggableAttribute/DebuggingModes
struct  DebuggingModes_t921367568 
{
public:
	// System.Int32 System.Diagnostics.DebuggableAttribute/DebuggingModes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DebuggingModes_t921367568, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGGINGMODES_T921367568_H
#ifndef ASSEMBLYVERSIONCOMPATIBILITY_T3564166590_H
#define ASSEMBLYVERSIONCOMPATIBILITY_T3564166590_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.Assemblies.AssemblyVersionCompatibility
struct  AssemblyVersionCompatibility_t3564166590 
{
public:
	// System.Int32 System.Configuration.Assemblies.AssemblyVersionCompatibility::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AssemblyVersionCompatibility_t3564166590, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYVERSIONCOMPATIBILITY_T3564166590_H
#ifndef ASSEMBLYHASHALGORITHM_T244125356_H
#define ASSEMBLYHASHALGORITHM_T244125356_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.Assemblies.AssemblyHashAlgorithm
struct  AssemblyHashAlgorithm_t244125356 
{
public:
	// System.Int32 System.Configuration.Assemblies.AssemblyHashAlgorithm::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AssemblyHashAlgorithm_t244125356, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYHASHALGORITHM_T244125356_H
#ifndef ENUMERATORMODE_T2311324314_H
#define ENUMERATORMODE_T2311324314_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList/EnumeratorMode
struct  EnumeratorMode_t2311324314 
{
public:
	// System.Int32 System.Collections.SortedList/EnumeratorMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EnumeratorMode_t2311324314, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATORMODE_T2311324314_H
#ifndef DATETIMEFORMATFLAGS_T1106190341_H
#define DATETIMEFORMATFLAGS_T1106190341_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.DateTimeFormatFlags
struct  DateTimeFormatFlags_t1106190341 
{
public:
	// System.Int32 System.Globalization.DateTimeFormatFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeFormatFlags_t1106190341, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEFORMATFLAGS_T1106190341_H
#ifndef FILEOPTIONS_T1547308404_H
#define FILEOPTIONS_T1547308404_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileOptions
struct  FileOptions_t1547308404 
{
public:
	// System.Int32 System.IO.FileOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileOptions_t1547308404, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEOPTIONS_T1547308404_H
#ifndef FILEACCESS_T2297563326_H
#define FILEACCESS_T2297563326_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileAccess
struct  FileAccess_t2297563326 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileAccess_t2297563326, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEACCESS_T2297563326_H
#ifndef RUNTIMETYPEHANDLE_T1171314243_H
#define RUNTIMETYPEHANDLE_T1171314243_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t1171314243 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t1171314243, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T1171314243_H
#ifndef BINDINGFLAGS_T3491945762_H
#define BINDINGFLAGS_T3491945762_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t3491945762 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t3491945762, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T3491945762_H
#ifndef MONOFILETYPE_T3828468091_H
#define MONOFILETYPE_T3828468091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.MonoFileType
struct  MonoFileType_t3828468091 
{
public:
	// System.Int32 System.IO.MonoFileType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MonoFileType_t3828468091, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOFILETYPE_T3828468091_H
#ifndef IOEXCEPTION_T4190301069_H
#define IOEXCEPTION_T4190301069_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.IOException
struct  IOException_t4190301069  : public SystemException_t1024823814
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IOEXCEPTION_T4190301069_H
#ifndef FILESHARE_T3389522965_H
#define FILESHARE_T3389522965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileShare
struct  FileShare_t3389522965 
{
public:
	// System.Int32 System.IO.FileShare::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileShare_t3389522965, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILESHARE_T3389522965_H
#ifndef PATHTOOLONGEXCEPTION_T3721065412_H
#define PATHTOOLONGEXCEPTION_T3721065412_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.PathTooLongException
struct  PathTooLongException_t3721065412  : public IOException_t4190301069
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PATHTOOLONGEXCEPTION_T3721065412_H
#ifndef ENUMERATOR_T3731117051_H
#define ENUMERATOR_T3731117051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList/Enumerator
struct  Enumerator_t3731117051  : public RuntimeObject
{
public:
	// System.Collections.SortedList System.Collections.SortedList/Enumerator::host
	SortedList_t54735423 * ___host_0;
	// System.Int32 System.Collections.SortedList/Enumerator::stamp
	int32_t ___stamp_1;
	// System.Int32 System.Collections.SortedList/Enumerator::pos
	int32_t ___pos_2;
	// System.Int32 System.Collections.SortedList/Enumerator::size
	int32_t ___size_3;
	// System.Collections.SortedList/EnumeratorMode System.Collections.SortedList/Enumerator::mode
	int32_t ___mode_4;
	// System.Object System.Collections.SortedList/Enumerator::currentKey
	RuntimeObject * ___currentKey_5;
	// System.Object System.Collections.SortedList/Enumerator::currentValue
	RuntimeObject * ___currentValue_6;
	// System.Boolean System.Collections.SortedList/Enumerator::invalid
	bool ___invalid_7;

public:
	inline static int32_t get_offset_of_host_0() { return static_cast<int32_t>(offsetof(Enumerator_t3731117051, ___host_0)); }
	inline SortedList_t54735423 * get_host_0() const { return ___host_0; }
	inline SortedList_t54735423 ** get_address_of_host_0() { return &___host_0; }
	inline void set_host_0(SortedList_t54735423 * value)
	{
		___host_0 = value;
		Il2CppCodeGenWriteBarrier((&___host_0), value);
	}

	inline static int32_t get_offset_of_stamp_1() { return static_cast<int32_t>(offsetof(Enumerator_t3731117051, ___stamp_1)); }
	inline int32_t get_stamp_1() const { return ___stamp_1; }
	inline int32_t* get_address_of_stamp_1() { return &___stamp_1; }
	inline void set_stamp_1(int32_t value)
	{
		___stamp_1 = value;
	}

	inline static int32_t get_offset_of_pos_2() { return static_cast<int32_t>(offsetof(Enumerator_t3731117051, ___pos_2)); }
	inline int32_t get_pos_2() const { return ___pos_2; }
	inline int32_t* get_address_of_pos_2() { return &___pos_2; }
	inline void set_pos_2(int32_t value)
	{
		___pos_2 = value;
	}

	inline static int32_t get_offset_of_size_3() { return static_cast<int32_t>(offsetof(Enumerator_t3731117051, ___size_3)); }
	inline int32_t get_size_3() const { return ___size_3; }
	inline int32_t* get_address_of_size_3() { return &___size_3; }
	inline void set_size_3(int32_t value)
	{
		___size_3 = value;
	}

	inline static int32_t get_offset_of_mode_4() { return static_cast<int32_t>(offsetof(Enumerator_t3731117051, ___mode_4)); }
	inline int32_t get_mode_4() const { return ___mode_4; }
	inline int32_t* get_address_of_mode_4() { return &___mode_4; }
	inline void set_mode_4(int32_t value)
	{
		___mode_4 = value;
	}

	inline static int32_t get_offset_of_currentKey_5() { return static_cast<int32_t>(offsetof(Enumerator_t3731117051, ___currentKey_5)); }
	inline RuntimeObject * get_currentKey_5() const { return ___currentKey_5; }
	inline RuntimeObject ** get_address_of_currentKey_5() { return &___currentKey_5; }
	inline void set_currentKey_5(RuntimeObject * value)
	{
		___currentKey_5 = value;
		Il2CppCodeGenWriteBarrier((&___currentKey_5), value);
	}

	inline static int32_t get_offset_of_currentValue_6() { return static_cast<int32_t>(offsetof(Enumerator_t3731117051, ___currentValue_6)); }
	inline RuntimeObject * get_currentValue_6() const { return ___currentValue_6; }
	inline RuntimeObject ** get_address_of_currentValue_6() { return &___currentValue_6; }
	inline void set_currentValue_6(RuntimeObject * value)
	{
		___currentValue_6 = value;
		Il2CppCodeGenWriteBarrier((&___currentValue_6), value);
	}

	inline static int32_t get_offset_of_invalid_7() { return static_cast<int32_t>(offsetof(Enumerator_t3731117051, ___invalid_7)); }
	inline bool get_invalid_7() const { return ___invalid_7; }
	inline bool* get_address_of_invalid_7() { return &___invalid_7; }
	inline void set_invalid_7(bool value)
	{
		___invalid_7 = value;
	}
};

struct Enumerator_t3731117051_StaticFields
{
public:
	// System.String System.Collections.SortedList/Enumerator::xstr
	String_t* ___xstr_8;

public:
	inline static int32_t get_offset_of_xstr_8() { return static_cast<int32_t>(offsetof(Enumerator_t3731117051_StaticFields, ___xstr_8)); }
	inline String_t* get_xstr_8() const { return ___xstr_8; }
	inline String_t** get_address_of_xstr_8() { return &___xstr_8; }
	inline void set_xstr_8(String_t* value)
	{
		___xstr_8 = value;
		Il2CppCodeGenWriteBarrier((&___xstr_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3731117051_H
#ifndef MONOIOSTAT_T1138429940_H
#define MONOIOSTAT_T1138429940_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.MonoIOStat
struct  MonoIOStat_t1138429940 
{
public:
	// System.String System.IO.MonoIOStat::Name
	String_t* ___Name_0;
	// System.IO.FileAttributes System.IO.MonoIOStat::Attributes
	int32_t ___Attributes_1;
	// System.Int64 System.IO.MonoIOStat::Length
	int64_t ___Length_2;
	// System.Int64 System.IO.MonoIOStat::CreationTime
	int64_t ___CreationTime_3;
	// System.Int64 System.IO.MonoIOStat::LastAccessTime
	int64_t ___LastAccessTime_4;
	// System.Int64 System.IO.MonoIOStat::LastWriteTime
	int64_t ___LastWriteTime_5;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(MonoIOStat_t1138429940, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___Name_0), value);
	}

	inline static int32_t get_offset_of_Attributes_1() { return static_cast<int32_t>(offsetof(MonoIOStat_t1138429940, ___Attributes_1)); }
	inline int32_t get_Attributes_1() const { return ___Attributes_1; }
	inline int32_t* get_address_of_Attributes_1() { return &___Attributes_1; }
	inline void set_Attributes_1(int32_t value)
	{
		___Attributes_1 = value;
	}

	inline static int32_t get_offset_of_Length_2() { return static_cast<int32_t>(offsetof(MonoIOStat_t1138429940, ___Length_2)); }
	inline int64_t get_Length_2() const { return ___Length_2; }
	inline int64_t* get_address_of_Length_2() { return &___Length_2; }
	inline void set_Length_2(int64_t value)
	{
		___Length_2 = value;
	}

	inline static int32_t get_offset_of_CreationTime_3() { return static_cast<int32_t>(offsetof(MonoIOStat_t1138429940, ___CreationTime_3)); }
	inline int64_t get_CreationTime_3() const { return ___CreationTime_3; }
	inline int64_t* get_address_of_CreationTime_3() { return &___CreationTime_3; }
	inline void set_CreationTime_3(int64_t value)
	{
		___CreationTime_3 = value;
	}

	inline static int32_t get_offset_of_LastAccessTime_4() { return static_cast<int32_t>(offsetof(MonoIOStat_t1138429940, ___LastAccessTime_4)); }
	inline int64_t get_LastAccessTime_4() const { return ___LastAccessTime_4; }
	inline int64_t* get_address_of_LastAccessTime_4() { return &___LastAccessTime_4; }
	inline void set_LastAccessTime_4(int64_t value)
	{
		___LastAccessTime_4 = value;
	}

	inline static int32_t get_offset_of_LastWriteTime_5() { return static_cast<int32_t>(offsetof(MonoIOStat_t1138429940, ___LastWriteTime_5)); }
	inline int64_t get_LastWriteTime_5() const { return ___LastWriteTime_5; }
	inline int64_t* get_address_of_LastWriteTime_5() { return &___LastWriteTime_5; }
	inline void set_LastWriteTime_5(int64_t value)
	{
		___LastWriteTime_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.IO.MonoIOStat
struct MonoIOStat_t1138429940_marshaled_pinvoke
{
	char* ___Name_0;
	int32_t ___Attributes_1;
	int64_t ___Length_2;
	int64_t ___CreationTime_3;
	int64_t ___LastAccessTime_4;
	int64_t ___LastWriteTime_5;
};
// Native definition for COM marshalling of System.IO.MonoIOStat
struct MonoIOStat_t1138429940_marshaled_com
{
	Il2CppChar* ___Name_0;
	int32_t ___Attributes_1;
	int64_t ___Length_2;
	int64_t ___CreationTime_3;
	int64_t ___LastAccessTime_4;
	int64_t ___LastWriteTime_5;
};
#endif // MONOIOSTAT_T1138429940_H
#ifndef DEBUGGABLEATTRIBUTE_T3418071464_H
#define DEBUGGABLEATTRIBUTE_T3418071464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.DebuggableAttribute
struct  DebuggableAttribute_t3418071464  : public Attribute_t3130690179
{
public:
	// System.Boolean System.Diagnostics.DebuggableAttribute::JITTrackingEnabledFlag
	bool ___JITTrackingEnabledFlag_0;
	// System.Boolean System.Diagnostics.DebuggableAttribute::JITOptimizerDisabledFlag
	bool ___JITOptimizerDisabledFlag_1;
	// System.Diagnostics.DebuggableAttribute/DebuggingModes System.Diagnostics.DebuggableAttribute::debuggingModes
	int32_t ___debuggingModes_2;

public:
	inline static int32_t get_offset_of_JITTrackingEnabledFlag_0() { return static_cast<int32_t>(offsetof(DebuggableAttribute_t3418071464, ___JITTrackingEnabledFlag_0)); }
	inline bool get_JITTrackingEnabledFlag_0() const { return ___JITTrackingEnabledFlag_0; }
	inline bool* get_address_of_JITTrackingEnabledFlag_0() { return &___JITTrackingEnabledFlag_0; }
	inline void set_JITTrackingEnabledFlag_0(bool value)
	{
		___JITTrackingEnabledFlag_0 = value;
	}

	inline static int32_t get_offset_of_JITOptimizerDisabledFlag_1() { return static_cast<int32_t>(offsetof(DebuggableAttribute_t3418071464, ___JITOptimizerDisabledFlag_1)); }
	inline bool get_JITOptimizerDisabledFlag_1() const { return ___JITOptimizerDisabledFlag_1; }
	inline bool* get_address_of_JITOptimizerDisabledFlag_1() { return &___JITOptimizerDisabledFlag_1; }
	inline void set_JITOptimizerDisabledFlag_1(bool value)
	{
		___JITOptimizerDisabledFlag_1 = value;
	}

	inline static int32_t get_offset_of_debuggingModes_2() { return static_cast<int32_t>(offsetof(DebuggableAttribute_t3418071464, ___debuggingModes_2)); }
	inline int32_t get_debuggingModes_2() const { return ___debuggingModes_2; }
	inline int32_t* get_address_of_debuggingModes_2() { return &___debuggingModes_2; }
	inline void set_debuggingModes_2(int32_t value)
	{
		___debuggingModes_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGGABLEATTRIBUTE_T3418071464_H
#ifndef MONOIO_T615928873_H
#define MONOIO_T615928873_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.MonoIO
struct  MonoIO_t615928873  : public RuntimeObject
{
public:

public:
};

struct MonoIO_t615928873_StaticFields
{
public:
	// System.IO.FileAttributes System.IO.MonoIO::InvalidFileAttributes
	int32_t ___InvalidFileAttributes_0;
	// System.IntPtr System.IO.MonoIO::InvalidHandle
	intptr_t ___InvalidHandle_1;

public:
	inline static int32_t get_offset_of_InvalidFileAttributes_0() { return static_cast<int32_t>(offsetof(MonoIO_t615928873_StaticFields, ___InvalidFileAttributes_0)); }
	inline int32_t get_InvalidFileAttributes_0() const { return ___InvalidFileAttributes_0; }
	inline int32_t* get_address_of_InvalidFileAttributes_0() { return &___InvalidFileAttributes_0; }
	inline void set_InvalidFileAttributes_0(int32_t value)
	{
		___InvalidFileAttributes_0 = value;
	}

	inline static int32_t get_offset_of_InvalidHandle_1() { return static_cast<int32_t>(offsetof(MonoIO_t615928873_StaticFields, ___InvalidHandle_1)); }
	inline intptr_t get_InvalidHandle_1() const { return ___InvalidHandle_1; }
	inline intptr_t* get_address_of_InvalidHandle_1() { return &___InvalidHandle_1; }
	inline void set_InvalidHandle_1(intptr_t value)
	{
		___InvalidHandle_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOIO_T615928873_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t1171314243  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t1171314243  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t1171314243 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t1171314243  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t791284206* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t1719784875 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t1719784875 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t1719784875 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t791284206* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t791284206** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t791284206* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t1719784875 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t1719784875 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t1719784875 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t1719784875 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t1719784875 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t1719784875 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t1719784875 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t1719784875 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t1719784875 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef DEBUGGERBROWSABLEATTRIBUTE_T400480570_H
#define DEBUGGERBROWSABLEATTRIBUTE_T400480570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.DebuggerBrowsableAttribute
struct  DebuggerBrowsableAttribute_t400480570  : public Attribute_t3130690179
{
public:
	// System.Diagnostics.DebuggerBrowsableState System.Diagnostics.DebuggerBrowsableAttribute::state
	int32_t ___state_0;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(DebuggerBrowsableAttribute_t400480570, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGGERBROWSABLEATTRIBUTE_T400480570_H
#ifndef DATETIMEFORMATINFO_T1319266453_H
#define DATETIMEFORMATINFO_T1319266453_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.DateTimeFormatInfo
struct  DateTimeFormatInfo_t1319266453  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_isReadOnly
	bool ___m_isReadOnly_10;
	// System.String System.Globalization.DateTimeFormatInfo::amDesignator
	String_t* ___amDesignator_11;
	// System.String System.Globalization.DateTimeFormatInfo::pmDesignator
	String_t* ___pmDesignator_12;
	// System.String System.Globalization.DateTimeFormatInfo::dateSeparator
	String_t* ___dateSeparator_13;
	// System.String System.Globalization.DateTimeFormatInfo::timeSeparator
	String_t* ___timeSeparator_14;
	// System.String System.Globalization.DateTimeFormatInfo::shortDatePattern
	String_t* ___shortDatePattern_15;
	// System.String System.Globalization.DateTimeFormatInfo::longDatePattern
	String_t* ___longDatePattern_16;
	// System.String System.Globalization.DateTimeFormatInfo::shortTimePattern
	String_t* ___shortTimePattern_17;
	// System.String System.Globalization.DateTimeFormatInfo::longTimePattern
	String_t* ___longTimePattern_18;
	// System.String System.Globalization.DateTimeFormatInfo::monthDayPattern
	String_t* ___monthDayPattern_19;
	// System.String System.Globalization.DateTimeFormatInfo::yearMonthPattern
	String_t* ___yearMonthPattern_20;
	// System.String System.Globalization.DateTimeFormatInfo::fullDateTimePattern
	String_t* ___fullDateTimePattern_21;
	// System.String System.Globalization.DateTimeFormatInfo::_RFC1123Pattern
	String_t* ____RFC1123Pattern_22;
	// System.String System.Globalization.DateTimeFormatInfo::_SortableDateTimePattern
	String_t* ____SortableDateTimePattern_23;
	// System.String System.Globalization.DateTimeFormatInfo::_UniversalSortableDateTimePattern
	String_t* ____UniversalSortableDateTimePattern_24;
	// System.Int32 System.Globalization.DateTimeFormatInfo::firstDayOfWeek
	int32_t ___firstDayOfWeek_25;
	// System.Globalization.Calendar System.Globalization.DateTimeFormatInfo::calendar
	Calendar_t762697739 * ___calendar_26;
	// System.Int32 System.Globalization.DateTimeFormatInfo::calendarWeekRule
	int32_t ___calendarWeekRule_27;
	// System.String[] System.Globalization.DateTimeFormatInfo::abbreviatedDayNames
	StringU5BU5D_t3875140506* ___abbreviatedDayNames_28;
	// System.String[] System.Globalization.DateTimeFormatInfo::dayNames
	StringU5BU5D_t3875140506* ___dayNames_29;
	// System.String[] System.Globalization.DateTimeFormatInfo::monthNames
	StringU5BU5D_t3875140506* ___monthNames_30;
	// System.String[] System.Globalization.DateTimeFormatInfo::abbreviatedMonthNames
	StringU5BU5D_t3875140506* ___abbreviatedMonthNames_31;
	// System.String[] System.Globalization.DateTimeFormatInfo::allShortDatePatterns
	StringU5BU5D_t3875140506* ___allShortDatePatterns_32;
	// System.String[] System.Globalization.DateTimeFormatInfo::allLongDatePatterns
	StringU5BU5D_t3875140506* ___allLongDatePatterns_33;
	// System.String[] System.Globalization.DateTimeFormatInfo::allShortTimePatterns
	StringU5BU5D_t3875140506* ___allShortTimePatterns_34;
	// System.String[] System.Globalization.DateTimeFormatInfo::allLongTimePatterns
	StringU5BU5D_t3875140506* ___allLongTimePatterns_35;
	// System.String[] System.Globalization.DateTimeFormatInfo::monthDayPatterns
	StringU5BU5D_t3875140506* ___monthDayPatterns_36;
	// System.String[] System.Globalization.DateTimeFormatInfo::yearMonthPatterns
	StringU5BU5D_t3875140506* ___yearMonthPatterns_37;
	// System.String[] System.Globalization.DateTimeFormatInfo::shortDayNames
	StringU5BU5D_t3875140506* ___shortDayNames_38;
	// System.Int32 System.Globalization.DateTimeFormatInfo::nDataItem
	int32_t ___nDataItem_39;
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_40;
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_isDefaultCalendar
	bool ___m_isDefaultCalendar_41;
	// System.Int32 System.Globalization.DateTimeFormatInfo::CultureID
	int32_t ___CultureID_42;
	// System.Boolean System.Globalization.DateTimeFormatInfo::bUseCalendarInfo
	bool ___bUseCalendarInfo_43;
	// System.String System.Globalization.DateTimeFormatInfo::generalShortTimePattern
	String_t* ___generalShortTimePattern_44;
	// System.String System.Globalization.DateTimeFormatInfo::generalLongTimePattern
	String_t* ___generalLongTimePattern_45;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_eraNames
	StringU5BU5D_t3875140506* ___m_eraNames_46;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_abbrevEraNames
	StringU5BU5D_t3875140506* ___m_abbrevEraNames_47;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_abbrevEnglishEraNames
	StringU5BU5D_t3875140506* ___m_abbrevEnglishEraNames_48;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_dateWords
	StringU5BU5D_t3875140506* ___m_dateWords_49;
	// System.Int32[] System.Globalization.DateTimeFormatInfo::optionalCalendars
	Int32U5BU5D_t2848674145* ___optionalCalendars_50;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_superShortDayNames
	StringU5BU5D_t3875140506* ___m_superShortDayNames_51;
	// System.String[] System.Globalization.DateTimeFormatInfo::genitiveMonthNames
	StringU5BU5D_t3875140506* ___genitiveMonthNames_52;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_genitiveAbbreviatedMonthNames
	StringU5BU5D_t3875140506* ___m_genitiveAbbreviatedMonthNames_53;
	// System.String[] System.Globalization.DateTimeFormatInfo::leapYearMonthNames
	StringU5BU5D_t3875140506* ___leapYearMonthNames_54;
	// System.Globalization.DateTimeFormatFlags System.Globalization.DateTimeFormatInfo::formatFlags
	int32_t ___formatFlags_55;
	// System.String System.Globalization.DateTimeFormatInfo::m_name
	String_t* ___m_name_56;
	// System.String[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::all_date_time_patterns
	StringU5BU5D_t3875140506* ___all_date_time_patterns_57;

public:
	inline static int32_t get_offset_of_m_isReadOnly_10() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453, ___m_isReadOnly_10)); }
	inline bool get_m_isReadOnly_10() const { return ___m_isReadOnly_10; }
	inline bool* get_address_of_m_isReadOnly_10() { return &___m_isReadOnly_10; }
	inline void set_m_isReadOnly_10(bool value)
	{
		___m_isReadOnly_10 = value;
	}

	inline static int32_t get_offset_of_amDesignator_11() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453, ___amDesignator_11)); }
	inline String_t* get_amDesignator_11() const { return ___amDesignator_11; }
	inline String_t** get_address_of_amDesignator_11() { return &___amDesignator_11; }
	inline void set_amDesignator_11(String_t* value)
	{
		___amDesignator_11 = value;
		Il2CppCodeGenWriteBarrier((&___amDesignator_11), value);
	}

	inline static int32_t get_offset_of_pmDesignator_12() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453, ___pmDesignator_12)); }
	inline String_t* get_pmDesignator_12() const { return ___pmDesignator_12; }
	inline String_t** get_address_of_pmDesignator_12() { return &___pmDesignator_12; }
	inline void set_pmDesignator_12(String_t* value)
	{
		___pmDesignator_12 = value;
		Il2CppCodeGenWriteBarrier((&___pmDesignator_12), value);
	}

	inline static int32_t get_offset_of_dateSeparator_13() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453, ___dateSeparator_13)); }
	inline String_t* get_dateSeparator_13() const { return ___dateSeparator_13; }
	inline String_t** get_address_of_dateSeparator_13() { return &___dateSeparator_13; }
	inline void set_dateSeparator_13(String_t* value)
	{
		___dateSeparator_13 = value;
		Il2CppCodeGenWriteBarrier((&___dateSeparator_13), value);
	}

	inline static int32_t get_offset_of_timeSeparator_14() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453, ___timeSeparator_14)); }
	inline String_t* get_timeSeparator_14() const { return ___timeSeparator_14; }
	inline String_t** get_address_of_timeSeparator_14() { return &___timeSeparator_14; }
	inline void set_timeSeparator_14(String_t* value)
	{
		___timeSeparator_14 = value;
		Il2CppCodeGenWriteBarrier((&___timeSeparator_14), value);
	}

	inline static int32_t get_offset_of_shortDatePattern_15() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453, ___shortDatePattern_15)); }
	inline String_t* get_shortDatePattern_15() const { return ___shortDatePattern_15; }
	inline String_t** get_address_of_shortDatePattern_15() { return &___shortDatePattern_15; }
	inline void set_shortDatePattern_15(String_t* value)
	{
		___shortDatePattern_15 = value;
		Il2CppCodeGenWriteBarrier((&___shortDatePattern_15), value);
	}

	inline static int32_t get_offset_of_longDatePattern_16() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453, ___longDatePattern_16)); }
	inline String_t* get_longDatePattern_16() const { return ___longDatePattern_16; }
	inline String_t** get_address_of_longDatePattern_16() { return &___longDatePattern_16; }
	inline void set_longDatePattern_16(String_t* value)
	{
		___longDatePattern_16 = value;
		Il2CppCodeGenWriteBarrier((&___longDatePattern_16), value);
	}

	inline static int32_t get_offset_of_shortTimePattern_17() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453, ___shortTimePattern_17)); }
	inline String_t* get_shortTimePattern_17() const { return ___shortTimePattern_17; }
	inline String_t** get_address_of_shortTimePattern_17() { return &___shortTimePattern_17; }
	inline void set_shortTimePattern_17(String_t* value)
	{
		___shortTimePattern_17 = value;
		Il2CppCodeGenWriteBarrier((&___shortTimePattern_17), value);
	}

	inline static int32_t get_offset_of_longTimePattern_18() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453, ___longTimePattern_18)); }
	inline String_t* get_longTimePattern_18() const { return ___longTimePattern_18; }
	inline String_t** get_address_of_longTimePattern_18() { return &___longTimePattern_18; }
	inline void set_longTimePattern_18(String_t* value)
	{
		___longTimePattern_18 = value;
		Il2CppCodeGenWriteBarrier((&___longTimePattern_18), value);
	}

	inline static int32_t get_offset_of_monthDayPattern_19() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453, ___monthDayPattern_19)); }
	inline String_t* get_monthDayPattern_19() const { return ___monthDayPattern_19; }
	inline String_t** get_address_of_monthDayPattern_19() { return &___monthDayPattern_19; }
	inline void set_monthDayPattern_19(String_t* value)
	{
		___monthDayPattern_19 = value;
		Il2CppCodeGenWriteBarrier((&___monthDayPattern_19), value);
	}

	inline static int32_t get_offset_of_yearMonthPattern_20() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453, ___yearMonthPattern_20)); }
	inline String_t* get_yearMonthPattern_20() const { return ___yearMonthPattern_20; }
	inline String_t** get_address_of_yearMonthPattern_20() { return &___yearMonthPattern_20; }
	inline void set_yearMonthPattern_20(String_t* value)
	{
		___yearMonthPattern_20 = value;
		Il2CppCodeGenWriteBarrier((&___yearMonthPattern_20), value);
	}

	inline static int32_t get_offset_of_fullDateTimePattern_21() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453, ___fullDateTimePattern_21)); }
	inline String_t* get_fullDateTimePattern_21() const { return ___fullDateTimePattern_21; }
	inline String_t** get_address_of_fullDateTimePattern_21() { return &___fullDateTimePattern_21; }
	inline void set_fullDateTimePattern_21(String_t* value)
	{
		___fullDateTimePattern_21 = value;
		Il2CppCodeGenWriteBarrier((&___fullDateTimePattern_21), value);
	}

	inline static int32_t get_offset_of__RFC1123Pattern_22() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453, ____RFC1123Pattern_22)); }
	inline String_t* get__RFC1123Pattern_22() const { return ____RFC1123Pattern_22; }
	inline String_t** get_address_of__RFC1123Pattern_22() { return &____RFC1123Pattern_22; }
	inline void set__RFC1123Pattern_22(String_t* value)
	{
		____RFC1123Pattern_22 = value;
		Il2CppCodeGenWriteBarrier((&____RFC1123Pattern_22), value);
	}

	inline static int32_t get_offset_of__SortableDateTimePattern_23() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453, ____SortableDateTimePattern_23)); }
	inline String_t* get__SortableDateTimePattern_23() const { return ____SortableDateTimePattern_23; }
	inline String_t** get_address_of__SortableDateTimePattern_23() { return &____SortableDateTimePattern_23; }
	inline void set__SortableDateTimePattern_23(String_t* value)
	{
		____SortableDateTimePattern_23 = value;
		Il2CppCodeGenWriteBarrier((&____SortableDateTimePattern_23), value);
	}

	inline static int32_t get_offset_of__UniversalSortableDateTimePattern_24() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453, ____UniversalSortableDateTimePattern_24)); }
	inline String_t* get__UniversalSortableDateTimePattern_24() const { return ____UniversalSortableDateTimePattern_24; }
	inline String_t** get_address_of__UniversalSortableDateTimePattern_24() { return &____UniversalSortableDateTimePattern_24; }
	inline void set__UniversalSortableDateTimePattern_24(String_t* value)
	{
		____UniversalSortableDateTimePattern_24 = value;
		Il2CppCodeGenWriteBarrier((&____UniversalSortableDateTimePattern_24), value);
	}

	inline static int32_t get_offset_of_firstDayOfWeek_25() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453, ___firstDayOfWeek_25)); }
	inline int32_t get_firstDayOfWeek_25() const { return ___firstDayOfWeek_25; }
	inline int32_t* get_address_of_firstDayOfWeek_25() { return &___firstDayOfWeek_25; }
	inline void set_firstDayOfWeek_25(int32_t value)
	{
		___firstDayOfWeek_25 = value;
	}

	inline static int32_t get_offset_of_calendar_26() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453, ___calendar_26)); }
	inline Calendar_t762697739 * get_calendar_26() const { return ___calendar_26; }
	inline Calendar_t762697739 ** get_address_of_calendar_26() { return &___calendar_26; }
	inline void set_calendar_26(Calendar_t762697739 * value)
	{
		___calendar_26 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_26), value);
	}

	inline static int32_t get_offset_of_calendarWeekRule_27() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453, ___calendarWeekRule_27)); }
	inline int32_t get_calendarWeekRule_27() const { return ___calendarWeekRule_27; }
	inline int32_t* get_address_of_calendarWeekRule_27() { return &___calendarWeekRule_27; }
	inline void set_calendarWeekRule_27(int32_t value)
	{
		___calendarWeekRule_27 = value;
	}

	inline static int32_t get_offset_of_abbreviatedDayNames_28() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453, ___abbreviatedDayNames_28)); }
	inline StringU5BU5D_t3875140506* get_abbreviatedDayNames_28() const { return ___abbreviatedDayNames_28; }
	inline StringU5BU5D_t3875140506** get_address_of_abbreviatedDayNames_28() { return &___abbreviatedDayNames_28; }
	inline void set_abbreviatedDayNames_28(StringU5BU5D_t3875140506* value)
	{
		___abbreviatedDayNames_28 = value;
		Il2CppCodeGenWriteBarrier((&___abbreviatedDayNames_28), value);
	}

	inline static int32_t get_offset_of_dayNames_29() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453, ___dayNames_29)); }
	inline StringU5BU5D_t3875140506* get_dayNames_29() const { return ___dayNames_29; }
	inline StringU5BU5D_t3875140506** get_address_of_dayNames_29() { return &___dayNames_29; }
	inline void set_dayNames_29(StringU5BU5D_t3875140506* value)
	{
		___dayNames_29 = value;
		Il2CppCodeGenWriteBarrier((&___dayNames_29), value);
	}

	inline static int32_t get_offset_of_monthNames_30() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453, ___monthNames_30)); }
	inline StringU5BU5D_t3875140506* get_monthNames_30() const { return ___monthNames_30; }
	inline StringU5BU5D_t3875140506** get_address_of_monthNames_30() { return &___monthNames_30; }
	inline void set_monthNames_30(StringU5BU5D_t3875140506* value)
	{
		___monthNames_30 = value;
		Il2CppCodeGenWriteBarrier((&___monthNames_30), value);
	}

	inline static int32_t get_offset_of_abbreviatedMonthNames_31() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453, ___abbreviatedMonthNames_31)); }
	inline StringU5BU5D_t3875140506* get_abbreviatedMonthNames_31() const { return ___abbreviatedMonthNames_31; }
	inline StringU5BU5D_t3875140506** get_address_of_abbreviatedMonthNames_31() { return &___abbreviatedMonthNames_31; }
	inline void set_abbreviatedMonthNames_31(StringU5BU5D_t3875140506* value)
	{
		___abbreviatedMonthNames_31 = value;
		Il2CppCodeGenWriteBarrier((&___abbreviatedMonthNames_31), value);
	}

	inline static int32_t get_offset_of_allShortDatePatterns_32() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453, ___allShortDatePatterns_32)); }
	inline StringU5BU5D_t3875140506* get_allShortDatePatterns_32() const { return ___allShortDatePatterns_32; }
	inline StringU5BU5D_t3875140506** get_address_of_allShortDatePatterns_32() { return &___allShortDatePatterns_32; }
	inline void set_allShortDatePatterns_32(StringU5BU5D_t3875140506* value)
	{
		___allShortDatePatterns_32 = value;
		Il2CppCodeGenWriteBarrier((&___allShortDatePatterns_32), value);
	}

	inline static int32_t get_offset_of_allLongDatePatterns_33() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453, ___allLongDatePatterns_33)); }
	inline StringU5BU5D_t3875140506* get_allLongDatePatterns_33() const { return ___allLongDatePatterns_33; }
	inline StringU5BU5D_t3875140506** get_address_of_allLongDatePatterns_33() { return &___allLongDatePatterns_33; }
	inline void set_allLongDatePatterns_33(StringU5BU5D_t3875140506* value)
	{
		___allLongDatePatterns_33 = value;
		Il2CppCodeGenWriteBarrier((&___allLongDatePatterns_33), value);
	}

	inline static int32_t get_offset_of_allShortTimePatterns_34() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453, ___allShortTimePatterns_34)); }
	inline StringU5BU5D_t3875140506* get_allShortTimePatterns_34() const { return ___allShortTimePatterns_34; }
	inline StringU5BU5D_t3875140506** get_address_of_allShortTimePatterns_34() { return &___allShortTimePatterns_34; }
	inline void set_allShortTimePatterns_34(StringU5BU5D_t3875140506* value)
	{
		___allShortTimePatterns_34 = value;
		Il2CppCodeGenWriteBarrier((&___allShortTimePatterns_34), value);
	}

	inline static int32_t get_offset_of_allLongTimePatterns_35() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453, ___allLongTimePatterns_35)); }
	inline StringU5BU5D_t3875140506* get_allLongTimePatterns_35() const { return ___allLongTimePatterns_35; }
	inline StringU5BU5D_t3875140506** get_address_of_allLongTimePatterns_35() { return &___allLongTimePatterns_35; }
	inline void set_allLongTimePatterns_35(StringU5BU5D_t3875140506* value)
	{
		___allLongTimePatterns_35 = value;
		Il2CppCodeGenWriteBarrier((&___allLongTimePatterns_35), value);
	}

	inline static int32_t get_offset_of_monthDayPatterns_36() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453, ___monthDayPatterns_36)); }
	inline StringU5BU5D_t3875140506* get_monthDayPatterns_36() const { return ___monthDayPatterns_36; }
	inline StringU5BU5D_t3875140506** get_address_of_monthDayPatterns_36() { return &___monthDayPatterns_36; }
	inline void set_monthDayPatterns_36(StringU5BU5D_t3875140506* value)
	{
		___monthDayPatterns_36 = value;
		Il2CppCodeGenWriteBarrier((&___monthDayPatterns_36), value);
	}

	inline static int32_t get_offset_of_yearMonthPatterns_37() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453, ___yearMonthPatterns_37)); }
	inline StringU5BU5D_t3875140506* get_yearMonthPatterns_37() const { return ___yearMonthPatterns_37; }
	inline StringU5BU5D_t3875140506** get_address_of_yearMonthPatterns_37() { return &___yearMonthPatterns_37; }
	inline void set_yearMonthPatterns_37(StringU5BU5D_t3875140506* value)
	{
		___yearMonthPatterns_37 = value;
		Il2CppCodeGenWriteBarrier((&___yearMonthPatterns_37), value);
	}

	inline static int32_t get_offset_of_shortDayNames_38() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453, ___shortDayNames_38)); }
	inline StringU5BU5D_t3875140506* get_shortDayNames_38() const { return ___shortDayNames_38; }
	inline StringU5BU5D_t3875140506** get_address_of_shortDayNames_38() { return &___shortDayNames_38; }
	inline void set_shortDayNames_38(StringU5BU5D_t3875140506* value)
	{
		___shortDayNames_38 = value;
		Il2CppCodeGenWriteBarrier((&___shortDayNames_38), value);
	}

	inline static int32_t get_offset_of_nDataItem_39() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453, ___nDataItem_39)); }
	inline int32_t get_nDataItem_39() const { return ___nDataItem_39; }
	inline int32_t* get_address_of_nDataItem_39() { return &___nDataItem_39; }
	inline void set_nDataItem_39(int32_t value)
	{
		___nDataItem_39 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_40() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453, ___m_useUserOverride_40)); }
	inline bool get_m_useUserOverride_40() const { return ___m_useUserOverride_40; }
	inline bool* get_address_of_m_useUserOverride_40() { return &___m_useUserOverride_40; }
	inline void set_m_useUserOverride_40(bool value)
	{
		___m_useUserOverride_40 = value;
	}

	inline static int32_t get_offset_of_m_isDefaultCalendar_41() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453, ___m_isDefaultCalendar_41)); }
	inline bool get_m_isDefaultCalendar_41() const { return ___m_isDefaultCalendar_41; }
	inline bool* get_address_of_m_isDefaultCalendar_41() { return &___m_isDefaultCalendar_41; }
	inline void set_m_isDefaultCalendar_41(bool value)
	{
		___m_isDefaultCalendar_41 = value;
	}

	inline static int32_t get_offset_of_CultureID_42() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453, ___CultureID_42)); }
	inline int32_t get_CultureID_42() const { return ___CultureID_42; }
	inline int32_t* get_address_of_CultureID_42() { return &___CultureID_42; }
	inline void set_CultureID_42(int32_t value)
	{
		___CultureID_42 = value;
	}

	inline static int32_t get_offset_of_bUseCalendarInfo_43() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453, ___bUseCalendarInfo_43)); }
	inline bool get_bUseCalendarInfo_43() const { return ___bUseCalendarInfo_43; }
	inline bool* get_address_of_bUseCalendarInfo_43() { return &___bUseCalendarInfo_43; }
	inline void set_bUseCalendarInfo_43(bool value)
	{
		___bUseCalendarInfo_43 = value;
	}

	inline static int32_t get_offset_of_generalShortTimePattern_44() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453, ___generalShortTimePattern_44)); }
	inline String_t* get_generalShortTimePattern_44() const { return ___generalShortTimePattern_44; }
	inline String_t** get_address_of_generalShortTimePattern_44() { return &___generalShortTimePattern_44; }
	inline void set_generalShortTimePattern_44(String_t* value)
	{
		___generalShortTimePattern_44 = value;
		Il2CppCodeGenWriteBarrier((&___generalShortTimePattern_44), value);
	}

	inline static int32_t get_offset_of_generalLongTimePattern_45() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453, ___generalLongTimePattern_45)); }
	inline String_t* get_generalLongTimePattern_45() const { return ___generalLongTimePattern_45; }
	inline String_t** get_address_of_generalLongTimePattern_45() { return &___generalLongTimePattern_45; }
	inline void set_generalLongTimePattern_45(String_t* value)
	{
		___generalLongTimePattern_45 = value;
		Il2CppCodeGenWriteBarrier((&___generalLongTimePattern_45), value);
	}

	inline static int32_t get_offset_of_m_eraNames_46() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453, ___m_eraNames_46)); }
	inline StringU5BU5D_t3875140506* get_m_eraNames_46() const { return ___m_eraNames_46; }
	inline StringU5BU5D_t3875140506** get_address_of_m_eraNames_46() { return &___m_eraNames_46; }
	inline void set_m_eraNames_46(StringU5BU5D_t3875140506* value)
	{
		___m_eraNames_46 = value;
		Il2CppCodeGenWriteBarrier((&___m_eraNames_46), value);
	}

	inline static int32_t get_offset_of_m_abbrevEraNames_47() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453, ___m_abbrevEraNames_47)); }
	inline StringU5BU5D_t3875140506* get_m_abbrevEraNames_47() const { return ___m_abbrevEraNames_47; }
	inline StringU5BU5D_t3875140506** get_address_of_m_abbrevEraNames_47() { return &___m_abbrevEraNames_47; }
	inline void set_m_abbrevEraNames_47(StringU5BU5D_t3875140506* value)
	{
		___m_abbrevEraNames_47 = value;
		Il2CppCodeGenWriteBarrier((&___m_abbrevEraNames_47), value);
	}

	inline static int32_t get_offset_of_m_abbrevEnglishEraNames_48() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453, ___m_abbrevEnglishEraNames_48)); }
	inline StringU5BU5D_t3875140506* get_m_abbrevEnglishEraNames_48() const { return ___m_abbrevEnglishEraNames_48; }
	inline StringU5BU5D_t3875140506** get_address_of_m_abbrevEnglishEraNames_48() { return &___m_abbrevEnglishEraNames_48; }
	inline void set_m_abbrevEnglishEraNames_48(StringU5BU5D_t3875140506* value)
	{
		___m_abbrevEnglishEraNames_48 = value;
		Il2CppCodeGenWriteBarrier((&___m_abbrevEnglishEraNames_48), value);
	}

	inline static int32_t get_offset_of_m_dateWords_49() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453, ___m_dateWords_49)); }
	inline StringU5BU5D_t3875140506* get_m_dateWords_49() const { return ___m_dateWords_49; }
	inline StringU5BU5D_t3875140506** get_address_of_m_dateWords_49() { return &___m_dateWords_49; }
	inline void set_m_dateWords_49(StringU5BU5D_t3875140506* value)
	{
		___m_dateWords_49 = value;
		Il2CppCodeGenWriteBarrier((&___m_dateWords_49), value);
	}

	inline static int32_t get_offset_of_optionalCalendars_50() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453, ___optionalCalendars_50)); }
	inline Int32U5BU5D_t2848674145* get_optionalCalendars_50() const { return ___optionalCalendars_50; }
	inline Int32U5BU5D_t2848674145** get_address_of_optionalCalendars_50() { return &___optionalCalendars_50; }
	inline void set_optionalCalendars_50(Int32U5BU5D_t2848674145* value)
	{
		___optionalCalendars_50 = value;
		Il2CppCodeGenWriteBarrier((&___optionalCalendars_50), value);
	}

	inline static int32_t get_offset_of_m_superShortDayNames_51() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453, ___m_superShortDayNames_51)); }
	inline StringU5BU5D_t3875140506* get_m_superShortDayNames_51() const { return ___m_superShortDayNames_51; }
	inline StringU5BU5D_t3875140506** get_address_of_m_superShortDayNames_51() { return &___m_superShortDayNames_51; }
	inline void set_m_superShortDayNames_51(StringU5BU5D_t3875140506* value)
	{
		___m_superShortDayNames_51 = value;
		Il2CppCodeGenWriteBarrier((&___m_superShortDayNames_51), value);
	}

	inline static int32_t get_offset_of_genitiveMonthNames_52() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453, ___genitiveMonthNames_52)); }
	inline StringU5BU5D_t3875140506* get_genitiveMonthNames_52() const { return ___genitiveMonthNames_52; }
	inline StringU5BU5D_t3875140506** get_address_of_genitiveMonthNames_52() { return &___genitiveMonthNames_52; }
	inline void set_genitiveMonthNames_52(StringU5BU5D_t3875140506* value)
	{
		___genitiveMonthNames_52 = value;
		Il2CppCodeGenWriteBarrier((&___genitiveMonthNames_52), value);
	}

	inline static int32_t get_offset_of_m_genitiveAbbreviatedMonthNames_53() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453, ___m_genitiveAbbreviatedMonthNames_53)); }
	inline StringU5BU5D_t3875140506* get_m_genitiveAbbreviatedMonthNames_53() const { return ___m_genitiveAbbreviatedMonthNames_53; }
	inline StringU5BU5D_t3875140506** get_address_of_m_genitiveAbbreviatedMonthNames_53() { return &___m_genitiveAbbreviatedMonthNames_53; }
	inline void set_m_genitiveAbbreviatedMonthNames_53(StringU5BU5D_t3875140506* value)
	{
		___m_genitiveAbbreviatedMonthNames_53 = value;
		Il2CppCodeGenWriteBarrier((&___m_genitiveAbbreviatedMonthNames_53), value);
	}

	inline static int32_t get_offset_of_leapYearMonthNames_54() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453, ___leapYearMonthNames_54)); }
	inline StringU5BU5D_t3875140506* get_leapYearMonthNames_54() const { return ___leapYearMonthNames_54; }
	inline StringU5BU5D_t3875140506** get_address_of_leapYearMonthNames_54() { return &___leapYearMonthNames_54; }
	inline void set_leapYearMonthNames_54(StringU5BU5D_t3875140506* value)
	{
		___leapYearMonthNames_54 = value;
		Il2CppCodeGenWriteBarrier((&___leapYearMonthNames_54), value);
	}

	inline static int32_t get_offset_of_formatFlags_55() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453, ___formatFlags_55)); }
	inline int32_t get_formatFlags_55() const { return ___formatFlags_55; }
	inline int32_t* get_address_of_formatFlags_55() { return &___formatFlags_55; }
	inline void set_formatFlags_55(int32_t value)
	{
		___formatFlags_55 = value;
	}

	inline static int32_t get_offset_of_m_name_56() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453, ___m_name_56)); }
	inline String_t* get_m_name_56() const { return ___m_name_56; }
	inline String_t** get_address_of_m_name_56() { return &___m_name_56; }
	inline void set_m_name_56(String_t* value)
	{
		___m_name_56 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_56), value);
	}

	inline static int32_t get_offset_of_all_date_time_patterns_57() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453, ___all_date_time_patterns_57)); }
	inline StringU5BU5D_t3875140506* get_all_date_time_patterns_57() const { return ___all_date_time_patterns_57; }
	inline StringU5BU5D_t3875140506** get_address_of_all_date_time_patterns_57() { return &___all_date_time_patterns_57; }
	inline void set_all_date_time_patterns_57(StringU5BU5D_t3875140506* value)
	{
		___all_date_time_patterns_57 = value;
		Il2CppCodeGenWriteBarrier((&___all_date_time_patterns_57), value);
	}
};

struct DateTimeFormatInfo_t1319266453_StaticFields
{
public:
	// System.String System.Globalization.DateTimeFormatInfo::MSG_READONLY
	String_t* ___MSG_READONLY_1;
	// System.String System.Globalization.DateTimeFormatInfo::MSG_ARRAYSIZE_MONTH
	String_t* ___MSG_ARRAYSIZE_MONTH_2;
	// System.String System.Globalization.DateTimeFormatInfo::MSG_ARRAYSIZE_DAY
	String_t* ___MSG_ARRAYSIZE_DAY_3;
	// System.String[] System.Globalization.DateTimeFormatInfo::INVARIANT_ABBREVIATED_DAY_NAMES
	StringU5BU5D_t3875140506* ___INVARIANT_ABBREVIATED_DAY_NAMES_4;
	// System.String[] System.Globalization.DateTimeFormatInfo::INVARIANT_DAY_NAMES
	StringU5BU5D_t3875140506* ___INVARIANT_DAY_NAMES_5;
	// System.String[] System.Globalization.DateTimeFormatInfo::INVARIANT_ABBREVIATED_MONTH_NAMES
	StringU5BU5D_t3875140506* ___INVARIANT_ABBREVIATED_MONTH_NAMES_6;
	// System.String[] System.Globalization.DateTimeFormatInfo::INVARIANT_MONTH_NAMES
	StringU5BU5D_t3875140506* ___INVARIANT_MONTH_NAMES_7;
	// System.String[] System.Globalization.DateTimeFormatInfo::INVARIANT_SHORT_DAY_NAMES
	StringU5BU5D_t3875140506* ___INVARIANT_SHORT_DAY_NAMES_8;
	// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::theInvariantDateTimeFormatInfo
	DateTimeFormatInfo_t1319266453 * ___theInvariantDateTimeFormatInfo_9;

public:
	inline static int32_t get_offset_of_MSG_READONLY_1() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453_StaticFields, ___MSG_READONLY_1)); }
	inline String_t* get_MSG_READONLY_1() const { return ___MSG_READONLY_1; }
	inline String_t** get_address_of_MSG_READONLY_1() { return &___MSG_READONLY_1; }
	inline void set_MSG_READONLY_1(String_t* value)
	{
		___MSG_READONLY_1 = value;
		Il2CppCodeGenWriteBarrier((&___MSG_READONLY_1), value);
	}

	inline static int32_t get_offset_of_MSG_ARRAYSIZE_MONTH_2() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453_StaticFields, ___MSG_ARRAYSIZE_MONTH_2)); }
	inline String_t* get_MSG_ARRAYSIZE_MONTH_2() const { return ___MSG_ARRAYSIZE_MONTH_2; }
	inline String_t** get_address_of_MSG_ARRAYSIZE_MONTH_2() { return &___MSG_ARRAYSIZE_MONTH_2; }
	inline void set_MSG_ARRAYSIZE_MONTH_2(String_t* value)
	{
		___MSG_ARRAYSIZE_MONTH_2 = value;
		Il2CppCodeGenWriteBarrier((&___MSG_ARRAYSIZE_MONTH_2), value);
	}

	inline static int32_t get_offset_of_MSG_ARRAYSIZE_DAY_3() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453_StaticFields, ___MSG_ARRAYSIZE_DAY_3)); }
	inline String_t* get_MSG_ARRAYSIZE_DAY_3() const { return ___MSG_ARRAYSIZE_DAY_3; }
	inline String_t** get_address_of_MSG_ARRAYSIZE_DAY_3() { return &___MSG_ARRAYSIZE_DAY_3; }
	inline void set_MSG_ARRAYSIZE_DAY_3(String_t* value)
	{
		___MSG_ARRAYSIZE_DAY_3 = value;
		Il2CppCodeGenWriteBarrier((&___MSG_ARRAYSIZE_DAY_3), value);
	}

	inline static int32_t get_offset_of_INVARIANT_ABBREVIATED_DAY_NAMES_4() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453_StaticFields, ___INVARIANT_ABBREVIATED_DAY_NAMES_4)); }
	inline StringU5BU5D_t3875140506* get_INVARIANT_ABBREVIATED_DAY_NAMES_4() const { return ___INVARIANT_ABBREVIATED_DAY_NAMES_4; }
	inline StringU5BU5D_t3875140506** get_address_of_INVARIANT_ABBREVIATED_DAY_NAMES_4() { return &___INVARIANT_ABBREVIATED_DAY_NAMES_4; }
	inline void set_INVARIANT_ABBREVIATED_DAY_NAMES_4(StringU5BU5D_t3875140506* value)
	{
		___INVARIANT_ABBREVIATED_DAY_NAMES_4 = value;
		Il2CppCodeGenWriteBarrier((&___INVARIANT_ABBREVIATED_DAY_NAMES_4), value);
	}

	inline static int32_t get_offset_of_INVARIANT_DAY_NAMES_5() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453_StaticFields, ___INVARIANT_DAY_NAMES_5)); }
	inline StringU5BU5D_t3875140506* get_INVARIANT_DAY_NAMES_5() const { return ___INVARIANT_DAY_NAMES_5; }
	inline StringU5BU5D_t3875140506** get_address_of_INVARIANT_DAY_NAMES_5() { return &___INVARIANT_DAY_NAMES_5; }
	inline void set_INVARIANT_DAY_NAMES_5(StringU5BU5D_t3875140506* value)
	{
		___INVARIANT_DAY_NAMES_5 = value;
		Il2CppCodeGenWriteBarrier((&___INVARIANT_DAY_NAMES_5), value);
	}

	inline static int32_t get_offset_of_INVARIANT_ABBREVIATED_MONTH_NAMES_6() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453_StaticFields, ___INVARIANT_ABBREVIATED_MONTH_NAMES_6)); }
	inline StringU5BU5D_t3875140506* get_INVARIANT_ABBREVIATED_MONTH_NAMES_6() const { return ___INVARIANT_ABBREVIATED_MONTH_NAMES_6; }
	inline StringU5BU5D_t3875140506** get_address_of_INVARIANT_ABBREVIATED_MONTH_NAMES_6() { return &___INVARIANT_ABBREVIATED_MONTH_NAMES_6; }
	inline void set_INVARIANT_ABBREVIATED_MONTH_NAMES_6(StringU5BU5D_t3875140506* value)
	{
		___INVARIANT_ABBREVIATED_MONTH_NAMES_6 = value;
		Il2CppCodeGenWriteBarrier((&___INVARIANT_ABBREVIATED_MONTH_NAMES_6), value);
	}

	inline static int32_t get_offset_of_INVARIANT_MONTH_NAMES_7() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453_StaticFields, ___INVARIANT_MONTH_NAMES_7)); }
	inline StringU5BU5D_t3875140506* get_INVARIANT_MONTH_NAMES_7() const { return ___INVARIANT_MONTH_NAMES_7; }
	inline StringU5BU5D_t3875140506** get_address_of_INVARIANT_MONTH_NAMES_7() { return &___INVARIANT_MONTH_NAMES_7; }
	inline void set_INVARIANT_MONTH_NAMES_7(StringU5BU5D_t3875140506* value)
	{
		___INVARIANT_MONTH_NAMES_7 = value;
		Il2CppCodeGenWriteBarrier((&___INVARIANT_MONTH_NAMES_7), value);
	}

	inline static int32_t get_offset_of_INVARIANT_SHORT_DAY_NAMES_8() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453_StaticFields, ___INVARIANT_SHORT_DAY_NAMES_8)); }
	inline StringU5BU5D_t3875140506* get_INVARIANT_SHORT_DAY_NAMES_8() const { return ___INVARIANT_SHORT_DAY_NAMES_8; }
	inline StringU5BU5D_t3875140506** get_address_of_INVARIANT_SHORT_DAY_NAMES_8() { return &___INVARIANT_SHORT_DAY_NAMES_8; }
	inline void set_INVARIANT_SHORT_DAY_NAMES_8(StringU5BU5D_t3875140506* value)
	{
		___INVARIANT_SHORT_DAY_NAMES_8 = value;
		Il2CppCodeGenWriteBarrier((&___INVARIANT_SHORT_DAY_NAMES_8), value);
	}

	inline static int32_t get_offset_of_theInvariantDateTimeFormatInfo_9() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t1319266453_StaticFields, ___theInvariantDateTimeFormatInfo_9)); }
	inline DateTimeFormatInfo_t1319266453 * get_theInvariantDateTimeFormatInfo_9() const { return ___theInvariantDateTimeFormatInfo_9; }
	inline DateTimeFormatInfo_t1319266453 ** get_address_of_theInvariantDateTimeFormatInfo_9() { return &___theInvariantDateTimeFormatInfo_9; }
	inline void set_theInvariantDateTimeFormatInfo_9(DateTimeFormatInfo_t1319266453 * value)
	{
		___theInvariantDateTimeFormatInfo_9 = value;
		Il2CppCodeGenWriteBarrier((&___theInvariantDateTimeFormatInfo_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEFORMATINFO_T1319266453_H
#ifndef GREGORIANCALENDAR_T838899574_H
#define GREGORIANCALENDAR_T838899574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.GregorianCalendar
struct  GregorianCalendar_t838899574  : public Calendar_t762697739
{
public:
	// System.Globalization.GregorianCalendarTypes System.Globalization.GregorianCalendar::m_type
	int32_t ___m_type_4;

public:
	inline static int32_t get_offset_of_m_type_4() { return static_cast<int32_t>(offsetof(GregorianCalendar_t838899574, ___m_type_4)); }
	inline int32_t get_m_type_4() const { return ___m_type_4; }
	inline int32_t* get_address_of_m_type_4() { return &___m_type_4; }
	inline void set_m_type_4(int32_t value)
	{
		___m_type_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GREGORIANCALENDAR_T838899574_H
#ifndef UNMANAGEDMEMORYSTREAM_T461760178_H
#define UNMANAGEDMEMORYSTREAM_T461760178_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.UnmanagedMemoryStream
struct  UnmanagedMemoryStream_t461760178  : public Stream_t403697452
{
public:
	// System.Int64 System.IO.UnmanagedMemoryStream::length
	int64_t ___length_1;
	// System.Boolean System.IO.UnmanagedMemoryStream::closed
	bool ___closed_2;
	// System.Int64 System.IO.UnmanagedMemoryStream::capacity
	int64_t ___capacity_3;
	// System.IO.FileAccess System.IO.UnmanagedMemoryStream::fileaccess
	int32_t ___fileaccess_4;
	// System.IntPtr System.IO.UnmanagedMemoryStream::initial_pointer
	intptr_t ___initial_pointer_5;
	// System.Int64 System.IO.UnmanagedMemoryStream::initial_position
	int64_t ___initial_position_6;
	// System.Int64 System.IO.UnmanagedMemoryStream::current_position
	int64_t ___current_position_7;
	// System.EventHandler System.IO.UnmanagedMemoryStream::Closed
	EventHandler_t1996995296 * ___Closed_8;

public:
	inline static int32_t get_offset_of_length_1() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_t461760178, ___length_1)); }
	inline int64_t get_length_1() const { return ___length_1; }
	inline int64_t* get_address_of_length_1() { return &___length_1; }
	inline void set_length_1(int64_t value)
	{
		___length_1 = value;
	}

	inline static int32_t get_offset_of_closed_2() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_t461760178, ___closed_2)); }
	inline bool get_closed_2() const { return ___closed_2; }
	inline bool* get_address_of_closed_2() { return &___closed_2; }
	inline void set_closed_2(bool value)
	{
		___closed_2 = value;
	}

	inline static int32_t get_offset_of_capacity_3() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_t461760178, ___capacity_3)); }
	inline int64_t get_capacity_3() const { return ___capacity_3; }
	inline int64_t* get_address_of_capacity_3() { return &___capacity_3; }
	inline void set_capacity_3(int64_t value)
	{
		___capacity_3 = value;
	}

	inline static int32_t get_offset_of_fileaccess_4() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_t461760178, ___fileaccess_4)); }
	inline int32_t get_fileaccess_4() const { return ___fileaccess_4; }
	inline int32_t* get_address_of_fileaccess_4() { return &___fileaccess_4; }
	inline void set_fileaccess_4(int32_t value)
	{
		___fileaccess_4 = value;
	}

	inline static int32_t get_offset_of_initial_pointer_5() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_t461760178, ___initial_pointer_5)); }
	inline intptr_t get_initial_pointer_5() const { return ___initial_pointer_5; }
	inline intptr_t* get_address_of_initial_pointer_5() { return &___initial_pointer_5; }
	inline void set_initial_pointer_5(intptr_t value)
	{
		___initial_pointer_5 = value;
	}

	inline static int32_t get_offset_of_initial_position_6() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_t461760178, ___initial_position_6)); }
	inline int64_t get_initial_position_6() const { return ___initial_position_6; }
	inline int64_t* get_address_of_initial_position_6() { return &___initial_position_6; }
	inline void set_initial_position_6(int64_t value)
	{
		___initial_position_6 = value;
	}

	inline static int32_t get_offset_of_current_position_7() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_t461760178, ___current_position_7)); }
	inline int64_t get_current_position_7() const { return ___current_position_7; }
	inline int64_t* get_address_of_current_position_7() { return &___current_position_7; }
	inline void set_current_position_7(int64_t value)
	{
		___current_position_7 = value;
	}

	inline static int32_t get_offset_of_Closed_8() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_t461760178, ___Closed_8)); }
	inline EventHandler_t1996995296 * get_Closed_8() const { return ___Closed_8; }
	inline EventHandler_t1996995296 ** get_address_of_Closed_8() { return &___Closed_8; }
	inline void set_Closed_8(EventHandler_t1996995296 * value)
	{
		___Closed_8 = value;
		Il2CppCodeGenWriteBarrier((&___Closed_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNMANAGEDMEMORYSTREAM_T461760178_H
#ifndef FIELDBUILDER_T1070198504_H
#define FIELDBUILDER_T1070198504_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.FieldBuilder
struct  FieldBuilder_t1070198504  : public FieldInfo_t
{
public:
	// System.Reflection.FieldAttributes System.Reflection.Emit.FieldBuilder::attrs
	int32_t ___attrs_0;
	// System.Type System.Reflection.Emit.FieldBuilder::type
	Type_t * ___type_1;
	// System.String System.Reflection.Emit.FieldBuilder::name
	String_t* ___name_2;
	// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.FieldBuilder::typeb
	TypeBuilder_t2954596631 * ___typeb_3;
	// System.Reflection.Emit.UnmanagedMarshal System.Reflection.Emit.FieldBuilder::marshal_info
	UnmanagedMarshal_t3181639679 * ___marshal_info_4;

public:
	inline static int32_t get_offset_of_attrs_0() { return static_cast<int32_t>(offsetof(FieldBuilder_t1070198504, ___attrs_0)); }
	inline int32_t get_attrs_0() const { return ___attrs_0; }
	inline int32_t* get_address_of_attrs_0() { return &___attrs_0; }
	inline void set_attrs_0(int32_t value)
	{
		___attrs_0 = value;
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(FieldBuilder_t1070198504, ___type_1)); }
	inline Type_t * get_type_1() const { return ___type_1; }
	inline Type_t ** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(Type_t * value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier((&___type_1), value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(FieldBuilder_t1070198504, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_typeb_3() { return static_cast<int32_t>(offsetof(FieldBuilder_t1070198504, ___typeb_3)); }
	inline TypeBuilder_t2954596631 * get_typeb_3() const { return ___typeb_3; }
	inline TypeBuilder_t2954596631 ** get_address_of_typeb_3() { return &___typeb_3; }
	inline void set_typeb_3(TypeBuilder_t2954596631 * value)
	{
		___typeb_3 = value;
		Il2CppCodeGenWriteBarrier((&___typeb_3), value);
	}

	inline static int32_t get_offset_of_marshal_info_4() { return static_cast<int32_t>(offsetof(FieldBuilder_t1070198504, ___marshal_info_4)); }
	inline UnmanagedMarshal_t3181639679 * get_marshal_info_4() const { return ___marshal_info_4; }
	inline UnmanagedMarshal_t3181639679 ** get_address_of_marshal_info_4() { return &___marshal_info_4; }
	inline void set_marshal_info_4(UnmanagedMarshal_t3181639679 * value)
	{
		___marshal_info_4 = value;
		Il2CppCodeGenWriteBarrier((&___marshal_info_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDBUILDER_T1070198504_H
#ifndef MULTICASTDELEGATE_T1908836075_H
#define MULTICASTDELEGATE_T1908836075_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t1908836075  : public Delegate_t1392602965
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t1908836075 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t1908836075 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t1908836075, ___prev_9)); }
	inline MulticastDelegate_t1908836075 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t1908836075 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t1908836075 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t1908836075, ___kpm_next_10)); }
	inline MulticastDelegate_t1908836075 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t1908836075 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t1908836075 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T1908836075_H
#ifndef FILENOTFOUNDEXCEPTION_T1785530066_H
#define FILENOTFOUNDEXCEPTION_T1785530066_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileNotFoundException
struct  FileNotFoundException_t1785530066  : public IOException_t4190301069
{
public:
	// System.String System.IO.FileNotFoundException::fileName
	String_t* ___fileName_11;
	// System.String System.IO.FileNotFoundException::fusionLog
	String_t* ___fusionLog_12;

public:
	inline static int32_t get_offset_of_fileName_11() { return static_cast<int32_t>(offsetof(FileNotFoundException_t1785530066, ___fileName_11)); }
	inline String_t* get_fileName_11() const { return ___fileName_11; }
	inline String_t** get_address_of_fileName_11() { return &___fileName_11; }
	inline void set_fileName_11(String_t* value)
	{
		___fileName_11 = value;
		Il2CppCodeGenWriteBarrier((&___fileName_11), value);
	}

	inline static int32_t get_offset_of_fusionLog_12() { return static_cast<int32_t>(offsetof(FileNotFoundException_t1785530066, ___fusionLog_12)); }
	inline String_t* get_fusionLog_12() const { return ___fusionLog_12; }
	inline String_t** get_address_of_fusionLog_12() { return &___fusionLog_12; }
	inline void set_fusionLog_12(String_t* value)
	{
		___fusionLog_12 = value;
		Il2CppCodeGenWriteBarrier((&___fusionLog_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILENOTFOUNDEXCEPTION_T1785530066_H
#ifndef FILESTREAM_T3061599599_H
#define FILESTREAM_T3061599599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileStream
struct  FileStream_t3061599599  : public Stream_t403697452
{
public:
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_1;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_2;
	// System.Boolean System.IO.FileStream::async
	bool ___async_3;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_4;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_5;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_6;
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_t1979668241* ___buf_7;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_8;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_9;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_10;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_11;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_12;
	// System.String System.IO.FileStream::name
	String_t* ___name_13;
	// System.IntPtr System.IO.FileStream::handle
	intptr_t ___handle_14;

public:
	inline static int32_t get_offset_of_access_1() { return static_cast<int32_t>(offsetof(FileStream_t3061599599, ___access_1)); }
	inline int32_t get_access_1() const { return ___access_1; }
	inline int32_t* get_address_of_access_1() { return &___access_1; }
	inline void set_access_1(int32_t value)
	{
		___access_1 = value;
	}

	inline static int32_t get_offset_of_owner_2() { return static_cast<int32_t>(offsetof(FileStream_t3061599599, ___owner_2)); }
	inline bool get_owner_2() const { return ___owner_2; }
	inline bool* get_address_of_owner_2() { return &___owner_2; }
	inline void set_owner_2(bool value)
	{
		___owner_2 = value;
	}

	inline static int32_t get_offset_of_async_3() { return static_cast<int32_t>(offsetof(FileStream_t3061599599, ___async_3)); }
	inline bool get_async_3() const { return ___async_3; }
	inline bool* get_address_of_async_3() { return &___async_3; }
	inline void set_async_3(bool value)
	{
		___async_3 = value;
	}

	inline static int32_t get_offset_of_canseek_4() { return static_cast<int32_t>(offsetof(FileStream_t3061599599, ___canseek_4)); }
	inline bool get_canseek_4() const { return ___canseek_4; }
	inline bool* get_address_of_canseek_4() { return &___canseek_4; }
	inline void set_canseek_4(bool value)
	{
		___canseek_4 = value;
	}

	inline static int32_t get_offset_of_append_startpos_5() { return static_cast<int32_t>(offsetof(FileStream_t3061599599, ___append_startpos_5)); }
	inline int64_t get_append_startpos_5() const { return ___append_startpos_5; }
	inline int64_t* get_address_of_append_startpos_5() { return &___append_startpos_5; }
	inline void set_append_startpos_5(int64_t value)
	{
		___append_startpos_5 = value;
	}

	inline static int32_t get_offset_of_anonymous_6() { return static_cast<int32_t>(offsetof(FileStream_t3061599599, ___anonymous_6)); }
	inline bool get_anonymous_6() const { return ___anonymous_6; }
	inline bool* get_address_of_anonymous_6() { return &___anonymous_6; }
	inline void set_anonymous_6(bool value)
	{
		___anonymous_6 = value;
	}

	inline static int32_t get_offset_of_buf_7() { return static_cast<int32_t>(offsetof(FileStream_t3061599599, ___buf_7)); }
	inline ByteU5BU5D_t1979668241* get_buf_7() const { return ___buf_7; }
	inline ByteU5BU5D_t1979668241** get_address_of_buf_7() { return &___buf_7; }
	inline void set_buf_7(ByteU5BU5D_t1979668241* value)
	{
		___buf_7 = value;
		Il2CppCodeGenWriteBarrier((&___buf_7), value);
	}

	inline static int32_t get_offset_of_buf_size_8() { return static_cast<int32_t>(offsetof(FileStream_t3061599599, ___buf_size_8)); }
	inline int32_t get_buf_size_8() const { return ___buf_size_8; }
	inline int32_t* get_address_of_buf_size_8() { return &___buf_size_8; }
	inline void set_buf_size_8(int32_t value)
	{
		___buf_size_8 = value;
	}

	inline static int32_t get_offset_of_buf_length_9() { return static_cast<int32_t>(offsetof(FileStream_t3061599599, ___buf_length_9)); }
	inline int32_t get_buf_length_9() const { return ___buf_length_9; }
	inline int32_t* get_address_of_buf_length_9() { return &___buf_length_9; }
	inline void set_buf_length_9(int32_t value)
	{
		___buf_length_9 = value;
	}

	inline static int32_t get_offset_of_buf_offset_10() { return static_cast<int32_t>(offsetof(FileStream_t3061599599, ___buf_offset_10)); }
	inline int32_t get_buf_offset_10() const { return ___buf_offset_10; }
	inline int32_t* get_address_of_buf_offset_10() { return &___buf_offset_10; }
	inline void set_buf_offset_10(int32_t value)
	{
		___buf_offset_10 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_11() { return static_cast<int32_t>(offsetof(FileStream_t3061599599, ___buf_dirty_11)); }
	inline bool get_buf_dirty_11() const { return ___buf_dirty_11; }
	inline bool* get_address_of_buf_dirty_11() { return &___buf_dirty_11; }
	inline void set_buf_dirty_11(bool value)
	{
		___buf_dirty_11 = value;
	}

	inline static int32_t get_offset_of_buf_start_12() { return static_cast<int32_t>(offsetof(FileStream_t3061599599, ___buf_start_12)); }
	inline int64_t get_buf_start_12() const { return ___buf_start_12; }
	inline int64_t* get_address_of_buf_start_12() { return &___buf_start_12; }
	inline void set_buf_start_12(int64_t value)
	{
		___buf_start_12 = value;
	}

	inline static int32_t get_offset_of_name_13() { return static_cast<int32_t>(offsetof(FileStream_t3061599599, ___name_13)); }
	inline String_t* get_name_13() const { return ___name_13; }
	inline String_t** get_address_of_name_13() { return &___name_13; }
	inline void set_name_13(String_t* value)
	{
		___name_13 = value;
		Il2CppCodeGenWriteBarrier((&___name_13), value);
	}

	inline static int32_t get_offset_of_handle_14() { return static_cast<int32_t>(offsetof(FileStream_t3061599599, ___handle_14)); }
	inline intptr_t get_handle_14() const { return ___handle_14; }
	inline intptr_t* get_address_of_handle_14() { return &___handle_14; }
	inline void set_handle_14(intptr_t value)
	{
		___handle_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILESTREAM_T3061599599_H
#ifndef FILELOADEXCEPTION_T3963728828_H
#define FILELOADEXCEPTION_T3963728828_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileLoadException
struct  FileLoadException_t3963728828  : public IOException_t4190301069
{
public:
	// System.String System.IO.FileLoadException::msg
	String_t* ___msg_12;
	// System.String System.IO.FileLoadException::fileName
	String_t* ___fileName_13;
	// System.String System.IO.FileLoadException::fusionLog
	String_t* ___fusionLog_14;

public:
	inline static int32_t get_offset_of_msg_12() { return static_cast<int32_t>(offsetof(FileLoadException_t3963728828, ___msg_12)); }
	inline String_t* get_msg_12() const { return ___msg_12; }
	inline String_t** get_address_of_msg_12() { return &___msg_12; }
	inline void set_msg_12(String_t* value)
	{
		___msg_12 = value;
		Il2CppCodeGenWriteBarrier((&___msg_12), value);
	}

	inline static int32_t get_offset_of_fileName_13() { return static_cast<int32_t>(offsetof(FileLoadException_t3963728828, ___fileName_13)); }
	inline String_t* get_fileName_13() const { return ___fileName_13; }
	inline String_t** get_address_of_fileName_13() { return &___fileName_13; }
	inline void set_fileName_13(String_t* value)
	{
		___fileName_13 = value;
		Il2CppCodeGenWriteBarrier((&___fileName_13), value);
	}

	inline static int32_t get_offset_of_fusionLog_14() { return static_cast<int32_t>(offsetof(FileLoadException_t3963728828, ___fusionLog_14)); }
	inline String_t* get_fusionLog_14() const { return ___fusionLog_14; }
	inline String_t** get_address_of_fusionLog_14() { return &___fusionLog_14; }
	inline void set_fusionLog_14(String_t* value)
	{
		___fusionLog_14 = value;
		Il2CppCodeGenWriteBarrier((&___fusionLog_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILELOADEXCEPTION_T3963728828_H
#ifndef CONSTRUCTORBUILDER_T2245332734_H
#define CONSTRUCTORBUILDER_T2245332734_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ConstructorBuilder
struct  ConstructorBuilder_t2245332734  : public ConstructorInfo_t596139080
{
public:
	// System.Reflection.Emit.ILGenerator System.Reflection.Emit.ConstructorBuilder::ilgen
	ILGenerator_t3257509038 * ___ilgen_2;
	// System.Type[] System.Reflection.Emit.ConstructorBuilder::parameters
	TypeU5BU5D_t791284206* ___parameters_3;
	// System.Reflection.MethodAttributes System.Reflection.Emit.ConstructorBuilder::attrs
	int32_t ___attrs_4;
	// System.Reflection.MethodImplAttributes System.Reflection.Emit.ConstructorBuilder::iattrs
	int32_t ___iattrs_5;
	// System.Int32 System.Reflection.Emit.ConstructorBuilder::table_idx
	int32_t ___table_idx_6;
	// System.Reflection.CallingConventions System.Reflection.Emit.ConstructorBuilder::call_conv
	int32_t ___call_conv_7;
	// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ConstructorBuilder::type
	TypeBuilder_t2954596631 * ___type_8;
	// System.Reflection.Emit.ParameterBuilder[] System.Reflection.Emit.ConstructorBuilder::pinfo
	ParameterBuilderU5BU5D_t863649823* ___pinfo_9;
	// System.Boolean System.Reflection.Emit.ConstructorBuilder::init_locals
	bool ___init_locals_10;
	// System.Type[][] System.Reflection.Emit.ConstructorBuilder::paramModReq
	TypeU5BU5DU5BU5D_t2913671835* ___paramModReq_11;
	// System.Type[][] System.Reflection.Emit.ConstructorBuilder::paramModOpt
	TypeU5BU5DU5BU5D_t2913671835* ___paramModOpt_12;

public:
	inline static int32_t get_offset_of_ilgen_2() { return static_cast<int32_t>(offsetof(ConstructorBuilder_t2245332734, ___ilgen_2)); }
	inline ILGenerator_t3257509038 * get_ilgen_2() const { return ___ilgen_2; }
	inline ILGenerator_t3257509038 ** get_address_of_ilgen_2() { return &___ilgen_2; }
	inline void set_ilgen_2(ILGenerator_t3257509038 * value)
	{
		___ilgen_2 = value;
		Il2CppCodeGenWriteBarrier((&___ilgen_2), value);
	}

	inline static int32_t get_offset_of_parameters_3() { return static_cast<int32_t>(offsetof(ConstructorBuilder_t2245332734, ___parameters_3)); }
	inline TypeU5BU5D_t791284206* get_parameters_3() const { return ___parameters_3; }
	inline TypeU5BU5D_t791284206** get_address_of_parameters_3() { return &___parameters_3; }
	inline void set_parameters_3(TypeU5BU5D_t791284206* value)
	{
		___parameters_3 = value;
		Il2CppCodeGenWriteBarrier((&___parameters_3), value);
	}

	inline static int32_t get_offset_of_attrs_4() { return static_cast<int32_t>(offsetof(ConstructorBuilder_t2245332734, ___attrs_4)); }
	inline int32_t get_attrs_4() const { return ___attrs_4; }
	inline int32_t* get_address_of_attrs_4() { return &___attrs_4; }
	inline void set_attrs_4(int32_t value)
	{
		___attrs_4 = value;
	}

	inline static int32_t get_offset_of_iattrs_5() { return static_cast<int32_t>(offsetof(ConstructorBuilder_t2245332734, ___iattrs_5)); }
	inline int32_t get_iattrs_5() const { return ___iattrs_5; }
	inline int32_t* get_address_of_iattrs_5() { return &___iattrs_5; }
	inline void set_iattrs_5(int32_t value)
	{
		___iattrs_5 = value;
	}

	inline static int32_t get_offset_of_table_idx_6() { return static_cast<int32_t>(offsetof(ConstructorBuilder_t2245332734, ___table_idx_6)); }
	inline int32_t get_table_idx_6() const { return ___table_idx_6; }
	inline int32_t* get_address_of_table_idx_6() { return &___table_idx_6; }
	inline void set_table_idx_6(int32_t value)
	{
		___table_idx_6 = value;
	}

	inline static int32_t get_offset_of_call_conv_7() { return static_cast<int32_t>(offsetof(ConstructorBuilder_t2245332734, ___call_conv_7)); }
	inline int32_t get_call_conv_7() const { return ___call_conv_7; }
	inline int32_t* get_address_of_call_conv_7() { return &___call_conv_7; }
	inline void set_call_conv_7(int32_t value)
	{
		___call_conv_7 = value;
	}

	inline static int32_t get_offset_of_type_8() { return static_cast<int32_t>(offsetof(ConstructorBuilder_t2245332734, ___type_8)); }
	inline TypeBuilder_t2954596631 * get_type_8() const { return ___type_8; }
	inline TypeBuilder_t2954596631 ** get_address_of_type_8() { return &___type_8; }
	inline void set_type_8(TypeBuilder_t2954596631 * value)
	{
		___type_8 = value;
		Il2CppCodeGenWriteBarrier((&___type_8), value);
	}

	inline static int32_t get_offset_of_pinfo_9() { return static_cast<int32_t>(offsetof(ConstructorBuilder_t2245332734, ___pinfo_9)); }
	inline ParameterBuilderU5BU5D_t863649823* get_pinfo_9() const { return ___pinfo_9; }
	inline ParameterBuilderU5BU5D_t863649823** get_address_of_pinfo_9() { return &___pinfo_9; }
	inline void set_pinfo_9(ParameterBuilderU5BU5D_t863649823* value)
	{
		___pinfo_9 = value;
		Il2CppCodeGenWriteBarrier((&___pinfo_9), value);
	}

	inline static int32_t get_offset_of_init_locals_10() { return static_cast<int32_t>(offsetof(ConstructorBuilder_t2245332734, ___init_locals_10)); }
	inline bool get_init_locals_10() const { return ___init_locals_10; }
	inline bool* get_address_of_init_locals_10() { return &___init_locals_10; }
	inline void set_init_locals_10(bool value)
	{
		___init_locals_10 = value;
	}

	inline static int32_t get_offset_of_paramModReq_11() { return static_cast<int32_t>(offsetof(ConstructorBuilder_t2245332734, ___paramModReq_11)); }
	inline TypeU5BU5DU5BU5D_t2913671835* get_paramModReq_11() const { return ___paramModReq_11; }
	inline TypeU5BU5DU5BU5D_t2913671835** get_address_of_paramModReq_11() { return &___paramModReq_11; }
	inline void set_paramModReq_11(TypeU5BU5DU5BU5D_t2913671835* value)
	{
		___paramModReq_11 = value;
		Il2CppCodeGenWriteBarrier((&___paramModReq_11), value);
	}

	inline static int32_t get_offset_of_paramModOpt_12() { return static_cast<int32_t>(offsetof(ConstructorBuilder_t2245332734, ___paramModOpt_12)); }
	inline TypeU5BU5DU5BU5D_t2913671835* get_paramModOpt_12() const { return ___paramModOpt_12; }
	inline TypeU5BU5DU5BU5D_t2913671835** get_address_of_paramModOpt_12() { return &___paramModOpt_12; }
	inline void set_paramModOpt_12(TypeU5BU5DU5BU5D_t2913671835* value)
	{
		___paramModOpt_12 = value;
		Il2CppCodeGenWriteBarrier((&___paramModOpt_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRUCTORBUILDER_T2245332734_H
#ifndef ASSEMBLYBUILDER_T874093524_H
#define ASSEMBLYBUILDER_T874093524_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.AssemblyBuilder
struct  AssemblyBuilder_t874093524  : public Assembly_t1073122682
{
public:
	// System.Reflection.Emit.ModuleBuilder[] System.Reflection.Emit.AssemblyBuilder::modules
	ModuleBuilderU5BU5D_t3255797287* ___modules_10;
	// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::loaded_modules
	ModuleU5BU5D_t862211818* ___loaded_modules_11;
	// System.Type System.Reflection.Emit.AssemblyBuilder::corlib_object_type
	Type_t * ___corlib_object_type_12;
	// System.Type System.Reflection.Emit.AssemblyBuilder::corlib_value_type
	Type_t * ___corlib_value_type_13;
	// System.Type System.Reflection.Emit.AssemblyBuilder::corlib_enum_type
	Type_t * ___corlib_enum_type_14;
	// Mono.Security.StrongName System.Reflection.Emit.AssemblyBuilder::sn
	StrongName_t3758219189 * ___sn_15;
	// System.Boolean System.Reflection.Emit.AssemblyBuilder::is_compiler_context
	bool ___is_compiler_context_16;

public:
	inline static int32_t get_offset_of_modules_10() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t874093524, ___modules_10)); }
	inline ModuleBuilderU5BU5D_t3255797287* get_modules_10() const { return ___modules_10; }
	inline ModuleBuilderU5BU5D_t3255797287** get_address_of_modules_10() { return &___modules_10; }
	inline void set_modules_10(ModuleBuilderU5BU5D_t3255797287* value)
	{
		___modules_10 = value;
		Il2CppCodeGenWriteBarrier((&___modules_10), value);
	}

	inline static int32_t get_offset_of_loaded_modules_11() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t874093524, ___loaded_modules_11)); }
	inline ModuleU5BU5D_t862211818* get_loaded_modules_11() const { return ___loaded_modules_11; }
	inline ModuleU5BU5D_t862211818** get_address_of_loaded_modules_11() { return &___loaded_modules_11; }
	inline void set_loaded_modules_11(ModuleU5BU5D_t862211818* value)
	{
		___loaded_modules_11 = value;
		Il2CppCodeGenWriteBarrier((&___loaded_modules_11), value);
	}

	inline static int32_t get_offset_of_corlib_object_type_12() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t874093524, ___corlib_object_type_12)); }
	inline Type_t * get_corlib_object_type_12() const { return ___corlib_object_type_12; }
	inline Type_t ** get_address_of_corlib_object_type_12() { return &___corlib_object_type_12; }
	inline void set_corlib_object_type_12(Type_t * value)
	{
		___corlib_object_type_12 = value;
		Il2CppCodeGenWriteBarrier((&___corlib_object_type_12), value);
	}

	inline static int32_t get_offset_of_corlib_value_type_13() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t874093524, ___corlib_value_type_13)); }
	inline Type_t * get_corlib_value_type_13() const { return ___corlib_value_type_13; }
	inline Type_t ** get_address_of_corlib_value_type_13() { return &___corlib_value_type_13; }
	inline void set_corlib_value_type_13(Type_t * value)
	{
		___corlib_value_type_13 = value;
		Il2CppCodeGenWriteBarrier((&___corlib_value_type_13), value);
	}

	inline static int32_t get_offset_of_corlib_enum_type_14() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t874093524, ___corlib_enum_type_14)); }
	inline Type_t * get_corlib_enum_type_14() const { return ___corlib_enum_type_14; }
	inline Type_t ** get_address_of_corlib_enum_type_14() { return &___corlib_enum_type_14; }
	inline void set_corlib_enum_type_14(Type_t * value)
	{
		___corlib_enum_type_14 = value;
		Il2CppCodeGenWriteBarrier((&___corlib_enum_type_14), value);
	}

	inline static int32_t get_offset_of_sn_15() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t874093524, ___sn_15)); }
	inline StrongName_t3758219189 * get_sn_15() const { return ___sn_15; }
	inline StrongName_t3758219189 ** get_address_of_sn_15() { return &___sn_15; }
	inline void set_sn_15(StrongName_t3758219189 * value)
	{
		___sn_15 = value;
		Il2CppCodeGenWriteBarrier((&___sn_15), value);
	}

	inline static int32_t get_offset_of_is_compiler_context_16() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t874093524, ___is_compiler_context_16)); }
	inline bool get_is_compiler_context_16() const { return ___is_compiler_context_16; }
	inline bool* get_address_of_is_compiler_context_16() { return &___is_compiler_context_16; }
	inline void set_is_compiler_context_16(bool value)
	{
		___is_compiler_context_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYBUILDER_T874093524_H
#ifndef REFEMITPERMISSIONSET_T1963366333_H
#define REFEMITPERMISSIONSET_T1963366333_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.RefEmitPermissionSet
struct  RefEmitPermissionSet_t1963366333 
{
public:
	// System.Security.Permissions.SecurityAction System.Reflection.Emit.RefEmitPermissionSet::action
	int32_t ___action_0;
	// System.String System.Reflection.Emit.RefEmitPermissionSet::pset
	String_t* ___pset_1;

public:
	inline static int32_t get_offset_of_action_0() { return static_cast<int32_t>(offsetof(RefEmitPermissionSet_t1963366333, ___action_0)); }
	inline int32_t get_action_0() const { return ___action_0; }
	inline int32_t* get_address_of_action_0() { return &___action_0; }
	inline void set_action_0(int32_t value)
	{
		___action_0 = value;
	}

	inline static int32_t get_offset_of_pset_1() { return static_cast<int32_t>(offsetof(RefEmitPermissionSet_t1963366333, ___pset_1)); }
	inline String_t* get_pset_1() const { return ___pset_1; }
	inline String_t** get_address_of_pset_1() { return &___pset_1; }
	inline void set_pset_1(String_t* value)
	{
		___pset_1 = value;
		Il2CppCodeGenWriteBarrier((&___pset_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.Emit.RefEmitPermissionSet
struct RefEmitPermissionSet_t1963366333_marshaled_pinvoke
{
	int32_t ___action_0;
	char* ___pset_1;
};
// Native definition for COM marshalling of System.Reflection.Emit.RefEmitPermissionSet
struct RefEmitPermissionSet_t1963366333_marshaled_com
{
	int32_t ___action_0;
	Il2CppChar* ___pset_1;
};
#endif // REFEMITPERMISSIONSET_T1963366333_H
#ifndef ENDOFSTREAMEXCEPTION_T3361201870_H
#define ENDOFSTREAMEXCEPTION_T3361201870_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.EndOfStreamException
struct  EndOfStreamException_t3361201870  : public IOException_t4190301069
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENDOFSTREAMEXCEPTION_T3361201870_H
#ifndef DIRECTORYNOTFOUNDEXCEPTION_T3774553125_H
#define DIRECTORYNOTFOUNDEXCEPTION_T3774553125_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.DirectoryNotFoundException
struct  DirectoryNotFoundException_t3774553125  : public IOException_t4190301069
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIRECTORYNOTFOUNDEXCEPTION_T3774553125_H
#ifndef MONORESOURCE_T1897306901_H
#define MONORESOURCE_T1897306901_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.MonoResource
struct  MonoResource_t1897306901 
{
public:
	// System.Byte[] System.Reflection.Emit.MonoResource::data
	ByteU5BU5D_t1979668241* ___data_0;
	// System.String System.Reflection.Emit.MonoResource::name
	String_t* ___name_1;
	// System.String System.Reflection.Emit.MonoResource::filename
	String_t* ___filename_2;
	// System.Reflection.ResourceAttributes System.Reflection.Emit.MonoResource::attrs
	int32_t ___attrs_3;
	// System.Int32 System.Reflection.Emit.MonoResource::offset
	int32_t ___offset_4;
	// System.IO.Stream System.Reflection.Emit.MonoResource::stream
	Stream_t403697452 * ___stream_5;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(MonoResource_t1897306901, ___data_0)); }
	inline ByteU5BU5D_t1979668241* get_data_0() const { return ___data_0; }
	inline ByteU5BU5D_t1979668241** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(ByteU5BU5D_t1979668241* value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((&___data_0), value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(MonoResource_t1897306901, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_filename_2() { return static_cast<int32_t>(offsetof(MonoResource_t1897306901, ___filename_2)); }
	inline String_t* get_filename_2() const { return ___filename_2; }
	inline String_t** get_address_of_filename_2() { return &___filename_2; }
	inline void set_filename_2(String_t* value)
	{
		___filename_2 = value;
		Il2CppCodeGenWriteBarrier((&___filename_2), value);
	}

	inline static int32_t get_offset_of_attrs_3() { return static_cast<int32_t>(offsetof(MonoResource_t1897306901, ___attrs_3)); }
	inline int32_t get_attrs_3() const { return ___attrs_3; }
	inline int32_t* get_address_of_attrs_3() { return &___attrs_3; }
	inline void set_attrs_3(int32_t value)
	{
		___attrs_3 = value;
	}

	inline static int32_t get_offset_of_offset_4() { return static_cast<int32_t>(offsetof(MonoResource_t1897306901, ___offset_4)); }
	inline int32_t get_offset_4() const { return ___offset_4; }
	inline int32_t* get_address_of_offset_4() { return &___offset_4; }
	inline void set_offset_4(int32_t value)
	{
		___offset_4 = value;
	}

	inline static int32_t get_offset_of_stream_5() { return static_cast<int32_t>(offsetof(MonoResource_t1897306901, ___stream_5)); }
	inline Stream_t403697452 * get_stream_5() const { return ___stream_5; }
	inline Stream_t403697452 ** get_address_of_stream_5() { return &___stream_5; }
	inline void set_stream_5(Stream_t403697452 * value)
	{
		___stream_5 = value;
		Il2CppCodeGenWriteBarrier((&___stream_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.Emit.MonoResource
struct MonoResource_t1897306901_marshaled_pinvoke
{
	uint8_t* ___data_0;
	char* ___name_1;
	char* ___filename_2;
	int32_t ___attrs_3;
	int32_t ___offset_4;
	Stream_t403697452 * ___stream_5;
};
// Native definition for COM marshalling of System.Reflection.Emit.MonoResource
struct MonoResource_t1897306901_marshaled_com
{
	uint8_t* ___data_0;
	Il2CppChar* ___name_1;
	Il2CppChar* ___filename_2;
	int32_t ___attrs_3;
	int32_t ___offset_4;
	Stream_t403697452 * ___stream_5;
};
#endif // MONORESOURCE_T1897306901_H
#ifndef DATETIME_T1257374806_H
#define DATETIME_T1257374806_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t1257374806 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t1843571538  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t1257374806, ___ticks_0)); }
	inline TimeSpan_t1843571538  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t1843571538 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t1843571538  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t1257374806, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t1257374806_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t1257374806  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t1257374806  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t3875140506* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t3875140506* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t3875140506* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t3875140506* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t3875140506* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t3875140506* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t3875140506* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t2848674145* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t2848674145* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t1257374806_StaticFields, ___MaxValue_2)); }
	inline DateTime_t1257374806  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t1257374806 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t1257374806  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t1257374806_StaticFields, ___MinValue_3)); }
	inline DateTime_t1257374806  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t1257374806 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t1257374806  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t1257374806_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t3875140506* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t3875140506** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t3875140506* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t1257374806_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t3875140506* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t3875140506** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t3875140506* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t1257374806_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t3875140506* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t3875140506** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t3875140506* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t1257374806_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t3875140506* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t3875140506** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t3875140506* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t1257374806_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t3875140506* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t3875140506** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t3875140506* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t1257374806_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t3875140506* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t3875140506** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t3875140506* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t1257374806_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t3875140506* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t3875140506** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t3875140506* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t1257374806_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t2848674145* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t2848674145** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t2848674145* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t1257374806_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t2848674145* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t2848674145** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t2848674145* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t1257374806_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t1257374806_StaticFields, ___last_now_14)); }
	inline int64_t get_last_now_14() const { return ___last_now_14; }
	inline int64_t* get_address_of_last_now_14() { return &___last_now_14; }
	inline void set_last_now_14(int64_t value)
	{
		___last_now_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T1257374806_H
#ifndef FILESYSTEMINFO_T3440337994_H
#define FILESYSTEMINFO_T3440337994_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileSystemInfo
struct  FileSystemInfo_t3440337994  : public MarshalByRefObject_t1482295433
{
public:
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_1;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_2;
	// System.IO.MonoIOStat System.IO.FileSystemInfo::stat
	MonoIOStat_t1138429940  ___stat_3;
	// System.Boolean System.IO.FileSystemInfo::valid
	bool ___valid_4;

public:
	inline static int32_t get_offset_of_FullPath_1() { return static_cast<int32_t>(offsetof(FileSystemInfo_t3440337994, ___FullPath_1)); }
	inline String_t* get_FullPath_1() const { return ___FullPath_1; }
	inline String_t** get_address_of_FullPath_1() { return &___FullPath_1; }
	inline void set_FullPath_1(String_t* value)
	{
		___FullPath_1 = value;
		Il2CppCodeGenWriteBarrier((&___FullPath_1), value);
	}

	inline static int32_t get_offset_of_OriginalPath_2() { return static_cast<int32_t>(offsetof(FileSystemInfo_t3440337994, ___OriginalPath_2)); }
	inline String_t* get_OriginalPath_2() const { return ___OriginalPath_2; }
	inline String_t** get_address_of_OriginalPath_2() { return &___OriginalPath_2; }
	inline void set_OriginalPath_2(String_t* value)
	{
		___OriginalPath_2 = value;
		Il2CppCodeGenWriteBarrier((&___OriginalPath_2), value);
	}

	inline static int32_t get_offset_of_stat_3() { return static_cast<int32_t>(offsetof(FileSystemInfo_t3440337994, ___stat_3)); }
	inline MonoIOStat_t1138429940  get_stat_3() const { return ___stat_3; }
	inline MonoIOStat_t1138429940 * get_address_of_stat_3() { return &___stat_3; }
	inline void set_stat_3(MonoIOStat_t1138429940  value)
	{
		___stat_3 = value;
	}

	inline static int32_t get_offset_of_valid_4() { return static_cast<int32_t>(offsetof(FileSystemInfo_t3440337994, ___valid_4)); }
	inline bool get_valid_4() const { return ___valid_4; }
	inline bool* get_address_of_valid_4() { return &___valid_4; }
	inline void set_valid_4(bool value)
	{
		___valid_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILESYSTEMINFO_T3440337994_H
#ifndef WRITEDELEGATE_T681681516_H
#define WRITEDELEGATE_T681681516_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileStream/WriteDelegate
struct  WriteDelegate_t681681516  : public MulticastDelegate_t1908836075
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITEDELEGATE_T681681516_H
#ifndef DAYLIGHTTIME_T1762171651_H
#define DAYLIGHTTIME_T1762171651_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.DaylightTime
struct  DaylightTime_t1762171651  : public RuntimeObject
{
public:
	// System.DateTime System.Globalization.DaylightTime::m_start
	DateTime_t1257374806  ___m_start_0;
	// System.DateTime System.Globalization.DaylightTime::m_end
	DateTime_t1257374806  ___m_end_1;
	// System.TimeSpan System.Globalization.DaylightTime::m_delta
	TimeSpan_t1843571538  ___m_delta_2;

public:
	inline static int32_t get_offset_of_m_start_0() { return static_cast<int32_t>(offsetof(DaylightTime_t1762171651, ___m_start_0)); }
	inline DateTime_t1257374806  get_m_start_0() const { return ___m_start_0; }
	inline DateTime_t1257374806 * get_address_of_m_start_0() { return &___m_start_0; }
	inline void set_m_start_0(DateTime_t1257374806  value)
	{
		___m_start_0 = value;
	}

	inline static int32_t get_offset_of_m_end_1() { return static_cast<int32_t>(offsetof(DaylightTime_t1762171651, ___m_end_1)); }
	inline DateTime_t1257374806  get_m_end_1() const { return ___m_end_1; }
	inline DateTime_t1257374806 * get_address_of_m_end_1() { return &___m_end_1; }
	inline void set_m_end_1(DateTime_t1257374806  value)
	{
		___m_end_1 = value;
	}

	inline static int32_t get_offset_of_m_delta_2() { return static_cast<int32_t>(offsetof(DaylightTime_t1762171651, ___m_delta_2)); }
	inline TimeSpan_t1843571538  get_m_delta_2() const { return ___m_delta_2; }
	inline TimeSpan_t1843571538 * get_address_of_m_delta_2() { return &___m_delta_2; }
	inline void set_m_delta_2(TimeSpan_t1843571538  value)
	{
		___m_delta_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DAYLIGHTTIME_T1762171651_H
#ifndef ENUMBUILDER_T400066879_H
#define ENUMBUILDER_T400066879_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.EnumBuilder
struct  EnumBuilder_t400066879  : public Type_t
{
public:
	// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.EnumBuilder::_tb
	TypeBuilder_t2954596631 * ____tb_8;
	// System.Type System.Reflection.Emit.EnumBuilder::_underlyingType
	Type_t * ____underlyingType_9;

public:
	inline static int32_t get_offset_of__tb_8() { return static_cast<int32_t>(offsetof(EnumBuilder_t400066879, ____tb_8)); }
	inline TypeBuilder_t2954596631 * get__tb_8() const { return ____tb_8; }
	inline TypeBuilder_t2954596631 ** get_address_of__tb_8() { return &____tb_8; }
	inline void set__tb_8(TypeBuilder_t2954596631 * value)
	{
		____tb_8 = value;
		Il2CppCodeGenWriteBarrier((&____tb_8), value);
	}

	inline static int32_t get_offset_of__underlyingType_9() { return static_cast<int32_t>(offsetof(EnumBuilder_t400066879, ____underlyingType_9)); }
	inline Type_t * get__underlyingType_9() const { return ____underlyingType_9; }
	inline Type_t ** get_address_of__underlyingType_9() { return &____underlyingType_9; }
	inline void set__underlyingType_9(Type_t * value)
	{
		____underlyingType_9 = value;
		Il2CppCodeGenWriteBarrier((&____underlyingType_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMBUILDER_T400066879_H
#ifndef GENERICTYPEPARAMETERBUILDER_T1866324601_H
#define GENERICTYPEPARAMETERBUILDER_T1866324601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.GenericTypeParameterBuilder
struct  GenericTypeParameterBuilder_t1866324601  : public Type_t
{
public:
	// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.GenericTypeParameterBuilder::tbuilder
	TypeBuilder_t2954596631 * ___tbuilder_8;
	// System.Reflection.Emit.MethodBuilder System.Reflection.Emit.GenericTypeParameterBuilder::mbuilder
	MethodBuilder_t3885551382 * ___mbuilder_9;
	// System.String System.Reflection.Emit.GenericTypeParameterBuilder::name
	String_t* ___name_10;
	// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::base_type
	Type_t * ___base_type_11;

public:
	inline static int32_t get_offset_of_tbuilder_8() { return static_cast<int32_t>(offsetof(GenericTypeParameterBuilder_t1866324601, ___tbuilder_8)); }
	inline TypeBuilder_t2954596631 * get_tbuilder_8() const { return ___tbuilder_8; }
	inline TypeBuilder_t2954596631 ** get_address_of_tbuilder_8() { return &___tbuilder_8; }
	inline void set_tbuilder_8(TypeBuilder_t2954596631 * value)
	{
		___tbuilder_8 = value;
		Il2CppCodeGenWriteBarrier((&___tbuilder_8), value);
	}

	inline static int32_t get_offset_of_mbuilder_9() { return static_cast<int32_t>(offsetof(GenericTypeParameterBuilder_t1866324601, ___mbuilder_9)); }
	inline MethodBuilder_t3885551382 * get_mbuilder_9() const { return ___mbuilder_9; }
	inline MethodBuilder_t3885551382 ** get_address_of_mbuilder_9() { return &___mbuilder_9; }
	inline void set_mbuilder_9(MethodBuilder_t3885551382 * value)
	{
		___mbuilder_9 = value;
		Il2CppCodeGenWriteBarrier((&___mbuilder_9), value);
	}

	inline static int32_t get_offset_of_name_10() { return static_cast<int32_t>(offsetof(GenericTypeParameterBuilder_t1866324601, ___name_10)); }
	inline String_t* get_name_10() const { return ___name_10; }
	inline String_t** get_address_of_name_10() { return &___name_10; }
	inline void set_name_10(String_t* value)
	{
		___name_10 = value;
		Il2CppCodeGenWriteBarrier((&___name_10), value);
	}

	inline static int32_t get_offset_of_base_type_11() { return static_cast<int32_t>(offsetof(GenericTypeParameterBuilder_t1866324601, ___base_type_11)); }
	inline Type_t * get_base_type_11() const { return ___base_type_11; }
	inline Type_t ** get_address_of_base_type_11() { return &___base_type_11; }
	inline void set_base_type_11(Type_t * value)
	{
		___base_type_11 = value;
		Il2CppCodeGenWriteBarrier((&___base_type_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICTYPEPARAMETERBUILDER_T1866324601_H
#ifndef READDELEGATE_T2769954334_H
#define READDELEGATE_T2769954334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileStream/ReadDelegate
struct  ReadDelegate_t2769954334  : public MulticastDelegate_t1908836075
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READDELEGATE_T2769954334_H
#ifndef DIRECTORYINFO_T2629690023_H
#define DIRECTORYINFO_T2629690023_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.DirectoryInfo
struct  DirectoryInfo_t2629690023  : public FileSystemInfo_t3440337994
{
public:
	// System.String System.IO.DirectoryInfo::current
	String_t* ___current_5;
	// System.String System.IO.DirectoryInfo::parent
	String_t* ___parent_6;

public:
	inline static int32_t get_offset_of_current_5() { return static_cast<int32_t>(offsetof(DirectoryInfo_t2629690023, ___current_5)); }
	inline String_t* get_current_5() const { return ___current_5; }
	inline String_t** get_address_of_current_5() { return &___current_5; }
	inline void set_current_5(String_t* value)
	{
		___current_5 = value;
		Il2CppCodeGenWriteBarrier((&___current_5), value);
	}

	inline static int32_t get_offset_of_parent_6() { return static_cast<int32_t>(offsetof(DirectoryInfo_t2629690023, ___parent_6)); }
	inline String_t* get_parent_6() const { return ___parent_6; }
	inline String_t** get_address_of_parent_6() { return &___parent_6; }
	inline void set_parent_6(String_t* value)
	{
		___parent_6 = value;
		Il2CppCodeGenWriteBarrier((&___parent_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIRECTORYINFO_T2629690023_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize200 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize201 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize202 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize203 = { sizeof (SortedList_t54735423), -1, sizeof(SortedList_t54735423_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable203[6] = 
{
	SortedList_t54735423_StaticFields::get_offset_of_INITIAL_SIZE_0(),
	SortedList_t54735423::get_offset_of_inUse_1(),
	SortedList_t54735423::get_offset_of_modificationCount_2(),
	SortedList_t54735423::get_offset_of_table_3(),
	SortedList_t54735423::get_offset_of_comparer_4(),
	SortedList_t54735423::get_offset_of_defaultCapacity_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize204 = { sizeof (Slot_t2990760861)+ sizeof (RuntimeObject), sizeof(Slot_t2990760861_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable204[2] = 
{
	Slot_t2990760861::get_offset_of_key_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Slot_t2990760861::get_offset_of_value_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize205 = { sizeof (EnumeratorMode_t2311324314)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable205[4] = 
{
	EnumeratorMode_t2311324314::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize206 = { sizeof (Enumerator_t3731117051), -1, sizeof(Enumerator_t3731117051_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable206[9] = 
{
	Enumerator_t3731117051::get_offset_of_host_0(),
	Enumerator_t3731117051::get_offset_of_stamp_1(),
	Enumerator_t3731117051::get_offset_of_pos_2(),
	Enumerator_t3731117051::get_offset_of_size_3(),
	Enumerator_t3731117051::get_offset_of_mode_4(),
	Enumerator_t3731117051::get_offset_of_currentKey_5(),
	Enumerator_t3731117051::get_offset_of_currentValue_6(),
	Enumerator_t3731117051::get_offset_of_invalid_7(),
	Enumerator_t3731117051_StaticFields::get_offset_of_xstr_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize207 = { sizeof (Stack_t3341244347), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable207[5] = 
{
	Stack_t3341244347::get_offset_of_contents_0(),
	Stack_t3341244347::get_offset_of_current_1(),
	Stack_t3341244347::get_offset_of_count_2(),
	Stack_t3341244347::get_offset_of_capacity_3(),
	Stack_t3341244347::get_offset_of_modCount_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize208 = { sizeof (Enumerator_t3840077057), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable208[3] = 
{
	Enumerator_t3840077057::get_offset_of_stack_0(),
	Enumerator_t3840077057::get_offset_of_modCount_1(),
	Enumerator_t3840077057::get_offset_of_current_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize209 = { sizeof (AssemblyHashAlgorithm_t244125356)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable209[4] = 
{
	AssemblyHashAlgorithm_t244125356::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize210 = { sizeof (AssemblyVersionCompatibility_t3564166590)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable210[4] = 
{
	AssemblyVersionCompatibility_t3564166590::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize211 = { sizeof (SuppressMessageAttribute_t3081390727), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable211[6] = 
{
	SuppressMessageAttribute_t3081390727::get_offset_of_category_0(),
	SuppressMessageAttribute_t3081390727::get_offset_of_checkId_1(),
	SuppressMessageAttribute_t3081390727::get_offset_of_justification_2(),
	SuppressMessageAttribute_t3081390727::get_offset_of_messageId_3(),
	SuppressMessageAttribute_t3081390727::get_offset_of_scope_4(),
	SuppressMessageAttribute_t3081390727::get_offset_of_target_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize212 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize213 = { sizeof (DebuggableAttribute_t3418071464), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable213[3] = 
{
	DebuggableAttribute_t3418071464::get_offset_of_JITTrackingEnabledFlag_0(),
	DebuggableAttribute_t3418071464::get_offset_of_JITOptimizerDisabledFlag_1(),
	DebuggableAttribute_t3418071464::get_offset_of_debuggingModes_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize214 = { sizeof (DebuggingModes_t921367568)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable214[6] = 
{
	DebuggingModes_t921367568::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize215 = { sizeof (DebuggerBrowsableAttribute_t400480570), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable215[1] = 
{
	DebuggerBrowsableAttribute_t400480570::get_offset_of_state_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize216 = { sizeof (DebuggerBrowsableState_t61367776)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable216[4] = 
{
	DebuggerBrowsableState_t61367776::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize217 = { sizeof (DebuggerDisplayAttribute_t3742933662), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable217[3] = 
{
	DebuggerDisplayAttribute_t3742933662::get_offset_of_value_0(),
	DebuggerDisplayAttribute_t3742933662::get_offset_of_type_1(),
	DebuggerDisplayAttribute_t3742933662::get_offset_of_name_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize218 = { sizeof (DebuggerNonUserCodeAttribute_t3744190064), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize219 = { sizeof (DebuggerStepThroughAttribute_t787910407), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize220 = { sizeof (DebuggerTypeProxyAttribute_t101457274), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable220[1] = 
{
	DebuggerTypeProxyAttribute_t101457274::get_offset_of_proxy_type_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize221 = { sizeof (StackFrame_t4182201286), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable221[8] = 
{
	0,
	StackFrame_t4182201286::get_offset_of_ilOffset_1(),
	StackFrame_t4182201286::get_offset_of_nativeOffset_2(),
	StackFrame_t4182201286::get_offset_of_methodBase_3(),
	StackFrame_t4182201286::get_offset_of_fileName_4(),
	StackFrame_t4182201286::get_offset_of_lineNumber_5(),
	StackFrame_t4182201286::get_offset_of_columnNumber_6(),
	StackFrame_t4182201286::get_offset_of_internalMethodName_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize222 = { sizeof (StackTrace_t3520982761), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable222[3] = 
{
	0,
	StackTrace_t3520982761::get_offset_of_frames_1(),
	StackTrace_t3520982761::get_offset_of_debug_info_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize223 = { sizeof (Calendar_t762697739), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable223[4] = 
{
	Calendar_t762697739::get_offset_of_m_isReadOnly_0(),
	Calendar_t762697739::get_offset_of_twoDigitYearMax_1(),
	Calendar_t762697739::get_offset_of_M_AbbrEraNames_2(),
	Calendar_t762697739::get_offset_of_M_EraNames_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize224 = { sizeof (CCMath_t2576214750), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize225 = { sizeof (CCFixed_t8946670), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize226 = { sizeof (CCGregorianCalendar_t3325920638), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize227 = { sizeof (CompareInfo_t2350495555), -1, sizeof(CompareInfo_t2350495555_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable227[8] = 
{
	CompareInfo_t2350495555_StaticFields::get_offset_of_useManagedCollation_0(),
	CompareInfo_t2350495555::get_offset_of_culture_1(),
	CompareInfo_t2350495555::get_offset_of_icu_name_2(),
	CompareInfo_t2350495555::get_offset_of_win32LCID_3(),
	CompareInfo_t2350495555::get_offset_of_m_name_4(),
	CompareInfo_t2350495555::get_offset_of_collator_5(),
	CompareInfo_t2350495555_StaticFields::get_offset_of_collators_6(),
	CompareInfo_t2350495555_StaticFields::get_offset_of_monitor_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize228 = { sizeof (CompareOptions_t2496838178)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable228[10] = 
{
	CompareOptions_t2496838178::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize229 = { sizeof (CultureInfo_t3804668001), -1, sizeof(CultureInfo_t3804668001_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable229[40] = 
{
	0,
	0,
	0,
	0,
	CultureInfo_t3804668001_StaticFields::get_offset_of_invariant_culture_info_4(),
	CultureInfo_t3804668001_StaticFields::get_offset_of_shared_table_lock_5(),
	CultureInfo_t3804668001_StaticFields::get_offset_of_BootstrapCultureID_6(),
	CultureInfo_t3804668001::get_offset_of_m_isReadOnly_7(),
	CultureInfo_t3804668001::get_offset_of_cultureID_8(),
	CultureInfo_t3804668001::get_offset_of_parent_lcid_9(),
	CultureInfo_t3804668001::get_offset_of_specific_lcid_10(),
	CultureInfo_t3804668001::get_offset_of_datetime_index_11(),
	CultureInfo_t3804668001::get_offset_of_number_index_12(),
	CultureInfo_t3804668001::get_offset_of_m_useUserOverride_13(),
	CultureInfo_t3804668001::get_offset_of_numInfo_14(),
	CultureInfo_t3804668001::get_offset_of_dateTimeInfo_15(),
	CultureInfo_t3804668001::get_offset_of_textInfo_16(),
	CultureInfo_t3804668001::get_offset_of_m_name_17(),
	CultureInfo_t3804668001::get_offset_of_displayname_18(),
	CultureInfo_t3804668001::get_offset_of_englishname_19(),
	CultureInfo_t3804668001::get_offset_of_nativename_20(),
	CultureInfo_t3804668001::get_offset_of_iso3lang_21(),
	CultureInfo_t3804668001::get_offset_of_iso2lang_22(),
	CultureInfo_t3804668001::get_offset_of_icu_name_23(),
	CultureInfo_t3804668001::get_offset_of_win3lang_24(),
	CultureInfo_t3804668001::get_offset_of_territory_25(),
	CultureInfo_t3804668001::get_offset_of_compareInfo_26(),
	CultureInfo_t3804668001::get_offset_of_calendar_data_27(),
	CultureInfo_t3804668001::get_offset_of_textinfo_data_28(),
	CultureInfo_t3804668001::get_offset_of_optional_calendars_29(),
	CultureInfo_t3804668001::get_offset_of_parent_culture_30(),
	CultureInfo_t3804668001::get_offset_of_m_dataItem_31(),
	CultureInfo_t3804668001::get_offset_of_calendar_32(),
	CultureInfo_t3804668001::get_offset_of_constructed_33(),
	CultureInfo_t3804668001::get_offset_of_cached_serialized_form_34(),
	CultureInfo_t3804668001_StaticFields::get_offset_of_MSG_READONLY_35(),
	CultureInfo_t3804668001_StaticFields::get_offset_of_shared_by_number_36(),
	CultureInfo_t3804668001_StaticFields::get_offset_of_shared_by_name_37(),
	CultureInfo_t3804668001_StaticFields::get_offset_of_U3CU3Ef__switchU24map19_38(),
	CultureInfo_t3804668001_StaticFields::get_offset_of_U3CU3Ef__switchU24map1A_39(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize230 = { sizeof (DateTimeFormatFlags_t1106190341)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable230[6] = 
{
	DateTimeFormatFlags_t1106190341::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize231 = { sizeof (DateTimeFormatInfo_t1319266453), -1, sizeof(DateTimeFormatInfo_t1319266453_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable231[58] = 
{
	0,
	DateTimeFormatInfo_t1319266453_StaticFields::get_offset_of_MSG_READONLY_1(),
	DateTimeFormatInfo_t1319266453_StaticFields::get_offset_of_MSG_ARRAYSIZE_MONTH_2(),
	DateTimeFormatInfo_t1319266453_StaticFields::get_offset_of_MSG_ARRAYSIZE_DAY_3(),
	DateTimeFormatInfo_t1319266453_StaticFields::get_offset_of_INVARIANT_ABBREVIATED_DAY_NAMES_4(),
	DateTimeFormatInfo_t1319266453_StaticFields::get_offset_of_INVARIANT_DAY_NAMES_5(),
	DateTimeFormatInfo_t1319266453_StaticFields::get_offset_of_INVARIANT_ABBREVIATED_MONTH_NAMES_6(),
	DateTimeFormatInfo_t1319266453_StaticFields::get_offset_of_INVARIANT_MONTH_NAMES_7(),
	DateTimeFormatInfo_t1319266453_StaticFields::get_offset_of_INVARIANT_SHORT_DAY_NAMES_8(),
	DateTimeFormatInfo_t1319266453_StaticFields::get_offset_of_theInvariantDateTimeFormatInfo_9(),
	DateTimeFormatInfo_t1319266453::get_offset_of_m_isReadOnly_10(),
	DateTimeFormatInfo_t1319266453::get_offset_of_amDesignator_11(),
	DateTimeFormatInfo_t1319266453::get_offset_of_pmDesignator_12(),
	DateTimeFormatInfo_t1319266453::get_offset_of_dateSeparator_13(),
	DateTimeFormatInfo_t1319266453::get_offset_of_timeSeparator_14(),
	DateTimeFormatInfo_t1319266453::get_offset_of_shortDatePattern_15(),
	DateTimeFormatInfo_t1319266453::get_offset_of_longDatePattern_16(),
	DateTimeFormatInfo_t1319266453::get_offset_of_shortTimePattern_17(),
	DateTimeFormatInfo_t1319266453::get_offset_of_longTimePattern_18(),
	DateTimeFormatInfo_t1319266453::get_offset_of_monthDayPattern_19(),
	DateTimeFormatInfo_t1319266453::get_offset_of_yearMonthPattern_20(),
	DateTimeFormatInfo_t1319266453::get_offset_of_fullDateTimePattern_21(),
	DateTimeFormatInfo_t1319266453::get_offset_of__RFC1123Pattern_22(),
	DateTimeFormatInfo_t1319266453::get_offset_of__SortableDateTimePattern_23(),
	DateTimeFormatInfo_t1319266453::get_offset_of__UniversalSortableDateTimePattern_24(),
	DateTimeFormatInfo_t1319266453::get_offset_of_firstDayOfWeek_25(),
	DateTimeFormatInfo_t1319266453::get_offset_of_calendar_26(),
	DateTimeFormatInfo_t1319266453::get_offset_of_calendarWeekRule_27(),
	DateTimeFormatInfo_t1319266453::get_offset_of_abbreviatedDayNames_28(),
	DateTimeFormatInfo_t1319266453::get_offset_of_dayNames_29(),
	DateTimeFormatInfo_t1319266453::get_offset_of_monthNames_30(),
	DateTimeFormatInfo_t1319266453::get_offset_of_abbreviatedMonthNames_31(),
	DateTimeFormatInfo_t1319266453::get_offset_of_allShortDatePatterns_32(),
	DateTimeFormatInfo_t1319266453::get_offset_of_allLongDatePatterns_33(),
	DateTimeFormatInfo_t1319266453::get_offset_of_allShortTimePatterns_34(),
	DateTimeFormatInfo_t1319266453::get_offset_of_allLongTimePatterns_35(),
	DateTimeFormatInfo_t1319266453::get_offset_of_monthDayPatterns_36(),
	DateTimeFormatInfo_t1319266453::get_offset_of_yearMonthPatterns_37(),
	DateTimeFormatInfo_t1319266453::get_offset_of_shortDayNames_38(),
	DateTimeFormatInfo_t1319266453::get_offset_of_nDataItem_39(),
	DateTimeFormatInfo_t1319266453::get_offset_of_m_useUserOverride_40(),
	DateTimeFormatInfo_t1319266453::get_offset_of_m_isDefaultCalendar_41(),
	DateTimeFormatInfo_t1319266453::get_offset_of_CultureID_42(),
	DateTimeFormatInfo_t1319266453::get_offset_of_bUseCalendarInfo_43(),
	DateTimeFormatInfo_t1319266453::get_offset_of_generalShortTimePattern_44(),
	DateTimeFormatInfo_t1319266453::get_offset_of_generalLongTimePattern_45(),
	DateTimeFormatInfo_t1319266453::get_offset_of_m_eraNames_46(),
	DateTimeFormatInfo_t1319266453::get_offset_of_m_abbrevEraNames_47(),
	DateTimeFormatInfo_t1319266453::get_offset_of_m_abbrevEnglishEraNames_48(),
	DateTimeFormatInfo_t1319266453::get_offset_of_m_dateWords_49(),
	DateTimeFormatInfo_t1319266453::get_offset_of_optionalCalendars_50(),
	DateTimeFormatInfo_t1319266453::get_offset_of_m_superShortDayNames_51(),
	DateTimeFormatInfo_t1319266453::get_offset_of_genitiveMonthNames_52(),
	DateTimeFormatInfo_t1319266453::get_offset_of_m_genitiveAbbreviatedMonthNames_53(),
	DateTimeFormatInfo_t1319266453::get_offset_of_leapYearMonthNames_54(),
	DateTimeFormatInfo_t1319266453::get_offset_of_formatFlags_55(),
	DateTimeFormatInfo_t1319266453::get_offset_of_m_name_56(),
	DateTimeFormatInfo_t1319266453::get_offset_of_all_date_time_patterns_57(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize232 = { sizeof (DateTimeStyles_t2724822328)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable232[11] = 
{
	DateTimeStyles_t2724822328::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize233 = { sizeof (DaylightTime_t1762171651), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable233[3] = 
{
	DaylightTime_t1762171651::get_offset_of_m_start_0(),
	DaylightTime_t1762171651::get_offset_of_m_end_1(),
	DaylightTime_t1762171651::get_offset_of_m_delta_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize234 = { sizeof (GregorianCalendar_t838899574), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable234[1] = 
{
	GregorianCalendar_t838899574::get_offset_of_m_type_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize235 = { sizeof (GregorianCalendarTypes_t3704346331)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable235[7] = 
{
	GregorianCalendarTypes_t3704346331::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize236 = { sizeof (NumberFormatInfo_t2207532535), -1, sizeof(NumberFormatInfo_t2207532535_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable236[39] = 
{
	NumberFormatInfo_t2207532535::get_offset_of_isReadOnly_0(),
	NumberFormatInfo_t2207532535::get_offset_of_decimalFormats_1(),
	NumberFormatInfo_t2207532535::get_offset_of_currencyFormats_2(),
	NumberFormatInfo_t2207532535::get_offset_of_percentFormats_3(),
	NumberFormatInfo_t2207532535::get_offset_of_digitPattern_4(),
	NumberFormatInfo_t2207532535::get_offset_of_zeroPattern_5(),
	NumberFormatInfo_t2207532535::get_offset_of_currencyDecimalDigits_6(),
	NumberFormatInfo_t2207532535::get_offset_of_currencyDecimalSeparator_7(),
	NumberFormatInfo_t2207532535::get_offset_of_currencyGroupSeparator_8(),
	NumberFormatInfo_t2207532535::get_offset_of_currencyGroupSizes_9(),
	NumberFormatInfo_t2207532535::get_offset_of_currencyNegativePattern_10(),
	NumberFormatInfo_t2207532535::get_offset_of_currencyPositivePattern_11(),
	NumberFormatInfo_t2207532535::get_offset_of_currencySymbol_12(),
	NumberFormatInfo_t2207532535::get_offset_of_nanSymbol_13(),
	NumberFormatInfo_t2207532535::get_offset_of_negativeInfinitySymbol_14(),
	NumberFormatInfo_t2207532535::get_offset_of_negativeSign_15(),
	NumberFormatInfo_t2207532535::get_offset_of_numberDecimalDigits_16(),
	NumberFormatInfo_t2207532535::get_offset_of_numberDecimalSeparator_17(),
	NumberFormatInfo_t2207532535::get_offset_of_numberGroupSeparator_18(),
	NumberFormatInfo_t2207532535::get_offset_of_numberGroupSizes_19(),
	NumberFormatInfo_t2207532535::get_offset_of_numberNegativePattern_20(),
	NumberFormatInfo_t2207532535::get_offset_of_percentDecimalDigits_21(),
	NumberFormatInfo_t2207532535::get_offset_of_percentDecimalSeparator_22(),
	NumberFormatInfo_t2207532535::get_offset_of_percentGroupSeparator_23(),
	NumberFormatInfo_t2207532535::get_offset_of_percentGroupSizes_24(),
	NumberFormatInfo_t2207532535::get_offset_of_percentNegativePattern_25(),
	NumberFormatInfo_t2207532535::get_offset_of_percentPositivePattern_26(),
	NumberFormatInfo_t2207532535::get_offset_of_percentSymbol_27(),
	NumberFormatInfo_t2207532535::get_offset_of_perMilleSymbol_28(),
	NumberFormatInfo_t2207532535::get_offset_of_positiveInfinitySymbol_29(),
	NumberFormatInfo_t2207532535::get_offset_of_positiveSign_30(),
	NumberFormatInfo_t2207532535::get_offset_of_ansiCurrencySymbol_31(),
	NumberFormatInfo_t2207532535::get_offset_of_m_dataItem_32(),
	NumberFormatInfo_t2207532535::get_offset_of_m_useUserOverride_33(),
	NumberFormatInfo_t2207532535::get_offset_of_validForParseAsNumber_34(),
	NumberFormatInfo_t2207532535::get_offset_of_validForParseAsCurrency_35(),
	NumberFormatInfo_t2207532535::get_offset_of_nativeDigits_36(),
	NumberFormatInfo_t2207532535::get_offset_of_digitSubstitution_37(),
	NumberFormatInfo_t2207532535_StaticFields::get_offset_of_invariantNativeDigits_38(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize237 = { sizeof (NumberStyles_t2569473399)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable237[18] = 
{
	NumberStyles_t2569473399::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize238 = { sizeof (RegionInfo_t2026000002), -1, sizeof(RegionInfo_t2026000002_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable238[11] = 
{
	RegionInfo_t2026000002_StaticFields::get_offset_of_currentRegion_0(),
	RegionInfo_t2026000002::get_offset_of_lcid_1(),
	RegionInfo_t2026000002::get_offset_of_regionId_2(),
	RegionInfo_t2026000002::get_offset_of_iso2Name_3(),
	RegionInfo_t2026000002::get_offset_of_iso3Name_4(),
	RegionInfo_t2026000002::get_offset_of_win3Name_5(),
	RegionInfo_t2026000002::get_offset_of_englishName_6(),
	RegionInfo_t2026000002::get_offset_of_currencySymbol_7(),
	RegionInfo_t2026000002::get_offset_of_isoCurrencySymbol_8(),
	RegionInfo_t2026000002::get_offset_of_currencyEnglishName_9(),
	RegionInfo_t2026000002_StaticFields::get_offset_of_U3CU3Ef__switchU24map1B_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize239 = { sizeof (TextInfo_t4038178256), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable239[9] = 
{
	TextInfo_t4038178256::get_offset_of_m_listSeparator_0(),
	TextInfo_t4038178256::get_offset_of_m_isReadOnly_1(),
	TextInfo_t4038178256::get_offset_of_customCultureName_2(),
	TextInfo_t4038178256::get_offset_of_m_nDataItem_3(),
	TextInfo_t4038178256::get_offset_of_m_useUserOverride_4(),
	TextInfo_t4038178256::get_offset_of_m_win32LangID_5(),
	TextInfo_t4038178256::get_offset_of_ci_6(),
	TextInfo_t4038178256::get_offset_of_handleDotI_7(),
	TextInfo_t4038178256::get_offset_of_data_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize240 = { sizeof (Data_t2291962056)+ sizeof (RuntimeObject), sizeof(Data_t2291962056 ), 0, 0 };
extern const int32_t g_FieldOffsetTable240[5] = 
{
	Data_t2291962056::get_offset_of_ansi_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Data_t2291962056::get_offset_of_ebcdic_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Data_t2291962056::get_offset_of_mac_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Data_t2291962056::get_offset_of_oem_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Data_t2291962056::get_offset_of_list_sep_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize241 = { sizeof (UnicodeCategory_t2493344627)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable241[31] = 
{
	UnicodeCategory_t2493344627::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize242 = { sizeof (IsolatedStorageException_t2123582066), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize243 = { sizeof (BinaryReader_t3828778136), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable243[6] = 
{
	BinaryReader_t3828778136::get_offset_of_m_stream_0(),
	BinaryReader_t3828778136::get_offset_of_m_encoding_1(),
	BinaryReader_t3828778136::get_offset_of_m_buffer_2(),
	BinaryReader_t3828778136::get_offset_of_decoder_3(),
	BinaryReader_t3828778136::get_offset_of_charBuffer_4(),
	BinaryReader_t3828778136::get_offset_of_m_disposed_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize244 = { sizeof (Directory_t3773430507), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize245 = { sizeof (DirectoryInfo_t2629690023), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable245[2] = 
{
	DirectoryInfo_t2629690023::get_offset_of_current_5(),
	DirectoryInfo_t2629690023::get_offset_of_parent_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize246 = { sizeof (DirectoryNotFoundException_t3774553125), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize247 = { sizeof (EndOfStreamException_t3361201870), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize248 = { sizeof (File_t351562146), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize249 = { sizeof (FileAccess_t2297563326)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable249[4] = 
{
	FileAccess_t2297563326::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize250 = { sizeof (FileAttributes_t894197436)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable250[15] = 
{
	FileAttributes_t894197436::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize251 = { sizeof (FileLoadException_t3963728828), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable251[4] = 
{
	0,
	FileLoadException_t3963728828::get_offset_of_msg_12(),
	FileLoadException_t3963728828::get_offset_of_fileName_13(),
	FileLoadException_t3963728828::get_offset_of_fusionLog_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize252 = { sizeof (FileMode_t3813783197)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable252[7] = 
{
	FileMode_t3813783197::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize253 = { sizeof (FileNotFoundException_t1785530066), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable253[2] = 
{
	FileNotFoundException_t1785530066::get_offset_of_fileName_11(),
	FileNotFoundException_t1785530066::get_offset_of_fusionLog_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize254 = { sizeof (FileOptions_t1547308404)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable254[8] = 
{
	FileOptions_t1547308404::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize255 = { sizeof (FileShare_t3389522965)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable255[7] = 
{
	FileShare_t3389522965::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize256 = { sizeof (FileStream_t3061599599), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable256[14] = 
{
	FileStream_t3061599599::get_offset_of_access_1(),
	FileStream_t3061599599::get_offset_of_owner_2(),
	FileStream_t3061599599::get_offset_of_async_3(),
	FileStream_t3061599599::get_offset_of_canseek_4(),
	FileStream_t3061599599::get_offset_of_append_startpos_5(),
	FileStream_t3061599599::get_offset_of_anonymous_6(),
	FileStream_t3061599599::get_offset_of_buf_7(),
	FileStream_t3061599599::get_offset_of_buf_size_8(),
	FileStream_t3061599599::get_offset_of_buf_length_9(),
	FileStream_t3061599599::get_offset_of_buf_offset_10(),
	FileStream_t3061599599::get_offset_of_buf_dirty_11(),
	FileStream_t3061599599::get_offset_of_buf_start_12(),
	FileStream_t3061599599::get_offset_of_name_13(),
	FileStream_t3061599599::get_offset_of_handle_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize257 = { sizeof (ReadDelegate_t2769954334), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize258 = { sizeof (WriteDelegate_t681681516), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize259 = { sizeof (FileStreamAsyncResult_t1710504863), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable259[8] = 
{
	FileStreamAsyncResult_t1710504863::get_offset_of_state_0(),
	FileStreamAsyncResult_t1710504863::get_offset_of_completed_1(),
	FileStreamAsyncResult_t1710504863::get_offset_of_wh_2(),
	FileStreamAsyncResult_t1710504863::get_offset_of_cb_3(),
	FileStreamAsyncResult_t1710504863::get_offset_of_Count_4(),
	FileStreamAsyncResult_t1710504863::get_offset_of_OriginalCount_5(),
	FileStreamAsyncResult_t1710504863::get_offset_of_BytesRead_6(),
	FileStreamAsyncResult_t1710504863::get_offset_of_realcb_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize260 = { sizeof (FileSystemInfo_t3440337994), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable260[4] = 
{
	FileSystemInfo_t3440337994::get_offset_of_FullPath_1(),
	FileSystemInfo_t3440337994::get_offset_of_OriginalPath_2(),
	FileSystemInfo_t3440337994::get_offset_of_stat_3(),
	FileSystemInfo_t3440337994::get_offset_of_valid_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize261 = { sizeof (IOException_t4190301069), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize262 = { sizeof (MemoryStream_t3268683499), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable262[10] = 
{
	MemoryStream_t3268683499::get_offset_of_canWrite_1(),
	MemoryStream_t3268683499::get_offset_of_allowGetBuffer_2(),
	MemoryStream_t3268683499::get_offset_of_capacity_3(),
	MemoryStream_t3268683499::get_offset_of_length_4(),
	MemoryStream_t3268683499::get_offset_of_internalBuffer_5(),
	MemoryStream_t3268683499::get_offset_of_initialIndex_6(),
	MemoryStream_t3268683499::get_offset_of_expandable_7(),
	MemoryStream_t3268683499::get_offset_of_streamClosed_8(),
	MemoryStream_t3268683499::get_offset_of_position_9(),
	MemoryStream_t3268683499::get_offset_of_dirty_bytes_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize263 = { sizeof (MonoFileType_t3828468091)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable263[6] = 
{
	MonoFileType_t3828468091::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize264 = { sizeof (MonoIO_t615928873), -1, sizeof(MonoIO_t615928873_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable264[2] = 
{
	MonoIO_t615928873_StaticFields::get_offset_of_InvalidFileAttributes_0(),
	MonoIO_t615928873_StaticFields::get_offset_of_InvalidHandle_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize265 = { sizeof (MonoIOError_t3800409314)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable265[25] = 
{
	MonoIOError_t3800409314::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize266 = { sizeof (MonoIOStat_t1138429940)+ sizeof (RuntimeObject), sizeof(MonoIOStat_t1138429940_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable266[6] = 
{
	MonoIOStat_t1138429940::get_offset_of_Name_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoIOStat_t1138429940::get_offset_of_Attributes_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoIOStat_t1138429940::get_offset_of_Length_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoIOStat_t1138429940::get_offset_of_CreationTime_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoIOStat_t1138429940::get_offset_of_LastAccessTime_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoIOStat_t1138429940::get_offset_of_LastWriteTime_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize267 = { sizeof (Path_t1696685898), -1, sizeof(Path_t1696685898_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable267[8] = 
{
	Path_t1696685898_StaticFields::get_offset_of_InvalidPathChars_0(),
	Path_t1696685898_StaticFields::get_offset_of_AltDirectorySeparatorChar_1(),
	Path_t1696685898_StaticFields::get_offset_of_DirectorySeparatorChar_2(),
	Path_t1696685898_StaticFields::get_offset_of_PathSeparator_3(),
	Path_t1696685898_StaticFields::get_offset_of_DirectorySeparatorStr_4(),
	Path_t1696685898_StaticFields::get_offset_of_VolumeSeparatorChar_5(),
	Path_t1696685898_StaticFields::get_offset_of_PathSeparatorChars_6(),
	Path_t1696685898_StaticFields::get_offset_of_dirEqualsVolume_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize268 = { sizeof (PathTooLongException_t3721065412), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize269 = { sizeof (SearchPattern_t4063995017), -1, sizeof(SearchPattern_t4063995017_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable269[2] = 
{
	SearchPattern_t4063995017_StaticFields::get_offset_of_WildcardChars_0(),
	SearchPattern_t4063995017_StaticFields::get_offset_of_InvalidChars_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize270 = { sizeof (SeekOrigin_t2826345235)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable270[4] = 
{
	SeekOrigin_t2826345235::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize271 = { sizeof (Stream_t403697452), -1, sizeof(Stream_t403697452_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable271[1] = 
{
	Stream_t403697452_StaticFields::get_offset_of_Null_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize272 = { sizeof (NullStream_t4145547776), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize273 = { sizeof (StreamAsyncResult_t506316490), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable273[6] = 
{
	StreamAsyncResult_t506316490::get_offset_of_state_0(),
	StreamAsyncResult_t506316490::get_offset_of_completed_1(),
	StreamAsyncResult_t506316490::get_offset_of_done_2(),
	StreamAsyncResult_t506316490::get_offset_of_exc_3(),
	StreamAsyncResult_t506316490::get_offset_of_nbytes_4(),
	StreamAsyncResult_t506316490::get_offset_of_wh_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize274 = { sizeof (StreamReader_t4114786898), -1, sizeof(StreamReader_t4114786898_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable274[13] = 
{
	StreamReader_t4114786898::get_offset_of_input_buffer_1(),
	StreamReader_t4114786898::get_offset_of_decoded_buffer_2(),
	StreamReader_t4114786898::get_offset_of_decoded_count_3(),
	StreamReader_t4114786898::get_offset_of_pos_4(),
	StreamReader_t4114786898::get_offset_of_buffer_size_5(),
	StreamReader_t4114786898::get_offset_of_do_checks_6(),
	StreamReader_t4114786898::get_offset_of_encoding_7(),
	StreamReader_t4114786898::get_offset_of_decoder_8(),
	StreamReader_t4114786898::get_offset_of_base_stream_9(),
	StreamReader_t4114786898::get_offset_of_mayBlock_10(),
	StreamReader_t4114786898::get_offset_of_line_builder_11(),
	StreamReader_t4114786898_StaticFields::get_offset_of_Null_12(),
	StreamReader_t4114786898::get_offset_of_foundCR_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize275 = { sizeof (NullStreamReader_t440084836), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize276 = { sizeof (StreamWriter_t900566318), -1, sizeof(StreamWriter_t900566318_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable276[10] = 
{
	StreamWriter_t900566318::get_offset_of_internalEncoding_2(),
	StreamWriter_t900566318::get_offset_of_internalStream_3(),
	StreamWriter_t900566318::get_offset_of_iflush_4(),
	StreamWriter_t900566318::get_offset_of_byte_buf_5(),
	StreamWriter_t900566318::get_offset_of_byte_pos_6(),
	StreamWriter_t900566318::get_offset_of_decode_buf_7(),
	StreamWriter_t900566318::get_offset_of_decode_pos_8(),
	StreamWriter_t900566318::get_offset_of_DisposedAlready_9(),
	StreamWriter_t900566318::get_offset_of_preamble_done_10(),
	StreamWriter_t900566318_StaticFields::get_offset_of_Null_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize277 = { sizeof (StringReader_t872515079), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable277[3] = 
{
	StringReader_t872515079::get_offset_of_source_1(),
	StringReader_t872515079::get_offset_of_nextChar_2(),
	StringReader_t872515079::get_offset_of_sourceLength_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize278 = { sizeof (TextReader_t2183356407), -1, sizeof(TextReader_t2183356407_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable278[1] = 
{
	TextReader_t2183356407_StaticFields::get_offset_of_Null_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize279 = { sizeof (NullTextReader_t1435076756), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize280 = { sizeof (SynchronizedReader_t738172272), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable280[1] = 
{
	SynchronizedReader_t738172272::get_offset_of_reader_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize281 = { sizeof (TextWriter_t2766919390), -1, sizeof(TextWriter_t2766919390_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable281[2] = 
{
	TextWriter_t2766919390::get_offset_of_CoreNewLine_0(),
	TextWriter_t2766919390_StaticFields::get_offset_of_Null_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize282 = { sizeof (NullTextWriter_t2759580684), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize283 = { sizeof (SynchronizedWriter_t4049806569), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable283[2] = 
{
	SynchronizedWriter_t4049806569::get_offset_of_writer_2(),
	SynchronizedWriter_t4049806569::get_offset_of_neverClose_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize284 = { sizeof (UnexceptionalStreamReader_t2757880009), -1, sizeof(UnexceptionalStreamReader_t2757880009_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable284[2] = 
{
	UnexceptionalStreamReader_t2757880009_StaticFields::get_offset_of_newline_14(),
	UnexceptionalStreamReader_t2757880009_StaticFields::get_offset_of_newlineChar_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize285 = { sizeof (UnexceptionalStreamWriter_t3789760441), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize286 = { sizeof (UnmanagedMemoryStream_t461760178), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable286[8] = 
{
	UnmanagedMemoryStream_t461760178::get_offset_of_length_1(),
	UnmanagedMemoryStream_t461760178::get_offset_of_closed_2(),
	UnmanagedMemoryStream_t461760178::get_offset_of_capacity_3(),
	UnmanagedMemoryStream_t461760178::get_offset_of_fileaccess_4(),
	UnmanagedMemoryStream_t461760178::get_offset_of_initial_pointer_5(),
	UnmanagedMemoryStream_t461760178::get_offset_of_initial_position_6(),
	UnmanagedMemoryStream_t461760178::get_offset_of_current_position_7(),
	UnmanagedMemoryStream_t461760178::get_offset_of_Closed_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize287 = { sizeof (RefEmitPermissionSet_t1963366333)+ sizeof (RuntimeObject), sizeof(RefEmitPermissionSet_t1963366333_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable287[2] = 
{
	RefEmitPermissionSet_t1963366333::get_offset_of_action_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RefEmitPermissionSet_t1963366333::get_offset_of_pset_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize288 = { sizeof (MonoResource_t1897306901)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable288[6] = 
{
	MonoResource_t1897306901::get_offset_of_data_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoResource_t1897306901::get_offset_of_name_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoResource_t1897306901::get_offset_of_filename_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoResource_t1897306901::get_offset_of_attrs_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoResource_t1897306901::get_offset_of_offset_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoResource_t1897306901::get_offset_of_stream_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize289 = { sizeof (AssemblyBuilder_t874093524), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable289[7] = 
{
	AssemblyBuilder_t874093524::get_offset_of_modules_10(),
	AssemblyBuilder_t874093524::get_offset_of_loaded_modules_11(),
	AssemblyBuilder_t874093524::get_offset_of_corlib_object_type_12(),
	AssemblyBuilder_t874093524::get_offset_of_corlib_value_type_13(),
	AssemblyBuilder_t874093524::get_offset_of_corlib_enum_type_14(),
	AssemblyBuilder_t874093524::get_offset_of_sn_15(),
	AssemblyBuilder_t874093524::get_offset_of_is_compiler_context_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize290 = { sizeof (ConstructorBuilder_t2245332734), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable290[11] = 
{
	ConstructorBuilder_t2245332734::get_offset_of_ilgen_2(),
	ConstructorBuilder_t2245332734::get_offset_of_parameters_3(),
	ConstructorBuilder_t2245332734::get_offset_of_attrs_4(),
	ConstructorBuilder_t2245332734::get_offset_of_iattrs_5(),
	ConstructorBuilder_t2245332734::get_offset_of_table_idx_6(),
	ConstructorBuilder_t2245332734::get_offset_of_call_conv_7(),
	ConstructorBuilder_t2245332734::get_offset_of_type_8(),
	ConstructorBuilder_t2245332734::get_offset_of_pinfo_9(),
	ConstructorBuilder_t2245332734::get_offset_of_init_locals_10(),
	ConstructorBuilder_t2245332734::get_offset_of_paramModReq_11(),
	ConstructorBuilder_t2245332734::get_offset_of_paramModOpt_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize291 = { sizeof (CustomAttributeBuilder_t942700929), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize292 = { sizeof (EnumBuilder_t400066879), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable292[2] = 
{
	EnumBuilder_t400066879::get_offset_of__tb_8(),
	EnumBuilder_t400066879::get_offset_of__underlyingType_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize293 = { sizeof (EventBuilder_t2860922430), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize294 = { sizeof (FieldBuilder_t1070198504), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable294[5] = 
{
	FieldBuilder_t1070198504::get_offset_of_attrs_0(),
	FieldBuilder_t1070198504::get_offset_of_type_1(),
	FieldBuilder_t1070198504::get_offset_of_name_2(),
	FieldBuilder_t1070198504::get_offset_of_typeb_3(),
	FieldBuilder_t1070198504::get_offset_of_marshal_info_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize295 = { sizeof (GenericTypeParameterBuilder_t1866324601), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable295[4] = 
{
	GenericTypeParameterBuilder_t1866324601::get_offset_of_tbuilder_8(),
	GenericTypeParameterBuilder_t1866324601::get_offset_of_mbuilder_9(),
	GenericTypeParameterBuilder_t1866324601::get_offset_of_name_10(),
	GenericTypeParameterBuilder_t1866324601::get_offset_of_base_type_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize296 = { sizeof (ILTokenInfo_t4293645383)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable296[2] = 
{
	ILTokenInfo_t4293645383::get_offset_of_member_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ILTokenInfo_t4293645383::get_offset_of_code_pos_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize297 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize298 = { sizeof (ILGenerator_t3257509038), -1, sizeof(ILGenerator_t3257509038_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable298[12] = 
{
	ILGenerator_t3257509038_StaticFields::get_offset_of_void_type_0(),
	ILGenerator_t3257509038::get_offset_of_code_1(),
	ILGenerator_t3257509038::get_offset_of_code_len_2(),
	ILGenerator_t3257509038::get_offset_of_max_stack_3(),
	ILGenerator_t3257509038::get_offset_of_cur_stack_4(),
	ILGenerator_t3257509038::get_offset_of_num_token_fixups_5(),
	ILGenerator_t3257509038::get_offset_of_token_fixups_6(),
	ILGenerator_t3257509038::get_offset_of_labels_7(),
	ILGenerator_t3257509038::get_offset_of_fixups_8(),
	ILGenerator_t3257509038::get_offset_of_num_fixups_9(),
	ILGenerator_t3257509038::get_offset_of_module_10(),
	ILGenerator_t3257509038::get_offset_of_token_gen_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize299 = { sizeof (LabelFixup_t2539328613)+ sizeof (RuntimeObject), sizeof(LabelFixup_t2539328613 ), 0, 0 };
extern const int32_t g_FieldOffsetTable299[3] = 
{
	LabelFixup_t2539328613::get_offset_of_offset_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LabelFixup_t2539328613::get_offset_of_pos_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LabelFixup_t2539328613::get_offset_of_label_idx_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif