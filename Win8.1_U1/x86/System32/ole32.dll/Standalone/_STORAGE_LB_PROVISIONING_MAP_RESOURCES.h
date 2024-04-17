typedef struct _STORAGE_LB_PROVISIONING_MAP_RESOURCES
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ unsigned long Version;
  struct /* bitfield */
  {
    /* 0x0008 */ unsigned char AvailableMappingResourcesValid : 1; /* bit position: 0 */
    /* 0x0008 */ unsigned char UsedMappingResourcesValid : 1; /* bit position: 1 */
    /* 0x0008 */ unsigned char Reserved0 : 6; /* bit position: 2 */
  }; /* bitfield */
  /* 0x0009 */ unsigned char Reserved1[3];
  struct /* bitfield */
  {
    /* 0x000c */ unsigned char AvailableMappingResourcesScope : 2; /* bit position: 0 */
    /* 0x000c */ unsigned char UsedMappingResourcesScope : 2; /* bit position: 2 */
    /* 0x000c */ unsigned char Reserved2 : 4; /* bit position: 4 */
  }; /* bitfield */
  /* 0x000d */ unsigned char Reserved3[3];
  /* 0x0010 */ unsigned __int64 AvailableMappingResources;
  /* 0x0018 */ unsigned __int64 UsedMappingResources;
} STORAGE_LB_PROVISIONING_MAP_RESOURCES, *PSTORAGE_LB_PROVISIONING_MAP_RESOURCES; /* size: 0x0020 */

