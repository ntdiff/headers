class CBasedILockBytesPtrPtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class CBasedMSFPageTablePtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

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
  /* 0x001c */ unsigned short _cbSector;
}; /* size: 0x0020 */

class CBasedMStreamPtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class CDirectory
{
  /* 0x0000 */ class CDirVector _dv;
  /* 0x0020 */ unsigned long _cdsTable;
  /* 0x0024 */ class CBasedMStreamPtr _pmsParent;
  /* 0x0028 */ unsigned short _cdeEntries;
  /* 0x002c */ unsigned long _sidFirstFree;
}; /* size: 0x0030 */

class CFatVector
{
  /* 0x001c */ unsigned short _csectTable;
  /* 0x001e */ unsigned short _csectBlock;
}; /* size: 0x0020 */

class CBasedFatPtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class CFat
{
  /* 0x0000 */ class CFatVector _fv;
  /* 0x0020 */ class CBasedMStreamPtr _pmsParent;
  /* 0x0024 */ const unsigned long _sid;
  /* 0x0028 */ class CBasedFatPtr _pfatReal;
  /* 0x002c */ class CBasedFatPtr _pfatNoScratch;
  /* 0x0030 */ unsigned long _sectNoSnapshot;
  /* 0x0034 */ unsigned long _sectNoSnapshotFree;
  /* 0x0038 */ unsigned short _uFatShift;
  /* 0x003a */ unsigned short _uFatMask;
  /* 0x003c */ unsigned long _cfsTable;
  /* 0x0040 */ unsigned long _ulFreeSects;
  /* 0x0044 */ unsigned long _cUnmarkedSects;
  /* 0x0048 */ unsigned long _sectFirstFree;
  /* 0x004c */ unsigned long _sectLastUsed;
  /* 0x0050 */ unsigned long _sectMax;
  /* 0x0054 */ unsigned long _ipfsRangeLocks;
  /* 0x0058 */ unsigned short _isectRangeLocks;
}; /* size: 0x005c */

class CDIFat
{
  /* 0x0000 */ class CFatVector _fv;
  /* 0x0020 */ class CBasedMStreamPtr _pmsParent;
  /* 0x0024 */ unsigned long _cfsTable;
  /* 0x0028 */ int _fDoingFixup;
  /* 0x002c */ unsigned long _cUnmarked;
  /* 0x0030 */ unsigned long _sectUnmarked[8];
  /* 0x0050 */ unsigned long _sectMarkTo[8];
  /* 0x0070 */ unsigned long _sectFree[8];
}; /* size: 0x0090 */

struct SCacheEntry
{
  /* 0x0000 */ unsigned long ulOffset;
  /* 0x0004 */ unsigned long sect;
  /* 0x0008 */ unsigned long ulRunLength;
}; /* size: 0x000c */

class CBasedDirectStreamPtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class CStreamCache
{
  /* 0x0000 */ struct SCacheEntry _ase[9];
  /* 0x006c */ class CBasedDirectStreamPtr _pds;
  /* 0x0070 */ class CBasedMStreamPtr _pmsParent;
  /* 0x0074 */ unsigned long _sid;
  /* 0x0078 */ unsigned short _uHighCacheIndex;
  /* 0x007a */ unsigned short _uNextCacheIndex;
  /* 0x007c */ unsigned short _uCacheState;
}; /* size: 0x0080 */

class CBasedBytePtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

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
  /* 0x0004 */ class CBasedMSFPageTablePtr _pmpt;
  /* 0x0008 */ class CMSFHeader _hdr;
  /* 0x020c */ class CDirectory _dir;
  /* 0x023c */ class CFat _fat;
  /* 0x0298 */ class CDIFat _fatDif;
  /* 0x0328 */ class CFat _fatMini;
  /* 0x0384 */ class CStreamCache _stmcDir;
  /* 0x0404 */ class CStreamCache _stmcMiniFat;
  /* 0x0484 */ class CBasedDirectStreamPtr _pdsministream;
  /* 0x0488 */ class CBasedMStreamPtr _pmsShadow;
  /* 0x048c */ class CBasedBytePtr _pCopySectBuf;
  /* 0x0490 */ const int _fIsScratch;
  /* 0x0494 */ int _fIsNoScratch;
  /* 0x0498 */ class CBasedMStreamPtr _pmsScratch;
  /* 0x049c */ int _fIsNoSnapshot;
  /* 0x04a0 */ int _fBlockWrite;
  /* 0x04a4 */ int _fTruncate;
  /* 0x04a8 */ int _fBlockHeader;
  /* 0x04ac */ int _fNewConvert;
  /* 0x04b0 */ int _fIsShadow;
  /* 0x04b8 */ unsigned __int64 _ulParentSize;
  /* 0x04c0 */ unsigned short _uSectorSize;
  /* 0x04c2 */ unsigned short _uSectorShift;
  /* 0x04c4 */ unsigned short _uSectorMask;
  /* 0x04c8 */ struct IMalloc* const _pMalloc;
  /* 0x04d0 */ union _ULARGE_INTEGER _uliLastKnownSizeForConsolidate;
}; /* size: 0x04d8 */

