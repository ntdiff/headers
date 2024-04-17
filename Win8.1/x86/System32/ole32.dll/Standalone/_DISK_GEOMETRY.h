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

typedef enum _MEDIA_TYPE
{
  Unknown = 0,
  F5_1Pt2_512 = 1,
  F3_1Pt44_512 = 2,
  F3_2Pt88_512 = 3,
  F3_20Pt8_512 = 4,
  F3_720_512 = 5,
  F5_360_512 = 6,
  F5_320_512 = 7,
  F5_320_1024 = 8,
  F5_180_512 = 9,
  F5_160_512 = 10,
  RemovableMedia = 11,
  FixedMedia = 12,
  F3_120M_512 = 13,
  F3_640_512 = 14,
  F5_640_512 = 15,
  F5_720_512 = 16,
  F3_1Pt2_512 = 17,
  F3_1Pt23_1024 = 18,
  F5_1Pt23_1024 = 19,
  F3_128Mb_512 = 20,
  F3_230Mb_512 = 21,
  F8_256_128 = 22,
  F3_200Mb_512 = 23,
  F3_240M_512 = 24,
  F3_32M_512 = 25,
} MEDIA_TYPE, *PMEDIA_TYPE;

typedef struct _DISK_GEOMETRY
{
  /* 0x0000 */ union _LARGE_INTEGER Cylinders;
  /* 0x0008 */ enum _MEDIA_TYPE MediaType;
  /* 0x000c */ unsigned long TracksPerCylinder;
  /* 0x0010 */ unsigned long SectorsPerTrack;
  /* 0x0014 */ unsigned long BytesPerSector;
} DISK_GEOMETRY, *PDISK_GEOMETRY; /* size: 0x0018 */

