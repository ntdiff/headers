typedef struct _KIST_LINK_FRAME
{
  /* 0x0000 */ struct _KIST_BASE_FRAME* IstBaseFrame;
  /* 0x0008 */ unsigned long Signature;
  /* 0x000c */ unsigned long Reserved0;
  /* 0x0010 */ unsigned __int64 Reserved[2];
} KIST_LINK_FRAME, *PKIST_LINK_FRAME; /* size: 0x0020 */

