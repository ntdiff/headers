typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _NDIS_BIND_PATHS
{
  /* 0x0000 */ unsigned int Number;
  /* 0x0008 */ struct _UNICODE_STRING Paths[1];
} NDIS_BIND_PATHS, *PNDIS_BIND_PATHS; /* size: 0x0018 */

