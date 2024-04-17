typedef struct _HMAP_DIRECTORY
{
  /* 0x0000 */ struct _HMAP_TABLE* Directory[1024];
} HMAP_DIRECTORY, *PHMAP_DIRECTORY; /* size: 0x1000 */

