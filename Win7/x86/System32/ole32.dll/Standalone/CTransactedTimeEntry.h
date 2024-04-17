typedef struct _FILETIME
{
  /* 0x0000 */ unsigned long dwLowDateTime;
  /* 0x0004 */ unsigned long dwHighDateTime;
} FILETIME, *PFILETIME; /* size: 0x0008 */

class CTransactedTimeEntry
{
  /* 0x0000 */ struct _FILETIME _tt[3];
}; /* size: 0x0018 */

