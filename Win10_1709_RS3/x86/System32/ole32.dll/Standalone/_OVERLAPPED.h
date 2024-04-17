typedef struct _OVERLAPPED
{
  /* 0x0000 */ unsigned long Internal;
  /* 0x0004 */ unsigned long InternalHigh;
  union
  {
    struct
    {
      /* 0x0008 */ unsigned long Offset;
      /* 0x000c */ unsigned long OffsetHigh;
    }; /* size: 0x0008 */
    /* 0x0008 */ void* Pointer;
  }; /* size: 0x0008 */
  /* 0x0010 */ void* hEvent;
} OVERLAPPED, *POVERLAPPED; /* size: 0x0014 */

