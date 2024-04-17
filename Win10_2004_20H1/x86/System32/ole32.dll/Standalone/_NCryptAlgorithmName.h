typedef struct _NCryptAlgorithmName
{
  /* 0x0000 */ wchar_t* pszName;
  /* 0x0004 */ unsigned long dwClass;
  /* 0x0008 */ unsigned long dwAlgOperations;
  /* 0x000c */ unsigned long dwFlags;
} NCryptAlgorithmName, *PNCryptAlgorithmName; /* size: 0x0010 */

