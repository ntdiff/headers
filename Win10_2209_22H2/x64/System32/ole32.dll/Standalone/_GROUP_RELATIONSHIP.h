typedef struct _PROCESSOR_GROUP_INFO
{
  /* 0x0000 */ unsigned char MaximumProcessorCount;
  /* 0x0001 */ unsigned char ActiveProcessorCount;
  /* 0x0002 */ unsigned char Reserved[38];
  /* 0x0028 */ unsigned __int64 ActiveProcessorMask;
} PROCESSOR_GROUP_INFO, *PPROCESSOR_GROUP_INFO; /* size: 0x0030 */

typedef struct _GROUP_RELATIONSHIP
{
  /* 0x0000 */ unsigned short MaximumGroupCount;
  /* 0x0002 */ unsigned short ActiveGroupCount;
  /* 0x0004 */ unsigned char Reserved[20];
  /* 0x0018 */ struct _PROCESSOR_GROUP_INFO GroupInfo[1];
} GROUP_RELATIONSHIP, *PGROUP_RELATIONSHIP; /* size: 0x0048 */

