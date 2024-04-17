typedef struct _IMAGEHLP_CBA_EVENT
{
  /* 0x0000 */ unsigned long severity;
  /* 0x0004 */ unsigned long code;
  /* 0x0008 */ char* desc;
  /* 0x0010 */ void* object;
} IMAGEHLP_CBA_EVENT, *PIMAGEHLP_CBA_EVENT; /* size: 0x0018 */

