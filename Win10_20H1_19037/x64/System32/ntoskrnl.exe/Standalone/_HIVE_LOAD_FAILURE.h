typedef enum _CM_LOAD_FAILURE_TYPE
{
  _None = 0,
  _CmpCreateHive = 1,
  _HvpBuildMap = 3,
  _HvpBuildMapForLoaderHive = 4,
  _HvpInitMap = 5,
  _HvLoadHive = 6,
  _HvpMapHiveImage = 7,
  _HvpRecoverData = 8,
  _CmpValidateHiveSecurityDescriptors = 9,
  _HvpEnlistBinInMap = 10,
  _CmCheckRegistry = 11,
  _CmRegistryIO = 12,
  _CmCheckRegistry2 = 13,
  _CmpCheckKey = 14,
  _CmpCheckValueList = 15,
  _HvCheckHive = 16,
  _HvCheckBin = 17,
  _HvpGetLogEntryDirtyVector = 18,
  _HvpReadLogEntryHeader = 19,
  _HvpReadLogEntry = 20,
  _CmpMountPreloadedHives = 21,
  _CmpLoadHiveThread = 22,
  _CmpCheckLeaf = 23,
  _HvHiveStartFileBacked = 24,
  _HvStartHiveMemoryBacked = 25,
  _HvpEnlistFreeCells = 26,
  _HvpPerformLogFileRecovery = 27,
  _CmpInitHiveFromFile = 28,
  _CmpLoadKeyCommon = 29,
  _CmpLinkHiveToMaster = 30,
  _CmLoadKey = 31,
  _CmLoadAppKey = 32,
  _CmpResolveHiveLoadConflict = 33,
} CM_LOAD_FAILURE_TYPE, *PCM_LOAD_FAILURE_TYPE;

typedef struct _CM_PARSE_DEBUG_INFO
{
  /* 0x0000 */ struct _CM_KEY_CONTROL_BLOCK* SymlinkCachedKcb;
  /* 0x0008 */ struct _CM_KEY_CONTROL_BLOCK* StartingKcb;
  /* 0x0010 */ struct _CM_KEY_CONTROL_BLOCK* KcbCacheResult;
  /* 0x0018 */ struct _CM_KEY_CONTROL_BLOCK* WalkResult;
  /* 0x0020 */ struct _CM_KEY_CONTROL_BLOCK* DeepestKcbFound;
  /* 0x0028 */ unsigned char KcbCacheLevels;
  /* 0x0029 */ unsigned char WalkLevels;
  /* 0x002a */ unsigned char FailureCount;
  /* 0x002c */ struct
  {
    /* 0x002c */ long Status;
    /* 0x0030 */ unsigned long Point;
  } /* size: 0x0008 */ FailurePoints[4];
  /* 0x004c */ long __PADDING__[1];
} CM_PARSE_DEBUG_INFO, *PCM_PARSE_DEBUG_INFO; /* size: 0x0050 */

typedef struct _HIVE_LOAD_FAILURE
{
  /* 0x0000 */ struct _HHIVE* Hive;
  /* 0x0008 */ unsigned short Index;
  /* 0x000a */ unsigned short RecoverableIndex;
  /* 0x000c */ struct
  {
    /* 0x000c */ enum _CM_LOAD_FAILURE_TYPE Failure;
    /* 0x0010 */ long Status;
    /* 0x0014 */ unsigned long Point;
  } /* size: 0x000c */ Locations[8];
  /* 0x006c */ struct
  {
    /* 0x006c */ enum _CM_LOAD_FAILURE_TYPE Failure;
    /* 0x0070 */ long Status;
    /* 0x0074 */ unsigned long Point;
  } /* size: 0x000c */ RecoverableLocations[8];
  struct
  {
    /* 0x00d0 */ unsigned long Action;
    /* 0x00d8 */ void* Handle;
    /* 0x00e0 */ long Status;
    /* 0x00e4 */ long __PADDING__[1];
  } /* size: 0x0018 */ RegistryIO;
  struct
  {
    /* 0x00e8 */ void* CheckStack;
  } /* size: 0x0008 */ CheckRegistry2;
  struct
  {
    /* 0x00f0 */ unsigned long Cell;
    /* 0x00f8 */ struct _CELL_DATA* CellPoint;
    /* 0x0100 */ void* RootPoint;
    /* 0x0108 */ unsigned long Index;
    /* 0x010c */ long __PADDING__[1];
  } /* size: 0x0020 */ CheckKey;
  struct
  {
    /* 0x0110 */ struct _CELL_DATA* List;
    /* 0x0118 */ unsigned long Index;
    /* 0x011c */ unsigned long Cell;
    /* 0x0120 */ struct _CELL_DATA* CellPoint;
  } /* size: 0x0018 */ CheckValueList;
  struct
  {
    /* 0x0128 */ unsigned long Space;
    /* 0x012c */ unsigned long MapPoint;
    /* 0x0130 */ struct _HBIN* BinPoint;
  } /* size: 0x0010 */ CheckHive;
  struct
  {
    /* 0x0138 */ unsigned long Space;
    /* 0x013c */ unsigned long MapPoint;
    /* 0x0140 */ struct _HBIN* BinPoint;
  } /* size: 0x0010 */ CheckHive1;
  struct
  {
    /* 0x0148 */ struct _HBIN* Bin;
    /* 0x0150 */ struct _HCELL* CellPoint;
  } /* size: 0x0010 */ CheckBin;
  struct
  {
    /* 0x0158 */ unsigned long FileOffset;
  } /* size: 0x0004 */ RecoverData;
  /* 0x0160 */ struct _CM_PARSE_DEBUG_INFO LinkDebug;
} HIVE_LOAD_FAILURE, *PHIVE_LOAD_FAILURE; /* size: 0x01b0 */

