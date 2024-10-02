typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct tagPROPSPEC
{
  /* 0x0000 */ unsigned long ulKind;
  union
  {
    /* 0x0008 */ unsigned long propid;
    /* 0x0008 */ wchar_t* lpwstr;
  }; /* size: 0x0008 */
}; /* size: 0x0010 */

struct tagFULLPROPSPEC
{
  /* 0x0000 */ struct _GUID guidPropSet;
  /* 0x0010 */ struct tagPROPSPEC psProperty;
}; /* size: 0x0020 */

