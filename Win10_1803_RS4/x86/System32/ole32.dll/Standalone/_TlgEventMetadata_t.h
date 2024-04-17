typedef struct _TlgEventMetadata_t
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Channel;
  /* 0x0002 */ unsigned char Level;
  /* 0x0003 */ unsigned char Opcode;
  /* 0x0004 */ unsigned __int64 Keyword;
  /* 0x000c */ unsigned short RemainingSize;
} TlgEventMetadata_t, *PTlgEventMetadata_t; /* size: 0x000e */

