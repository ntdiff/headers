typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct VerifierThreadState
{
  /* 0x0000 */ unsigned long cComInits;
  /* 0x0004 */ unsigned long cOleInits;
  /* 0x0008 */ struct _GUID guidContext;
  /* 0x0018 */ void* pvTopSWCNode;
}; /* size: 0x001c */

