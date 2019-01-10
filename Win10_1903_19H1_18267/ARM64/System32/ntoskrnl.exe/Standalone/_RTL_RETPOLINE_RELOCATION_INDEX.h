typedef struct _IMAGE_IMPORT_CONTROL_TRANSFER_DYNAMIC_RELOCATION
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long PageRelativeOffset : 12; /* bit position: 0 */
    /* 0x0000 */ unsigned long IndirectCall : 1; /* bit position: 12 */
    /* 0x0000 */ unsigned long IATIndex : 19; /* bit position: 13 */
  }; /* bitfield */
} IMAGE_IMPORT_CONTROL_TRANSFER_DYNAMIC_RELOCATION, *PIMAGE_IMPORT_CONTROL_TRANSFER_DYNAMIC_RELOCATION; /* size: 0x0004 */

typedef struct _IMAGE_INDIR_CONTROL_TRANSFER_DYNAMIC_RELOCATION
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned short PageRelativeOffset : 12; /* bit position: 0 */
    /* 0x0000 */ unsigned short IndirectCall : 1; /* bit position: 12 */
    /* 0x0000 */ unsigned short RexWPrefix : 1; /* bit position: 13 */
    /* 0x0000 */ unsigned short CfgCheck : 1; /* bit position: 14 */
    /* 0x0000 */ unsigned short Reserved : 1; /* bit position: 15 */
  }; /* bitfield */
} IMAGE_INDIR_CONTROL_TRANSFER_DYNAMIC_RELOCATION, *PIMAGE_INDIR_CONTROL_TRANSFER_DYNAMIC_RELOCATION; /* size: 0x0002 */

typedef struct _IMAGE_SWITCHTABLE_BRANCH_DYNAMIC_RELOCATION
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned short PageRelativeOffset : 12; /* bit position: 0 */
    /* 0x0000 */ unsigned short RegisterNumber : 4; /* bit position: 12 */
  }; /* bitfield */
} IMAGE_SWITCHTABLE_BRANCH_DYNAMIC_RELOCATION, *PIMAGE_SWITCHTABLE_BRANCH_DYNAMIC_RELOCATION; /* size: 0x0002 */

typedef struct _RTL_RETPOLINE_RELOCATION_INDEX
{
  /* 0x0000 */ unsigned short ImportRelocationSize;
  /* 0x0002 */ unsigned short IndirectRelocationSize;
  /* 0x0004 */ unsigned short SwitchJumpRelocationSize;
  /* 0x0006 */ unsigned short StraddleType;
  union
  {
    union
    {
      /* 0x0008 */ struct _IMAGE_IMPORT_CONTROL_TRANSFER_DYNAMIC_RELOCATION Import;
      /* 0x0008 */ struct _IMAGE_INDIR_CONTROL_TRANSFER_DYNAMIC_RELOCATION Indir;
      /* 0x0008 */ struct _IMAGE_SWITCHTABLE_BRANCH_DYNAMIC_RELOCATION SwitchJump;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ StraddleReloc;
} RTL_RETPOLINE_RELOCATION_INDEX, *PRTL_RETPOLINE_RELOCATION_INDEX; /* size: 0x000c */

