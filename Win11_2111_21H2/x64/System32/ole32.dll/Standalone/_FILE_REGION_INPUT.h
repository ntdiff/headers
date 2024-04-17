typedef struct _FILE_REGION_INPUT
{
  /* 0x0000 */ __int64 FileOffset;
  /* 0x0008 */ __int64 Length;
  /* 0x0010 */ unsigned long DesiredUsage;
  /* 0x0014 */ long __PADDING__[1];
} FILE_REGION_INPUT, *PFILE_REGION_INPUT; /* size: 0x0018 */

