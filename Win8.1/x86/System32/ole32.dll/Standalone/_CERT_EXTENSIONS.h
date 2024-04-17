typedef struct _CERT_EXTENSIONS
{
  /* 0x0000 */ unsigned long cExtension;
  /* 0x0004 */ struct _CERT_EXTENSION* rgExtension;
} CERT_EXTENSIONS, *PCERT_EXTENSIONS; /* size: 0x0008 */

