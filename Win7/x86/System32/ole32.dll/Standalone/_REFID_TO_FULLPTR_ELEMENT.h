typedef struct _REFID_TO_FULLPTR_ELEMENT
{
  /* 0x0000 */ struct _REFID_TO_FULLPTR_ELEMENT* Next;
  /* 0x0004 */ void* Pointer;
  /* 0x0008 */ unsigned long RefId;
  /* 0x000c */ unsigned char State;
  /* 0x000d */ char __PADDING__[3];
} REFID_TO_FULLPTR_ELEMENT, *PREFID_TO_FULLPTR_ELEMENT; /* size: 0x0010 */

