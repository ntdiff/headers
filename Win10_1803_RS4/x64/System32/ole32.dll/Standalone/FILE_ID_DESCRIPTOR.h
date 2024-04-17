typedef enum _FILE_ID_TYPE
{
  FileIdType = 0,
  ObjectIdType = 1,
  ExtendedFileIdType = 2,
  MaximumFileIdType = 3,
} FILE_ID_TYPE, *PFILE_ID_TYPE;

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

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _FILE_ID_128
{
  /* 0x0000 */ unsigned char Identifier[16];
} FILE_ID_128, *PFILE_ID_128; /* size: 0x0010 */

struct FILE_ID_DESCRIPTOR
{
  /* 0x0000 */ unsigned long dwSize;
  /* 0x0004 */ enum _FILE_ID_TYPE Type;
  union
  {
    /* 0x0008 */ union _LARGE_INTEGER FileId;
    /* 0x0008 */ struct _GUID ObjectId;
    /* 0x0008 */ struct _FILE_ID_128 ExtendedFileId;
  }; /* size: 0x0010 */
}; /* size: 0x0018 */

