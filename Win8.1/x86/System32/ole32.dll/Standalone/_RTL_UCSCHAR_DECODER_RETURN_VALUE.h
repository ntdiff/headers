typedef struct _RTL_UCSCHAR_DECODER_RETURN_VALUE
{
  /* 0x0000 */ unsigned long UcsCharacter;
  union
  {
    /* 0x0004 */ long FailureReason;
    /* 0x0004 */ const unsigned char* NewCursorValue;
  }; /* size: 0x0004 */
} RTL_UCSCHAR_DECODER_RETURN_VALUE, *PRTL_UCSCHAR_DECODER_RETURN_VALUE; /* size: 0x0008 */

