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

typedef struct _BIDI_REQUEST_DATA
{
  /* 0x0000 */ unsigned long dwReqNumber;
  /* 0x0004 */ wchar_t* pSchema;
  /* 0x0008 */ struct _BIDI_DATA data;
} BIDI_REQUEST_DATA, *PBIDI_REQUEST_DATA; /* size: 0x0014 */

typedef struct _BIDI_REQUEST_CONTAINER
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long Count;
  /* 0x000c */ struct _BIDI_REQUEST_DATA aData[1];
} BIDI_REQUEST_CONTAINER, *PBIDI_REQUEST_CONTAINER; /* size: 0x0020 */

