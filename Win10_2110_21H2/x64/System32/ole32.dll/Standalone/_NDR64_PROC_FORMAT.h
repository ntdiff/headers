typedef struct _NDR64_PROC_FORMAT
{
  /* 0x0000 */ unsigned int Flags;
  /* 0x0004 */ unsigned int StackSize;
  /* 0x0008 */ unsigned int ConstantClientBufferSize;
  /* 0x000c */ unsigned int ConstantServerBufferSize;
  /* 0x0010 */ unsigned short RpcFlags;
  /* 0x0012 */ unsigned short FloatDoubleMask;
  /* 0x0014 */ unsigned short NumberOfParams;
  /* 0x0016 */ unsigned short ExtensionSize;
} NDR64_PROC_FORMAT, *PNDR64_PROC_FORMAT; /* size: 0x0018 */

