typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

class CVerifierStackData
{
  /* 0x0000 */ struct _LIST_ENTRY m_listHead;
  /* 0x0008 */ unsigned long m_dwCount;
}; /* size: 0x000c */

class CVerifierTlsData
{
  /* 0x0000 */ class CVerifierStackData stackComInit;
  /* 0x000c */ class CVerifierStackData stackComUninit;
  /* 0x0018 */ class CVerifierStackData stackOLEInit;
  /* 0x0024 */ class CVerifierStackData stackOLEUninit;
  /* 0x0030 */ class CVerifierStackData stackEnterSWC;
  /* 0x003c */ class CVerifierStackData stackLeaveSWC;
}; /* size: 0x0048 */

