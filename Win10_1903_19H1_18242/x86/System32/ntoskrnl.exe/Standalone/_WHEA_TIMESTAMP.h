typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef union _WHEA_TIMESTAMP
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Seconds : 8; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Minutes : 8; /* bit position: 8 */
      /* 0x0000 */ unsigned __int64 Hours : 8; /* bit position: 16 */
      /* 0x0000 */ unsigned __int64 Precise : 1; /* bit position: 24 */
      /* 0x0000 */ unsigned __int64 Reserved : 7; /* bit position: 25 */
      /* 0x0000 */ unsigned __int64 Day : 8; /* bit position: 32 */
      /* 0x0000 */ unsigned __int64 Month : 8; /* bit position: 40 */
      /* 0x0000 */ unsigned __int64 Year : 8; /* bit position: 48 */
      /* 0x0000 */ unsigned __int64 Century : 8; /* bit position: 56 */
    }; /* bitfield */
    /* 0x0000 */ union _LARGE_INTEGER AsLARGE_INTEGER;
  }; /* size: 0x0008 */
} WHEA_TIMESTAMP, *PWHEA_TIMESTAMP; /* size: 0x0008 */

