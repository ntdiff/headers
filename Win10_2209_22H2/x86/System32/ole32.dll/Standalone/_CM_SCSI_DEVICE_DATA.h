typedef struct _CM_SCSI_DEVICE_DATA
{
  /* 0x0000 */ unsigned short Version;
  /* 0x0002 */ unsigned short Revision;
  /* 0x0004 */ unsigned char HostIdentifier;
  /* 0x0005 */ char __PADDING__[1];
} CM_SCSI_DEVICE_DATA, *PCM_SCSI_DEVICE_DATA; /* size: 0x0006 */

