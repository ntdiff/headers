typedef struct _FILE_PATH
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Length;
  /* 0x0008 */ unsigned long Type;
  /* 0x000c */ unsigned char FilePath[1];
  /* 0x000d */ char __PADDING__[3];
} FILE_PATH, *PFILE_PATH; /* size: 0x0010 */

