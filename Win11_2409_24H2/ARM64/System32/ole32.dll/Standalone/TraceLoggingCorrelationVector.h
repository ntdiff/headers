class TraceLoggingCorrelationVector
{
  union
  {
    struct
    {
      /* 0x0000 */ char m_CvBaseValue[129];
      /* 0x0081 */ unsigned char m_cchCvBaseValue;
      /* 0x0082 */ const unsigned char m_MaxCvLengthIncNull;
      /* 0x0088 */ volatile unsigned __int64 m_CurrentIdAndSize;
    }; /* size: 0x008b */
    /* 0x0000 */ const unsigned __int64 OVERFLOW_BIT_MASK;
  }; /* size: 0x008b */
}; /* size: 0x0090 */

