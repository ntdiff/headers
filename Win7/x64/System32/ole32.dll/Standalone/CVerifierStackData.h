typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

class CVerifierStackData
{
  union
  {
    /* 0x0000 */ unsigned long s_cProcessCapturedStacks;
    /* 0x0000 */ struct _LIST_ENTRY m_listHead;
  }; /* size: 0x0010 */
  /* 0x0010 */ unsigned long m_dwCount;
  /* 0x0014 */ unsigned long m_dwMissing;
}; /* size: 0x0018 */

