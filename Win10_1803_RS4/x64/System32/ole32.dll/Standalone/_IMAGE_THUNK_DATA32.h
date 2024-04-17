typedef struct _IMAGE_THUNK_DATA32
{
  union
  {
    union
    {
      /* 0x0000 */ unsigned long ForwarderString;
      /* 0x0000 */ unsigned long Function;
      /* 0x0000 */ unsigned long Ordinal;
      /* 0x0000 */ unsigned long AddressOfData;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u1;
} IMAGE_THUNK_DATA32, *PIMAGE_THUNK_DATA32; /* size: 0x0004 */

