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
  /* 0x0004 */ class CRefCache* pRefCache;
  /* 0x0008 */ unsigned long cStrongUsage;
  /* 0x000c */ unsigned long cWeakUsage;
  /* 0x0010 */ unsigned long cStrongRefs;
  /* 0x0014 */ unsigned long cPrivateRefs;
  /* 0x0018 */ unsigned long cWeakRefs;
  /* 0x001c */ struct _GUID ipid;
}; /* size: 0x002c */

