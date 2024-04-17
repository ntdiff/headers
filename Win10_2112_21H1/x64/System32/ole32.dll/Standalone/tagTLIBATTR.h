typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

enum tagSYSKIND
{
  SYS_WIN16 = 0,
  SYS_WIN32 = 1,
  SYS_MAC = 2,
  SYS_WIN64 = 3,
};

struct tagTLIBATTR
{
  /* 0x0000 */ struct _GUID guid;
  /* 0x0010 */ unsigned long lcid;
  /* 0x0014 */ enum tagSYSKIND syskind;
  /* 0x0018 */ unsigned short wMajorVerNum;
  /* 0x001a */ unsigned short wMinorVerNum;
  /* 0x001c */ unsigned short wLibFlags;
  /* 0x001e */ char __PADDING__[2];
}; /* size: 0x0020 */

