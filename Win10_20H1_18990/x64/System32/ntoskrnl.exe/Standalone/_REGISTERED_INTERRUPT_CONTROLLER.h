typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _INTERRUPT_FUNCTION_TABLE
{
  /* 0x0000 */ void* InitializeLocalUnit /* function */;
  /* 0x0008 */ void* InitializeIoUnit /* function */;
  /* 0x0010 */ void* SetPriority /* function */;
  /* 0x0018 */ void* GetLocalUnitError /* function */;
  /* 0x0020 */ void* ClearLocalUnitError /* function */;
  /* 0x0028 */ void* GetLogicalId /* function */;
  /* 0x0030 */ void* SetLogicalId /* function */;
  /* 0x0038 */ void* AcceptAndGetSource /* function */;
  /* 0x0040 */ void* EndOfInterrupt /* function */;
  /* 0x0048 */ void* FastEndOfInterrupt /* function */;
  /* 0x0050 */ void* SetLineState /* function */;
  /* 0x0058 */ void* RequestInterrupt /* function */;
  /* 0x0060 */ void* StartProcessor /* function */;
  /* 0x0068 */ void* GenerateMessage /* function */;
  /* 0x0070 */ void* ConvertId /* function */;
  /* 0x0078 */ void* SaveLocalInterrupts /* function */;
  /* 0x0080 */ void* ReplayLocalInterrupts /* function */;
  /* 0x0088 */ void* DeinitializeLocalUnit /* function */;
  /* 0x0090 */ void* DeinitializeIoUnit /* function */;
  /* 0x0098 */ void* QueryAndGetSource /* function */;
  /* 0x00a0 */ void* DeactivateInterrupt /* function */;
  /* 0x00a8 */ void* DirectedEndOfInterrupt /* function */;
  /* 0x00b0 */ void* QueryLocalUnitInfo /* function */;
} INTERRUPT_FUNCTION_TABLE, *PINTERRUPT_FUNCTION_TABLE; /* size: 0x00b8 */

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
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _REGISTERED_INTERRUPT_CONTROLLER
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0010 */ void* InternalData;
  /* 0x0018 */ unsigned long InternalDataSize;
  /* 0x0020 */ struct _INTERRUPT_FUNCTION_TABLE FunctionTable;
  /* 0x00d8 */ enum _KNOWN_CONTROLLER_TYPE KnownType;
  /* 0x00dc */ unsigned long Capabilities;
  /* 0x00e0 */ unsigned long Flags;
  /* 0x00e4 */ unsigned long MaxPriority;
  /* 0x00e8 */ unsigned long UnitId;
  /* 0x00f0 */ struct _LIST_ENTRY LinesHead;
  /* 0x0100 */ struct _LIST_ENTRY OutputLinesHead;
  /* 0x0110 */ long MinLine;
  /* 0x0114 */ long MaxLine;
  /* 0x0118 */ unsigned long MaxClusterSize;
  /* 0x011c */ unsigned long MaxClusters;
  /* 0x0120 */ unsigned long InterruptReplayDataSize;
  /* 0x0124 */ enum _INTERRUPT_PROBLEM Problem;
  /* 0x0128 */ long ProblemStatus;
  /* 0x0130 */ const char* ProblemSourceFile;
  /* 0x0138 */ unsigned long ProblemSourceLine;
  /* 0x013c */ unsigned long CustomProblem;
  /* 0x0140 */ long CustomProblemStatus;
  /* 0x0148 */ struct _UNICODE_STRING ResourceId;
  /* 0x0158 */ struct POHANDLE__* PowerHandle;
} REGISTERED_INTERRUPT_CONTROLLER, *PREGISTERED_INTERRUPT_CONTROLLER; /* size: 0x0160 */

