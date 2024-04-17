typedef struct _NDR64_EXPR_NOOP
{
  /* 0x0000 */ unsigned char ExprType;
  /* 0x0001 */ unsigned char Size;
  /* 0x0002 */ unsigned short Reserved;
} NDR64_EXPR_NOOP, *PNDR64_EXPR_NOOP; /* size: 0x0004 */

typedef struct _NDR64_EXPR_CONST64
{
  /* 0x0000 */ unsigned char ExprType;
  /* 0x0001 */ unsigned char Reserved;
  /* 0x0002 */ unsigned short Reserved1;
  /* 0x0008 */ __int64 ConstValue;
} NDR64_EXPR_CONST64, *PNDR64_EXPR_CONST64; /* size: 0x0010 */

typedef struct __midl_frag398_t
{
  /* 0x0000 */ unsigned int frag1;
  /* 0x0004 */ struct _NDR64_EXPR_NOOP frag2;
  /* 0x0008 */ struct _NDR64_EXPR_CONST64 frag3;
} _midl_frag398_t, *P_midl_frag398_t; /* size: 0x0018 */

