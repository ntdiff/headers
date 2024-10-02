typedef enum _EXP_POOL_CONTEXT_TYPE
{
  ExpPoolContextInvalid = 0,
  ExpPoolContextPrivate = 1,
  ExpPoolContextSecure = 2,
} EXP_POOL_CONTEXT_TYPE, *PEXP_POOL_CONTEXT_TYPE;

typedef struct _EXP_POOL_CONTEXT_HEADER
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0004 */ enum _EXP_POOL_CONTEXT_TYPE ContextType;
} EXP_POOL_CONTEXT_HEADER, *PEXP_POOL_CONTEXT_HEADER; /* size: 0x0008 */

