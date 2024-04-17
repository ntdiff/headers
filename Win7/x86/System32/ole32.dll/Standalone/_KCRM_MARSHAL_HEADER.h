typedef struct _KCRM_MARSHAL_HEADER
{
  /* 0x0000 */ unsigned long VersionMajor;
  /* 0x0004 */ unsigned long VersionMinor;
  /* 0x0008 */ unsigned long NumProtocols;
  /* 0x000c */ unsigned long Unused;
} KCRM_MARSHAL_HEADER, *PKCRM_MARSHAL_HEADER; /* size: 0x0010 */

