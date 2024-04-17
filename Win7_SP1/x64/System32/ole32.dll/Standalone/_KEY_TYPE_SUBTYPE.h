typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _KEY_TYPE_SUBTYPE
{
  /* 0x0000 */ unsigned long dwKeySpec;
  /* 0x0004 */ struct _GUID Type;
  /* 0x0014 */ struct _GUID Subtype;
} KEY_TYPE_SUBTYPE, *PKEY_TYPE_SUBTYPE; /* size: 0x0024 */

