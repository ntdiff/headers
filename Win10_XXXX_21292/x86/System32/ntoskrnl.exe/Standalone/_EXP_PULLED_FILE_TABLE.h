typedef struct _EXP_PULLED_FILE_TABLE
{
  /* 0x0000 */ long NumberOfFiles;
  /* 0x0004 */ long TableSize;
  /* 0x0008 */ unsigned __int64 Hashes[1];
} EXP_PULLED_FILE_TABLE, *PEXP_PULLED_FILE_TABLE; /* size: 0x0010 */

