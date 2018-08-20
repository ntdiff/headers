typedef enum _CM_LOAD_FAILURE_TYPE
{
  _None = 0,
  _CmInitializeHive = 1,
  _HvInitializeHive = 2,
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
} CM_LOAD_FAILURE_TYPE, *PCM_LOAD_FAILURE_TYPE;

typedef struct _HIVE_LOAD_FAILURE
{
  /* 0x0000 */ struct _HHIVE* Hive;
  /* 0x0004 */ unsigned long Index;
  /* 0x0008 */ unsigned long RecoverableIndex;
  /* 0x000c */ struct // _TAG_UNNAMED_166
  {
    /* 0x000c */ enum _CM_LOAD_FAILURE_TYPE Failure;
    /* 0x0010 */ long Status;
    /* 0x0014 */ unsigned long Point;
  } /* size: 0x000c */ Locations[8];
  /* 0x006c */ struct // _TAG_UNNAMED_166
  {
    /* 0x006c */ enum _CM_LOAD_FAILURE_TYPE Failure;
    /* 0x0070 */ long Status;
    /* 0x0074 */ unsigned long Point;
  } /* size: 0x000c */ RecoverableLocations[8];
  struct // _TAG_UNNAMED_167
  {
    /* 0x00cc */ unsigned long Action;
    /* 0x00d0 */ void* Handle;
    /* 0x00d4 */ long Status;
  } /* size: 0x000c */ RegistryIO;
  struct // _TAG_UNNAMED_168
  {
    /* 0x00d8 */ void* CheckStack;
  } /* size: 0x0004 */ CheckRegistry2;
  struct // _TAG_UNNAMED_169
  {
    /* 0x00dc */ unsigned long Cell;
    /* 0x00e0 */ struct _CELL_DATA* CellPoint;
    /* 0x00e4 */ void* RootPoint;
    /* 0x00e8 */ unsigned long Index;
  } /* size: 0x0010 */ CheckKey;
  struct // _TAG_UNNAMED_170
  {
    /* 0x00ec */ struct _CELL_DATA* List;
    /* 0x00f0 */ unsigned long Index;
    /* 0x00f4 */ unsigned long Cell;
    /* 0x00f8 */ struct _CELL_DATA* CellPoint;
  } /* size: 0x0010 */ CheckValueList;
  struct // _TAG_UNNAMED_171
  {
    /* 0x00fc */ unsigned long Space;
    /* 0x0100 */ unsigned long MapPoint;
    /* 0x0104 */ struct _HBIN* BinPoint;
  } /* size: 0x000c */ CheckHive;
  struct // _TAG_UNNAMED_171
  {
    /* 0x0108 */ unsigned long Space;
    /* 0x010c */ unsigned long MapPoint;
    /* 0x0110 */ struct _HBIN* BinPoint;
  } /* size: 0x000c */ CheckHive1;
  struct // _TAG_UNNAMED_172
  {
    /* 0x0114 */ struct _HBIN* Bin;
    /* 0x0118 */ struct _HCELL* CellPoint;
  } /* size: 0x0008 */ CheckBin;
  struct // _TAG_UNNAMED_173
  {
    /* 0x011c */ unsigned long FileOffset;
  } /* size: 0x0004 */ RecoverData;
} HIVE_LOAD_FAILURE, *PHIVE_LOAD_FAILURE; /* size: 0x0120 */

