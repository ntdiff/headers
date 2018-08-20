typedef struct _SECTION_OBJECT
{
  /* 0x0000 */ void* StartingVa;
  /* 0x0008 */ void* EndingVa;
  /* 0x0010 */ void* Parent;
  /* 0x0018 */ void* LeftChild;
  /* 0x0020 */ void* RightChild;
  /* 0x0028 */ struct _SEGMENT_OBJECT* Segment;
} SECTION_OBJECT, *PSECTION_OBJECT; /* size: 0x0030 */

