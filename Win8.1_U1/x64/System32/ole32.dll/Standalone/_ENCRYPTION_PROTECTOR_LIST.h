typedef struct _ENCRYPTION_PROTECTOR_LIST
{
  /* 0x0000 */ unsigned long nProtectors;
  /* 0x0008 */ struct _ENCRYPTION_PROTECTOR** pProtectors;
} ENCRYPTION_PROTECTOR_LIST, *PENCRYPTION_PROTECTOR_LIST; /* size: 0x0010 */

