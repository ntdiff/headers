typedef struct _NDR64_RANGE_FORMAT
{
  /* 0x0000 */ unsigned char FormatCode;
  /* 0x0001 */ unsigned char RangeType;
  /* 0x0002 */ unsigned short Reserved;
  /* 0x0008 */ __int64 MinValue;
  /* 0x0010 */ __int64 MaxValue;
} NDR64_RANGE_FORMAT, *PNDR64_RANGE_FORMAT; /* size: 0x0018 */

typedef struct _NDR64_EXPR_OPERATOR
{
  /* 0x0000 */ unsigned char ExprType;
  /* 0x0001 */ unsigned char Operator;
  /* 0x0002 */ unsigned char CastType;
  /* 0x0003 */ unsigned char Reserved;
} NDR64_EXPR_OPERATOR, *PNDR64_EXPR_OPERATOR; /* size: 0x0004 */

typedef struct _NDR64_EXPR_VAR
{
  /* 0x0000 */ unsigned char ExprType;
  /* 0x0001 */ unsigned char VarType;
  /* 0x0002 */ unsigned short Reserved;
  /* 0x0004 */ unsigned int Offset;
} NDR64_EXPR_VAR, *PNDR64_EXPR_VAR; /* size: 0x0008 */

typedef struct __midl_frag1734_t
{
  /* 0x0000 */ unsigned int frag1;
  /* 0x0008 */ struct _NDR64_RANGE_FORMAT frag2;
  /* 0x0020 */ struct _NDR64_EXPR_OPERATOR frag3;
  /* 0x0024 */ struct _NDR64_EXPR_VAR frag4;
  /* 0x002c */ long __PADDING__[1];
} _midl_frag1734_t, *P_midl_frag1734_t; /* size: 0x0030 */

