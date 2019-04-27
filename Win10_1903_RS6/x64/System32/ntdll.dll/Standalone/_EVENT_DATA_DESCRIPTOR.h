typedef struct _EVENT_DATA_DESCRIPTOR
{
  /* 0x0000 */ unsigned __int64 Ptr;
  /* 0x0008 */ unsigned long Size;
  union
  {
    /* 0x000c */ unsigned long Reserved;
    struct
    {
      /* 0x000c */ unsigned char Type;
      /* 0x000d */ unsigned char Reserved1;
      /* 0x000e */ unsigned short Reserved2;
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
} EVENT_DATA_DESCRIPTOR, *PEVENT_DATA_DESCRIPTOR; /* size: 0x0010 */

