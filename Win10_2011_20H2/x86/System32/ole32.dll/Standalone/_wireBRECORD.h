typedef struct _wireBRECORD
{
  /* 0x0000 */ unsigned long fFlags;
  /* 0x0004 */ unsigned long clSize;
  /* 0x0008 */ struct IRecordInfo* pRecInfo;
  /* 0x000c */ unsigned char* pRecord;
} wireBRECORD, *PwireBRECORD; /* size: 0x0010 */

