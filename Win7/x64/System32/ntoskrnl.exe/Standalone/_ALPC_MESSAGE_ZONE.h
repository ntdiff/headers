typedef struct _ALPC_MESSAGE_ZONE
{
  /* 0x0000 */ struct _MDL* Mdl;
  /* 0x0008 */ void* UserVa;
  /* 0x0010 */ void* UserLimit;
  /* 0x0018 */ void* SystemVa;
  /* 0x0020 */ void* SystemLimit;
  /* 0x0028 */ unsigned __int64 Size;
} ALPC_MESSAGE_ZONE, *PALPC_MESSAGE_ZONE; /* size: 0x0030 */

