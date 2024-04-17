typedef struct _SHNAMEMAPPINGW
{
  /* 0x0000 */ wchar_t* pszOldPath;
  /* 0x0004 */ wchar_t* pszNewPath;
  /* 0x0008 */ int cchOldPath;
  /* 0x000c */ int cchNewPath;
} SHNAMEMAPPINGW, *PSHNAMEMAPPINGW; /* size: 0x0010 */

