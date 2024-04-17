typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _SAFER_CODE_PROPERTIES_V1
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ unsigned long dwCheckFlags;
  /* 0x0008 */ const wchar_t* ImagePath;
  /* 0x0010 */ void* hImageFileHandle;
  /* 0x0018 */ unsigned long UrlZoneId;
  /* 0x001c */ unsigned char ImageHash[64];
  /* 0x005c */ unsigned long dwImageHashSize;
  /* 0x0060 */ union _LARGE_INTEGER ImageSize;
  /* 0x0068 */ unsigned int HashAlgorithm;
  /* 0x0070 */ unsigned char* pByteBlock;
  /* 0x0078 */ struct HWND__* hWndParent;
  /* 0x0080 */ unsigned long dwWVTUIChoice;
  /* 0x0084 */ long __PADDING__[1];
} SAFER_CODE_PROPERTIES_V1, *PSAFER_CODE_PROPERTIES_V1; /* size: 0x0088 */

