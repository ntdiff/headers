typedef struct _GP_LOG_PAGE_DESCRIPTOR
{
  /* 0x0000 */ unsigned short LogAddress;
  /* 0x0002 */ unsigned short LogSectors;
} GP_LOG_PAGE_DESCRIPTOR, *PGP_LOG_PAGE_DESCRIPTOR; /* size: 0x0004 */

typedef struct _DEVICEDUMP_PUBLIC_SUBSECTION
{
  /* 0x0000 */ unsigned long dwFlags;
  /* 0x0004 */ struct _GP_LOG_PAGE_DESCRIPTOR GPLogTable[16];
  /* 0x0044 */ char szDescription[16];
  /* 0x0054 */ unsigned char bData[1];
} DEVICEDUMP_PUBLIC_SUBSECTION, *PDEVICEDUMP_PUBLIC_SUBSECTION; /* size: 0x0055 */

