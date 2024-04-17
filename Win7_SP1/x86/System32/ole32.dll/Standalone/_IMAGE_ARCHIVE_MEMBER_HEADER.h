typedef struct _IMAGE_ARCHIVE_MEMBER_HEADER
{
  /* 0x0000 */ unsigned char Name[16];
  /* 0x0010 */ unsigned char Date[12];
  /* 0x001c */ unsigned char UserID[6];
  /* 0x0022 */ unsigned char GroupID[6];
  /* 0x0028 */ unsigned char Mode[8];
  /* 0x0030 */ unsigned char Size[10];
  /* 0x003a */ unsigned char EndHeader[2];
} IMAGE_ARCHIVE_MEMBER_HEADER, *PIMAGE_ARCHIVE_MEMBER_HEADER; /* size: 0x003c */

