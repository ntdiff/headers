typedef struct _COPY_INFORMATION
{
  /* 0x0000 */ struct _FILE_OBJECT* SourceFileObject;
  /* 0x0008 */ __int64 SourceFileOffset;
} COPY_INFORMATION, *PCOPY_INFORMATION; /* size: 0x0010 */

