typedef struct _MI_DBG_PATCH
{
  union
  {
    /* 0x0000 */ struct _CONTROL_AREA* ControlArea;
  } /* size: 0x0008 */ u1;
  union
  {
    union
    {
      /* 0x0008 */ unsigned long EntireField;
      struct
      {
        struct /* bitfield */
        {
          /* 0x0008 */ unsigned long Pending : 1; /* bit position: 0 */
          /* 0x0008 */ unsigned long Reserved : 1; /* bit position: 1 */
          /* 0x0008 */ unsigned long Offset : 30; /* bit position: 2 */
        }; /* bitfield */
      } /* size: 0x0004 */ e2;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u2;
  /* 0x000c */ unsigned long OriginalBytes;
  /* 0x0010 */ unsigned long NewBytes;
  /* 0x0014 */ unsigned long Padding;
} MI_DBG_PATCH, *PMI_DBG_PATCH; /* size: 0x0018 */

