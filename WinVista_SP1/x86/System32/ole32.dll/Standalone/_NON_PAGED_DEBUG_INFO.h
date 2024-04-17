typedef struct _NON_PAGED_DEBUG_INFO
{
  /* 0x0000 */ unsigned short Signature;
  /* 0x0002 */ unsigned short Flags;
  /* 0x0004 */ unsigned long Size;
  /* 0x0008 */ unsigned short Machine;
  /* 0x000a */ unsigned short Characteristics;
  /* 0x000c */ unsigned long TimeDateStamp;
  /* 0x0010 */ unsigned long CheckSum;
  /* 0x0014 */ unsigned long SizeOfImage;
  /* 0x0018 */ unsigned __int64 ImageBase;
} NON_PAGED_DEBUG_INFO, *PNON_PAGED_DEBUG_INFO; /* size: 0x0020 */

