typedef struct _FILE_ID_128
{
  /* 0x0000 */ unsigned char Identifier[16];
} FILE_ID_128, *PFILE_ID_128; /* size: 0x0010 */

typedef struct _CSV_QUERY_FILE_REVISION_FILE_ID_128
{
  /* 0x0000 */ struct _FILE_ID_128 FileId;
  /* 0x0010 */ __int64 FileRevision[3];
} CSV_QUERY_FILE_REVISION_FILE_ID_128, *PCSV_QUERY_FILE_REVISION_FILE_ID_128; /* size: 0x0028 */

