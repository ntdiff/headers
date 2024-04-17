typedef struct _CRYPT_IMAGE_REF
{
  /* 0x0000 */ wchar_t* pszImage;
  /* 0x0008 */ unsigned long dwFlags;
  /* 0x000c */ long __PADDING__[1];
} CRYPT_IMAGE_REF, *PCRYPT_IMAGE_REF; /* size: 0x0010 */

