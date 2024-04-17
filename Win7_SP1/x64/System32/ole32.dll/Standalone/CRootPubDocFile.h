typedef struct _FILETIME
{
  /* 0x0000 */ unsigned long dwLowDateTime;
  /* 0x0004 */ unsigned long dwHighDateTime;
} FILETIME, *PFILETIME; /* size: 0x0008 */

class CRootPubDocFile
{
  /* 0x0098 */ unsigned long _ulPriLock;
  /* 0x00a0 */ struct IMalloc* const _pMalloc;
  /* 0x00a8 */ struct _FILETIME _timeModifyAtCommit;
}; /* size: 0x00b0 */

