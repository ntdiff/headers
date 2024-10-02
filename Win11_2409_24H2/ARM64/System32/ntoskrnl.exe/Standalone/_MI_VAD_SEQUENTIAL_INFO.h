typedef struct _MI_VAD_SEQUENTIAL_INFO
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Length : 12; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Vpn : 51; /* bit position: 12 */
      /* 0x0000 */ unsigned __int64 MustBeZero : 1; /* bit position: 63 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 EntireField;
  }; /* size: 0x0008 */
} MI_VAD_SEQUENTIAL_INFO, *PMI_VAD_SEQUENTIAL_INFO; /* size: 0x0008 */

