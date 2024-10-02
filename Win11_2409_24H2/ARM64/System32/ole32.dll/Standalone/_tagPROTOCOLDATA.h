typedef struct _tagPROTOCOLDATA
{
  /* 0x0000 */ unsigned long grfFlags;
  /* 0x0004 */ unsigned long dwState;
  /* 0x0008 */ void* pData;
  /* 0x0010 */ unsigned long cbData;
  /* 0x0014 */ long __PADDING__[1];
} tagPROTOCOLDATA, *PtagPROTOCOLDATA; /* size: 0x0018 */

