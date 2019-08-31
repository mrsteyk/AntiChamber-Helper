// Antichamber (1.0.7977.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

std::string UObject::GetFullName() const
{
	std::string name;

	if (Class != nullptr)
	{
		std::string temp;
		for (auto p = Outer; p; p = p->Outer)
		{
			temp = p->GetName() + "." + temp;
		}

		name = Class->GetName();
		name += " ";
		name += temp;
		name += GetName();
	}

	return name;
}

std::wstring UObject::GetFullWideName() const
{
	std::wstring name;

	if (Class != nullptr)
	{
		std::wstring temp;
		for (auto p = Outer; p; p = p->Outer)
		{
			temp = p->GetWideName() + L"." + temp;
		}

		name = Class->GetWideName();
		name += L" ";
		name += temp;
		name += GetWideName();
	}

	return name;
}

bool UObject::IsA(UClass* cmp) const
{
	for (auto super = Class; super; super = static_cast<UClass*>(super->SuperField))
	{
		if (super == cmp)
		{
			return true;
		}
	}

	return false;
}

// Function Core.Object.GetBuildChangelistNumber
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::GetBuildChangelistNumber()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetBuildChangelistNumber");

	UObject_GetBuildChangelistNumber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetEngineVersion
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::GetEngineVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetEngineVersion");

	UObject_GetEngineVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetSystemTime
// ()
// Parameters:
// int                            Year                           (Parm, OutParm)
// int                            Month                          (Parm, OutParm)
// int                            DayOfWeek                      (Parm, OutParm)
// int                            Day                            (Parm, OutParm)
// int                            Hour                           (Parm, OutParm)
// int                            Min                            (Parm, OutParm)
// int                            Sec                            (Parm, OutParm)
// int                            MSec                           (Parm, OutParm)

void UObject::GetSystemTime(int* Year, int* Month, int* DayOfWeek, int* Day, int* Hour, int* Min, int* Sec, int* MSec)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetSystemTime");

	UObject_GetSystemTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Year != nullptr)
		*Year = params.Year;
	if (Month != nullptr)
		*Month = params.Month;
	if (DayOfWeek != nullptr)
		*DayOfWeek = params.DayOfWeek;
	if (Day != nullptr)
		*Day = params.Day;
	if (Hour != nullptr)
		*Hour = params.Hour;
	if (Min != nullptr)
		*Min = params.Min;
	if (Sec != nullptr)
		*Sec = params.Sec;
	if (MSec != nullptr)
		*MSec = params.MSec;
}


// Function Core.Object.TimeStamp
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::TimeStamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.TimeStamp");

	UObject_TimeStamp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.TransformVectorByRotation
// ()
// Parameters:
// struct FRotator                SourceRotation                 (Parm)
// struct FVector                 SourceVector                   (Parm)
// bool                           bInverse                       (OptionalParm, Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::TransformVectorByRotation(const struct FRotator& SourceRotation, const struct FVector& SourceVector, bool bInverse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.TransformVectorByRotation");

	UObject_TransformVectorByRotation_Params params;
	params.SourceRotation = SourceRotation;
	params.SourceVector = SourceVector;
	params.bInverse = bInverse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetPackageName
// ()
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName UObject::GetPackageName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetPackageName");

	UObject_GetPackageName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.IsPendingKill
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::IsPendingKill()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.IsPendingKill");

	UObject_IsPendingKill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ByteToFloat
// ()
// Parameters:
// unsigned char                  inputByte                      (Parm)
// bool                           bSigned                        (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::ByteToFloat(unsigned char inputByte, bool bSigned)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ByteToFloat");

	UObject_ByteToFloat_Params params;
	params.inputByte = inputByte;
	params.bSigned = bSigned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FloatToByte
// ()
// Parameters:
// float                          inputFloat                     (Parm)
// bool                           bSigned                        (OptionalParm, Parm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UObject::FloatToByte(float inputFloat, bool bSigned)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FloatToByte");

	UObject_FloatToByte_Params params;
	params.inputFloat = inputFloat;
	params.bSigned = bSigned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.UnwindHeading
// ()
// Parameters:
// float                          A                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::UnwindHeading(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.UnwindHeading");

	UObject_UnwindHeading_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FindDeltaAngle
// ()
// Parameters:
// float                          A1                             (Parm)
// float                          A2                             (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::FindDeltaAngle(float A1, float A2)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FindDeltaAngle");

	UObject_FindDeltaAngle_Params params;
	params.A1 = A1;
	params.A2 = A2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetHeadingAngle
// ()
// Parameters:
// struct FVector                 Dir                            (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::GetHeadingAngle(const struct FVector& Dir)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetHeadingAngle");

	UObject_GetHeadingAngle_Params params;
	params.Dir = Dir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetAngularDegreesFromRadians
// ()
// Parameters:
// struct FVector2D               OutFOV                         (Parm, OutParm)

void UObject::GetAngularDegreesFromRadians(struct FVector2D* OutFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetAngularDegreesFromRadians");

	UObject_GetAngularDegreesFromRadians_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutFOV != nullptr)
		*OutFOV = params.OutFOV;
}


// Function Core.Object.GetAngularFromDotDist
// ()
// Parameters:
// struct FVector2D               OutAngDist                     (Parm, OutParm)
// struct FVector2D               DotDist                        (Parm)

void UObject::GetAngularFromDotDist(const struct FVector2D& DotDist, struct FVector2D* OutAngDist)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetAngularFromDotDist");

	UObject_GetAngularFromDotDist_Params params;
	params.DotDist = DotDist;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAngDist != nullptr)
		*OutAngDist = params.OutAngDist;
}


// Function Core.Object.GetAngularDistance
// ()
// Parameters:
// struct FVector2D               OutAngularDist                 (Parm, OutParm)
// struct FVector                 Direction                      (Parm)
// struct FVector                 AxisX                          (Parm)
// struct FVector                 AxisY                          (Parm)
// struct FVector                 AxisZ                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::GetAngularDistance(const struct FVector& Direction, const struct FVector& AxisX, const struct FVector& AxisY, const struct FVector& AxisZ, struct FVector2D* OutAngularDist)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetAngularDistance");

	UObject_GetAngularDistance_Params params;
	params.Direction = Direction;
	params.AxisX = AxisX;
	params.AxisY = AxisY;
	params.AxisZ = AxisZ;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAngularDist != nullptr)
		*OutAngularDist = params.OutAngularDist;

	return params.ReturnValue;
}


// Function Core.Object.GetDotDistance
// ()
// Parameters:
// struct FVector2D               OutDotDist                     (Parm, OutParm)
// struct FVector                 Direction                      (Parm)
// struct FVector                 AxisX                          (Parm)
// struct FVector                 AxisY                          (Parm)
// struct FVector                 AxisZ                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::GetDotDistance(const struct FVector& Direction, const struct FVector& AxisX, const struct FVector& AxisY, const struct FVector& AxisZ, struct FVector2D* OutDotDist)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetDotDistance");

	UObject_GetDotDistance_Params params;
	params.Direction = Direction;
	params.AxisX = AxisX;
	params.AxisY = AxisY;
	params.AxisZ = AxisZ;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDotDist != nullptr)
		*OutDotDist = params.OutDotDist;

	return params.ReturnValue;
}


// Function Core.Object.PointProjectToPlane
// ()
// Parameters:
// struct FVector                 Point                          (Parm)
// struct FVector                 A                              (Parm)
// struct FVector                 B                              (Parm)
// struct FVector                 C                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::PointProjectToPlane(const struct FVector& Point, const struct FVector& A, const struct FVector& B, const struct FVector& C)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.PointProjectToPlane");

	UObject_PointProjectToPlane_Params params;
	params.Point = Point;
	params.A = A;
	params.B = B;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.PointDistToPlane
// ()
// Parameters:
// struct FVector                 Point                          (Parm)
// struct FRotator                Orientation                    (Parm)
// struct FVector                 Origin                         (Parm)
// struct FVector                 out_ClosestPoint               (OptionalParm, Parm, OutParm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::PointDistToPlane(const struct FVector& Point, const struct FRotator& Orientation, const struct FVector& Origin, struct FVector* out_ClosestPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.PointDistToPlane");

	UObject_PointDistToPlane_Params params;
	params.Point = Point;
	params.Orientation = Orientation;
	params.Origin = Origin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_ClosestPoint != nullptr)
		*out_ClosestPoint = params.out_ClosestPoint;

	return params.ReturnValue;
}


// Function Core.Object.PointDistToSegment
// ()
// Parameters:
// struct FVector                 Point                          (Parm)
// struct FVector                 StartPoint                     (Parm)
// struct FVector                 EndPoint                       (Parm)
// struct FVector                 OutClosestPoint                (OptionalParm, Parm, OutParm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::PointDistToSegment(const struct FVector& Point, const struct FVector& StartPoint, const struct FVector& EndPoint, struct FVector* OutClosestPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.PointDistToSegment");

	UObject_PointDistToSegment_Params params;
	params.Point = Point;
	params.StartPoint = StartPoint;
	params.EndPoint = EndPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutClosestPoint != nullptr)
		*OutClosestPoint = params.OutClosestPoint;

	return params.ReturnValue;
}


// Function Core.Object.PointDistToLine
// ()
// Parameters:
// struct FVector                 Point                          (Parm)
// struct FVector                 Line                           (Parm)
// struct FVector                 Origin                         (Parm)
// struct FVector                 OutClosestPoint                (OptionalParm, Parm, OutParm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::PointDistToLine(const struct FVector& Point, const struct FVector& Line, const struct FVector& Origin, struct FVector* OutClosestPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.PointDistToLine");

	UObject_PointDistToLine_Params params;
	params.Point = Point;
	params.Line = Line;
	params.Origin = Origin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutClosestPoint != nullptr)
		*OutClosestPoint = params.OutClosestPoint;

	return params.ReturnValue;
}


// Function Core.Object.GetPerObjectConfigSections
// ()
// Parameters:
// class UClass*                  SearchClass                    (Parm)
// TArray<struct FString>         out_SectionNames               (Parm, OutParm, NeedCtorLink)
// class UObject*                 ObjectOuter                    (OptionalParm, Parm)
// int                            MaxResults                     (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::GetPerObjectConfigSections(class UClass* SearchClass, class UObject* ObjectOuter, int MaxResults, TArray<struct FString>* out_SectionNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetPerObjectConfigSections");

	UObject_GetPerObjectConfigSections_Params params;
	params.SearchClass = SearchClass;
	params.ObjectOuter = ObjectOuter;
	params.MaxResults = MaxResults;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_SectionNames != nullptr)
		*out_SectionNames = params.out_SectionNames;

	return params.ReturnValue;
}


