typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _INTERRUPT_FUNCTION_TABLE
{
  /* 0x0000 */ void* InitializeLocalUnit /* function */;
  /* 0x0004 */ void* InitializeIoUnit /* function */;
  /* 0x0008 */ void* SetPriority /* function */;
  /* 0x000c */ void* GetLocalUnitError /* function */;
  /* 0x0010 */ void* ClearLocalUnitError /* function */;
  /* 0x0014 */ void* GetLogicalId /* function */;
  /* 0x0018 */ void* SetLogicalId /* function */;
  /* 0x001c */ void* AcceptAndGetSource /* function */;
  /* 0x0020 */ void* EndOfInterrupt /* function */;
  /* 0x0024 */ void* FastEndOfInterrupt /* function */;
  /* 0x0028 */ void* SetLineState /* function */;
  /* 0x002c */ void* RequestInterrupt /* function */;
  /* 0x0030 */ void* StartProcessor /* function */;
  /* 0x0034 */ void* GenerateMessage /* function */;
  /* 0x0038 */ void* ConvertId /* function */;
  /* 0x003c */ void* SaveLocalInterrupts /* function */;
  /* 0x0040 */ void* ReplayLocalInterrupts /* function */;
  /* 0x0044 */ void* DeinitializeLocalUnit /* function */;
  /* 0x0048 */ void* DeinitializeIoUnit /* function */;
  /* 0x004c */ void* QueryAndGetSource /* function */;
  /* 0x0050 */ void* DeactivateInterrupt /* function */;
  /* 0x0054 */ void* DirectedEndOfInterrupt /* function */;
  /* 0x0058 */ void* QueryLocalUnitInfo /* function */;
} INTERRUPT_FUNCTION_TABLE, *PINTERRUPT_FUNCTION_TABLE; /* size: 0x005c */

typedef enum _KNOWN_CONTROLLER_TYPE
{
  InterruptControllerInvalid = 0,
  InterruptControllerPic = 1,
  InterruptControllerApic = 2,
  InterruptControllerGic = 3,
  InterruptControllerGicV3 = 4,
  InterruptControllerGicV4 = 5,
  InterruptControllerBcm = 6,
  InterruptControllerUnknown = 4096,
} KNOWN_CONTROLLER_TYPE, *PKNOWN_CONTROLLER_TYPE;

typedef enum _INTERRUPT_PROBLEM
{
  InterruptProblemNone = 0,
  InterruptProblemMadtParsingFailure = 1,
  InterruptProblemNoControllersFound = 2,
  InterruptProblemFailedDiscovery = 3,
  InterruptProblemInitializeLocalUnitFailed = 4,
  InterruptProblemInitializeIoUnitFailed = 5,
  InterruptProblemSetLogicalIdFailed = 6,
  InterruptProblemSetLineStateFailed = 7,
  InterruptProblemGenerateMessageFailed = 8,
  InterruptProblemConvertIdFailed = 9,
  InterruptProblemCmciSetupFailed = 10,
  InterruptProblemQueryMaxProcessorsCalledTooEarly = 11,
  InterruptProblemProcessorReset = 12,
  InterruptProblemStartProcessorFailed = 13,
  InterruptProblemProcessorNotAlive = 14,
  InterruptProblemLowerIrqlViolation = 15,
  InterruptProblemInvalidIrql = 16,
  InterruptProblemNoSuchController = 17,
  InterruptProblemNoSuchLines = 18,
  InterruptProblemBadConnectionData = 19,
  InterruptProblemBadRoutingData = 20,
  InterruptProblemInvalidProcessor = 21,
  InterruptProblemFailedToAttainTarget = 22,
  InterruptProblemUnsupportedWiringConfiguration = 23,
  InterruptProblemSpareAlreadyStarted = 24,
  InterruptProblemClusterNotFullyReplaced = 25,
  InterruptProblemNewClusterAlreadyActive = 26,
  InterruptProblemNewClusterTooLarge = 27,
  InterruptProblemCannotHardwareQuiesce = 28,
  InterruptProblemIpiDestinationUpdateFailed = 29,
  InterruptProblemNoMemory = 30,
  InterruptProblemNoIrtEntries = 31,
  InterruptProblemConnectionDataBaitAndSwitch = 32,
  InterruptProblemInvalidLogicalFlatId = 33,
  InterruptProblemDeinitializeLocalUnitFailed = 34,
  InterruptProblemDeinitializeIoUnitFailed = 35,
  InterruptProblemMismatchedThermalLvtIsr = 36,
  InterruptProblemHvRetargetFailed = 37,
  InterruptProblemDeferredErrorSetupFailed = 38,
} INTERRUPT_PROBLEM, *PINTERRUPT_PROBLEM;

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _REGISTERED_INTERRUPT_CONTROLLER
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0008 */ void* InternalData;
  /* 0x000c */ unsigned long InternalDataSize;
  /* 0x0010 */ struct _INTERRUPT_FUNCTION_TABLE FunctionTable;
  /* 0x006c */ enum _KNOWN_CONTROLLER_TYPE KnownType;
  /* 0x0070 */ unsigned long Capabilities;
  /* 0x0074 */ unsigned long Flags;
  /* 0x0078 */ unsigned long MaxPriority;
  /* 0x007c */ unsigned long UnitId;
  /* 0x0080 */ struct _LIST_ENTRY LinesHead;
  /* 0x0088 */ struct _LIST_ENTRY OutputLinesHead;
  /* 0x0090 */ long MinLine;
  /* 0x0094 */ long MaxLine;
  /* 0x0098 */ unsigned long MaxClusterSize;
  /* 0x009c */ unsigned long MaxClusters;
  /* 0x00a0 */ unsigned long InterruptReplayDataSize;
  /* 0x00a4 */ enum _INTERRUPT_PROBLEM Problem;
  /* 0x00a8 */ long ProblemStatus;
  /* 0x00ac */ const char* ProblemSourceFile;
  /* 0x00b0 */ unsigned long ProblemSourceLine;
  /* 0x00b4 */ unsigned long CustomProblem;
  /* 0x00b8 */ long CustomProblemStatus;
  /* 0x00bc */ struct _UNICODE_STRING ResourceId;
  /* 0x00c4 */ struct POHANDLE__* PowerHandle;
} REGISTERED_INTERRUPT_CONTROLLER, *PREGISTERED_INTERRUPT_CONTROLLER; /* size: 0x00c8 */

