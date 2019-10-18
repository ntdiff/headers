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
  /* 0x0014 */ struct wil_details_StagingConfigHeader* header;
  /* 0x0018 */ struct wil_details_StagingConfigFeature* features;
  /* 0x001c */ struct wil_details_StagingConfigUsageTrigger* triggers;
  /* 0x0020 */ int changedInSession;
  /* 0x0024 */ void* buffer;
  /* 0x0028 */ unsigned long bufferSize;
  /* 0x002c */ unsigned long bufferAlloc;
  /* 0x0030 */ int bufferOwned;
}; /* size: 0x0034 */

