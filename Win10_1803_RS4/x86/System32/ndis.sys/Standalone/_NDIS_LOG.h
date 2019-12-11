typedef struct _NDIS_LOG
{
  /* 0x0000 */ struct _NDIS_MINIPORT_BLOCK* Miniport;
  /* 0x0004 */ unsigned long LogLock;
  /* 0x0008 */ struct _IRP* Irp;
  /* 0x000c */ unsigned int TotalSize;
  /* 0x0010 */ unsigned int CurrentSize;
  /* 0x0014 */ unsigned int InPtr;
  /* 0x0018 */ unsigned int OutPtr;
  /* 0x001c */ unsigned char LogBuf[1];
  /* 0x001d */ char __PADDING__[3];
} NDIS_LOG, *PNDIS_LOG; /* size: 0x0020 */