// Function Core.Object.StaticSaveConfig
// ()

void UObject::StaticSaveConfig()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.StaticSaveConfig");

	UObject_StaticSaveConfig_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.SaveConfig
// ()

void UObject::SaveConfig()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SaveConfig");

	UObject_SaveConfig_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.FindObject
// ()
// Parameters:
// struct FString                 ObjectName                     (Parm, NeedCtorLink)
// class UClass*                  ObjectClass                    (Parm)
// class UObject*                 ReturnValue                    (Parm, OutParm, ReturnParm)

class UObject* UObject::FindObject(const struct FString& ObjectName, class UClass* ObjectClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FindObject");

	UObject_FindObject_Params params;
	params.ObjectName = ObjectName;
	params.ObjectClass = ObjectClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.DynamicLoadObject
// ()
// Parameters:
// struct FString                 ObjectName                     (Parm, NeedCtorLink)
// class UClass*                  ObjectClass                    (Parm)
// bool                           MayFail                        (OptionalParm, Parm)
// class UObject*                 ReturnValue                    (Parm, OutParm, ReturnParm)

class UObject* UObject::DynamicLoadObject(const struct FString& ObjectName, class UClass* ObjectClass, bool MayFail)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.DynamicLoadObject");

	UObject_DynamicLoadObject_Params params;
	params.ObjectName = ObjectName;
	params.ObjectClass = ObjectClass;
	params.MayFail = MayFail;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetEnum
// ()
// Parameters:
// class UObject*                 E                              (Parm)
// int                            I                              (Parm, CoerceParm)
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName UObject::GetEnum(class UObject* E, int I)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetEnum");

	UObject_GetEnum_Params params;
	params.E = E;
	params.I = I;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Disable
// ()
// Parameters:
// struct FName                   ProbeFunc                      (Parm)

void UObject::Disable(const struct FName& ProbeFunc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Disable");

	UObject_Disable_Params params;
	params.ProbeFunc = ProbeFunc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Enable
// ()
// Parameters:
// struct FName                   ProbeFunc                      (Parm)

void UObject::Enable(const struct FName& ProbeFunc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Enable");

	UObject_Enable_Params params;
	params.ProbeFunc = ProbeFunc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.ContinuedState
// ()

void UObject::ContinuedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ContinuedState");

	UObject_ContinuedState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.PausedState
// ()

void UObject::PausedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.PausedState");

	UObject_PausedState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.PoppedState
// ()

void UObject::PoppedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.PoppedState");

	UObject_PoppedState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.PushedState
// ()

void UObject::PushedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.PushedState");

	UObject_PushedState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.EndState
// ()
// Parameters:
// struct FName                   NextStateName                  (Parm)

void UObject::EndState(const struct FName& NextStateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EndState");

	UObject_EndState_Params params;
	params.NextStateName = NextStateName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.BeginState
// ()
// Parameters:
// struct FName                   PreviousStateName              (Parm)

void UObject::BeginState(const struct FName& PreviousStateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.BeginState");

	UObject_BeginState_Params params;
	params.PreviousStateName = PreviousStateName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.DumpStateStack
// ()

void UObject::DumpStateStack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.DumpStateStack");

	UObject_DumpStateStack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.PopState
// ()
// Parameters:
// bool                           bPopAll                        (OptionalParm, Parm)

void UObject::PopState(bool bPopAll)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.PopState");

	UObject_PopState_Params params;
	params.bPopAll = bPopAll;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.PushState
// ()
// Parameters:
// struct FName                   NewState                       (Parm)
// struct FName                   NewLabel                       (OptionalParm, Parm)

void UObject::PushState(const struct FName& NewState, const struct FName& NewLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.PushState");

	UObject_PushState_Params params;
	params.NewState = NewState;
	params.NewLabel = NewLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.GetStateName
// ()
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName UObject::GetStateName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetStateName");

	UObject_GetStateName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.IsChildState
// ()
// Parameters:
// struct FName                   TestState                      (Parm)
// struct FName                   TestParentState                (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::IsChildState(const struct FName& TestState, const struct FName& TestParentState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.IsChildState");

	UObject_IsChildState_Params params;
	params.TestState = TestState;
	params.TestParentState = TestParentState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.IsInState
// ()
// Parameters:
// struct FName                   TestState                      (Parm)
// bool                           bTestStateStack                (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::IsInState(const struct FName& TestState, bool bTestStateStack)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.IsInState");

	UObject_IsInState_Params params;
	params.TestState = TestState;
	params.bTestStateStack = bTestStateStack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GotoState
// ()
// Parameters:
// struct FName                   NewState                       (OptionalParm, Parm)
// struct FName                   Label                          (OptionalParm, Parm)
// bool                           bForceEvents                   (OptionalParm, Parm)
// bool                           bKeepStack                     (OptionalParm, Parm)

void UObject::GotoState(const struct FName& NewState, const struct FName& Label, bool bForceEvents, bool bKeepStack)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GotoState");

	UObject_GotoState_Params params;
	params.NewState = NewState;
	params.Label = Label;
	params.bForceEvents = bForceEvents;
	params.bKeepStack = bKeepStack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.IsUTracing
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::IsUTracing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.IsUTracing");

	UObject_IsUTracing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SetUTracing
// ()
// Parameters:
// bool                           bShouldUTrace                  (Parm)

void UObject::SetUTracing(bool bShouldUTrace)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SetUTracing");

	UObject_SetUTracing_Params params;
	params.bShouldUTrace = bShouldUTrace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.GetFuncName
// ()
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName UObject::GetFuncName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetFuncName");

	UObject_GetFuncName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.DebugBreak
// ()
// Parameters:
// int                            UserFlags                      (OptionalParm, Parm)
// TEnumAsByte<EDebugBreakType>   DebuggerType                   (OptionalParm, Parm)

void UObject::DebugBreak(int UserFlags, TEnumAsByte<EDebugBreakType> DebuggerType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.DebugBreak");

	UObject_DebugBreak_Params params;
	params.UserFlags = UserFlags;
	params.DebuggerType = DebuggerType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.GetScriptTrace
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::GetScriptTrace()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetScriptTrace");

	UObject_GetScriptTrace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ScriptTrace
// ()

void UObject::ScriptTrace()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ScriptTrace");

	UObject_ScriptTrace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.ParseLocalizedPropertyPath
// ()
// Parameters:
// struct FString                 PathName                       (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::ParseLocalizedPropertyPath(const struct FString& PathName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ParseLocalizedPropertyPath");

	UObject_ParseLocalizedPropertyPath_Params params;
	params.PathName = PathName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Localize
// ()
// Parameters:
// struct FString                 SectionName                    (Parm, NeedCtorLink)
// struct FString                 KeyName                        (Parm, NeedCtorLink)
// struct FString                 PackageName                    (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::Localize(const struct FString& SectionName, const struct FString& KeyName, const struct FString& PackageName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Localize");

	UObject_Localize_Params params;
	params.SectionName = SectionName;
	params.KeyName = KeyName;
	params.PackageName = PackageName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.WarnInternal
// ()
// Parameters:
// struct FString                 S                              (Parm, CoerceParm, NeedCtorLink)

void UObject::WarnInternal(const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.WarnInternal");

	UObject_WarnInternal_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.LogInternal
// ()
// Parameters:
// struct FString                 S                              (Parm, CoerceParm, NeedCtorLink)
// struct FName                   Tag                            (OptionalParm, Parm)

void UObject::LogInternal(const struct FString& S, const struct FName& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.LogInternal");

	UObject_LogInternal_Params params;
	params.S = S;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Subtract_LinearColorLinearColor
// ()
// Parameters:
// struct FLinearColor            A                              (Parm)
// struct FLinearColor            B                              (Parm)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FLinearColor UObject::Subtract_LinearColorLinearColor(const struct FLinearColor& A, const struct FLinearColor& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_LinearColorLinearColor");

	UObject_Subtract_LinearColorLinearColor_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Multiply_LinearColorFloat
// ()
// Parameters:
// struct FLinearColor            LC                             (Parm)
// float                          Mult                           (Parm)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FLinearColor UObject::Multiply_LinearColorFloat(const struct FLinearColor& LC, float Mult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_LinearColorFloat");

	UObject_Multiply_LinearColorFloat_Params params;
	params.LC = LC;
	params.Mult = Mult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ColorToLinearColor
// ()
// Parameters:
// struct FColor                  OldColor                       (Parm)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FLinearColor UObject::ColorToLinearColor(const struct FColor& OldColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ColorToLinearColor");

	UObject_ColorToLinearColor_Params params;
	params.OldColor = OldColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.MakeLinearColor
// ()
// Parameters:
// float                          R                              (Parm)
// float                          G                              (Parm)
// float                          B                              (Parm)
// float                          A                              (Parm)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FLinearColor UObject::MakeLinearColor(float R, float G, float B, float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MakeLinearColor");

	UObject_MakeLinearColor_Params params;
	params.R = R;
	params.G = G;
	params.B = B;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.LerpColor
// ()
// Parameters:
// struct FColor                  A                              (Parm)
// struct FColor                  B                              (Parm)
// float                          Alpha                          (Parm)
// struct FColor                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FColor UObject::LerpColor(const struct FColor& A, const struct FColor& B, float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.LerpColor");

	UObject_LerpColor_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.MakeColor
// ()
// Parameters:
// unsigned char                  R                              (Parm)
// unsigned char                  G                              (Parm)
// unsigned char                  B                              (Parm)
// unsigned char                  A                              (OptionalParm, Parm)
// struct FColor                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FColor UObject::MakeColor(unsigned char R, unsigned char G, unsigned char B, unsigned char A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MakeColor");

	UObject_MakeColor_Params params;
	params.R = R;
	params.G = G;
	params.B = B;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Add_ColorColor
// ()
// Parameters:
// struct FColor                  A                              (Parm)
// struct FColor                  B                              (Parm)
// struct FColor                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FColor UObject::Add_ColorColor(const struct FColor& A, const struct FColor& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Add_ColorColor");

	UObject_Add_ColorColor_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Multiply_ColorFloat
// ()
// Parameters:
// struct FColor                  A                              (Parm)
// float                          B                              (Parm)
// struct FColor                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FColor UObject::Multiply_ColorFloat(const struct FColor& A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_ColorFloat");

	UObject_Multiply_ColorFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Multiply_FloatColor
// ()
// Parameters:
// float                          A                              (Parm)
// struct FColor                  B                              (Parm)
// struct FColor                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FColor UObject::Multiply_FloatColor(float A, const struct FColor& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_FloatColor");

	UObject_Multiply_FloatColor_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Subtract_ColorColor
// ()
// Parameters:
// struct FColor                  A                              (Parm)
// struct FColor                  B                              (Parm)
// struct FColor                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FColor UObject::Subtract_ColorColor(const struct FColor& A, const struct FColor& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_ColorColor");

	UObject_Subtract_ColorColor_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.EvalInterpCurveVector2D
// ()
// Parameters:
// struct FInterpCurveVector2D    Vector2DCurve                  (Parm, NeedCtorLink)
// float                          InVal                          (Parm)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector2D UObject::EvalInterpCurveVector2D(const struct FInterpCurveVector2D& Vector2DCurve, float InVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EvalInterpCurveVector2D");

	UObject_EvalInterpCurveVector2D_Params params;
	params.Vector2DCurve = Vector2DCurve;
	params.InVal = InVal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.EvalInterpCurveVector
// ()
// Parameters:
// struct FInterpCurveVector      VectorCurve                    (Parm, NeedCtorLink)
// float                          InVal                          (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::EvalInterpCurveVector(const struct FInterpCurveVector& VectorCurve, float InVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EvalInterpCurveVector");

	UObject_EvalInterpCurveVector_Params params;
	params.VectorCurve = VectorCurve;
	params.InVal = InVal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.EvalInterpCurveFloat
// ()
// Parameters:
// struct FInterpCurveFloat       FloatCurve                     (Parm, NeedCtorLink)
// float                          InVal                          (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::EvalInterpCurveFloat(const struct FInterpCurveFloat& FloatCurve, float InVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EvalInterpCurveFloat");

	UObject_EvalInterpCurveFloat_Params params;
	params.FloatCurve = FloatCurve;
	params.InVal = InVal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.vect2d
// ()
// Parameters:
// float                          InX                            (Parm)
// float                          InY                            (Parm)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector2D UObject::vect2d(float InX, float InY)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.vect2d");

	UObject_vect2d_Params params;
	params.InX = InX;
	params.InY = InY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetMappedRangeValue
// ()
// Parameters:
// struct FVector2D               InputRange                     (Parm)
// struct FVector2D               OutputRange                    (Parm)
// float                          Value                          (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::GetMappedRangeValue(const struct FVector2D& InputRange, const struct FVector2D& OutputRange, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetMappedRangeValue");

	UObject_GetMappedRangeValue_Params params;
	params.InputRange = InputRange;
	params.OutputRange = OutputRange;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetRangePctByValue
// ()
// Parameters:
// struct FVector2D               Range                          (Parm)
// float                          Value                          (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::GetRangePctByValue(const struct FVector2D& Range, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetRangePctByValue");

	UObject_GetRangePctByValue_Params params;
	params.Range = Range;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetRangeValueByPct
// ()
// Parameters:
// struct FVector2D               Range                          (Parm)
// float                          Pct                            (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::GetRangeValueByPct(const struct FVector2D& Range, float Pct)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetRangeValueByPct");

	UObject_GetRangeValueByPct_Params params;
	params.Range = Range;
	params.Pct = Pct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SubtractEqual_Vector2DVector2D
// ()
// Parameters:
// struct FVector2D               A                              (Parm, OutParm)
// struct FVector2D               B                              (Parm)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector2D UObject::SubtractEqual_Vector2DVector2D(const struct FVector2D& B, struct FVector2D* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractEqual_Vector2DVector2D");

	UObject_SubtractEqual_Vector2DVector2D_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.AddEqual_Vector2DVector2D
// ()
// Parameters:
// struct FVector2D               A                              (Parm, OutParm)
// struct FVector2D               B                              (Parm)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector2D UObject::AddEqual_Vector2DVector2D(const struct FVector2D& B, struct FVector2D* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AddEqual_Vector2DVector2D");

	UObject_AddEqual_Vector2DVector2D_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.DivideEqual_Vector2DFloat
// ()
// Parameters:
// struct FVector2D               A                              (Parm, OutParm)
// float                          B                              (Parm)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector2D UObject::DivideEqual_Vector2DFloat(float B, struct FVector2D* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.DivideEqual_Vector2DFloat");

	UObject_DivideEqual_Vector2DFloat_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.MultiplyEqual_Vector2DFloat
// ()
// Parameters:
// struct FVector2D               A                              (Parm, OutParm)
// float                          B                              (Parm)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector2D UObject::MultiplyEqual_Vector2DFloat(float B, struct FVector2D* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyEqual_Vector2DFloat");

	UObject_MultiplyEqual_Vector2DFloat_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.Divide_Vector2DFloat
// ()
// Parameters:
// struct FVector2D               A                              (Parm)
// float                          B                              (Parm)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector2D UObject::Divide_Vector2DFloat(const struct FVector2D& A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Divide_Vector2DFloat");

	UObject_Divide_Vector2DFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Multiply_Vector2DFloat
// ()
// Parameters:
// struct FVector2D               A                              (Parm)
// float                          B                              (Parm)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector2D UObject::Multiply_Vector2DFloat(const struct FVector2D& A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_Vector2DFloat");

	UObject_Multiply_Vector2DFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Subtract_Vector2DVector2D
// ()
// Parameters:
// struct FVector2D               A                              (Parm)
// struct FVector2D               B                              (Parm)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector2D UObject::Subtract_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_Vector2DVector2D");

	UObject_Subtract_Vector2DVector2D_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Add_Vector2DVector2D
// ()
// Parameters:
// struct FVector2D               A                              (Parm)
// struct FVector2D               B                              (Parm)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector2D UObject::Add_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Add_Vector2DVector2D");

	UObject_Add_Vector2DVector2D_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Subtract_QuatQuat
// ()
// Parameters:
// struct FQuat                   A                              (Parm)
// struct FQuat                   B                              (Parm)
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FQuat UObject::Subtract_QuatQuat(const struct FQuat& A, const struct FQuat& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_QuatQuat");

	UObject_Subtract_QuatQuat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Add_QuatQuat
// ()
// Parameters:
// struct FQuat                   A                              (Parm)
// struct FQuat                   B                              (Parm)
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FQuat UObject::Add_QuatQuat(const struct FQuat& A, const struct FQuat& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Add_QuatQuat");

	UObject_Add_QuatQuat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.QuatSlerp
// ()
// Parameters:
// struct FQuat                   A                              (Parm)
// struct FQuat                   B                              (Parm)
// float                          Alpha                          (Parm)
// bool                           bShortestPath                  (OptionalParm, Parm)
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FQuat UObject::QuatSlerp(const struct FQuat& A, const struct FQuat& B, float Alpha, bool bShortestPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.QuatSlerp");

	UObject_QuatSlerp_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;
	params.bShortestPath = bShortestPath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.QuatToRotator
// ()
// Parameters:
// struct FQuat                   A                              (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::QuatToRotator(const struct FQuat& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.QuatToRotator");

	UObject_QuatToRotator_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.QuatFromRotator
// ()
// Parameters:
// struct FRotator                A                              (Parm)
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FQuat UObject::QuatFromRotator(const struct FRotator& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.QuatFromRotator");

	UObject_QuatFromRotator_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.QuatFromAxisAndAngle
// ()
// Parameters:
// struct FVector                 Axis                           (Parm)
// float                          Angle                          (Parm)
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FQuat UObject::QuatFromAxisAndAngle(const struct FVector& Axis, float Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.QuatFromAxisAndAngle");

	UObject_QuatFromAxisAndAngle_Params params;
	params.Axis = Axis;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.QuatFindBetween
// ()
// Parameters:
// struct FVector                 A                              (Parm)
// struct FVector                 B                              (Parm)
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FQuat UObject::QuatFindBetween(const struct FVector& A, const struct FVector& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.QuatFindBetween");

	UObject_QuatFindBetween_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.QuatRotateVector
// ()
// Parameters:
// struct FQuat                   A                              (Parm)
// struct FVector                 B                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::QuatRotateVector(const struct FQuat& A, const struct FVector& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.QuatRotateVector");

	UObject_QuatRotateVector_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.QuatInvert
// ()
// Parameters:
// struct FQuat                   A                              (Parm)
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FQuat UObject::QuatInvert(const struct FQuat& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.QuatInvert");

	UObject_QuatInvert_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.QuatDot
// ()
// Parameters:
// struct FQuat                   A                              (Parm)
// struct FQuat                   B                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::QuatDot(const struct FQuat& A, const struct FQuat& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.QuatDot");

	UObject_QuatDot_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.QuatProduct
// ()
// Parameters:
// struct FQuat                   A                              (Parm)
// struct FQuat                   B                              (Parm)
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FQuat UObject::QuatProduct(const struct FQuat& A, const struct FQuat& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.QuatProduct");

	UObject_QuatProduct_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.MatrixGetAxis
// ()
// Parameters:
// struct FMatrix                 TM                             (Parm)
// TEnumAsByte<EAxis>             Axis                           (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::MatrixGetAxis(const struct FMatrix& TM, TEnumAsByte<EAxis> Axis)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MatrixGetAxis");

	UObject_MatrixGetAxis_Params params;
	params.TM = TM;
	params.Axis = Axis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.MatrixGetOrigin
// ()
// Parameters:
// struct FMatrix                 TM                             (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::MatrixGetOrigin(const struct FMatrix& TM)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MatrixGetOrigin");

	UObject_MatrixGetOrigin_Params params;
	params.TM = TM;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.MatrixGetRotator
// ()
// Parameters:
// struct FMatrix                 TM                             (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::MatrixGetRotator(const struct FMatrix& TM)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MatrixGetRotator");

	UObject_MatrixGetRotator_Params params;
	params.TM = TM;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.MakeRotationMatrix
// ()
// Parameters:
// struct FRotator                Rotation                       (Parm)
// struct FMatrix                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMatrix UObject::MakeRotationMatrix(const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MakeRotationMatrix");

	UObject_MakeRotationMatrix_Params params;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.MakeRotationTranslationMatrix
// ()
// Parameters:
// struct FVector                 Translation                    (Parm)
// struct FRotator                Rotation                       (Parm)
// struct FMatrix                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMatrix UObject::MakeRotationTranslationMatrix(const struct FVector& Translation, const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MakeRotationTranslationMatrix");

	UObject_MakeRotationTranslationMatrix_Params params;
	params.Translation = Translation;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.InverseTransformNormal
// ()
// Parameters:
// struct FMatrix                 TM                             (Parm)
// struct FVector                 A                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::InverseTransformNormal(const struct FMatrix& TM, const struct FVector& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.InverseTransformNormal");

	UObject_InverseTransformNormal_Params params;
	params.TM = TM;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.TransformNormal
// ()
// Parameters:
// struct FMatrix                 TM                             (Parm)
// struct FVector                 A                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::TransformNormal(const struct FMatrix& TM, const struct FVector& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.TransformNormal");

	UObject_TransformNormal_Params params;
	params.TM = TM;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.InverseTransformVector
// ()
// Parameters:
// struct FMatrix                 TM                             (Parm)
// struct FVector                 A                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::InverseTransformVector(const struct FMatrix& TM, const struct FVector& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.InverseTransformVector");

	UObject_InverseTransformVector_Params params;
	params.TM = TM;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.TransformVector
// ()
// Parameters:
// struct FMatrix                 TM                             (Parm)
// struct FVector                 A                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::TransformVector(const struct FMatrix& TM, const struct FVector& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.TransformVector");

	UObject_TransformVector_Params params;
	params.TM = TM;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Multiply_MatrixMatrix
// ()
// Parameters:
// struct FMatrix                 A                              (Parm)
// struct FMatrix                 B                              (Parm)
// struct FMatrix                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMatrix UObject::Multiply_MatrixMatrix(const struct FMatrix& A, const struct FMatrix& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_MatrixMatrix");

	UObject_Multiply_MatrixMatrix_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.NotEqual_NameName
// ()
// Parameters:
// struct FName                   A                              (Parm)
// struct FName                   B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::NotEqual_NameName(const struct FName& A, const struct FName& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_NameName");

	UObject_NotEqual_NameName_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.EqualEqual_NameName
// ()
// Parameters:
// struct FName                   A                              (Parm)
// struct FName                   B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::EqualEqual_NameName(const struct FName& A, const struct FName& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_NameName");

	UObject_EqualEqual_NameName_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.IsA
// ()
// Parameters:
// struct FName                   ClassName                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::IsA(const struct FName& ClassName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.IsA");

	UObject_IsA_Params params;
	params.ClassName = ClassName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ClassIsChildOf
// ()
// Parameters:
// class UClass*                  TestClass                      (Parm)
// class UClass*                  ParentClass                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::ClassIsChildOf(class UClass* TestClass, class UClass* ParentClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ClassIsChildOf");

	UObject_ClassIsChildOf_Params params;
	params.TestClass = TestClass;
	params.ParentClass = ParentClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.NotEqual_InterfaceInterface
// ()
// Parameters:
// TScriptInterface<class UInterface> A                              (Parm)
// TScriptInterface<class UInterface> B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::NotEqual_InterfaceInterface(const TScriptInterface<class UInterface>& A, const TScriptInterface<class UInterface>& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_InterfaceInterface");

	UObject_NotEqual_InterfaceInterface_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.EqualEqual_InterfaceInterface
// ()
// Parameters:
// TScriptInterface<class UInterface> A                              (Parm)
// TScriptInterface<class UInterface> B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::EqualEqual_InterfaceInterface(const TScriptInterface<class UInterface>& A, const TScriptInterface<class UInterface>& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_InterfaceInterface");

	UObject_EqualEqual_InterfaceInterface_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.NotEqual_ObjectObject
// ()
// Parameters:
// class UObject*                 A                              (Parm)
// class UObject*                 B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::NotEqual_ObjectObject(class UObject* A, class UObject* B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_ObjectObject");

	UObject_NotEqual_ObjectObject_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.EqualEqual_ObjectObject
// ()
// Parameters:
// class UObject*                 A                              (Parm)
// class UObject*                 B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::EqualEqual_ObjectObject(class UObject* A, class UObject* B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_ObjectObject");

	UObject_EqualEqual_ObjectObject_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.PathName
// ()
// Parameters:
// class UObject*                 CheckObject                    (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::PathName(class UObject* CheckObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.PathName");

	UObject_PathName_Params params;
	params.CheckObject = CheckObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SplitString
// ()
// Parameters:
// struct FString                 Source                         (Parm, NeedCtorLink)
// struct FString                 Delimiter                      (OptionalParm, Parm, NeedCtorLink)
// bool                           bCullEmpty                     (OptionalParm, Parm)
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

TArray<struct FString> UObject::SplitString(const struct FString& Source, const struct FString& Delimiter, bool bCullEmpty)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SplitString");

	UObject_SplitString_Params params;
	params.Source = Source;
	params.Delimiter = Delimiter;
	params.bCullEmpty = bCullEmpty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ParseStringIntoArray
// ()
// Parameters:
// struct FString                 BaseString                     (Parm, NeedCtorLink)
// TArray<struct FString>         Pieces                         (Parm, OutParm, NeedCtorLink)
// struct FString                 delim                          (Parm, NeedCtorLink)
// bool                           bCullEmpty                     (Parm)

void UObject::ParseStringIntoArray(const struct FString& BaseString, const struct FString& delim, bool bCullEmpty, TArray<struct FString>* Pieces)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ParseStringIntoArray");

	UObject_ParseStringIntoArray_Params params;
	params.BaseString = BaseString;
	params.delim = delim;
	params.bCullEmpty = bCullEmpty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Pieces != nullptr)
		*Pieces = params.Pieces;
}


// Function Core.Object.JoinArray
// ()
// Parameters:
// TArray<struct FString>         StringArray                    (Parm, NeedCtorLink)
// struct FString                 out_Result                     (Parm, OutParm, NeedCtorLink)
// struct FString                 delim                          (OptionalParm, Parm, NeedCtorLink)
// bool                           bIgnoreBlanks                  (OptionalParm, Parm)

void UObject::JoinArray(TArray<struct FString> StringArray, const struct FString& delim, bool bIgnoreBlanks, struct FString* out_Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.JoinArray");

	UObject_JoinArray_Params params;
	params.StringArray = StringArray;
	params.delim = delim;
	params.bIgnoreBlanks = bIgnoreBlanks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_Result != nullptr)
		*out_Result = params.out_Result;
}


// Function Core.Object.GetRightMost
// ()
// Parameters:
// struct FString                 Text                           (Parm, CoerceParm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::GetRightMost(const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetRightMost");

	UObject_GetRightMost_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Split
// ()
// Parameters:
// struct FString                 Text                           (Parm, CoerceParm, NeedCtorLink)
// struct FString                 SplitStr                       (Parm, CoerceParm, NeedCtorLink)
// bool                           bOmitSplitStr                  (OptionalParm, Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::Split(const struct FString& Text, const struct FString& SplitStr, bool bOmitSplitStr)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Split");

	UObject_Split_Params params;
	params.Text = Text;
	params.SplitStr = SplitStr;
	params.bOmitSplitStr = bOmitSplitStr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Repl
// ()
// Parameters:
// struct FString                 Src                            (Parm, CoerceParm, NeedCtorLink)
// struct FString                 Match                          (Parm, CoerceParm, NeedCtorLink)
// struct FString                 With                           (Parm, CoerceParm, NeedCtorLink)
// bool                           bCaseSensitive                 (OptionalParm, Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::Repl(const struct FString& Src, const struct FString& Match, const struct FString& With, bool bCaseSensitive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Repl");

	UObject_Repl_Params params;
	params.Src = Src;
	params.Match = Match;
	params.With = With;
	params.bCaseSensitive = bCaseSensitive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Asc
// ()
// Parameters:
// struct FString                 S                              (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::Asc(const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Asc");

	UObject_Asc_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Chr
// ()
// Parameters:
// int                            I                              (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::Chr(int I)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Chr");

	UObject_Chr_Params params;
	params.I = I;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Locs
// ()
// Parameters:
// struct FString                 S                              (Parm, CoerceParm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::Locs(const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Locs");

	UObject_Locs_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Caps
// ()
// Parameters:
// struct FString                 S                              (Parm, CoerceParm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::Caps(const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Caps");

	UObject_Caps_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Right
// ()
// Parameters:
// struct FString                 S                              (Parm, CoerceParm, NeedCtorLink)
// int                            I                              (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::Right(const struct FString& S, int I)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Right");

	UObject_Right_Params params;
	params.S = S;
	params.I = I;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Left
// ()
// Parameters:
// struct FString                 S                              (Parm, CoerceParm, NeedCtorLink)
// int                            I                              (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::Left(const struct FString& S, int I)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Left");

	UObject_Left_Params params;
	params.S = S;
	params.I = I;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Mid
// ()
// Parameters:
// struct FString                 S                              (Parm, CoerceParm, NeedCtorLink)
// int                            I                              (Parm)
// int                            J                              (OptionalParm, Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::Mid(const struct FString& S, int I, int J)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Mid");

	UObject_Mid_Params params;
	params.S = S;
	params.I = I;
	params.J = J;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.InStr
// ()
// Parameters:
// struct FString                 S                              (Parm, CoerceParm, NeedCtorLink)
// struct FString                 T                              (Parm, CoerceParm, NeedCtorLink)
// bool                           bSearchFromRight               (OptionalParm, Parm)
// bool                           bIgnoreCase                    (OptionalParm, Parm)
// int                            StartPos                       (OptionalParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::InStr(const struct FString& S, const struct FString& T, bool bSearchFromRight, bool bIgnoreCase, int StartPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.InStr");

	UObject_InStr_Params params;
	params.S = S;
	params.T = T;
	params.bSearchFromRight = bSearchFromRight;
	params.bIgnoreCase = bIgnoreCase;
	params.StartPos = StartPos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Len
// ()
// Parameters:
// struct FString                 S                              (Parm, CoerceParm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::Len(const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Len");

	UObject_Len_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SubtractEqual_StrStr
// ()
// Parameters:
// struct FString                 A                              (Parm, OutParm, NeedCtorLink)
// struct FString                 B                              (Parm, CoerceParm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::SubtractEqual_StrStr(const struct FString& B, struct FString* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractEqual_StrStr");

	UObject_SubtractEqual_StrStr_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.AtEqual_StrStr
// ()
// Parameters:
// struct FString                 A                              (Parm, OutParm, NeedCtorLink)
// struct FString                 B                              (Parm, CoerceParm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::AtEqual_StrStr(const struct FString& B, struct FString* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AtEqual_StrStr");

	UObject_AtEqual_StrStr_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.ConcatEqual_StrStr
// ()
// Parameters:
// struct FString                 A                              (Parm, OutParm, NeedCtorLink)
// struct FString                 B                              (Parm, CoerceParm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::ConcatEqual_StrStr(const struct FString& B, struct FString* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ConcatEqual_StrStr");

	UObject_ConcatEqual_StrStr_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.ComplementEqual_StrStr
// ()
// Parameters:
// struct FString                 A                              (Parm, NeedCtorLink)
// struct FString                 B                              (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::ComplementEqual_StrStr(const struct FString& A, const struct FString& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ComplementEqual_StrStr");

	UObject_ComplementEqual_StrStr_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.NotEqual_StrStr
// ()
// Parameters:
// struct FString                 A                              (Parm, NeedCtorLink)
// struct FString                 B                              (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::NotEqual_StrStr(const struct FString& A, const struct FString& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_StrStr");

	UObject_NotEqual_StrStr_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.EqualEqual_StrStr
// ()
// Parameters:
// struct FString                 A                              (Parm, NeedCtorLink)
// struct FString                 B                              (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::EqualEqual_StrStr(const struct FString& A, const struct FString& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_StrStr");

	UObject_EqualEqual_StrStr_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GreaterEqual_StrStr
// ()
// Parameters:
// struct FString                 A                              (Parm, NeedCtorLink)
// struct FString                 B                              (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::GreaterEqual_StrStr(const struct FString& A, const struct FString& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GreaterEqual_StrStr");

	UObject_GreaterEqual_StrStr_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.LessEqual_StrStr
// ()
// Parameters:
// struct FString                 A                              (Parm, NeedCtorLink)
// struct FString                 B                              (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::LessEqual_StrStr(const struct FString& A, const struct FString& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.LessEqual_StrStr");

	UObject_LessEqual_StrStr_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Greater_StrStr
// ()
// Parameters:
// struct FString                 A                              (Parm, NeedCtorLink)
// struct FString                 B                              (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::Greater_StrStr(const struct FString& A, const struct FString& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Greater_StrStr");

	UObject_Greater_StrStr_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Less_StrStr
// ()
// Parameters:
// struct FString                 A                              (Parm, NeedCtorLink)
// struct FString                 B                              (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::Less_StrStr(const struct FString& A, const struct FString& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Less_StrStr");

	UObject_Less_StrStr_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.At_StrStr
// ()
// Parameters:
// struct FString                 A                              (Parm, CoerceParm, NeedCtorLink)
// struct FString                 B                              (Parm, CoerceParm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::At_StrStr(const struct FString& A, const struct FString& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.At_StrStr");

	UObject_At_StrStr_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Concat_StrStr
// ()
// Parameters:
// struct FString                 A                              (Parm, CoerceParm, NeedCtorLink)
// struct FString                 B                              (Parm, CoerceParm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::Concat_StrStr(const struct FString& A, const struct FString& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Concat_StrStr");

	UObject_Concat_StrStr_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.MakeRotator
// ()
// Parameters:
// int                            Pitch                          (Parm)
// int                            Yaw                            (Parm)
// int                            Roll                           (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::MakeRotator(int Pitch, int Yaw, int Roll)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MakeRotator");

	UObject_MakeRotator_Params params;
	params.Pitch = Pitch;
	params.Yaw = Yaw;
	params.Roll = Roll;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SClampRotAxis
// ()
// Parameters:
// float                          DeltaTime                      (Parm)
// int                            ViewAxis                       (Parm)
// int                            out_DeltaViewAxis              (Parm, OutParm)
// int                            MaxLimit                       (Parm)
// int                            MinLimit                       (Parm)
// float                          InterpolationSpeed             (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::SClampRotAxis(float DeltaTime, int ViewAxis, int MaxLimit, int MinLimit, float InterpolationSpeed, int* out_DeltaViewAxis)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SClampRotAxis");

	UObject_SClampRotAxis_Params params;
	params.DeltaTime = DeltaTime;
	params.ViewAxis = ViewAxis;
	params.MaxLimit = MaxLimit;
	params.MinLimit = MinLimit;
	params.InterpolationSpeed = InterpolationSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_DeltaViewAxis != nullptr)
		*out_DeltaViewAxis = params.out_DeltaViewAxis;

	return params.ReturnValue;
}


// Function Core.Object.ClampRotAxisFromRange
// ()
// Parameters:
// int                            Current                        (Parm)
// int                            Min                            (Parm)
// int                            Max                            (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::ClampRotAxisFromRange(int Current, int Min, int Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ClampRotAxisFromRange");

	UObject_ClampRotAxisFromRange_Params params;
	params.Current = Current;
	params.Min = Min;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ClampRotAxisFromBase
// ()
// Parameters:
// int                            Current                        (Parm)
// int                            Center                         (Parm)
// int                            MaxDelta                       (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::ClampRotAxisFromBase(int Current, int Center, int MaxDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ClampRotAxisFromBase");

	UObject_ClampRotAxisFromBase_Params params;
	params.Current = Current;
	params.Center = Center;
	params.MaxDelta = MaxDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ClampRotAxis
// ()
// Parameters:
// int                            ViewAxis                       (Parm)
// int                            out_DeltaViewAxis              (Parm, OutParm)
// int                            MaxLimit                       (Parm)
// int                            MinLimit                       (Parm)

void UObject::ClampRotAxis(int ViewAxis, int MaxLimit, int MinLimit, int* out_DeltaViewAxis)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ClampRotAxis");

	UObject_ClampRotAxis_Params params;
	params.ViewAxis = ViewAxis;
	params.MaxLimit = MaxLimit;
	params.MinLimit = MinLimit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_DeltaViewAxis != nullptr)
		*out_DeltaViewAxis = params.out_DeltaViewAxis;
}


// Function Core.Object.RSize
// ()
// Parameters:
// struct FRotator                R                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::RSize(const struct FRotator& R)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.RSize");

	UObject_RSize_Params params;
	params.R = R;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.RDiff
// ()
// Parameters:
// struct FRotator                A                              (Parm)
// struct FRotator                B                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::RDiff(const struct FRotator& A, const struct FRotator& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.RDiff");

	UObject_RDiff_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.NormalizeRotAxis
// ()
// Parameters:
// int                            Angle                          (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::NormalizeRotAxis(int Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NormalizeRotAxis");

	UObject_NormalizeRotAxis_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.RInterpTo
// ()
// Parameters:
// struct FRotator                Current                        (Parm)
// struct FRotator                Target                         (Parm)
// float                          DeltaTime                      (Parm)
// float                          InterpSpeed                    (Parm)
// bool                           bConstantInterpSpeed           (OptionalParm, Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::RInterpTo(const struct FRotator& Current, const struct FRotator& Target, float DeltaTime, float InterpSpeed, bool bConstantInterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.RInterpTo");

	UObject_RInterpTo_Params params;
	params.Current = Current;
	params.Target = Target;
	params.DeltaTime = DeltaTime;
	params.InterpSpeed = InterpSpeed;
	params.bConstantInterpSpeed = bConstantInterpSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.RTransform
// ()
// Parameters:
// struct FRotator                R                              (Parm)
// struct FRotator                RBasis                         (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::RTransform(const struct FRotator& R, const struct FRotator& RBasis)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.RTransform");

	UObject_RTransform_Params params;
	params.R = R;
	params.RBasis = RBasis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.RSmerp
// ()
// Parameters:
// struct FRotator                A                              (Parm)
// struct FRotator                B                              (Parm)
// float                          Alpha                          (Parm)
// bool                           bShortestPath                  (OptionalParm, Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::RSmerp(const struct FRotator& A, const struct FRotator& B, float Alpha, bool bShortestPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.RSmerp");

	UObject_RSmerp_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;
	params.bShortestPath = bShortestPath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.RLerp
// ()
// Parameters:
// struct FRotator                A                              (Parm)
// struct FRotator                B                              (Parm)
// float                          Alpha                          (Parm)
// bool                           bShortestPath                  (OptionalParm, Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::RLerp(const struct FRotator& A, const struct FRotator& B, float Alpha, bool bShortestPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.RLerp");

	UObject_RLerp_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;
	params.bShortestPath = bShortestPath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Normalize
// ()
// Parameters:
// struct FRotator                Rot                            (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::Normalize(const struct FRotator& Rot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Normalize");

	UObject_Normalize_Params params;
	params.Rot = Rot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.OrthoRotation
// ()
// Parameters:
// struct FVector                 X                              (Parm)
// struct FVector                 Y                              (Parm)
// struct FVector                 Z                              (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::OrthoRotation(const struct FVector& X, const struct FVector& Y, const struct FVector& Z)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.OrthoRotation");

	UObject_OrthoRotation_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.RotRand
// ()
// Parameters:
// bool                           bRoll                          (OptionalParm, Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::RotRand(bool bRoll)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.RotRand");

	UObject_RotRand_Params params;
	params.bRoll = bRoll;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetRotatorAxis
// ()
// Parameters:
// struct FRotator                A                              (Parm)
// int                            Axis                           (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::GetRotatorAxis(const struct FRotator& A, int Axis)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetRotatorAxis");

	UObject_GetRotatorAxis_Params params;
	params.A = A;
	params.Axis = Axis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetUnAxes
// ()
// Parameters:
// struct FRotator                A                              (Parm)
// struct FVector                 X                              (Parm, OutParm)
// struct FVector                 Y                              (Parm, OutParm)
// struct FVector                 Z                              (Parm, OutParm)

void UObject::GetUnAxes(const struct FRotator& A, struct FVector* X, struct FVector* Y, struct FVector* Z)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetUnAxes");

	UObject_GetUnAxes_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;
	if (Z != nullptr)
		*Z = params.Z;
}


// Function Core.Object.GetAxes
// ()
// Parameters:
// struct FRotator                A                              (Parm)
// struct FVector                 X                              (Parm, OutParm)
// struct FVector                 Y                              (Parm, OutParm)
// struct FVector                 Z                              (Parm, OutParm)

void UObject::GetAxes(const struct FRotator& A, struct FVector* X, struct FVector* Y, struct FVector* Z)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetAxes");

	UObject_GetAxes_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;
	if (Z != nullptr)
		*Z = params.Z;
}


// Function Core.Object.ClockwiseFrom_IntInt
// ()
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::ClockwiseFrom_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ClockwiseFrom_IntInt");

	UObject_ClockwiseFrom_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SubtractEqual_RotatorRotator
// ()
// Parameters:
// struct FRotator                A                              (Parm, OutParm)
// struct FRotator                B                              (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::SubtractEqual_RotatorRotator(const struct FRotator& B, struct FRotator* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractEqual_RotatorRotator");

	UObject_SubtractEqual_RotatorRotator_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.AddEqual_RotatorRotator
// ()
// Parameters:
// struct FRotator                A                              (Parm, OutParm)
// struct FRotator                B                              (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::AddEqual_RotatorRotator(const struct FRotator& B, struct FRotator* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AddEqual_RotatorRotator");

	UObject_AddEqual_RotatorRotator_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.Subtract_RotatorRotator
// ()
// Parameters:
// struct FRotator                A                              (Parm)
// struct FRotator                B                              (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::Subtract_RotatorRotator(const struct FRotator& A, const struct FRotator& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_RotatorRotator");

	UObject_Subtract_RotatorRotator_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Add_RotatorRotator
// ()
// Parameters:
// struct FRotator                A                              (Parm)
// struct FRotator                B                              (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::Add_RotatorRotator(const struct FRotator& A, const struct FRotator& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Add_RotatorRotator");

	UObject_Add_RotatorRotator_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.DivideEqual_RotatorFloat
// ()
// Parameters:
// struct FRotator                A                              (Parm, OutParm)
// float                          B                              (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::DivideEqual_RotatorFloat(float B, struct FRotator* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.DivideEqual_RotatorFloat");

	UObject_DivideEqual_RotatorFloat_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.MultiplyEqual_RotatorFloat
// ()
// Parameters:
// struct FRotator                A                              (Parm, OutParm)
// float                          B                              (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::MultiplyEqual_RotatorFloat(float B, struct FRotator* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyEqual_RotatorFloat");

	UObject_MultiplyEqual_RotatorFloat_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.Divide_RotatorFloat
// ()
// Parameters:
// struct FRotator                A                              (Parm)
// float                          B                              (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::Divide_RotatorFloat(const struct FRotator& A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Divide_RotatorFloat");

	UObject_Divide_RotatorFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Multiply_FloatRotator
// ()
// Parameters:
// float                          A                              (Parm)
// struct FRotator                B                              (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::Multiply_FloatRotator(float A, const struct FRotator& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_FloatRotator");

	UObject_Multiply_FloatRotator_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Multiply_RotatorFloat
// ()
// Parameters:
// struct FRotator                A                              (Parm)
// float                          B                              (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::Multiply_RotatorFloat(const struct FRotator& A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_RotatorFloat");

	UObject_Multiply_RotatorFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.NotEqual_RotatorRotator
// ()
// Parameters:
// struct FRotator                A                              (Parm)
// struct FRotator                B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::NotEqual_RotatorRotator(const struct FRotator& A, const struct FRotator& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_RotatorRotator");

	UObject_NotEqual_RotatorRotator_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.EqualEqual_RotatorRotator
// ()
// Parameters:
// struct FRotator                A                              (Parm)
// struct FRotator                B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::EqualEqual_RotatorRotator(const struct FRotator& A, const struct FRotator& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_RotatorRotator");

	UObject_EqualEqual_RotatorRotator_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.InCylinder
// ()
// Parameters:
// struct FVector                 Origin                         (Parm)
// struct FRotator                Dir                            (Parm)
// float                          Width                          (Parm)
// struct FVector                 A                              (Parm)
// bool                           bIgnoreZ                       (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::InCylinder(const struct FVector& Origin, const struct FRotator& Dir, float Width, const struct FVector& A, bool bIgnoreZ)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.InCylinder");

	UObject_InCylinder_Params params;
	params.Origin = Origin;
	params.Dir = Dir;
	params.Width = Width;
	params.A = A;
	params.bIgnoreZ = bIgnoreZ;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.NoZDot
// ()
// Parameters:
// struct FVector                 A                              (Parm)
// struct FVector                 B                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::NoZDot(const struct FVector& A, const struct FVector& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NoZDot");

	UObject_NoZDot_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ClampLength
// ()
// Parameters:
// struct FVector                 V                              (Parm)
// float                          MaxLength                      (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::ClampLength(const struct FVector& V, float MaxLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ClampLength");

	UObject_ClampLength_Params params;
	params.V = V;
	params.MaxLength = MaxLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.VInterpTo
// ()
// Parameters:
// struct FVector                 Current                        (Parm)
// struct FVector                 Target                         (Parm)
// float                          DeltaTime                      (Parm)
// float                          InterpSpeed                    (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::VInterpTo(const struct FVector& Current, const struct FVector& Target, float DeltaTime, float InterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.VInterpTo");

	UObject_VInterpTo_Params params;
	params.Current = Current;
	params.Target = Target;
	params.DeltaTime = DeltaTime;
	params.InterpSpeed = InterpSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.IsZero
// ()
// Parameters:
// struct FVector                 A                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::IsZero(const struct FVector& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.IsZero");

	UObject_IsZero_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ProjectOnTo
// ()
// Parameters:
// struct FVector                 X                              (Parm)
// struct FVector                 Y                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::ProjectOnTo(const struct FVector& X, const struct FVector& Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ProjectOnTo");

	UObject_ProjectOnTo_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.MirrorVectorByNormal
// ()
// Parameters:
// struct FVector                 InVect                         (Parm)
// struct FVector                 InNormal                       (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::MirrorVectorByNormal(const struct FVector& InVect, const struct FVector& InNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MirrorVectorByNormal");

	UObject_MirrorVectorByNormal_Params params;
	params.InVect = InVect;
	params.InNormal = InNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.VRandCone2
// ()
// Parameters:
// struct FVector                 Dir                            (Parm)
// float                          HorizontalConeHalfAngleRadians (Parm)
// float                          VerticalConeHalfAngleRadians   (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::VRandCone2(const struct FVector& Dir, float HorizontalConeHalfAngleRadians, float VerticalConeHalfAngleRadians)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.VRandCone2");

	UObject_VRandCone2_Params params;
	params.Dir = Dir;
	params.HorizontalConeHalfAngleRadians = HorizontalConeHalfAngleRadians;
	params.VerticalConeHalfAngleRadians = VerticalConeHalfAngleRadians;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.VRandCone
// ()
// Parameters:
// struct FVector                 Dir                            (Parm)
// float                          ConeHalfAngleRadians           (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::VRandCone(const struct FVector& Dir, float ConeHalfAngleRadians)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.VRandCone");

	UObject_VRandCone_Params params;
	params.Dir = Dir;
	params.ConeHalfAngleRadians = ConeHalfAngleRadians;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.VRand
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::VRand()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.VRand");

	UObject_VRand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.VSmerp
// ()
// Parameters:
// struct FVector                 A                              (Parm)
// struct FVector                 B                              (Parm)
// float                          Alpha                          (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::VSmerp(const struct FVector& A, const struct FVector& B, float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.VSmerp");

	UObject_VSmerp_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.VLerp
// ()
// Parameters:
// struct FVector                 A                              (Parm)
// struct FVector                 B                              (Parm)
// float                          Alpha                          (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::VLerp(const struct FVector& A, const struct FVector& B, float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.VLerp");

	UObject_VLerp_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Normal
// ()
// Parameters:
// struct FVector                 A                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::Normal(const struct FVector& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Normal");

	UObject_Normal_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.VSizeSq2D
// ()
// Parameters:
// struct FVector                 A                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::VSizeSq2D(const struct FVector& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.VSizeSq2D");

	UObject_VSizeSq2D_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.VSizeSq
// ()
// Parameters:
// struct FVector                 A                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::VSizeSq(const struct FVector& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.VSizeSq");

	UObject_VSizeSq_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.VSize2D
// ()
// Parameters:
// struct FVector                 A                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::VSize2D(const struct FVector& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.VSize2D");

	UObject_VSize2D_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.VSize
// ()
// Parameters:
// struct FVector                 A                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::VSize(const struct FVector& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.VSize");

	UObject_VSize_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SubtractEqual_VectorVector
// ()
// Parameters:
// struct FVector                 A                              (Parm, OutParm)
// struct FVector                 B                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::SubtractEqual_VectorVector(const struct FVector& B, struct FVector* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractEqual_VectorVector");

	UObject_SubtractEqual_VectorVector_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.AddEqual_VectorVector
// ()
// Parameters:
// struct FVector                 A                              (Parm, OutParm)
// struct FVector                 B                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::AddEqual_VectorVector(const struct FVector& B, struct FVector* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AddEqual_VectorVector");

	UObject_AddEqual_VectorVector_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.DivideEqual_VectorFloat
// ()
// Parameters:
// struct FVector                 A                              (Parm, OutParm)
// float                          B                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::DivideEqual_VectorFloat(float B, struct FVector* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.DivideEqual_VectorFloat");

	UObject_DivideEqual_VectorFloat_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.MultiplyEqual_VectorVector
// ()
// Parameters:
// struct FVector                 A                              (Parm, OutParm)
// struct FVector                 B                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::MultiplyEqual_VectorVector(const struct FVector& B, struct FVector* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyEqual_VectorVector");

	UObject_MultiplyEqual_VectorVector_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.MultiplyEqual_VectorFloat
// ()
// Parameters:
// struct FVector                 A                              (Parm, OutParm)
// float                          B                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::MultiplyEqual_VectorFloat(float B, struct FVector* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyEqual_VectorFloat");

	UObject_MultiplyEqual_VectorFloat_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.Cross_VectorVector
// ()
// Parameters:
// struct FVector                 A                              (Parm)
// struct FVector                 B                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::Cross_VectorVector(const struct FVector& A, const struct FVector& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Cross_VectorVector");

	UObject_Cross_VectorVector_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Dot_VectorVector
// ()
// Parameters:
// struct FVector                 A                              (Parm)
// struct FVector                 B                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::Dot_VectorVector(const struct FVector& A, const struct FVector& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Dot_VectorVector");

	UObject_Dot_VectorVector_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.NotEqual_VectorVector
// ()
// Parameters:
// struct FVector                 A                              (Parm)
// struct FVector                 B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::NotEqual_VectorVector(const struct FVector& A, const struct FVector& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_VectorVector");

	UObject_NotEqual_VectorVector_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.EqualEqual_VectorVector
// ()
// Parameters:
// struct FVector                 A                              (Parm)
// struct FVector                 B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::EqualEqual_VectorVector(const struct FVector& A, const struct FVector& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_VectorVector");

	UObject_EqualEqual_VectorVector_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GreaterGreater_VectorRotator
// ()
// Parameters:
// struct FVector                 A                              (Parm)
// struct FRotator                B                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::GreaterGreater_VectorRotator(const struct FVector& A, const struct FRotator& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GreaterGreater_VectorRotator");

	UObject_GreaterGreater_VectorRotator_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.LessLess_VectorRotator
// ()
// Parameters:
// struct FVector                 A                              (Parm)
// struct FRotator                B                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::LessLess_VectorRotator(const struct FVector& A, const struct FRotator& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.LessLess_VectorRotator");

	UObject_LessLess_VectorRotator_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Subtract_VectorVector
// ()
// Parameters:
// struct FVector                 A                              (Parm)
// struct FVector                 B                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::Subtract_VectorVector(const struct FVector& A, const struct FVector& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_VectorVector");

	UObject_Subtract_VectorVector_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Add_VectorVector
// ()
// Parameters:
// struct FVector                 A                              (Parm)
// struct FVector                 B                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::Add_VectorVector(const struct FVector& A, const struct FVector& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Add_VectorVector");

	UObject_Add_VectorVector_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Divide_VectorFloat
// ()
// Parameters:
// struct FVector                 A                              (Parm)
// float                          B                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::Divide_VectorFloat(const struct FVector& A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Divide_VectorFloat");

	UObject_Divide_VectorFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Multiply_VectorVector
// ()
// Parameters:
// struct FVector                 A                              (Parm)
// struct FVector                 B                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::Multiply_VectorVector(const struct FVector& A, const struct FVector& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_VectorVector");

	UObject_Multiply_VectorVector_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Multiply_FloatVector
// ()
// Parameters:
// float                          A                              (Parm)
// struct FVector                 B                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::Multiply_FloatVector(float A, const struct FVector& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_FloatVector");

	UObject_Multiply_FloatVector_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Multiply_VectorFloat
// ()
// Parameters:
// struct FVector                 A                              (Parm)
// float                          B                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::Multiply_VectorFloat(const struct FVector& A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_VectorFloat");

	UObject_Multiply_VectorFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Subtract_PreVector
// ()
// Parameters:
// struct FVector                 A                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::Subtract_PreVector(const struct FVector& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_PreVector");

	UObject_Subtract_PreVector_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FInterpConstantTo
// ()
// Parameters:
// float                          Current                        (Parm)
// float                          Target                         (Parm)
// float                          DeltaTime                      (Parm)
// float                          InterpSpeed                    (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::FInterpConstantTo(float Current, float Target, float DeltaTime, float InterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FInterpConstantTo");

	UObject_FInterpConstantTo_Params params;
	params.Current = Current;
	params.Target = Target;
	params.DeltaTime = DeltaTime;
	params.InterpSpeed = InterpSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FInterpTo
// ()
// Parameters:
// float                          Current                        (Parm)
// float                          Target                         (Parm)
// float                          DeltaTime                      (Parm)
// float                          InterpSpeed                    (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::FInterpTo(float Current, float Target, float DeltaTime, float InterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FInterpTo");

	UObject_FInterpTo_Params params;
	params.Current = Current;
	params.Target = Target;
	params.DeltaTime = DeltaTime;
	params.InterpSpeed = InterpSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FPctByRange
// ()
// Parameters:
// float                          Value                          (Parm)
// float                          InMin                          (Parm)
// float                          InMax                          (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::FPctByRange(float Value, float InMin, float InMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FPctByRange");

	UObject_FPctByRange_Params params;
	params.Value = Value;
	params.InMin = InMin;
	params.InMax = InMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.RandRange
// ()
// Parameters:
// float                          InMin                          (Parm)
// float                          InMax                          (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::RandRange(float InMin, float InMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.RandRange");

	UObject_RandRange_Params params;
	params.InMin = InMin;
	params.InMax = InMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FInterpEaseInOut
// ()
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// float                          Alpha                          (Parm)
// float                          Exp                            (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::FInterpEaseInOut(float A, float B, float Alpha, float Exp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FInterpEaseInOut");

	UObject_FInterpEaseInOut_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;
	params.Exp = Exp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FInterpEaseOut
// ()
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// float                          Alpha                          (Parm)
// float                          Exp                            (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::FInterpEaseOut(float A, float B, float Alpha, float Exp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FInterpEaseOut");

	UObject_FInterpEaseOut_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;
	params.Exp = Exp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FInterpEaseIn
// ()
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// float                          Alpha                          (Parm)
// float                          Exp                            (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::FInterpEaseIn(float A, float B, float Alpha, float Exp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FInterpEaseIn");

	UObject_FInterpEaseIn_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;
	params.Exp = Exp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FCubicInterp
// ()
// Parameters:
// float                          P0                             (Parm)
// float                          T0                             (Parm)
// float                          P1                             (Parm)
// float                          T1                             (Parm)
// float                          A                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::FCubicInterp(float P0, float T0, float P1, float T1, float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FCubicInterp");

	UObject_FCubicInterp_Params params;
	params.P0 = P0;
	params.T0 = T0;
	params.P1 = P1;
	params.T1 = T1;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FCeil
// ()
// Parameters:
// float                          A                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::FCeil(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FCeil");

	UObject_FCeil_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FFloor
// ()
// Parameters:
// float                          A                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::FFloor(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FFloor");

	UObject_FFloor_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Round
// ()
// Parameters:
// float                          A                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::Round(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Round");

	UObject_Round_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Lerp
// ()
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// float                          Alpha                          (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::Lerp(float A, float B, float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Lerp");

	UObject_Lerp_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FClamp
// ()
// Parameters:
// float                          V                              (Parm)
// float                          A                              (Parm)
// float                          B                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::FClamp(float V, float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FClamp");

	UObject_FClamp_Params params;
	params.V = V;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FMax
// ()
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::FMax(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FMax");

	UObject_FMax_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FMin
// ()
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::FMin(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FMin");

	UObject_FMin_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FRand
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::FRand()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FRand");

	UObject_FRand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Square
// ()
// Parameters:
// float                          A                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::Square(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Square");

	UObject_Square_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Sqrt
// ()
// Parameters:
// float                          A                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::Sqrt(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Sqrt");

	UObject_Sqrt_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Loge
// ()
// Parameters:
// float                          A                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::Loge(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Loge");

	UObject_Loge_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Exp
// ()
// Parameters:
// float                          A                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::Exp(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Exp");

	UObject_Exp_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Atan2
// ()
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::Atan2(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Atan2");

	UObject_Atan2_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Atan
// ()
// Parameters:
// float                          A                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::Atan(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Atan");

	UObject_Atan_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Tan
// ()
// Parameters:
// float                          A                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::Tan(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Tan");

	UObject_Tan_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Acos
// ()
// Parameters:
// float                          A                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::Acos(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Acos");

	UObject_Acos_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Cos
// ()
// Parameters:
// float                          A                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::Cos(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Cos");

	UObject_Cos_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Asin
// ()
// Parameters:
// float                          A                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::Asin(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Asin");

	UObject_Asin_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Sin
// ()
// Parameters:
// float                          A                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::Sin(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Sin");

	UObject_Sin_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Abs
// ()
// Parameters:
// float                          A                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::Abs(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Abs");

	UObject_Abs_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SubtractEqual_FloatFloat
// ()
// Parameters:
// float                          A                              (Parm, OutParm)
// float                          B                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::SubtractEqual_FloatFloat(float B, float* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractEqual_FloatFloat");

	UObject_SubtractEqual_FloatFloat_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.AddEqual_FloatFloat
// ()
// Parameters:
// float                          A                              (Parm, OutParm)
// float                          B                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::AddEqual_FloatFloat(float B, float* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AddEqual_FloatFloat");

	UObject_AddEqual_FloatFloat_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.DivideEqual_FloatFloat
// ()
// Parameters:
// float                          A                              (Parm, OutParm)
// float                          B                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::DivideEqual_FloatFloat(float B, float* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.DivideEqual_FloatFloat");

	UObject_DivideEqual_FloatFloat_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.MultiplyEqual_FloatFloat
// ()
// Parameters:
// float                          A                              (Parm, OutParm)
// float                          B                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::MultiplyEqual_FloatFloat(float B, float* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyEqual_FloatFloat");

	UObject_MultiplyEqual_FloatFloat_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.NotEqual_FloatFloat
// ()
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::NotEqual_FloatFloat(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_FloatFloat");

	UObject_NotEqual_FloatFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ComplementEqual_FloatFloat
// ()
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::ComplementEqual_FloatFloat(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ComplementEqual_FloatFloat");

	UObject_ComplementEqual_FloatFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.EqualEqual_FloatFloat
// ()
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::EqualEqual_FloatFloat(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_FloatFloat");

	UObject_EqualEqual_FloatFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GreaterEqual_FloatFloat
// ()
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::GreaterEqual_FloatFloat(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GreaterEqual_FloatFloat");

	UObject_GreaterEqual_FloatFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.LessEqual_FloatFloat
// ()
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::LessEqual_FloatFloat(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.LessEqual_FloatFloat");

	UObject_LessEqual_FloatFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Greater_FloatFloat
// ()
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::Greater_FloatFloat(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Greater_FloatFloat");

	UObject_Greater_FloatFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Less_FloatFloat
// ()
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::Less_FloatFloat(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Less_FloatFloat");

	UObject_Less_FloatFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Subtract_FloatFloat
// ()
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::Subtract_FloatFloat(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_FloatFloat");

	UObject_Subtract_FloatFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Add_FloatFloat
// ()
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::Add_FloatFloat(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Add_FloatFloat");

	UObject_Add_FloatFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Percent_FloatFloat
// ()
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::Percent_FloatFloat(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Percent_FloatFloat");

	UObject_Percent_FloatFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Divide_FloatFloat
// ()
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::Divide_FloatFloat(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Divide_FloatFloat");

	UObject_Divide_FloatFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Multiply_FloatFloat
// ()
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::Multiply_FloatFloat(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_FloatFloat");

	UObject_Multiply_FloatFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.MultiplyMultiply_FloatFloat
// ()
// Parameters:
// float                          Base                           (Parm)
// float                          Exp                            (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::MultiplyMultiply_FloatFloat(float Base, float Exp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyMultiply_FloatFloat");

	UObject_MultiplyMultiply_FloatFloat_Params params;
	params.Base = Base;
	params.Exp = Exp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Subtract_PreFloat
// ()
// Parameters:
// float                          A                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::Subtract_PreFloat(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_PreFloat");

	UObject_Subtract_PreFloat_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ToHex
// ()
// Parameters:
// int                            A                              (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::ToHex(int A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ToHex");

	UObject_ToHex_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Clamp
// ()
// Parameters:
// int                            V                              (Parm)
// int                            A                              (Parm)
// int                            B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::Clamp(int V, int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Clamp");

	UObject_Clamp_Params params;
	params.V = V;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Max
// ()
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::Max(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Max");

	UObject_Max_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Min
// ()
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::Min(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Min");

	UObject_Min_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Rand
// ()
// Parameters:
// int                            Max                            (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::Rand(int Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Rand");

	UObject_Rand_Params params;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SubtractSubtract_Int
// ()
// Parameters:
// int                            A                              (Parm, OutParm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::SubtractSubtract_Int(int* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractSubtract_Int");

	UObject_SubtractSubtract_Int_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.AddAdd_Int
// ()
// Parameters:
// int                            A                              (Parm, OutParm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::AddAdd_Int(int* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AddAdd_Int");

	UObject_AddAdd_Int_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.SubtractSubtract_PreInt
// ()
// Parameters:
// int                            A                              (Parm, OutParm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::SubtractSubtract_PreInt(int* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractSubtract_PreInt");

	UObject_SubtractSubtract_PreInt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.AddAdd_PreInt
// ()
// Parameters:
// int                            A                              (Parm, OutParm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::AddAdd_PreInt(int* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AddAdd_PreInt");

	UObject_AddAdd_PreInt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.SubtractEqual_IntInt
// ()
// Parameters:
// int                            A                              (Parm, OutParm)
// int                            B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::SubtractEqual_IntInt(int B, int* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractEqual_IntInt");

	UObject_SubtractEqual_IntInt_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.AddEqual_IntInt
// ()
// Parameters:
// int                            A                              (Parm, OutParm)
// int                            B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::AddEqual_IntInt(int B, int* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AddEqual_IntInt");

	UObject_AddEqual_IntInt_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.DivideEqual_IntFloat
// ()
// Parameters:
// int                            A                              (Parm, OutParm)
// float                          B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::DivideEqual_IntFloat(float B, int* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.DivideEqual_IntFloat");

	UObject_DivideEqual_IntFloat_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.MultiplyEqual_IntFloat
// ()
// Parameters:
// int                            A                              (Parm, OutParm)
// float                          B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::MultiplyEqual_IntFloat(float B, int* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyEqual_IntFloat");

	UObject_MultiplyEqual_IntFloat_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.Or_IntInt
// ()
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::Or_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Or_IntInt");

	UObject_Or_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Xor_IntInt
// ()
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::Xor_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Xor_IntInt");

	UObject_Xor_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.And_IntInt
// ()
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::And_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.And_IntInt");

	UObject_And_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.NotEqual_IntInt
// ()
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::NotEqual_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_IntInt");

	UObject_NotEqual_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.EqualEqual_IntInt
// ()
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::EqualEqual_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_IntInt");

	UObject_EqualEqual_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GreaterEqual_IntInt
// ()
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::GreaterEqual_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GreaterEqual_IntInt");

	UObject_GreaterEqual_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.LessEqual_IntInt
// ()
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::LessEqual_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.LessEqual_IntInt");

	UObject_LessEqual_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Greater_IntInt
// ()
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::Greater_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Greater_IntInt");

	UObject_Greater_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Less_IntInt
// ()
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::Less_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Less_IntInt");

	UObject_Less_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GreaterGreaterGreater_IntInt
// ()
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::GreaterGreaterGreater_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GreaterGreaterGreater_IntInt");

	UObject_GreaterGreaterGreater_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GreaterGreater_IntInt
// ()
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::GreaterGreater_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GreaterGreater_IntInt");

	UObject_GreaterGreater_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.LessLess_IntInt
// ()
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::LessLess_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.LessLess_IntInt");

	UObject_LessLess_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Subtract_IntInt
// ()
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::Subtract_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_IntInt");

	UObject_Subtract_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Add_IntInt
// ()
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::Add_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Add_IntInt");

	UObject_Add_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Percent_IntInt
// ()
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::Percent_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Percent_IntInt");

	UObject_Percent_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Divide_IntInt
// ()
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::Divide_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Divide_IntInt");

	UObject_Divide_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Multiply_IntInt
// ()
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::Multiply_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_IntInt");

	UObject_Multiply_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Subtract_PreInt
// ()
// Parameters:
// int                            A                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::Subtract_PreInt(int A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_PreInt");

	UObject_Subtract_PreInt_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Complement_PreInt
// ()
// Parameters:
// int                            A                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::Complement_PreInt(int A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Complement_PreInt");

	UObject_Complement_PreInt_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SubtractSubtract_Byte
// ()
// Parameters:
// unsigned char                  A                              (Parm, OutParm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UObject::SubtractSubtract_Byte(unsigned char* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractSubtract_Byte");

	UObject_SubtractSubtract_Byte_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.AddAdd_Byte
// ()
// Parameters:
// unsigned char                  A                              (Parm, OutParm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UObject::AddAdd_Byte(unsigned char* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AddAdd_Byte");

	UObject_AddAdd_Byte_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.SubtractSubtract_PreByte
// ()
// Parameters:
// unsigned char                  A                              (Parm, OutParm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UObject::SubtractSubtract_PreByte(unsigned char* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractSubtract_PreByte");

	UObject_SubtractSubtract_PreByte_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.AddAdd_PreByte
// ()
// Parameters:
// unsigned char                  A                              (Parm, OutParm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UObject::AddAdd_PreByte(unsigned char* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AddAdd_PreByte");

	UObject_AddAdd_PreByte_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.SubtractEqual_ByteByte
// ()
// Parameters:
// unsigned char                  A                              (Parm, OutParm)
// unsigned char                  B                              (Parm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UObject::SubtractEqual_ByteByte(unsigned char B, unsigned char* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractEqual_ByteByte");

	UObject_SubtractEqual_ByteByte_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.AddEqual_ByteByte
// ()
// Parameters:
// unsigned char                  A                              (Parm, OutParm)
// unsigned char                  B                              (Parm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UObject::AddEqual_ByteByte(unsigned char B, unsigned char* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AddEqual_ByteByte");

	UObject_AddEqual_ByteByte_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.DivideEqual_ByteByte
// ()
// Parameters:
// unsigned char                  A                              (Parm, OutParm)
// unsigned char                  B                              (Parm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UObject::DivideEqual_ByteByte(unsigned char B, unsigned char* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.DivideEqual_ByteByte");

	UObject_DivideEqual_ByteByte_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.MultiplyEqual_ByteFloat
// ()
// Parameters:
// unsigned char                  A                              (Parm, OutParm)
// float                          B                              (Parm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UObject::MultiplyEqual_ByteFloat(float B, unsigned char* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyEqual_ByteFloat");

	UObject_MultiplyEqual_ByteFloat_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.MultiplyEqual_ByteByte
// ()
// Parameters:
// unsigned char                  A                              (Parm, OutParm)
// unsigned char                  B                              (Parm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UObject::MultiplyEqual_ByteByte(unsigned char B, unsigned char* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyEqual_ByteByte");

	UObject_MultiplyEqual_ByteByte_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.OrOr_BoolBool
// ()
// Parameters:
// bool                           A                              (Parm)
// bool                           B                              (Parm, SkipParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::OrOr_BoolBool(bool A, bool B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.OrOr_BoolBool");

	UObject_OrOr_BoolBool_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.XorXor_BoolBool
// ()
// Parameters:
// bool                           A                              (Parm)
// bool                           B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::XorXor_BoolBool(bool A, bool B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.XorXor_BoolBool");

	UObject_XorXor_BoolBool_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.AndAnd_BoolBool
// ()
// Parameters:
// bool                           A                              (Parm)
// bool                           B                              (Parm, SkipParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::AndAnd_BoolBool(bool A, bool B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AndAnd_BoolBool");

	UObject_AndAnd_BoolBool_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.NotEqual_BoolBool
// ()
// Parameters:
// bool                           A                              (Parm)
// bool                           B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::NotEqual_BoolBool(bool A, bool B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_BoolBool");

	UObject_NotEqual_BoolBool_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.EqualEqual_BoolBool
// ()
// Parameters:
// bool                           A                              (Parm)
// bool                           B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::EqualEqual_BoolBool(bool A, bool B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_BoolBool");

	UObject_EqualEqual_BoolBool_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Not_PreBool
// ()
// Parameters:
// bool                           A                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UObject::Not_PreBool(bool A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Not_PreBool");

	UObject_Not_PreBool_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.DistributionVector.GetVectorValue
// ()
// Parameters:
// float                          F                              (OptionalParm, Parm)
// int                            LastExtreme                    (OptionalParm, Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UDistributionVector::GetVectorValue(float F, int LastExtreme)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.DistributionVector.GetVectorValue");

	UDistributionVector_GetVectorValue_Params params;
	params.F = F;
	params.LastExtreme = LastExtreme;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.DistributionFloat.GetFloatValue
// ()
// Parameters:
// float                          F                              (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UDistributionFloat::GetFloatValue(float F)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.DistributionFloat.GetFloatValue");

	UDistributionFloat_GetFloatValue_Params params;
	params.F = F;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Commandlet.Main
// ()
// Parameters:
// struct FString                 Params                         (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UCommandlet::Main(const struct FString& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Commandlet.Main");

	UCommandlet_Main_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.HelpCommandlet.Main
// ()
// Parameters:
// struct FString                 Params                         (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UHelpCommandlet::Main(const struct FString& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.HelpCommandlet.Main");

	UHelpCommandlet_Main_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
