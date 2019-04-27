typedef union _POP_FX_COMPONENT_FLAGS
{
  union
  {
    struct
    {
      /* 0x0000 */ long Value;
      /* 0x0004 */ long Value2;
    }; /* size: 0x0008 */
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned long RefCount : 30; /* bit position: 0 */
        /* 0x0000 */ unsigned long Idling : 1; /* bit position: 30 */
        /* 0x0000 */ unsigned long Active : 1; /* bit position: 31 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0004 */ unsigned long CriticalIdleOverride : 1; /* bit position: 0 */
        /* 0x0004 */ unsigned long ResidentOverride : 1; /* bit position: 1 */
        /* 0x0004 */ unsigned long Reserved : 30; /* bit position: 2 */
      }; /* bitfield */
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} POP_FX_COMPONENT_FLAGS, *PPOP_FX_COMPONENT_FLAGS; /* size: 0x0008 */

