typedef struct _HTTPSPolicyCallbackData
{
  union
  {
    /* 0x0000 */ unsigned long cbStruct;
    /* 0x0000 */ unsigned long cbSize;
  }; /* size: 0x0004 */
  /* 0x0004 */ unsigned long dwAuthType;
  /* 0x0008 */ unsigned long fdwChecks;
  /* 0x0010 */ wchar_t* pwszServerName;
} HTTPSPolicyCallbackData, *PHTTPSPolicyCallbackData; /* size: 0x0018 */

