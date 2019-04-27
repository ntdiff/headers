typedef struct _IOSAPIC
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Length;
  /* 0x0002 */ unsigned char IOSAPICID;
  /* 0x0003 */ unsigned char Reserved;
  /* 0x0004 */ unsigned long SystemVectorBase;
  /* 0x0008 */ unsigned __int64 IOSAPICAddress;
} IOSAPIC, *PIOSAPIC; /* size: 0x0010 */

