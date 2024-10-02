typedef struct _MI_WRITE_CALIBRATION
{
  /* 0x0000 */ unsigned long MaximumNumberProcessors;
  /* 0x0004 */ unsigned char OptimalWriteType;
  /* 0x0005 */ unsigned char CalibrationCompleted;
  /* 0x0006 */ unsigned char CalibrationFinal[2];
  /* 0x0008 */ unsigned __int64 PerProcessorNumberOfBytes;
  /* 0x0010 */ unsigned __int64 PerProcessorBandwidth[2];
  /* 0x0020 */ unsigned long OptimalWriteProcessors[2][2];
  /* 0x0030 */ struct _MI_WRITE_MODES* PureZeroing;
} MI_WRITE_CALIBRATION, *PMI_WRITE_CALIBRATION; /* size: 0x0038 */

