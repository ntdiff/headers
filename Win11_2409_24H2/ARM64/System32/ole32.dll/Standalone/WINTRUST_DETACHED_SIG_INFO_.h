struct WINTRUST_DETACHED_SIG_INFO_
{
  /* 0x0000 */ unsigned long cbStruct;
  /* 0x0004 */ unsigned long dwUnionChoice;
  union
  {
    /* 0x0008 */ struct WINTRUST_DETACHED_SIG_HANDLES_* pDetachedSigHandles;
    /* 0x0008 */ struct WINTRUST_DETACHED_SIG_BLOBS_* pDetachedSigBlobs;
  }; /* size: 0x0008 */
}; /* size: 0x0010 */

