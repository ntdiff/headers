typedef struct _PS_ATTRIBUTE
{
  /* 0x0000 */ unsigned __int64 Attribute;
  /* 0x0008 */ unsigned __int64 Size;
  union
  {
    /* 0x0010 */ unsigned __int64 Value;
    /* 0x0010 */ void* ValuePtr;
  }; /* size: 0x0008 */
  /* 0x0018 */ unsigned __int64* ReturnLength;
} PS_ATTRIBUTE, *PPS_ATTRIBUTE; /* size: 0x0020 */

typedef struct _PS_ATTRIBUTE_LIST
{
  /* 0x0000 */ unsigned __int64 TotalLength;
  /* 0x0008 */ struct _PS_ATTRIBUTE Attributes[1];
} PS_ATTRIBUTE_LIST, *PPS_ATTRIBUTE_LIST; /* size: 0x0028 */

