typedef struct _REFS_STREAM_EXTENT
{
  /* 0x0000 */ __int64 Vcn;
  /* 0x0008 */ __int64 Lcn;
  /* 0x0010 */ __int64 Length;
  /* 0x0018 */ unsigned short Properties;
  /* 0x001a */ char __PADDING__[6];
} REFS_STREAM_EXTENT, *PREFS_STREAM_EXTENT; /* size: 0x0020 */

