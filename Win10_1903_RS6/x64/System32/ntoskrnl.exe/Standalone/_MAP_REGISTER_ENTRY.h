typedef struct _MAP_REGISTER_ENTRY
{
  /* 0x0000 */ void* MapRegister;
  /* 0x0008 */ unsigned char WriteToDevice;
  /* 0x0009 */ char __PADDING__[7];
} MAP_REGISTER_ENTRY, *PMAP_REGISTER_ENTRY; /* size: 0x0010 */

