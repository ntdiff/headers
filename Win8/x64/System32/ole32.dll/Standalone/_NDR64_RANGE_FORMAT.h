typedef struct _NDR64_RANGE_FORMAT
{
  /* 0x0000 */ unsigned char FormatCode;
  /* 0x0001 */ unsigned char RangeType;
  /* 0x0002 */ unsigned short Reserved;
  /* 0x0008 */ __int64 MinValue;
  /* 0x0010 */ __int64 MaxValue;
} NDR64_RANGE_FORMAT, *PNDR64_RANGE_FORMAT; /* size: 0x0018 */

