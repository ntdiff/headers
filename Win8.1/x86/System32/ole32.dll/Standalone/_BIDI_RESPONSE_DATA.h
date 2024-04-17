typedef struct _BINARY_CONTAINER
{
  /* 0x0000 */ unsigned long cbBuf;
  /* 0x0004 */ unsigned char* pData;
} BINARY_CONTAINER, *PBINARY_CONTAINER; /* size: 0x0008 */

typedef struct _BIDI_DATA
{
  /* 0x0000 */ unsigned long dwBidiType;
  union
  {
    union
    {
      /* 0x0004 */ int bData;
      /* 0x0004 */ long iData;
      /* 0x0004 */ wchar_t* sData;
      /* 0x0004 */ float fData;
      /* 0x0004 */ struct _BINARY_CONTAINER biData;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u;
} BIDI_DATA, *PBIDI_DATA; /* size: 0x000c */

typedef struct _BIDI_RESPONSE_DATA
{
  /* 0x0000 */ unsigned long dwResult;
  /* 0x0004 */ unsigned long dwReqNumber;
  /* 0x0008 */ wchar_t* pSchema;
  /* 0x000c */ struct _BIDI_DATA data;
} BIDI_RESPONSE_DATA, *PBIDI_RESPONSE_DATA; /* size: 0x0018 */

