typedef struct _SID_AND_ATTRIBUTES_HASH
{
  /* 0x0000 */ unsigned long SidCount;
  /* 0x0004 */ struct _SID_AND_ATTRIBUTES* SidAttr;
  /* 0x0008 */ unsigned long Hash[32];
} SID_AND_ATTRIBUTES_HASH, *PSID_AND_ATTRIBUTES_HASH; /* size: 0x0088 */

