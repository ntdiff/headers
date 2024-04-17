typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef enum _STORAGE_MEDIA_TYPE
{
  DDS_4mm = 32,
  MiniQic = 33,
  Travan = 34,
  QIC = 35,
  MP_8mm = 36,
  AME_8mm = 37,
  AIT1_8mm = 38,
  DLT = 39,
  NCTP = 40,
  IBM_3480 = 41,
  IBM_3490E = 42,
  IBM_Magstar_3590 = 43,
  IBM_Magstar_MP = 44,
  STK_DATA_D3 = 45,
  SONY_DTF = 46,
  DV_6mm = 47,
  DMI = 48,
  SONY_D2 = 49,
  CLEANER_CARTRIDGE = 50,
  CD_ROM = 51,
  CD_R = 52,
  CD_RW = 53,
  DVD_ROM = 54,
  DVD_R = 55,
  DVD_RW = 56,
  MO_3_RW = 57,
  MO_5_WO = 58,
  MO_5_RW = 59,
  MO_5_LIMDOW = 60,
  PC_5_WO = 61,
  PC_5_RW = 62,
  PD_5_RW = 63,
  ABL_5_WO = 64,
  PINNACLE_APEX_5_RW = 65,
  SONY_12_WO = 66,
  PHILIPS_12_WO = 67,
  HITACHI_12_WO = 68,
  CYGNET_12_WO = 69,
  KODAK_14_WO = 70,
  MO_NFR_525 = 71,
  NIKON_12_RW = 72,
  IOMEGA_ZIP = 73,
  IOMEGA_JAZ = 74,
  SYQUEST_EZ135 = 75,
  SYQUEST_EZFLYER = 76,
  SYQUEST_SYJET = 77,
  AVATAR_F2 = 78,
  MP2_8mm = 79,
  DST_S = 80,
  DST_M = 81,
  DST_L = 82,
  VXATape_1 = 83,
  VXATape_2 = 84,
  STK_9840 = 85,
  LTO_Ultrium = 86,
  LTO_Accelis = 87,
  DVD_RAM = 88,
  AIT_8mm = 89,
  ADR_1 = 90,
  ADR_2 = 91,
  STK_9940 = 92,
  SAIT = 93,
  VXATape = 94,
} STORAGE_MEDIA_TYPE, *PSTORAGE_MEDIA_TYPE;

typedef enum _STORAGE_BUS_TYPE
{
  BusTypeUnknown = 0,
  BusTypeScsi = 1,
  BusTypeAtapi = 2,
  BusTypeAta = 3,
  BusType1394 = 4,
  BusTypeSsa = 5,
  BusTypeFibre = 6,
  BusTypeUsb = 7,
  BusTypeRAID = 8,
  BusTypeiScsi = 9,
  BusTypeSas = 10,
  BusTypeSata = 11,
  BusTypeSd = 12,
  BusTypeMmc = 13,
  BusTypeVirtual = 14,
  BusTypeFileBackedVirtual = 15,
  BusTypeSpaces = 16,
  BusTypeNvme = 17,
  BusTypeSCM = 18,
  BusTypeMax = 19,
  BusTypeMaxReserved = 127,
} STORAGE_BUS_TYPE, *PSTORAGE_BUS_TYPE;

typedef struct _DEVICE_MEDIA_INFO
{
  union
  {
    union
    {
      struct
      {
        /* 0x0000 */ union _LARGE_INTEGER Cylinders;
        /* 0x0008 */ enum _STORAGE_MEDIA_TYPE MediaType;
        /* 0x000c */ unsigned long TracksPerCylinder;
        /* 0x0010 */ unsigned long SectorsPerTrack;
        /* 0x0014 */ unsigned long BytesPerSector;
        /* 0x0018 */ unsigned long NumberMediaSides;
        /* 0x001c */ unsigned long MediaCharacteristics;
      } /* size: 0x0020 */ DiskInfo;
      struct
      {
        /* 0x0000 */ union _LARGE_INTEGER Cylinders;
        /* 0x0008 */ enum _STORAGE_MEDIA_TYPE MediaType;
        /* 0x000c */ unsigned long TracksPerCylinder;
        /* 0x0010 */ unsigned long SectorsPerTrack;
        /* 0x0014 */ unsigned long BytesPerSector;
        /* 0x0018 */ unsigned long NumberMediaSides;
        /* 0x001c */ unsigned long MediaCharacteristics;
      } /* size: 0x0020 */ RemovableDiskInfo;
      struct
      {
        /* 0x0000 */ enum _STORAGE_MEDIA_TYPE MediaType;
        /* 0x0004 */ unsigned long MediaCharacteristics;
        /* 0x0008 */ unsigned long CurrentBlockSize;
        /* 0x000c */ enum _STORAGE_BUS_TYPE BusType;
        union
        {
          struct
          {
            /* 0x0010 */ unsigned char MediumType;
            /* 0x0011 */ unsigned char DensityCode;
          } /* size: 0x0002 */ ScsiInformation;
        } /* size: 0x0002 */ BusSpecificData;
        /* 0x0012 */ char __PADDING__[2];
      } /* size: 0x0014 */ TapeInfo;
    }; /* size: 0x0020 */
  } /* size: 0x0020 */ DeviceSpecific;
} DEVICE_MEDIA_INFO, *PDEVICE_MEDIA_INFO; /* size: 0x0020 */

typedef struct _GET_MEDIA_TYPES
{
  /* 0x0000 */ unsigned long DeviceType;
  /* 0x0004 */ unsigned long MediaInfoCount;
  /* 0x0008 */ struct _DEVICE_MEDIA_INFO MediaInfo[1];
} GET_MEDIA_TYPES, *PGET_MEDIA_TYPES; /* size: 0x0028 */

