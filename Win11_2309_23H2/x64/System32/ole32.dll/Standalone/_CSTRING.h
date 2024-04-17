typedef struct _CSTRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ const char* Buffer;
} CSTRING, *PCSTRING; /* size: 0x0010 */

