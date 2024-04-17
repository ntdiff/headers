typedef struct _FILE_INITIATE_REPAIR_OUTPUT_BUFFER
{
  /* 0x0000 */ unsigned __int64 Hint1;
  /* 0x0008 */ unsigned __int64 Hint2;
  /* 0x0010 */ unsigned __int64 Clsn;
  /* 0x0018 */ long Status;
  /* 0x001c */ long __PADDING__[1];
} FILE_INITIATE_REPAIR_OUTPUT_BUFFER, *PFILE_INITIATE_REPAIR_OUTPUT_BUFFER; /* size: 0x0020 */

