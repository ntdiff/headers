typedef struct _CMC_RESPONSE_INFO
{
  /* 0x0000 */ unsigned long cTaggedAttribute;
  /* 0x0008 */ struct _CMC_TAGGED_ATTRIBUTE* rgTaggedAttribute;
  /* 0x0010 */ unsigned long cTaggedContentInfo;
  /* 0x0018 */ struct _CMC_TAGGED_CONTENT_INFO* rgTaggedContentInfo;
  /* 0x0020 */ unsigned long cTaggedOtherMsg;
  /* 0x0028 */ struct _CMC_TAGGED_OTHER_MSG* rgTaggedOtherMsg;
} CMC_RESPONSE_INFO, *PCMC_RESPONSE_INFO; /* size: 0x0030 */

