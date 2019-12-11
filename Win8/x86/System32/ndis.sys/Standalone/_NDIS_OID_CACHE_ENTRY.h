typedef struct _NDIS_OID_CACHE_ENTRY
{
  /* 0x0000 */ unsigned long Oid;
  /* 0x0004 */ unsigned int InfoBufferLength;
  /* 0x0008 */ void* InfoBuffer;
  /* 0x000c */ int LastStatus;
  /* 0x0010 */ unsigned char ValueValid;
  /* 0x0011 */ char __PADDING__[3];
} NDIS_OID_CACHE_ENTRY, *PNDIS_OID_CACHE_ENTRY; /* size: 0x0014 */

