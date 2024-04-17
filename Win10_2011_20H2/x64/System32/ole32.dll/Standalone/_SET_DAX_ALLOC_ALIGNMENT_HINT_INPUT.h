typedef struct _SET_DAX_ALLOC_ALIGNMENT_HINT_INPUT
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned long AlignmentShift;
  /* 0x0008 */ unsigned __int64 FileOffsetToAlign;
  /* 0x0010 */ unsigned long FallbackAlignmentShift;
  /* 0x0014 */ long __PADDING__[1];
} SET_DAX_ALLOC_ALIGNMENT_HINT_INPUT, *PSET_DAX_ALLOC_ALIGNMENT_HINT_INPUT; /* size: 0x0018 */

