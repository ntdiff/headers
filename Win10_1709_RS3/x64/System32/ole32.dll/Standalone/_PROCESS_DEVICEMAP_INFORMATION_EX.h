typedef struct _PROCESS_DEVICEMAP_INFORMATION_EX
{
  union
  {
    struct
    {
      /* 0x0000 */ void* DirectoryHandle;
    } /* size: 0x0008 */ Set;
    struct
    {
      /* 0x0000 */ unsigned long DriveMap;
      /* 0x0004 */ unsigned char DriveType[32];
    } /* size: 0x0024 */ Query;
  }; /* size: 0x0024 */
  /* 0x0028 */ unsigned long Flags;
  /* 0x002c */ long __PADDING__[1];
} PROCESS_DEVICEMAP_INFORMATION_EX, *PPROCESS_DEVICEMAP_INFORMATION_EX; /* size: 0x0030 */

