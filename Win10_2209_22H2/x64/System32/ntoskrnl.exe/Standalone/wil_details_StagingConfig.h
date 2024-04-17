enum wil_FeatureStore
{
  wil_FeatureStore_Machine = 0,
  wil_FeatureStore_User = 1,
  wil_FeatureStore_All = 2,
};

struct wil_details_StagingConfig
{
  /* 0x0000 */ enum wil_FeatureStore store;
  /* 0x0004 */ int forUpdate;
  /* 0x0008 */ unsigned long readChangeStamp;
  /* 0x000c */ unsigned char readVersion;
  /* 0x0010 */ int modified;
  /* 0x0018 */ struct wil_details_StagingConfigHeader* header;
  /* 0x0020 */ struct wil_details_StagingConfigFeature* features;
  /* 0x0028 */ struct wil_details_StagingConfigUsageTrigger* triggers;
  /* 0x0030 */ int changedInSession;
  /* 0x0038 */ void* buffer;
  /* 0x0040 */ unsigned __int64 bufferSize;
  /* 0x0048 */ unsigned __int64 bufferAlloc;
  /* 0x0050 */ int bufferOwned;
  /* 0x0054 */ long __PADDING__[1];
}; /* size: 0x0058 */

