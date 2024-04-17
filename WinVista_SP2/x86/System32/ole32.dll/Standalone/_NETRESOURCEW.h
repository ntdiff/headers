typedef struct _NETRESOURCEW
{
  /* 0x0000 */ unsigned long dwScope;
  /* 0x0004 */ unsigned long dwType;
  /* 0x0008 */ unsigned long dwDisplayType;
  /* 0x000c */ unsigned long dwUsage;
  /* 0x0010 */ wchar_t* lpLocalName;
  /* 0x0014 */ wchar_t* lpRemoteName;
  /* 0x0018 */ wchar_t* lpComment;
  /* 0x001c */ wchar_t* lpProvider;
} NETRESOURCEW, *PNETRESOURCEW; /* size: 0x0020 */

