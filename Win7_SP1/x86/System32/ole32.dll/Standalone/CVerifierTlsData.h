typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

class CVerifierStackData
{
  union
  {
    /* 0x0000 */ unsigned long s_cProcessCapturedStacks;
    /* 0x0000 */ struct _LIST_ENTRY m_listHead;
  }; /* size: 0x0008 */
  /* 0x0008 */ unsigned long m_dwCount;
  /* 0x000c */ unsigned long m_dwMissing;
}; /* size: 0x0010 */

class CVerifierTlsData
{
  /* 0x0000 */ class CVerifierStackData stackComInit;
  /* 0x0010 */ class CVerifierStackData stackComUninit;
  /* 0x0020 */ class CVerifierStackData stackOLEInit;
  /* 0x0030 */ class CVerifierStackData stackOLEUninit;
  /* 0x0040 */ class CVerifierStackData stackEnterSWC;
  /* 0x0050 */ class CVerifierStackData stackLeaveSWC;
}; /* size: 0x0060 */

