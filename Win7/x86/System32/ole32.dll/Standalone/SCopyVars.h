typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

class CDfName
{
  /* 0x0000 */ unsigned char _ab[64];
  /* 0x0040 */ unsigned short _cb;
}; /* size: 0x0042 */

struct SIterBuffer
{
  /* 0x0000 */ class CDfName dfnName;
  /* 0x0044 */ unsigned long type;
}; /* size: 0x0048 */

struct SCopyVars
{
  /* 0x0000 */ class PSStream* psstFrom;
  /* 0x0004 */ struct IStream* pstTo;
  /* 0x0008 */ class PDocFile* pdfFromChild;
  /* 0x000c */ struct IStorage* pstgToChild;
  /* 0x0010 */ unsigned long grfStateBits;
  /* 0x0014 */ struct _GUID clsid;
  /* 0x0024 */ class CDfName dfnKey;
  /* 0x0068 */ struct SIterBuffer ib;
  /* 0x00b0 */ wchar_t atcName[32];
}; /* size: 0x00f0 */

