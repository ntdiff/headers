class CBasedILockBytesPtrPtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CBasedMSFPageTablePtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CMSFHeaderData
{
  /* 0x004c */ unsigned long _sectFat[109];
}; /* size: 0x0200 */

class CMSFHeader
{
  /* 0x0000 */ class CMSFHeaderData _hdr;
  /* 0x0200 */ int _fDirty;
}; /* size: 0x0204 */

class CDirVector
{
  /* 0x0030 */ unsigned short _cbSector;
}; /* size: 0x0038 */

class CBasedMStreamPtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CDirectory
{
  /* 0x0000 */ class CDirVector _dv;
  /* 0x0038 */ unsigned long _cdsTable;
  /* 0x0040 */ class CBasedMStreamPtr _pmsParent;
  /* 0x0048 */ unsigned short _cdeEntries;
  /* 0x004c */ unsigned long _sidFirstFree;
}; /* size: 0x0050 */

class CFatVector
{
  /* 0x0030 */ unsigned short _csectTable;
  /* 0x0032 */ unsigned short _csectBlock;
}; /* size: 0x0038 */

class CBasedFatPtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CFat
{
  /* 0x0000 */ class CFatVector _fv;
  /* 0x0038 */ class CBasedMStreamPtr _pmsParent;
  /* 0x0040 */ const unsigned long _sid;
  /* 0x0048 */ class CBasedFatPtr _pfatReal;
  /* 0x0050 */ class CBasedFatPtr _pfatNoScratch;
  /* 0x0058 */ unsigned long _sectNoSnapshot;
  /* 0x005c */ unsigned long _sectNoSnapshotFree;
  /* 0x0060 */ unsigned short _uFatShift;
  /* 0x0062 */ unsigned short _uFatMask;
  /* 0x0064 */ unsigned long _cfsTable;
  /* 0x0068 */ unsigned long _ulFreeSects;
  /* 0x006c */ unsigned long _cUnmarkedSects;
  /* 0x0070 */ unsigned long _sectFirstFree;
  /* 0x0074 */ unsigned long _sectLastUsed;
  /* 0x0078 */ unsigned long _sectMax;
  /* 0x007c */ unsigned long _ipfsRangeLocks;
  /* 0x0080 */ unsigned short _isectRangeLocks;
}; /* size: 0x0088 */

class CDIFat
{
  /* 0x0000 */ class CFatVector _fv;
  /* 0x0038 */ class CBasedMStreamPtr _pmsParent;
  /* 0x0040 */ unsigned long _cfsTable;
  /* 0x0044 */ int _fDoingFixup;
  /* 0x0048 */ unsigned long _cUnmarked;
  /* 0x004c */ unsigned long _sectUnmarked[8];
  /* 0x006c */ unsigned long _sectMarkTo[8];
  /* 0x008c */ unsigned long _sectFree[8];
}; /* size: 0x00b0 */

struct SCacheEntry
{
  /* 0x0000 */ unsigned long ulOffset;
  /* 0x0004 */ unsigned long sect;
  /* 0x0008 */ unsigned long ulRunLength;
}; /* size: 0x000c */

class CBasedDirectStreamPtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CStreamCache
{
  /* 0x0000 */ struct SCacheEntry _ase[9];
  /* 0x0070 */ class CBasedDirectStreamPtr _pds;
  /* 0x0078 */ class CBasedMStreamPtr _pmsParent;
  /* 0x0080 */ unsigned long _sid;
  /* 0x0084 */ unsigned short _uHighCacheIndex;
  /* 0x0086 */ unsigned short _uNextCacheIndex;
  /* 0x0088 */ unsigned short _uCacheState;
}; /* size: 0x0090 */

class CBasedBytePtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

typedef union _ULARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ unsigned long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ unsigned long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ unsigned __int64 QuadPart;
  }; /* size: 0x0008 */
} ULARGE_INTEGER, *PULARGE_INTEGER; /* size: 0x0008 */

class CMStream
{
  /* 0x0000 */ class CBasedILockBytesPtrPtr _pplstParent;
  /* 0x0008 */ class CBasedMSFPageTablePtr _pmpt;
  /* 0x0010 */ class CMSFHeader _hdr;
  /* 0x0218 */ class CDirectory _dir;
  /* 0x0268 */ class CFat _fat;
  /* 0x02f0 */ class CDIFat _fatDif;
  /* 0x03a0 */ class CFat _fatMini;
  /* 0x0428 */ class CStreamCache _stmcDir;
  /* 0x04b8 */ class CStreamCache _stmcMiniFat;
  /* 0x0548 */ class CBasedDirectStreamPtr _pdsministream;
  /* 0x0550 */ class CBasedMStreamPtr _pmsShadow;
  /* 0x0558 */ class CBasedBytePtr _pCopySectBuf;
  /* 0x0560 */ const int _fIsScratch;
  /* 0x0564 */ int _fIsNoScratch;
  /* 0x0568 */ class CBasedMStreamPtr _pmsScratch;
  /* 0x0570 */ int _fIsNoSnapshot;
  /* 0x0574 */ int _fBlockWrite;
  /* 0x0578 */ int _fTruncate;
  /* 0x057c */ int _fBlockHeader;
  /* 0x0580 */ int _fNewConvert;
  /* 0x0584 */ int _fIsShadow;
  /* 0x0588 */ unsigned __int64 _ulParentSize;
  /* 0x0590 */ unsigned short _uSectorSize;
  /* 0x0592 */ unsigned short _uSectorShift;
  /* 0x0594 */ unsigned short _uSectorMask;
  /* 0x0598 */ struct IMalloc* const _pMalloc;
  /* 0x05a0 */ union _ULARGE_INTEGER _uliLastKnownSizeForConsolidate;
}; /* size: 0x05a8 */

