typedef struct _NCryptAlgorithmName
{
  /* 0x0000 */ wchar_t* pszName;
  /* 0x0008 */ unsigned long dwClass;
  /* 0x000c */ unsigned long dwAlgOperations;
  /* 0x0010 */ unsigned long dwFlags;
  /* 0x0014 */ long __PADDING__[1];
} NCryptAlgorithmName, *PNCryptAlgorithmName; /* size: 0x0018 */

