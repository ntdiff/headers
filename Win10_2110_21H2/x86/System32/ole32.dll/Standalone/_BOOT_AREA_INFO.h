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

typedef struct _BOOT_AREA_INFO
{
  /* 0x0000 */ unsigned long BootSectorCount;
  /* 0x0008 */ struct
  {
    /* 0x0008 */ union _LARGE_INTEGER Offset;
  } /* size: 0x0008 */ BootSectors[2];
} BOOT_AREA_INFO, *PBOOT_AREA_INFO; /* size: 0x0018 */

