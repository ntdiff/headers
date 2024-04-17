typedef struct _GENERIC_BINDING_ROUTINE_PAIR
{
  /* 0x0000 */ void* pfnBind /* function */;
  /* 0x0008 */ void* pfnUnbind /* function */;
} GENERIC_BINDING_ROUTINE_PAIR, *PGENERIC_BINDING_ROUTINE_PAIR; /* size: 0x0010 */

