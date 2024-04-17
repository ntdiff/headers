typedef struct _NETRESOURCEA
{
  /* 0x0000 */ unsigned long dwScope;
  /* 0x0004 */ unsigned long dwType;
  /* 0x0008 */ unsigned long dwDisplayType;
  /* 0x000c */ unsigned long dwUsage;
  /* 0x0010 */ char* lpLocalName;
  /* 0x0014 */ char* lpRemoteName;
  /* 0x0018 */ char* lpComment;
  /* 0x001c */ char* lpProvider;
} NETRESOURCEA, *PNETRESOURCEA; /* size: 0x0020 */

