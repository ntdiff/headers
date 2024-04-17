typedef struct _FILETIME
{
  /* 0x0000 */ unsigned long dwLowDateTime;
  /* 0x0004 */ unsigned long dwHighDateTime;
} FILETIME, *PFILETIME; /* size: 0x0008 */

class CRootPubDocFile
{
  /* 0x0078 */ unsigned long _ulPriLock;
  /* 0x007c */ struct IMalloc* const _pMalloc;
  /* 0x0080 */ struct _FILETIME _timeModifyAtCommit;
}; /* size: 0x0088 */

