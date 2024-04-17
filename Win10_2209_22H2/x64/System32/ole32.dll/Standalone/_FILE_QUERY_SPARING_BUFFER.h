typedef struct _FILE_QUERY_SPARING_BUFFER
{
  /* 0x0000 */ unsigned long SparingUnitBytes;
  /* 0x0004 */ unsigned char SoftwareSparing;
  /* 0x0008 */ unsigned long TotalSpareBlocks;
  /* 0x000c */ unsigned long FreeSpareBlocks;
} FILE_QUERY_SPARING_BUFFER, *PFILE_QUERY_SPARING_BUFFER; /* size: 0x0010 */

