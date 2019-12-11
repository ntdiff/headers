typedef struct _KSSTREAM_POINTER_OFFSET
{
  union
  {
    /* 0x0000 */ unsigned char* Data;
    /* 0x0000 */ struct _KSMAPPING* Mappings;
  }; /* size: 0x0004 */
  /* 0x0004 */ void* Alignment;
  /* 0x0008 */ unsigned long Count;
  /* 0x000c */ unsigned long Remaining;
} KSSTREAM_POINTER_OFFSET, *PKSSTREAM_POINTER_OFFSET; /* size: 0x0010 */

typedef struct _KSSTREAM_POINTER
{
  /* 0x0000 */ void* Context;
  /* 0x0004 */ struct _KSPIN* Pin;
  /* 0x0008 */ struct KSSTREAM_HEADER* StreamHeader;
  /* 0x000c */ struct _KSSTREAM_POINTER_OFFSET* Offset;
  /* 0x0010 */ struct _KSSTREAM_POINTER_OFFSET OffsetIn;
  /* 0x0020 */ struct _KSSTREAM_POINTER_OFFSET OffsetOut;
} KSSTREAM_POINTER, *PKSSTREAM_POINTER; /* size: 0x0030 */

