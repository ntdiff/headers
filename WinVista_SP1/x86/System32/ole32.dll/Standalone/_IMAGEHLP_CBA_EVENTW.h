typedef struct _IMAGEHLP_CBA_EVENTW
{
  /* 0x0000 */ unsigned long severity;
  /* 0x0004 */ unsigned long code;
  /* 0x0008 */ const wchar_t* desc;
  /* 0x000c */ void* object;
} IMAGEHLP_CBA_EVENTW, *PIMAGEHLP_CBA_EVENTW; /* size: 0x0010 */

