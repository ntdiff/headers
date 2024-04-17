typedef enum _STORAGE_COMPONENT_HEALTH_STATUS
{
  HealthStatusUnknown = 0,
  HealthStatusNormal = 1,
  HealthStatusThrottled = 2,
  HealthStatusWarning = 3,
  HealthStatusDisabled = 4,
  HealthStatusFailed = 5,
} STORAGE_COMPONENT_HEALTH_STATUS, *PSTORAGE_COMPONENT_HEALTH_STATUS;

typedef enum _STORAGE_PROTOCOL_TYPE
{
  ProtocolTypeUnknown = 0,
  ProtocolTypeScsi = 1,
  ProtocolTypeAta = 2,
  ProtocolTypeNvme = 3,
  ProtocolTypeSd = 4,
  ProtocolTypeProprietary = 126,
  ProtocolTypeMaxReserved = 127,
} STORAGE_PROTOCOL_TYPE, *PSTORAGE_PROTOCOL_TYPE;

typedef union _STORAGE_SPEC_VERSION
{
  union
  {
    struct
    {
      union
      {
        union
        {
          struct
          {
            /* 0x0000 */ unsigned char SubMinor;
            /* 0x0001 */ unsigned char Minor;
          }; /* size: 0x0002 */
          /* 0x0000 */ unsigned short AsUshort;
        }; /* size: 0x0002 */
      } /* size: 0x0002 */ MinorVersion;
      /* 0x0002 */ unsigned short MajorVersion;
    }; /* size: 0x0004 */
    /* 0x0000 */ unsigned long AsUlong;
  }; /* size: 0x0004 */
} STORAGE_SPEC_VERSION, *PSTORAGE_SPEC_VERSION; /* size: 0x0004 */

typedef struct _STORAGE_PHYSICAL_ADAPTER_DATA
{
  /* 0x0000 */ unsigned long AdapterId;
  /* 0x0004 */ enum _STORAGE_COMPONENT_HEALTH_STATUS HealthStatus;
  /* 0x0008 */ enum _STORAGE_PROTOCOL_TYPE CommandProtocol;
  /* 0x000c */ union _STORAGE_SPEC_VERSION SpecVersion;
  /* 0x0010 */ unsigned char Vendor[8];
  /* 0x0018 */ unsigned char Model[40];
  /* 0x0040 */ unsigned char FirmwareRevision[16];
  /* 0x0050 */ unsigned char PhysicalLocation[32];
  /* 0x0070 */ unsigned char ExpanderConnected;
  /* 0x0071 */ unsigned char Reserved0[3];
  /* 0x0074 */ unsigned long Reserved1[3];
} STORAGE_PHYSICAL_ADAPTER_DATA, *PSTORAGE_PHYSICAL_ADAPTER_DATA; /* size: 0x0080 */

