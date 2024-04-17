enum VSAParameterType
{
  cVSAParameterKeyMask = -2147483648,
  cVSAParameterKeyString = -2147483648,
  cVSAParameterValueMask = 0x7ffff,
  cVSAParameterValueTypeMask = 0x70000,
  cVSAParameterValueUnicodeString = 0,
  cVSAParameterValueANSIString = 0x10000,
  cVSAParameterValueGUID = 0x20000,
  cVSAParameterValueDWORD = 0x30000,
  cVSAParameterValueBYTEArray = 0x40000,
  cVSAParameterValueLengthMask = 0xffffffff,
};

