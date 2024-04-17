typedef struct _RESOLVED_USERNAME_INFO
{
  /* 0x0000 */ int bResolved;
  /* 0x0004 */ wchar_t* pszResolvedName;
} RESOLVED_USERNAME_INFO, *PRESOLVED_USERNAME_INFO; /* size: 0x0008 */

typedef struct _RESOLVED_USERNAME_LIST
{
  /* 0x0000 */ unsigned long cItems;
  /* 0x0004 */ struct _RESOLVED_USERNAME_INFO rgUserNameInfo[1];
} RESOLVED_USERNAME_LIST, *PRESOLVED_USERNAME_LIST; /* size: 0x000c */

