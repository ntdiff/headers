typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _tagpropertykey
{
  /* 0x0000 */ struct _GUID fmtid;
  /* 0x0010 */ unsigned long pid;
} tagpropertykey, *Ptagpropertykey; /* size: 0x0014 */

struct SORTCOLUMN
{
  /* 0x0000 */ struct _tagpropertykey propkey;
  /* 0x0014 */ int direction;
}; /* size: 0x0018 */

