typedef struct _CMC_DATA_INFO
{
  /* 0x0000 */ unsigned long cTaggedAttribute;
  /* 0x0004 */ struct _CMC_TAGGED_ATTRIBUTE* rgTaggedAttribute;
  /* 0x0008 */ unsigned long cTaggedRequest;
  /* 0x000c */ struct _CMC_TAGGED_REQUEST* rgTaggedRequest;
  /* 0x0010 */ unsigned long cTaggedContentInfo;
  /* 0x0014 */ struct _CMC_TAGGED_CONTENT_INFO* rgTaggedContentInfo;
  /* 0x0018 */ unsigned long cTaggedOtherMsg;
  /* 0x001c */ struct _CMC_TAGGED_OTHER_MSG* rgTaggedOtherMsg;
} CMC_DATA_INFO, *PCMC_DATA_INFO; /* size: 0x0020 */

