typedef struct _OB_EXTENDED_PARSE_PARAMETERS
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0004 */ unsigned long RestrictedAccessMask;
  /* 0x0008 */ struct _EJOB* Silo;
} OB_EXTENDED_PARSE_PARAMETERS, *POB_EXTENDED_PARSE_PARAMETERS; /* size: 0x0010 */

