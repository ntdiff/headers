typedef struct _OFFLOAD_STATE_HEADER
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0004 */ unsigned long RecognizedOptions;
} OFFLOAD_STATE_HEADER, *POFFLOAD_STATE_HEADER; /* size: 0x0008 */

typedef struct _NEIGHBOR_OFFLOAD_STATE_CONST
{
  /* 0x0000 */ struct _OFFLOAD_STATE_HEADER Header;
  /* 0x0008 */ unsigned char DlSourceAddress[32];
  /* 0x0028 */ unsigned long VlanId : 12; /* bit position: 0 */
} NEIGHBOR_OFFLOAD_STATE_CONST, *PNEIGHBOR_OFFLOAD_STATE_CONST; /* size: 0x002c */

