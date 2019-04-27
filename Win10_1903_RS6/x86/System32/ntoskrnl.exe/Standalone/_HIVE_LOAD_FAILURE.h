typedef enum _CM_LOAD_FAILURE_TYPE
{
  _None = 0,
  _CmCreateHive = 1,
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
} CM_LOAD_FAILURE_TYPE, *PCM_LOAD_FAILURE_TYPE;

typedef struct _HIVE_LOAD_FAILURE
{
  /* 0x0000 */ struct _HHIVE* Hive;
  /* 0x0004 */ unsigned short Index;
  /* 0x0006 */ unsigned short RecoverableIndex;
  /* 0x0008 */ struct
  {
    /* 0x0008 */ enum _CM_LOAD_FAILURE_TYPE Failure;
    /* 0x000c */ long Status;
    /* 0x0010 */ unsigned long Point;
  } /* size: 0x000c */ Locations[8];
  /* 0x0068 */ struct
  {
    /* 0x0068 */ enum _CM_LOAD_FAILURE_TYPE Failure;
    /* 0x006c */ long Status;
    /* 0x0070 */ unsigned long Point;
  } /* size: 0x000c */ RecoverableLocations[8];
  struct
  {
    /* 0x00c8 */ unsigned long Action;
    /* 0x00cc */ void* Handle;
    /* 0x00d0 */ long Status;
  } /* size: 0x000c */ RegistryIO;
  struct
  {
    /* 0x00d4 */ void* CheckStack;
  } /* size: 0x0004 */ CheckRegistry2;
  struct
  {
    /* 0x00d8 */ unsigned long Cell;
    /* 0x00dc */ struct _CELL_DATA* CellPoint;
    /* 0x00e0 */ void* RootPoint;
    /* 0x00e4 */ unsigned long Index;
  } /* size: 0x0010 */ CheckKey;
  struct
  {
    /* 0x00e8 */ struct _CELL_DATA* List;
    /* 0x00ec */ unsigned long Index;
    /* 0x00f0 */ unsigned long Cell;
    /* 0x00f4 */ struct _CELL_DATA* CellPoint;
  } /* size: 0x0010 */ CheckValueList;
  struct
  {
    /* 0x00f8 */ unsigned long Space;
    /* 0x00fc */ unsigned long MapPoint;
    /* 0x0100 */ struct _HBIN* BinPoint;
  } /* size: 0x000c */ CheckHive;
  struct
  {
    /* 0x0104 */ unsigned long Space;
    /* 0x0108 */ unsigned long MapPoint;
    /* 0x010c */ struct _HBIN* BinPoint;
  } /* size: 0x000c */ CheckHive1;
  struct
  {
    /* 0x0110 */ struct _HBIN* Bin;
    /* 0x0114 */ struct _HCELL* CellPoint;
  } /* size: 0x0008 */ CheckBin;
  struct
  {
    /* 0x0118 */ unsigned long FileOffset;
  } /* size: 0x0004 */ RecoverData;
} HIVE_LOAD_FAILURE, *PHIVE_LOAD_FAILURE; /* size: 0x011c */

