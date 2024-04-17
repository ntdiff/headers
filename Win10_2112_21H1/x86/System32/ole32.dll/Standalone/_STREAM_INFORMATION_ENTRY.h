typedef enum _FILE_STORAGE_TIER_CLASS
{
  FileStorageTierClassUnspecified = 0,
  FileStorageTierClassCapacity = 1,
  FileStorageTierClassPerformance = 2,
  FileStorageTierClassMax = 3,
} FILE_STORAGE_TIER_CLASS, *PFILE_STORAGE_TIER_CLASS;

typedef struct _STREAM_INFORMATION_ENTRY::_StreamInformation::_DesiredStorageClass
{
  /* 0x0000 */ enum _FILE_STORAGE_TIER_CLASS Class;
  /* 0x0004 */ unsigned long Flags;
} STREAM_INFORMATION_ENTRY::_StreamInformation::_DesiredStorageClass, *PSTREAM_INFORMATION_ENTRY::_StreamInformation::_DesiredStorageClass; /* size: 0x0008 */

typedef struct _STREAM_INFORMATION_ENTRY::_StreamInformation::_DataStream
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short Flags;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ unsigned __int64 Vdl;
} STREAM_INFORMATION_ENTRY::_StreamInformation::_DataStream, *PSTREAM_INFORMATION_ENTRY::_StreamInformation::_DataStream; /* size: 0x0010 */

typedef struct _STREAM_INFORMATION_ENTRY::_StreamInformation::_Reparse
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short Flags;
  /* 0x0004 */ unsigned long ReparseDataSize;
  /* 0x0008 */ unsigned long ReparseDataOffset;
} STREAM_INFORMATION_ENTRY::_StreamInformation::_Reparse, *PSTREAM_INFORMATION_ENTRY::_StreamInformation::_Reparse; /* size: 0x000c */

typedef struct _STREAM_INFORMATION_ENTRY::_StreamInformation::_Ea
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short Flags;
  /* 0x0004 */ unsigned long EaSize;
  /* 0x0008 */ unsigned long EaInformationOffset;
} STREAM_INFORMATION_ENTRY::_StreamInformation::_Ea, *PSTREAM_INFORMATION_ENTRY::_StreamInformation::_Ea; /* size: 0x000c */

typedef union _STREAM_INFORMATION_ENTRY::_StreamInformation
{
  union
  {
    /* 0x0000 */ struct _STREAM_INFORMATION_ENTRY::_StreamInformation::_DesiredStorageClass DesiredStorageClass;
    /* 0x0000 */ struct _STREAM_INFORMATION_ENTRY::_StreamInformation::_DataStream DataStream;
    /* 0x0000 */ struct _STREAM_INFORMATION_ENTRY::_StreamInformation::_Reparse Reparse;
    /* 0x0000 */ struct _STREAM_INFORMATION_ENTRY::_StreamInformation::_Ea Ea;
  }; /* size: 0x0010 */
} STREAM_INFORMATION_ENTRY::_StreamInformation, *PSTREAM_INFORMATION_ENTRY::_StreamInformation; /* size: 0x0010 */

typedef struct _STREAM_INFORMATION_ENTRY
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ union _STREAM_INFORMATION_ENTRY::_StreamInformation StreamInformation;
} STREAM_INFORMATION_ENTRY, *PSTREAM_INFORMATION_ENTRY; /* size: 0x0018 */

