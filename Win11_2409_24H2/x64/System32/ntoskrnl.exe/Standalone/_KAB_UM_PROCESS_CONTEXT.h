typedef struct _KAB_UM_PROCESS_CONTEXT
{
  /* 0x0000 */ struct _KAB_UM_PROCESS_TREE* Trees;
  /* 0x0008 */ unsigned long TreeCount;
  /* 0x000c */ long __PADDING__[1];
} KAB_UM_PROCESS_CONTEXT, *PKAB_UM_PROCESS_CONTEXT; /* size: 0x0010 */

