typedef struct _numberfmtW
{
  /* 0x0000 */ unsigned int NumDigits;
  /* 0x0004 */ unsigned int LeadingZero;
  /* 0x0008 */ unsigned int Grouping;
  /* 0x0010 */ wchar_t* lpDecimalSep;
  /* 0x0018 */ wchar_t* lpThousandSep;
  /* 0x0020 */ unsigned int NegativeOrder;
  /* 0x0024 */ long __PADDING__[1];
} numberfmtW, *PnumberfmtW; /* size: 0x0028 */

