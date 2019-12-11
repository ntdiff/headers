typedef struct _NDIS_LOG
{
  /* 0x0000 */ struct _NDIS_MINIPORT_BLOCK* Miniport;
  /* 0x0008 */ unsigned __int64 LogLock;
  /* 0x0010 */ struct _IRP* Irp;
  /* 0x0018 */ unsigned int TotalSize;
  /* 0x001c */ unsigned int CurrentSize;
  /* 0x0020 */ unsigned int InPtr;
  /* 0x0024 */ unsigned int OutPtr;
  /* 0x0028 */ unsigned char LogBuf[1];
  /* 0x0029 */ char __PADDING__[7];
} NDIS_LOG, *PNDIS_LOG; /* size: 0x0030 */

