struct tagMIXERLINECONTROLSA
{
  /* 0x0000 */ unsigned long cbStruct;
  /* 0x0004 */ unsigned long dwLineID;
  union
  {
    /* 0x0008 */ unsigned long dwControlID;
    /* 0x0008 */ unsigned long dwControlType;
  }; /* size: 0x0004 */
  /* 0x000c */ unsigned long cControls;
  /* 0x0010 */ unsigned long cbmxctrl;
  /* 0x0014 */ struct tagMIXERCONTROLA* pamxctrl;
}; /* size: 0x001c */

