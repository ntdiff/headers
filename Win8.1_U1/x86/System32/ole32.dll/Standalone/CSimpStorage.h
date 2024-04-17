class CMSFHeaderData
{
  /* 0x004c */ unsigned long _sectFat[109];
}; /* size: 0x0200 */

class CMSFHeader
{
  /* 0x0000 */ class CMSFHeaderData _hdr;
  /* 0x0200 */ int _fDirty;
}; /* size: 0x0204 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct CSimpStorage
{
  /* 0x0024 */ long _cReferences;
  /* 0x0028 */ void* _hFile;
  /* 0x002c */ int _fDirty;
  /* 0x0030 */ class CMSFHeader _hdr;
  /* 0x0234 */ unsigned char* _pbBuf;
  /* 0x0238 */ unsigned long _sectMax;
  /* 0x023c */ struct _GUID _clsid;
  /* 0x024c */ class CDfNameList* _pdfl;
  /* 0x0250 */ class CDfNameList* _pdflCurrent;
  /* 0x0254 */ unsigned long _cStreams;
}; /* size: 0x0258 */

