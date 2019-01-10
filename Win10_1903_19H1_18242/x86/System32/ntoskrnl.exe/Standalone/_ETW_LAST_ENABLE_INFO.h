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

typedef struct _ETW_LAST_ENABLE_INFO
{
  /* 0x0000 */ union _LARGE_INTEGER EnableFlags;
  /* 0x0008 */ unsigned short LoggerId;
  /* 0x000a */ unsigned char Level;
  struct /* bitfield */
  {
    /* 0x000b */ unsigned char Enabled : 1; /* bit position: 0 */
    /* 0x000b */ unsigned char InternalFlag : 7; /* bit position: 1 */
  }; /* bitfield */
  /* 0x000c */ long __PADDING__[1];
} ETW_LAST_ENABLE_INFO, *PETW_LAST_ENABLE_INFO; /* size: 0x0010 */

