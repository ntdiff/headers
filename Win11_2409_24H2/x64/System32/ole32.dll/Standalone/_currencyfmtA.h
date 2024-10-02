typedef struct _currencyfmtA
{
  /* 0x0000 */ unsigned int NumDigits;
  /* 0x0004 */ unsigned int LeadingZero;
  /* 0x0008 */ unsigned int Grouping;
  /* 0x0010 */ char* lpDecimalSep;
  /* 0x0018 */ char* lpThousandSep;
  /* 0x0020 */ unsigned int NegativeOrder;
  /* 0x0024 */ unsigned int PositiveOrder;
  /* 0x0028 */ char* lpCurrencySymbol;
} currencyfmtA, *PcurrencyfmtA; /* size: 0x0030 */

