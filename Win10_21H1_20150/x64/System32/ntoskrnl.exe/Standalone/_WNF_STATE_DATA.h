typedef struct _WNF_NODE_HEADER
{
  /* 0x0000 */ unsigned short NodeTypeCode;
  /* 0x0002 */ unsigned short NodeByteSize;
} WNF_NODE_HEADER, *PWNF_NODE_HEADER; /* size: 0x0004 */

typedef struct _WNF_STATE_DATA
{
  /* 0x0000 */ struct _WNF_NODE_HEADER Header;
  /* 0x0004 */ unsigned long AllocatedSize;
  /* 0x0008 */ unsigned long DataSize;
  /* 0x000c */ unsigned long ChangeStamp;
} WNF_STATE_DATA, *PWNF_STATE_DATA; /* size: 0x0010 */

