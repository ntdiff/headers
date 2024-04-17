typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

class CVerifierStackData
{
  /* 0x0000 */ struct _LIST_ENTRY m_listHead;
  /* 0x0010 */ unsigned long m_dwCount;
}; /* size: 0x0018 */

