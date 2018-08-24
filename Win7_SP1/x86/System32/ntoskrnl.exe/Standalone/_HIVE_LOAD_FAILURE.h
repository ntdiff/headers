typedef enum _CM_LOAD_FAILURE_TYPE
{
  _None = 0,
  _CmInitializeHive = 1,
  _HvInitializeHive = 2,
  _HvpBuildMap = 3,
  _HvpBuildMapAndCopy = 4,
  _HvpInitMap = 5,
  _HvLoadHive = 6,
  _HvpReadFileImageAndBuildMap = 7,
  _HvpRecoverData = 8,
  _HvpRecoverWholeHive = 9,
  _HvpMapFileImageAndBuildMap = 10,
  _CmpValidateHiveSecurityDescriptors = 11,
  _HvpEnlistBinInMap = 12,
  _CmCheckRegistry = 13,
  _CmRegistryIO = 14,
  _CmCheckRegistry2 = 15,
  _CmpCheckKey = 16,
  _CmpCheckValueList = 17,
  _HvCheckHive = 18,
  _HvCheckBin = 19,
} CM_LOAD_FAILURE_TYPE, *PCM_LOAD_FAILURE_TYPE;

typedef struct _HIVE_LOAD_FAILURE
{
  /* 0x0000 */ struct _HHIVE* Hive;
  /* 0x0004 */ unsigned long Index;
  /* 0x0008 */ unsigned long RecoverableIndex;
  /* 0x000c */ struct // _TAG_UNNAMED_40
  {
    /* 0x000c */ enum _CM_LOAD_FAILURE_TYPE Failure;
    /* 0x0010 */ long Status;
    /* 0x0014 */ unsigned long Point;
  } /* size: 0x000c */ Locations[8];
  /* 0x006c */ struct // _TAG_UNNAMED_40
  {
    /* 0x006c */ enum _CM_LOAD_FAILURE_TYPE Failure;
    /* 0x0070 */ long Status;
    /* 0x0074 */ unsigned long Point;
  } /* size: 0x000c */ RecoverableLocations[8];
  struct // _TAG_UNNAMED_41
  {
    /* 0x00cc */ unsigned long Action;
    /* 0x00d0 */ void* Handle;
    /* 0x00d4 */ long Status;
  } /* size: 0x000c */ RegistryIO;
  struct // _TAG_UNNAMED_42
  {
    /* 0x00d8 */ void* CheckStack;
  } /* size: 0x0004 */ CheckRegistry2;
  struct // _TAG_UNNAMED_43
  {
    /* 0x00dc */ unsigned long Cell;
    /* 0x00e0 */ struct _CELL_DATA* CellPoint;
    /* 0x00e4 */ void* RootPoint;
    /* 0x00e8 */ unsigned long Index;
  } /* size: 0x0010 */ CheckKey;
  struct // _TAG_UNNAMED_44
  {
    /* 0x00ec */ struct _CELL_DATA* List;
    /* 0x00f0 */ unsigned long Index;
    /* 0x00f4 */ unsigned long Cell;
    /* 0x00f8 */ struct _CELL_DATA* CellPoint;
  } /* size: 0x0010 */ CheckValueList;
  struct // _TAG_UNNAMED_45
  {
    /* 0x00fc */ unsigned long Space;
    /* 0x0100 */ unsigned long MapPoint;
    /* 0x0104 */ struct _HBIN* BinPoint;
  } /* size: 0x000c */ CheckHive;
  struct // _TAG_UNNAMED_45
  {
    /* 0x0108 */ unsigned long Space;
    /* 0x010c */ unsigned long MapPoint;
    /* 0x0110 */ struct _HBIN* BinPoint;
  } /* size: 0x000c */ CheckHive1;
  struct // _TAG_UNNAMED_46
  {
    /* 0x0114 */ struct _HBIN* Bin;
    /* 0x0118 */ struct _HCELL* CellPoint;
  } /* size: 0x0008 */ CheckBin;
  struct // _TAG_UNNAMED_47
  {
    /* 0x011c */ unsigned long FileOffset;
  } /* size: 0x0004 */ RecoverData;
} HIVE_LOAD_FAILURE, *PHIVE_LOAD_FAILURE; /* size: 0x0120 */

