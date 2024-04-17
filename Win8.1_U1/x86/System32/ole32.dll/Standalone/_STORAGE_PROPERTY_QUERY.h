typedef enum _STORAGE_PROPERTY_ID
{
  StorageDeviceProperty = 0,
  StorageAdapterProperty = 1,
  StorageDeviceIdProperty = 2,
  StorageDeviceUniqueIdProperty = 3,
  StorageDeviceWriteCacheProperty = 4,
  StorageMiniportProperty = 5,
  StorageAccessAlignmentProperty = 6,
  StorageDeviceSeekPenaltyProperty = 7,
  StorageDeviceTrimProperty = 8,
  StorageDeviceWriteAggregationProperty = 9,
  StorageDeviceDeviceTelemetryProperty = 10,
  StorageDeviceLBProvisioningProperty = 11,
  StorageDevicePowerProperty = 12,
  StorageDeviceCopyOffloadProperty = 13,
  StorageDeviceResiliencyProperty = 14,
  StorageDeviceMediumProductType = 15,
} STORAGE_PROPERTY_ID, *PSTORAGE_PROPERTY_ID;

typedef enum _STORAGE_QUERY_TYPE
{
  PropertyStandardQuery = 0,
  PropertyExistsQuery = 1,
  PropertyMaskQuery = 2,
  PropertyQueryMaxDefined = 3,
} STORAGE_QUERY_TYPE, *PSTORAGE_QUERY_TYPE;

typedef struct _STORAGE_PROPERTY_QUERY
{
  /* 0x0000 */ enum _STORAGE_PROPERTY_ID PropertyId;
  /* 0x0004 */ enum _STORAGE_QUERY_TYPE QueryType;
  /* 0x0008 */ unsigned char AdditionalParameters[1];
  /* 0x0009 */ char __PADDING__[3];
} STORAGE_PROPERTY_QUERY, *PSTORAGE_PROPERTY_QUERY; /* size: 0x000c */

