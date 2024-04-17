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

typedef struct _FSCTL_UNMAP_SPACE_INPUT_BUFFER
{
  /* 0x0000 */ union _LARGE_INTEGER BytesToUnmap;
} FSCTL_UNMAP_SPACE_INPUT_BUFFER, *PFSCTL_UNMAP_SPACE_INPUT_BUFFER; /* size: 0x0008 */

