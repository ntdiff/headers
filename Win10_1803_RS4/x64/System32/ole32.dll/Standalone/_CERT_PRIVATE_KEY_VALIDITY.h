typedef struct _FILETIME
{
  /* 0x0000 */ unsigned long dwLowDateTime;
  /* 0x0004 */ unsigned long dwHighDateTime;
} FILETIME, *PFILETIME; /* size: 0x0008 */

typedef struct _CERT_PRIVATE_KEY_VALIDITY
{
  /* 0x0000 */ struct _FILETIME NotBefore;
  /* 0x0008 */ struct _FILETIME NotAfter;
} CERT_PRIVATE_KEY_VALIDITY, *PCERT_PRIVATE_KEY_VALIDITY; /* size: 0x0010 */

