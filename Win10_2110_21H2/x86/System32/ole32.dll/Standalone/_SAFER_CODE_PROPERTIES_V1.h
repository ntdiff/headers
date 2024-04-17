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
  /* 0x000c */ void* hImageFileHandle;
  /* 0x0010 */ unsigned long UrlZoneId;
  /* 0x0014 */ unsigned char ImageHash[64];
  /* 0x0054 */ unsigned long dwImageHashSize;
  /* 0x0058 */ union _LARGE_INTEGER ImageSize;
  /* 0x0060 */ unsigned int HashAlgorithm;
  /* 0x0064 */ unsigned char* pByteBlock;
  /* 0x0068 */ struct HWND__* hWndParent;
  /* 0x006c */ unsigned long dwWVTUIChoice;
} SAFER_CODE_PROPERTIES_V1, *PSAFER_CODE_PROPERTIES_V1; /* size: 0x0070 */

