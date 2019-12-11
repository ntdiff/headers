typedef struct _NDIS_FRAME_TYPE_AND_OPEN
{
  /* 0x0000 */ unsigned short Type;
  /* 0x0008 */ struct _NDIS_OPEN_BLOCK* Open;
} NDIS_FRAME_TYPE_AND_OPEN, *PNDIS_FRAME_TYPE_AND_OPEN; /* size: 0x0010 */

typedef struct _NDIS_FRAME_TYPE_RECORD
{
  /* 0x0000 */ unsigned int NumEntries;
  /* 0x0008 */ struct _NDIS_FRAME_TYPE_AND_OPEN Entry[16];
} NDIS_FRAME_TYPE_RECORD, *PNDIS_FRAME_TYPE_RECORD; /* size: 0x0108 */

