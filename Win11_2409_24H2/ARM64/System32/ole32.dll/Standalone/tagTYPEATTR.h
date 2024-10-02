typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

enum tagTYPEKIND
{
  TKIND_ENUM = 0,
  TKIND_RECORD = 1,
  TKIND_MODULE = 2,
  TKIND_INTERFACE = 3,
  TKIND_DISPATCH = 4,
  TKIND_COCLASS = 5,
  TKIND_ALIAS = 6,
  TKIND_UNION = 7,
  TKIND_MAX = 8,
};

struct tagTYPEDESC
{
  union
  {
    /* 0x0000 */ struct tagTYPEDESC* lptdesc;
    /* 0x0000 */ struct tagARRAYDESC* lpadesc;
    /* 0x0000 */ unsigned long hreftype;
  }; /* size: 0x0008 */
  /* 0x0008 */ unsigned short vt;
  /* 0x000a */ char __PADDING__[6];
}; /* size: 0x0010 */

struct tagIDLDESC
{
  /* 0x0000 */ unsigned __int64 dwReserved;
  /* 0x0008 */ unsigned short wIDLFlags;
  /* 0x000a */ char __PADDING__[6];
}; /* size: 0x0010 */

struct tagTYPEATTR
{
  /* 0x0000 */ struct _GUID guid;
  /* 0x0010 */ unsigned long lcid;
  /* 0x0014 */ unsigned long dwReserved;
  /* 0x0018 */ long memidConstructor;
  /* 0x001c */ long memidDestructor;
  /* 0x0020 */ wchar_t* lpstrSchema;
  /* 0x0028 */ unsigned long cbSizeInstance;
  /* 0x002c */ enum tagTYPEKIND typekind;
  /* 0x0030 */ unsigned short cFuncs;
  /* 0x0032 */ unsigned short cVars;
  /* 0x0034 */ unsigned short cImplTypes;
  /* 0x0036 */ unsigned short cbSizeVft;
  /* 0x0038 */ unsigned short cbAlignment;
  /* 0x003a */ unsigned short wTypeFlags;
  /* 0x003c */ unsigned short wMajorVerNum;
  /* 0x003e */ unsigned short wMinorVerNum;
  /* 0x0040 */ struct tagTYPEDESC tdescAlias;
  /* 0x0050 */ struct tagIDLDESC idldescType;
}; /* size: 0x0060 */

