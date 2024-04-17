typedef struct _NDR64_EXPR_VAR
{
  /* 0x0000 */ unsigned char ExprType;
  /* 0x0001 */ unsigned char VarType;
  /* 0x0002 */ unsigned short Reserved;
  /* 0x0004 */ unsigned int Offset;
} NDR64_EXPR_VAR, *PNDR64_EXPR_VAR; /* size: 0x0008 */

typedef struct __midl_frag450_t
{
  /* 0x0000 */ unsigned int frag1;
  /* 0x0004 */ struct _NDR64_EXPR_VAR frag2;
} _midl_frag450_t, *P_midl_frag450_t; /* size: 0x000c */

