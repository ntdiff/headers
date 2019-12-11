typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _DEVPROPKEY
{
  /* 0x0000 */ struct _GUID fmtid;
  /* 0x0010 */ unsigned long pid;
} DEVPROPKEY, *PDEVPROPKEY; /* size: 0x0014 */

typedef enum _DEVPROPSTORE
{
  DEVPROP_STORE_SYSTEM = 0,
  DEVPROP_STORE_USER = 1,
} DEVPROPSTORE, *PDEVPROPSTORE;

typedef struct _DEVPROPCOMPKEY
{
  /* 0x0000 */ struct _DEVPROPKEY Key;
  /* 0x0014 */ enum _DEVPROPSTORE Store;
  /* 0x0018 */ const wchar_t* LocaleName;
} DEVPROPCOMPKEY, *PDEVPROPCOMPKEY; /* size: 0x001c */

