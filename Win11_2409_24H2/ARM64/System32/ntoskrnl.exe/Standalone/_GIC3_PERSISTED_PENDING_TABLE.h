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

typedef struct _GIC3_PERSISTED_PENDING_TABLE
{
  /* 0x0000 */ unsigned long LocalUnitIdentifier;
  /* 0x0004 */ union _LARGE_INTEGER TableBase;
  /* 0x000c */ unsigned long TableSize;
} GIC3_PERSISTED_PENDING_TABLE, *PGIC3_PERSISTED_PENDING_TABLE; /* size: 0x0010 */

