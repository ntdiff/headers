typedef struct _NDIS_RESTART_ATTRIBUTES
{
  /* 0x0000 */ struct _NDIS_RESTART_ATTRIBUTES* Next;
  /* 0x0004 */ unsigned long Oid;
  /* 0x0008 */ unsigned long DataLength;
  /* 0x0010 */ unsigned char Data[1];
  /* 0x0011 */ char __PADDING__[7];
} NDIS_RESTART_ATTRIBUTES, *PNDIS_RESTART_ATTRIBUTES; /* size: 0x0018 */

