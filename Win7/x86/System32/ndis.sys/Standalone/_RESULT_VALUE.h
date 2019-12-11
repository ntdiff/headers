typedef union _RESULT_VALUE
{
  union
  {
    /* 0x0000 */ unsigned char ResultByteValue;
    /* 0x0000 */ unsigned short ResultShortValue;
    /* 0x0000 */ unsigned long ResultLongValue;
    /* 0x0000 */ unsigned __int64 ResultLong64Value;
    /* 0x0000 */ unsigned char ResultByteArrayValue[16];
  }; /* size: 0x0010 */
} RESULT_VALUE, *PRESULT_VALUE; /* size: 0x0010 */

