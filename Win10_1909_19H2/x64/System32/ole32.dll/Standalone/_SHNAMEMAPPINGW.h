typedef struct _SHNAMEMAPPINGW
{
  /* 0x0000 */ wchar_t* pszOldPath;
  /* 0x0008 */ wchar_t* pszNewPath;
  /* 0x0010 */ int cchOldPath;
  /* 0x0014 */ int cchNewPath;
} SHNAMEMAPPINGW, *PSHNAMEMAPPINGW; /* size: 0x0018 */

