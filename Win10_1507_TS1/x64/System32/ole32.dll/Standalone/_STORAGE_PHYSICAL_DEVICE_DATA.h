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

typedef enum _STORAGE_DEVICE_FORM_FACTOR
{
  FormFactorUnknown = 0,
  FormFactor3_5 = 1,
  FormFactor2_5 = 2,
  FormFactor1_8 = 3,
  FormFactor1_8Less = 4,
  FormFactorEmbedded = 5,
  FormFactorMemoryCard = 6,
  FormFactormSata = 7,
  FormFactorM_2 = 8,
  FormFactorPCIeBoard = 9,
  FormFactorDimm = 10,
} STORAGE_DEVICE_FORM_FACTOR, *PSTORAGE_DEVICE_FORM_FACTOR;

typedef struct _STORAGE_PHYSICAL_DEVICE_DATA
{
  /* 0x0000 */ unsigned long DeviceId;
  /* 0x0004 */ unsigned long Role;
  /* 0x0008 */ enum _STORAGE_COMPONENT_HEALTH_STATUS HealthStatus;
  /* 0x000c */ enum _STORAGE_PROTOCOL_TYPE CommandProtocol;
  /* 0x0010 */ union _STORAGE_SPEC_VERSION SpecVersion;
  /* 0x0014 */ enum _STORAGE_DEVICE_FORM_FACTOR FormFactor;
  /* 0x0018 */ unsigned char Vendor[8];
  /* 0x0020 */ unsigned char Model[40];
  /* 0x0048 */ unsigned char FirmwareRevision[16];
  /* 0x0058 */ unsigned __int64 Capacity;
  /* 0x0060 */ unsigned char PhysicalLocation[32];
  /* 0x0080 */ unsigned long Reserved[2];
} STORAGE_PHYSICAL_DEVICE_DATA, *PSTORAGE_PHYSICAL_DEVICE_DATA; /* size: 0x0088 */

