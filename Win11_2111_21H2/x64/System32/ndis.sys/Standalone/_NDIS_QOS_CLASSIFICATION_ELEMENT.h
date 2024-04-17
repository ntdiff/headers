typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_QOS_CLASSIFICATION_ELEMENT
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned short ConditionSelector;
  /* 0x000a */ unsigned short ConditionField;
  /* 0x000c */ unsigned short ActionSelector;
  /* 0x000e */ unsigned short ActionField;
} NDIS_QOS_CLASSIFICATION_ELEMENT, *PNDIS_QOS_CLASSIFICATION_ELEMENT; /* size: 0x0010 */

