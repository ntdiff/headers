typedef struct _LUID
{
  /* 0x0000 */ unsigned long LowPart;
  /* 0x0004 */ long HighPart;
} LUID, *PLUID; /* size: 0x0008 */

struct SAccessCache
{
  /* 0x0000 */ int fAccess;
  /* 0x0004 */ struct _LUID lClient;
}; /* size: 0x000c */

