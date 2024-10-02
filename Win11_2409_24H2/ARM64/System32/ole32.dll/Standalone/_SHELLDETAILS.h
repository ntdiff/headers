typedef struct _STRRET
{
  /* 0x0000 */ unsigned int uType;
  union
  {
    /* 0x0008 */ wchar_t* pOleStr;
    /* 0x0008 */ unsigned int uOffset;
    /* 0x0008 */ char cStr[260];
  }; /* size: 0x0104 */
  /* 0x010c */ long __PADDING__[1];
} STRRET, *PSTRRET; /* size: 0x0110 */

typedef struct _SHELLDETAILS
{
  /* 0x0000 */ int fmt;
  /* 0x0004 */ int cxChar;
  /* 0x0008 */ struct _STRRET str;
} SHELLDETAILS, *PSHELLDETAILS; /* size: 0x0118 */

