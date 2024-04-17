typedef struct _FILE_ATTRIBUTE_CACHE_VALUE
{
  /* 0x0000 */ long Status;
  /* 0x0004 */ unsigned short Size;
  /* 0x0006 */ unsigned short RequiredSize;
  /* 0x0008 */ unsigned char Data[1];
  /* 0x0009 */ char __PADDING__[3];
} FILE_ATTRIBUTE_CACHE_VALUE, *PFILE_ATTRIBUTE_CACHE_VALUE; /* size: 0x000c */

typedef struct _FILE_ATTRIBUTE_CACHE_PAIR
{
  /* 0x0000 */ wchar_t Name[100];
  /* 0x00c8 */ struct _FILE_ATTRIBUTE_CACHE_VALUE Value;
} FILE_ATTRIBUTE_CACHE_PAIR, *PFILE_ATTRIBUTE_CACHE_PAIR; /* size: 0x00d4 */

typedef struct _FILE_ATTRIBUTE_CACHE_VALUES
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned long NumberOfValues;
  /* 0x0008 */ struct _FILE_ATTRIBUTE_CACHE_PAIR Attributes[1];
} FILE_ATTRIBUTE_CACHE_VALUES, *PFILE_ATTRIBUTE_CACHE_VALUES; /* size: 0x00dc */

