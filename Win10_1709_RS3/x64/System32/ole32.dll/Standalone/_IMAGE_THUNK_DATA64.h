typedef struct _IMAGE_THUNK_DATA64
{
  union
  {
    union
    {
      /* 0x0000 */ unsigned __int64 ForwarderString;
      /* 0x0000 */ unsigned __int64 Function;
      /* 0x0000 */ unsigned __int64 Ordinal;
      /* 0x0000 */ unsigned __int64 AddressOfData;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u1;
} IMAGE_THUNK_DATA64, *PIMAGE_THUNK_DATA64; /* size: 0x0008 */

