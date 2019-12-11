typedef struct _KSNODE_DESCRIPTOR
{
  /* 0x0000 */ const struct KSAUTOMATION_TABLE_* AutomationTable;
  /* 0x0008 */ const struct _GUID* Type;
  /* 0x0010 */ const struct _GUID* Name;
} KSNODE_DESCRIPTOR, *PKSNODE_DESCRIPTOR; /* size: 0x0018 */

