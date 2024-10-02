typedef struct _HEAP_SUBALLOCATOR_CALLBACKS
{
  /* 0x0000 */ unsigned __int64 Allocate;
  /* 0x0008 */ unsigned __int64 Free;
  /* 0x0010 */ unsigned __int64 Commit;
  /* 0x0018 */ unsigned __int64 Decommit;
  /* 0x0020 */ unsigned __int64 ExtendContext;
  /* 0x0028 */ unsigned __int64 TlsCleanup;
} HEAP_SUBALLOCATOR_CALLBACKS, *PHEAP_SUBALLOCATOR_CALLBACKS; /* size: 0x0030 */

typedef union _RTL_HP_LFH_CONFIG
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned short MaxBlockSize;
      /* 0x0002 */ unsigned short WitholdPageCrossingBlocks : 1; /* bit position: 0 */
    }; /* size: 0x0004 */
    /* 0x0000 */ unsigned long AllFields;
  }; /* size: 0x0004 */
} RTL_HP_LFH_CONFIG, *PRTL_HP_LFH_CONFIG; /* size: 0x0004 */

typedef struct _HEAP_LFH_CONFIG
{
  /* 0x0000 */ union _RTL_HP_LFH_CONFIG Global;
  /* 0x0004 */ unsigned long EnablePrivateSlots : 1; /* bit position: 0 */
} HEAP_LFH_CONFIG, *PHEAP_LFH_CONFIG; /* size: 0x0008 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

typedef struct _HEAP_LFH_HEAT_MAP
{
  /* 0x0000 */ unsigned short Counts[126];
  /* 0x00fc */ unsigned long LastDecayPeriod;
} HEAP_LFH_HEAT_MAP, *PHEAP_LFH_HEAT_MAP; /* size: 0x0100 */

typedef struct _HEAP_LFH_SLOT_MAP
{
  /* 0x0000 */ unsigned short Map[128];
} HEAP_LFH_SLOT_MAP, *PHEAP_LFH_SLOT_MAP; /* size: 0x0100 */

typedef struct _HEAP_LFH_CONTEXT
{
  /* 0x0000 */ void* BackendCtx;
  /* 0x0008 */ struct _HEAP_SUBALLOCATOR_CALLBACKS Callbacks;
  /* 0x0038 */ const unsigned char* AffinityModArray;
  /* 0x0040 */ unsigned char MaxAffinity;
  /* 0x0041 */ unsigned char LockType;
  /* 0x0042 */ short MemStatsOffset;
  /* 0x0044 */ struct _HEAP_LFH_CONFIG Config;
  /* 0x004c */ unsigned long TlsSlotIndex;
  /* 0x0050 */ unsigned __int64 EncodeKey;
  /* 0x0080 */ unsigned __int64 ExtensionLock;
  /* 0x0088 */ struct _SINGLE_LIST_ENTRY MetadataList[4];
  /* 0x00c0 */ struct _HEAP_LFH_HEAT_MAP HeatMap;
  /* 0x01c0 */ struct _HEAP_LFH_BUCKET* Buckets[128];
  /* 0x05c0 */ struct _HEAP_LFH_SLOT_MAP SlotMaps[1];
} HEAP_LFH_CONTEXT, *PHEAP_LFH_CONTEXT; /* size: 0x06c0 */

