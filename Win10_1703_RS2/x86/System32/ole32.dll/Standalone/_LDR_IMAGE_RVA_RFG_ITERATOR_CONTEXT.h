typedef struct _LDR_IMAGE_RVA_RFG_ITERATOR_CONTEXT
{
  /* 0x0000 */ unsigned long StateValue;
  /* 0x0004 */ struct _IMAGE_BASE_RELOCATION* CurrentBlock;
  /* 0x0008 */ unsigned short* CurrentFixup;
  /* 0x000c */ unsigned long RemainingBlockSize;
  /* 0x0010 */ unsigned long RemainingTotalSize;
} LDR_IMAGE_RVA_RFG_ITERATOR_CONTEXT, *PLDR_IMAGE_RVA_RFG_ITERATOR_CONTEXT; /* size: 0x0014 */

