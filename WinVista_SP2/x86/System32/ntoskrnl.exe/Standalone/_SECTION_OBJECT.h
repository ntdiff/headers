typedef struct _SECTION_OBJECT
{
  /* 0x0000 */ void* StartingVa;
  /* 0x0004 */ void* EndingVa;
  /* 0x0008 */ void* Parent;
  /* 0x000c */ void* LeftChild;
  /* 0x0010 */ void* RightChild;
  /* 0x0014 */ struct _SEGMENT_OBJECT* Segment;
} SECTION_OBJECT, *PSECTION_OBJECT; /* size: 0x0018 */

