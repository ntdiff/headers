typedef struct _NDR64_TYPE_STRICT_CONTEXT_HANDLE
{
  /* 0x0000 */ unsigned char FormatCode;
  /* 0x0001 */ unsigned char RealFormatCode;
  /* 0x0002 */ unsigned short Reserved;
  /* 0x0008 */ const void* Type;
  /* 0x0010 */ unsigned int CtxtFlags;
  /* 0x0014 */ unsigned int CtxtID;
} NDR64_TYPE_STRICT_CONTEXT_HANDLE, *PNDR64_TYPE_STRICT_CONTEXT_HANDLE; /* size: 0x0018 */

