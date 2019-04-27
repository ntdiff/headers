typedef union _CM_TRANS_PTR
{
  union
  {
    /* 0x0000 */ unsigned long LightWeight : 1; /* bit position: 0 */
    /* 0x0000 */ void* TransPtr;
  }; /* size: 0x0004 */
} CM_TRANS_PTR, *PCM_TRANS_PTR; /* size: 0x0004 */

