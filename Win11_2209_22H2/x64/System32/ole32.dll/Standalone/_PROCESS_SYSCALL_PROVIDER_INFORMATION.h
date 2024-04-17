typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _PROCESS_SYSCALL_PROVIDER_INFORMATION
{
  /* 0x0000 */ struct _GUID ProviderId;
  /* 0x0010 */ unsigned char Level;
  /* 0x0011 */ char __PADDING__[3];
} PROCESS_SYSCALL_PROVIDER_INFORMATION, *PPROCESS_SYSCALL_PROVIDER_INFORMATION; /* size: 0x0014 */

