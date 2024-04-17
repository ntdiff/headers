typedef struct _LUID
{
  /* 0x0000 */ unsigned long LowPart;
  /* 0x0004 */ long HighPart;
} LUID, *PLUID; /* size: 0x0008 */

typedef struct _TOKEN_ORIGIN
{
  /* 0x0000 */ struct _LUID OriginatingLogonSession;
} TOKEN_ORIGIN, *PTOKEN_ORIGIN; /* size: 0x0008 */

