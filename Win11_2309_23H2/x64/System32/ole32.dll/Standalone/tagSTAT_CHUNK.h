enum tagCHUNK_BREAKTYPE
{
  CHUNK_NO_BREAK = 0,
  CHUNK_EOW = 1,
  CHUNK_EOS = 2,
  CHUNK_EOP = 3,
  CHUNK_EOC = 4,
};

enum tagCHUNKSTATE
{
  CHUNK_TEXT = 1,
  CHUNK_VALUE = 2,
  CHUNK_FILTER_OWNED_VALUE = 4,
};

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct tagPROPSPEC
{
  /* 0x0000 */ unsigned long ulKind;
  union
  {
    /* 0x0008 */ unsigned long propid;
    /* 0x0008 */ wchar_t* lpwstr;
  }; /* size: 0x0008 */
}; /* size: 0x0010 */

struct tagFULLPROPSPEC
{
  /* 0x0000 */ struct _GUID guidPropSet;
  /* 0x0010 */ struct tagPROPSPEC psProperty;
}; /* size: 0x0020 */

struct tagSTAT_CHUNK
{
  /* 0x0000 */ unsigned long idChunk;
  /* 0x0004 */ enum tagCHUNK_BREAKTYPE breakType;
  /* 0x0008 */ enum tagCHUNKSTATE flags;
  /* 0x000c */ unsigned long locale;
  /* 0x0010 */ struct tagFULLPROPSPEC attribute;
  /* 0x0030 */ unsigned long idChunkSource;
  /* 0x0034 */ unsigned long cwcStartSource;
  /* 0x0038 */ unsigned long cwcLenSource;
  /* 0x003c */ long __PADDING__[1];
}; /* size: 0x0040 */

