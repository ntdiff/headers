typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct MarshalParams
{
  /* 0x0000 */ struct _GUID iid;
  /* 0x0010 */ unsigned long mshlflags;
}; /* size: 0x0014 */

struct tagGIPEntry
{
  /* 0x0000 */ struct tagGIPEntry* pPrev;
  /* 0x0004 */ struct tagGIPEntry* pNext;
  /* 0x0008 */ unsigned long dwType;
  /* 0x000c */ unsigned long dwSeqNo;
  /* 0x0010 */ volatile long cUsage;
  /* 0x0014 */ unsigned long dwAptId;
  /* 0x0018 */ class CObjectContext* pContext;
  /* 0x001c */ struct IUnknown* pUnk;
  /* 0x0020 */ void* pVtable;
  /* 0x0024 */ struct IUnknown* pUnkProxy;
  /* 0x0028 */ struct MarshalParams mp;
  union
  {
    union
    {
      /* 0x003c */ struct tagInterfaceData* pIFD;
      /* 0x003c */ struct tagOBJREF* pobjref;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u;
}; /* size: 0x0040 */

