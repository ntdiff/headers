typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _NDIS_PENDING_IM_INSTANCE
{
  /* 0x0000 */ struct _NDIS_PENDING_IM_INSTANCE* Next;
  /* 0x0004 */ void* Context;
  /* 0x0008 */ struct _UNICODE_STRING Name;
} NDIS_PENDING_IM_INSTANCE, *PNDIS_PENDING_IM_INSTANCE; /* size: 0x0010 */

