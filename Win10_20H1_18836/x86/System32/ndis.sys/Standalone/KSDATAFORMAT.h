typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

union KSDATAFORMAT
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long FormatSize;
      /* 0x0004 */ unsigned long Flags;
      /* 0x0008 */ unsigned long SampleSize;
      /* 0x000c */ unsigned long Reserved;
      /* 0x0010 */ struct _GUID MajorFormat;
      /* 0x0020 */ struct _GUID SubFormat;
      /* 0x0030 */ struct _GUID Specifier;
    }; /* size: 0x0040 */
    /* 0x0000 */ __int64 Alignment;
  }; /* size: 0x0040 */
}; /* size: 0x0040 */

