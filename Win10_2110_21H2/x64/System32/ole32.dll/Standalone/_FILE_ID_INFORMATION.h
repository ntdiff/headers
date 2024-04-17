typedef struct _FILE_ID_128
{
  /* 0x0000 */ unsigned char Identifier[16];
} FILE_ID_128, *PFILE_ID_128; /* size: 0x0010 */

typedef struct _FILE_ID_INFORMATION
{
  /* 0x0000 */ unsigned __int64 VolumeSerialNumber;
  /* 0x0008 */ struct _FILE_ID_128 FileId;
} FILE_ID_INFORMATION, *PFILE_ID_INFORMATION; /* size: 0x0018 */

