typedef struct _CONTAINER_ROOT_INFO_OUTPUT
{
  /* 0x0000 */ unsigned short ContainerRootIdLength;
  /* 0x0002 */ unsigned char ContainerRootId[1];
  /* 0x0003 */ char __PADDING__[1];
} CONTAINER_ROOT_INFO_OUTPUT, *PCONTAINER_ROOT_INFO_OUTPUT; /* size: 0x0004 */

