typedef struct _IMAGE_IMPORT_CONTROL_TRANSFER_ARM64_RELOCATION
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long PageRelativeOffset : 10; /* bit position: 0 */
    /* 0x0000 */ unsigned long IndirectCall : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned long RegisterIndex : 5; /* bit position: 11 */
    /* 0x0000 */ unsigned long ImportType : 1; /* bit position: 16 */
    /* 0x0000 */ unsigned long IATIndex : 15; /* bit position: 17 */
  }; /* bitfield */
} IMAGE_IMPORT_CONTROL_TRANSFER_ARM64_RELOCATION, *PIMAGE_IMPORT_CONTROL_TRANSFER_ARM64_RELOCATION; /* size: 0x0004 */

typedef struct _RTL_RETPOLINE_RELOCATION_INDEX
{
  /* 0x0000 */ unsigned short ImportRelocationSize;
  /* 0x0002 */ unsigned short IndirectRelocationSize;
  /* 0x0004 */ unsigned short SwitchJumpRelocationSize;
  /* 0x0006 */ unsigned short StraddleType;
  union
  {
    /* 0x0008 */ struct _IMAGE_IMPORT_CONTROL_TRANSFER_ARM64_RELOCATION Import;
  } /* size: 0x0004 */ StraddleReloc;
} RTL_RETPOLINE_RELOCATION_INDEX, *PRTL_RETPOLINE_RELOCATION_INDEX; /* size: 0x000c */

