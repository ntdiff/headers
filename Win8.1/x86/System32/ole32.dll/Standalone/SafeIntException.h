enum SafeIntError
{
  SafeIntNoError = 0,
  SafeIntArithmeticOverflow = 1,
  SafeIntDivideByZero = 2,
};

class SafeIntException
{
  /* 0x0000 */ enum SafeIntError m_code;
}; /* size: 0x0004 */

