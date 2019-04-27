typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _LDRP_CSLIST
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Tail;
} LDRP_CSLIST, *PLDRP_CSLIST; /* size: 0x0004 */

typedef enum _LDR_DDAG_STATE
{
  LdrModulesMerged = -5,
  LdrModulesInitError = -4,
  LdrModulesSnapError = -3,
  LdrModulesUnloaded = -2,
  LdrModulesUnloading = -1,
  LdrModulesPlaceHolder = 0,
  LdrModulesMapping = 1,
  LdrModulesMapped = 2,
  LdrModulesWaitingForDependencies = 3,
  LdrModulesSnapping = 4,
  LdrModulesSnapped = 5,
  LdrModulesCondensed = 6,
  LdrModulesReadyToInit = 7,
  LdrModulesInitializing = 8,
  LdrModulesReadyToRun = 9,
} LDR_DDAG_STATE, *PLDR_DDAG_STATE;

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef struct _LDR_DDAG_NODE
{
  /* 0x0000 */ struct _LIST_ENTRY Modules;
  /* 0x0008 */ struct _LDR_SERVICE_TAG_RECORD* ServiceTagList;
  /* 0x000c */ unsigned long LoadCount;
  /* 0x0010 */ unsigned long LoadWhileUnloadingCount;
  /* 0x0014 */ unsigned long LowestLink;
  /* 0x0018 */ struct _LDRP_CSLIST Dependencies;
  /* 0x001c */ struct _LDRP_CSLIST IncomingDependencies;
  /* 0x0020 */ enum _LDR_DDAG_STATE State;
  /* 0x0024 */ struct _SINGLE_LIST_ENTRY CondenseLink;
  /* 0x0028 */ unsigned long PreorderNumber;
} LDR_DDAG_NODE, *PLDR_DDAG_NODE; /* size: 0x002c */

