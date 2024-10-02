typedef union _KI_COOPERATIVE_IDLE_SEARCH_GENERATION_ID
{
  union
  {
    /* 0x0000 */ unsigned __int64 FullId;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Empty : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 MinorId : 6; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 MajorId : 57; /* bit position: 7 */
    }; /* bitfield */
  }; /* size: 0x0008 */
} KI_COOPERATIVE_IDLE_SEARCH_GENERATION_ID, *PKI_COOPERATIVE_IDLE_SEARCH_GENERATION_ID; /* size: 0x0008 */

typedef struct _KI_COOPERATIVE_IDLE_SEARCH_CONTEXT
{
  /* 0x0000 */ unsigned __int64 SearchContextLock;
  /* 0x0008 */ volatile unsigned __int64 SearchingProcessors;
  /* 0x0010 */ union _KI_COOPERATIVE_IDLE_SEARCH_GENERATION_ID NextGenerationId;
  /* 0x0018 */ volatile union _KI_COOPERATIVE_IDLE_SEARCH_GENERATION_ID GenerationIds[64];
  /* 0x0218 */ struct _KI_COOPERATIVE_IDLE_SEARCH_GENERATION* Generations[64];
  /* 0x0418 */ unsigned __int64 Affinity;
  /* 0x0420 */ unsigned short AllocatedTargetEntries;
  /* 0x0422 */ unsigned short ActiveTargetEntries;
  /* 0x0424 */ unsigned char LowProcIndex;
  /* 0x0425 */ unsigned char HighProcIndex;
  /* 0x0426 */ unsigned short Group;
  /* 0x0428 */ unsigned char ExtensionStart[1];
  /* 0x0429 */ char __PADDING__[7];
} KI_COOPERATIVE_IDLE_SEARCH_CONTEXT, *PKI_COOPERATIVE_IDLE_SEARCH_CONTEXT; /* size: 0x0430 */

