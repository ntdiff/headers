typedef struct _GP_LOG_PAGE_DESCRIPTOR
{
  /* 0x0000 */ unsigned short LogAddress;
  /* 0x0002 */ unsigned short LogSectors;
} GP_LOG_PAGE_DESCRIPTOR, *PGP_LOG_PAGE_DESCRIPTOR; /* size: 0x0004 */

typedef struct _DEVICEDUMP_PRIVATE_SUBSECTION
{
  /* 0x0000 */ unsigned long dwFlags;
  /* 0x0004 */ struct _GP_LOG_PAGE_DESCRIPTOR GPLogId;
  /* 0x0008 */ unsigned char bData[1];
} DEVICEDUMP_PRIVATE_SUBSECTION, *PDEVICEDUMP_PRIVATE_SUBSECTION; /* size: 0x0009 */

