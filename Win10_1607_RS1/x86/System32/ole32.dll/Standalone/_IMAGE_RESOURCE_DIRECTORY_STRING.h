typedef struct _IMAGE_RESOURCE_DIRECTORY_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ char NameString[1];
  /* 0x0003 */ char __PADDING__[1];
} IMAGE_RESOURCE_DIRECTORY_STRING, *PIMAGE_RESOURCE_DIRECTORY_STRING; /* size: 0x0004 */

