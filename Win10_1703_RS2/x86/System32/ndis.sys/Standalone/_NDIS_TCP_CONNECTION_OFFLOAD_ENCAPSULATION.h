typedef struct _NDIS_TCP_CONNECTION_OFFLOAD_ENCAPSULATION
{
  struct
  {
    /* 0x0000 */ unsigned char Enabled;
    /* 0x0004 */ unsigned long EncapsulationType;
    /* 0x0008 */ unsigned long HeaderSize;
  } /* size: 0x000c */ V4;
  struct
  {
    /* 0x000c */ unsigned char Enabled;
    /* 0x0010 */ unsigned long EncapsulationType;
    /* 0x0014 */ unsigned long HeaderSize;
  } /* size: 0x000c */ V6;
} NDIS_TCP_CONNECTION_OFFLOAD_ENCAPSULATION, *PNDIS_TCP_CONNECTION_OFFLOAD_ENCAPSULATION; /* size: 0x0018 */

