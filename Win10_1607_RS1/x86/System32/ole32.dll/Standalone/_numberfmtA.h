typedef struct _numberfmtA
{
  /* 0x0000 */ unsigned int NumDigits;
  /* 0x0004 */ unsigned int LeadingZero;
  /* 0x0008 */ unsigned int Grouping;
  /* 0x000c */ char* lpDecimalSep;
  /* 0x0010 */ char* lpThousandSep;
  /* 0x0014 */ unsigned int NegativeOrder;
} numberfmtA, *PnumberfmtA; /* size: 0x0018 */

