typedef struct _currencyfmtW
{
  /* 0x0000 */ unsigned int NumDigits;
  /* 0x0004 */ unsigned int LeadingZero;
  /* 0x0008 */ unsigned int Grouping;
  /* 0x000c */ wchar_t* lpDecimalSep;
  /* 0x0010 */ wchar_t* lpThousandSep;
  /* 0x0014 */ unsigned int NegativeOrder;
  /* 0x0018 */ unsigned int PositiveOrder;
  /* 0x001c */ wchar_t* lpCurrencySymbol;
} currencyfmtW, *PcurrencyfmtW; /* size: 0x0020 */

