typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct IRCEntry
{
  /* 0x0000 */ struct IRCEntry* pNext;
  /* 0x0008 */ class CRefCache* pRefCache;
  /* 0x0010 */ unsigned long cStrongUsage;
  /* 0x0014 */ unsigned long cWeakUsage;
  /* 0x0018 */ unsigned long cStrongRefs;
  /* 0x001c */ unsigned long cPrivateRefs;
  /* 0x0020 */ unsigned long cWeakRefs;
  /* 0x0024 */ struct _GUID ipid;
  /* 0x0034 */ long __PADDING__[1];
}; /* size: 0x0038 */

