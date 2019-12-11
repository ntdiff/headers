typedef struct _OFFLOAD_STATE_HEADER
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0004 */ unsigned long RecognizedOptions;
} OFFLOAD_STATE_HEADER, *POFFLOAD_STATE_HEADER; /* size: 0x0008 */

typedef struct _PATH_OFFLOAD_STATE_CONST
{
  /* 0x0000 */ struct _OFFLOAD_STATE_HEADER Header;
  /* 0x0008 */ const unsigned char* SourceAddress;
  /* 0x000c */ const unsigned char* DestinationAddress;
} PATH_OFFLOAD_STATE_CONST, *PPATH_OFFLOAD_STATE_CONST; /* size: 0x0010 */

