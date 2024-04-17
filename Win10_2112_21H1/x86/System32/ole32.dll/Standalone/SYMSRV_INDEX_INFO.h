typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct SYMSRV_INDEX_INFO
{
  /* 0x0000 */ unsigned long sizeofstruct;
  /* 0x0004 */ char file[261];
  /* 0x010c */ int stripped;
  /* 0x0110 */ unsigned long timestamp;
  /* 0x0114 */ unsigned long size;
  /* 0x0118 */ char dbgfile[261];
  /* 0x021d */ char pdbfile[261];
  /* 0x0324 */ struct _GUID guid;
  /* 0x0334 */ unsigned long sig;
  /* 0x0338 */ unsigned long age;
}; /* size: 0x033c */

