typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_GFT_CUSTOM_ACTION
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long ProfileId;
  /* 0x000c */ unsigned long Type;
  /* 0x0010 */ unsigned long Length;
  union
  {
    /* 0x0018 */ unsigned __int64 Alignment;
    struct
    {
      /* 0x0018 */ unsigned char ActionData[1];
      /* 0x0019 */ char __PADDING__[7];
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} NDIS_GFT_CUSTOM_ACTION, *PNDIS_GFT_CUSTOM_ACTION; /* size: 0x0020 */

