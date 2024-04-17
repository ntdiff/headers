typedef struct _FILETIME
{
  /* 0x0000 */ unsigned long dwLowDateTime;
  /* 0x0004 */ unsigned long dwHighDateTime;
} FILETIME, *PFILETIME; /* size: 0x0008 */

typedef struct _INCREMENTAL_ACCESS_INFO
{
  /* 0x0000 */ unsigned long dwSize;
  /* 0x0004 */ struct _FILETIME ftLastModifiedTime;
} INCREMENTAL_ACCESS_INFO, *PINCREMENTAL_ACCESS_INFO; /* size: 0x000c */

