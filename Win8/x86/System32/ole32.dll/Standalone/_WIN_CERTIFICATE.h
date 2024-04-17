typedef struct _WIN_CERTIFICATE
{
  /* 0x0000 */ unsigned long dwLength;
  /* 0x0004 */ unsigned short wRevision;
  /* 0x0006 */ unsigned short wCertificateType;
  /* 0x0008 */ unsigned char bCertificate[1];
  /* 0x0009 */ char __PADDING__[3];
} WIN_CERTIFICATE, *PWIN_CERTIFICATE; /* size: 0x000c */

