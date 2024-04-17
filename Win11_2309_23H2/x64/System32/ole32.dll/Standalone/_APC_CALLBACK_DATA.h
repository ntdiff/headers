typedef struct _APC_CALLBACK_DATA
{
  /* 0x0000 */ unsigned __int64 Parameter;
  /* 0x0008 */ struct _CONTEXT* ContextRecord;
  /* 0x0010 */ unsigned __int64 Reserved0;
  /* 0x0018 */ unsigned __int64 Reserved1;
} APC_CALLBACK_DATA, *PAPC_CALLBACK_DATA; /* size: 0x0020 */

