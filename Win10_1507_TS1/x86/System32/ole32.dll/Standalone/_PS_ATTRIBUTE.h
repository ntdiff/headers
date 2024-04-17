typedef struct _PS_ATTRIBUTE
{
  /* 0x0000 */ unsigned long Attribute;
  /* 0x0004 */ unsigned long Size;
  union
  {
    /* 0x0008 */ unsigned long Value;
    /* 0x0008 */ void* ValuePtr;
  }; /* size: 0x0004 */
  /* 0x000c */ unsigned long* ReturnLength;
} PS_ATTRIBUTE, *PPS_ATTRIBUTE; /* size: 0x0010 */

