typedef union _ASSEMBLY_VERSION
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned short Build;
      /* 0x0002 */ unsigned short Revision;
      /* 0x0004 */ unsigned short Minor;
      /* 0x0006 */ unsigned short Major;
    }; /* size: 0x0008 */
    /* 0x0000 */ unsigned __int64 QuadPart;
  }; /* size: 0x0008 */
} ASSEMBLY_VERSION, *PASSEMBLY_VERSION; /* size: 0x0008 */

