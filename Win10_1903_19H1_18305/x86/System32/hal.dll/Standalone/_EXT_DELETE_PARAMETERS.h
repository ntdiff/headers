typedef struct _EXT_DELETE_PARAMETERS
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ void* DeleteCallback /* function */;
  /* 0x000c */ void* DeleteContext;
} EXT_DELETE_PARAMETERS, *PEXT_DELETE_PARAMETERS; /* size: 0x0010 */

