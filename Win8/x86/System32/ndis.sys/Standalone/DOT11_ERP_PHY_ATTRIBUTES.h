struct DOT11_ERP_PHY_ATTRIBUTES
{
  /* 0x0000 */ unsigned char bShortPreambleOptionImplemented;
  /* 0x0001 */ unsigned char bPBCCOptionImplemented;
  /* 0x0002 */ unsigned char bChannelAgilityPresent;
  /* 0x0004 */ unsigned long uHRCCAModeSupported;
  /* 0x0008 */ unsigned char bERPPBCCOptionImplemented;
  /* 0x0009 */ unsigned char bDSSSOFDMOptionImplemented;
  /* 0x000a */ unsigned char bShortSlotTimeOptionImplemented;
  /* 0x000b */ char __PADDING__[1];
}; /* size: 0x000c */

