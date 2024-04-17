typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct SYMSRV_INDEX_INFOW
{
  /* 0x0000 */ unsigned long sizeofstruct;
  /* 0x0004 */ wchar_t file[261];
  /* 0x0210 */ int stripped;
  /* 0x0214 */ unsigned long timestamp;
  /* 0x0218 */ unsigned long size;
  /* 0x021c */ wchar_t dbgfile[261];
  /* 0x0426 */ wchar_t pdbfile[261];
  /* 0x0630 */ struct _GUID guid;
  /* 0x0640 */ unsigned long sig;
  /* 0x0644 */ unsigned long age;
}; /* size: 0x0648 */

