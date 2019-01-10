typedef struct _RTL_HP_LFH_CONFIG
{
  /* 0x0000 */ unsigned short MaxBlockSize;
  /* 0x0002 */ unsigned short MaxSubsegmentPages;
} RTL_HP_LFH_CONFIG, *PRTL_HP_LFH_CONFIG; /* size: 0x0004 */

typedef struct _RTL_HP_VS_CONFIG
{
  struct
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long PageAlignLargeAllocs : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long FullDecommit : 1; /* bit position: 1 */
    }; /* bitfield */
  } /* size: 0x0004 */ Flags;
} RTL_HP_VS_CONFIG, *PRTL_HP_VS_CONFIG; /* size: 0x0004 */

typedef struct _RTL_HP_SUB_ALLOCATOR_CONFIGS
{
  /* 0x0000 */ struct _RTL_HP_LFH_CONFIG LfhConfigs;
  /* 0x0004 */ struct _RTL_HP_VS_CONFIG VsConfigs;
} RTL_HP_SUB_ALLOCATOR_CONFIGS, *PRTL_HP_SUB_ALLOCATOR_CONFIGS; /* size: 0x0008 */

