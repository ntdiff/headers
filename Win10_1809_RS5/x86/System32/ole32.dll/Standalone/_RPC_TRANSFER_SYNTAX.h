typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _RPC_TRANSFER_SYNTAX
{
  /* 0x0000 */ struct _GUID Uuid;
  /* 0x0010 */ unsigned short VersMajor;
  /* 0x0012 */ unsigned short VersMinor;
} RPC_TRANSFER_SYNTAX, *PRPC_TRANSFER_SYNTAX; /* size: 0x0014 */

