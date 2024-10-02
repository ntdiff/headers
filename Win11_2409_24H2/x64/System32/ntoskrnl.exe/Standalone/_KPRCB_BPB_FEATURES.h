typedef union _KPRCB_BPB_FEATURES
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned char ClearOnIdle : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned char Enabled : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned char Smep : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned char KCet : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned char BhbFlushSequence : 2; /* bit position: 4 */
      /* 0x0000 */ unsigned char FeaturesReserved : 2; /* bit position: 6 */
    }; /* bitfield */
    /* 0x0000 */ unsigned char AllFlags;
  }; /* size: 0x0001 */
} KPRCB_BPB_FEATURES, *PKPRCB_BPB_FEATURES; /* size: 0x0001 */

