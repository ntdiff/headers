typedef struct _OVERLAPPED
{
  /* 0x0000 */ unsigned __int64 Internal;
  /* 0x0008 */ unsigned __int64 InternalHigh;
  union
  {
    struct
    {
      /* 0x0010 */ unsigned long Offset;
      /* 0x0014 */ unsigned long OffsetHigh;
    }; /* size: 0x0008 */
    /* 0x0010 */ void* Pointer;
  }; /* size: 0x0008 */
  /* 0x0018 */ void* hEvent;
} OVERLAPPED, *POVERLAPPED; /* size: 0x0020 */

