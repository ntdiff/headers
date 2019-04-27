typedef struct _MAP_REGISTER_ENTRY
{
  /* 0x0000 */ void* MapRegister;
  /* 0x0004 */ unsigned char WriteToDevice;
  /* 0x0005 */ char __PADDING__[3];
} MAP_REGISTER_ENTRY, *PMAP_REGISTER_ENTRY; /* size: 0x0008 */

