typedef struct _UUID_VECTOR
{
  /* 0x0000 */ unsigned long Count;
  /* 0x0004 */ struct _GUID* Uuid[1];
} UUID_VECTOR, *PUUID_VECTOR; /* size: 0x0008 */

