typedef struct _FULL_PTR_TO_REFID_ELEMENT
{
  /* 0x0000 */ struct _FULL_PTR_TO_REFID_ELEMENT* Next;
  /* 0x0004 */ void* Pointer;
  /* 0x0008 */ unsigned long RefId;
  /* 0x000c */ unsigned char State;
  /* 0x000d */ char __PADDING__[3];
} FULL_PTR_TO_REFID_ELEMENT, *PFULL_PTR_TO_REFID_ELEMENT; /* size: 0x0010 */

