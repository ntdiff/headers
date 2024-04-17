typedef struct _CREATEFILE2_EXTENDED_PARAMETERS
{
  /* 0x0000 */ unsigned long dwSize;
  /* 0x0004 */ unsigned long dwFileAttributes;
  /* 0x0008 */ unsigned long dwFileFlags;
  /* 0x000c */ unsigned long dwSecurityQosFlags;
  /* 0x0010 */ struct _SECURITY_ATTRIBUTES* lpSecurityAttributes;
  /* 0x0014 */ void* hTemplateFile;
} CREATEFILE2_EXTENDED_PARAMETERS, *PCREATEFILE2_EXTENDED_PARAMETERS; /* size: 0x0018 */

