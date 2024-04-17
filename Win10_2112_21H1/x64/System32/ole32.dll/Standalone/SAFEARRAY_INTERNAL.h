typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct tagSAFEARRAYBOUND
{
  /* 0x0000 */ unsigned long cElements;
  /* 0x0004 */ long lLbound;
}; /* size: 0x0008 */

struct tagSAFEARRAY
{
  /* 0x0000 */ unsigned short cDims;
  /* 0x0002 */ unsigned short fFeatures;
  /* 0x0004 */ unsigned long cbElements;
  /* 0x0008 */ unsigned long cLocks;
  /* 0x0010 */ void* pvData;
  /* 0x0018 */ struct tagSAFEARRAYBOUND rgsabound[1];
}; /* size: 0x0020 */

struct SAFEARRAY_INTERNAL
{
  union
  {
    /* 0x0000 */ struct _GUID iid;
    struct
    {
      /* 0x0000 */ long __dummy0[3];
      /* 0x000c */ long vt;
    }; /* size: 0x0010 */
    struct
    {
      /* 0x0000 */ unsigned long __dummy1[2];
      /* 0x0008 */ struct IRecordInfo* piri;
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
  /* 0x0010 */ struct tagSAFEARRAY array;
}; /* size: 0x0030 */

