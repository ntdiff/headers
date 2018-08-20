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

