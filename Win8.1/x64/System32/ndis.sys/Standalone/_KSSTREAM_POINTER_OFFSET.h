typedef struct _KSSTREAM_POINTER_OFFSET
{
  union
  {
    /* 0x0000 */ unsigned char* Data;
    /* 0x0000 */ struct _KSMAPPING* Mappings;
  }; /* size: 0x0008 */
  /* 0x0008 */ unsigned long Count;
  /* 0x000c */ unsigned long Remaining;
} KSSTREAM_POINTER_OFFSET, *PKSSTREAM_POINTER_OFFSET; /* size: 0x0010 */

