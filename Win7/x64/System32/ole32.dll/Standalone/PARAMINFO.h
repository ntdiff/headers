typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

class PARAMINFO
{
  /* 0x0000 */ unsigned long wIDLFlags;
  /* 0x0004 */ unsigned short vt;
  /* 0x0008 */ struct ITypeInfo* pTypeInfo;
  /* 0x0010 */ struct tagTYPEATTR* pTypeAttr;
  /* 0x0018 */ unsigned short cbAlignment;
  /* 0x001c */ long lLevelCount;
  /* 0x0020 */ unsigned short realvt;
  union
  {
    /* 0x0028 */ struct _GUID iid;
    /* 0x0028 */ struct tagARRAYDESC* pArray;
  }; /* size: 0x0010 */
}; /* size: 0x0038 */

