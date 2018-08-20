typedef struct _ALPC_MESSAGE_ZONE
{
  /* 0x0000 */ struct _MDL* Mdl;
  /* 0x0004 */ void* UserVa;
  /* 0x0008 */ void* UserLimit;
  /* 0x000c */ void* SystemVa;
  /* 0x0010 */ void* SystemLimit;
  /* 0x0014 */ unsigned long Size;
} ALPC_MESSAGE_ZONE, *PALPC_MESSAGE_ZONE; /* size: 0x0018 */

