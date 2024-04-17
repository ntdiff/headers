typedef struct _LUID
{
  /* 0x0000 */ unsigned long LowPart;
  /* 0x0004 */ long HighPart;
} LUID, *PLUID; /* size: 0x0008 */

union tagFastCopyLUIDAccess
{
  union
  {
    /* 0x0000 */ struct _LUID Luid;
    /* 0x0000 */ __int64 FastAccess;
  }; /* size: 0x0008 */
}; /* size: 0x0008 */

