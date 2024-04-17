typedef struct _NDR_CS_ROUTINES
{
  /* 0x0000 */ struct _NDR_CS_SIZE_CONVERT_ROUTINES* pSizeConvertRoutines;
  /* 0x0004 */ void** pTagGettingRoutines /* function */;
} NDR_CS_ROUTINES, *PNDR_CS_ROUTINES; /* size: 0x0008 */

