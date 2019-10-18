typedef struct _XSAVE_AREA_HEADER
{
  /* 0x0000 */ unsigned __int64 Mask;
  /* 0x0008 */ unsigned __int64 CompactionMask;
  /* 0x0010 */ unsigned __int64 Reserved2[6];
} XSAVE_AREA_HEADER, *PXSAVE_AREA_HEADER; /* size: 0x0040 */

