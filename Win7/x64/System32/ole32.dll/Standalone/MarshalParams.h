typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct MarshalParams
{
  /* 0x0000 */ struct _GUID iid;
  /* 0x0010 */ unsigned long mshlflags;
}; /* size: 0x0014 */

