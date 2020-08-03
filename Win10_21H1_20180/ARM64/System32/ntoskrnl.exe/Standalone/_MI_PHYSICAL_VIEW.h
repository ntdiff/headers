typedef struct _RTL_BALANCED_NODE
{
  union
  {
    /* 0x0000 */ struct _RTL_BALANCED_NODE* Children[2];
    struct
    {
      /* 0x0000 */ struct _RTL_BALANCED_NODE* Left;
      /* 0x0008 */ struct _RTL_BALANCED_NODE* Right;
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
  union
  {
    /* 0x0010 */ unsigned char Red : 1; /* bit position: 0 */
    /* 0x0010 */ unsigned char Balance : 2; /* bit position: 0 */
    /* 0x0010 */ unsigned __int64 ParentValue;
  }; /* size: 0x0008 */
} RTL_BALANCED_NODE, *PRTL_BALANCED_NODE; /* size: 0x0018 */

typedef struct _MI_PHYSICAL_VIEW
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE PhysicalNode;
  /* 0x0018 */ struct _MMVAD_SHORT* Vad;
  /* 0x0020 */ struct _AWEINFO* AweInfo;
  union
  {
    union
    {
      /* 0x0028 */ unsigned long ViewPageSize : 2; /* bit position: 0 */
      /* 0x0028 */ struct _CONTROL_AREA* ControlArea;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u1;
} MI_PHYSICAL_VIEW, *PMI_PHYSICAL_VIEW; /* size: 0x0030 */

