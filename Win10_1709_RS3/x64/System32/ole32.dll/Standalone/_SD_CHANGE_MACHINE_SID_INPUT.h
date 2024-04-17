typedef struct _SD_CHANGE_MACHINE_SID_INPUT
{
  /* 0x0000 */ unsigned short CurrentMachineSIDOffset;
  /* 0x0002 */ unsigned short CurrentMachineSIDLength;
  /* 0x0004 */ unsigned short NewMachineSIDOffset;
  /* 0x0006 */ unsigned short NewMachineSIDLength;
} SD_CHANGE_MACHINE_SID_INPUT, *PSD_CHANGE_MACHINE_SID_INPUT; /* size: 0x0008 */

