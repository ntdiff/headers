typedef struct _WHEA_ERROR_SOURCE_CONFIGURATION_DD
{
  /* 0x0000 */ void* Initialize /* function */;
  /* 0x0008 */ void* Uninitialize /* function */;
  /* 0x0010 */ void* Correct /* function */;
} WHEA_ERROR_SOURCE_CONFIGURATION_DD, *PWHEA_ERROR_SOURCE_CONFIGURATION_DD; /* size: 0x0018 */

