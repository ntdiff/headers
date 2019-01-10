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
  /* 0x0008 */ unsigned long Index;
  /* 0x000c */ unsigned long RecoverableIndex;
  /* 0x0010 */ struct
  {
    /* 0x0010 */ enum _CM_LOAD_FAILURE_TYPE Failure;
    /* 0x0014 */ long Status;
    /* 0x0018 */ unsigned long Point;
  } /* size: 0x000c */ Locations[8];
  /* 0x0070 */ struct
  {
    /* 0x0070 */ enum _CM_LOAD_FAILURE_TYPE Failure;
    /* 0x0074 */ long Status;
    /* 0x0078 */ unsigned long Point;
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
  /* 0x015c */ long __PADDING__[1];
} HIVE_LOAD_FAILURE, *PHIVE_LOAD_FAILURE; /* size: 0x0160 */

