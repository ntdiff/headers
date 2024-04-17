typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct tagCustomOpaqueData
{
  /* 0x0000 */ struct _GUID guid;
  /* 0x0010 */ unsigned long dataLength;
  /* 0x0014 */ unsigned long reserved1;
  /* 0x0018 */ unsigned long reserved2;
  /* 0x0020 */ unsigned char* data;
}; /* size: 0x0028 */

