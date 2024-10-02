typedef enum _TVITEMPART
{
  TVGIPR_BUTTON = 1,
} TVITEMPART, *PTVITEMPART;

struct tagTVGETITEMPARTRECTINFO
{
  /* 0x0000 */ struct _TREEITEM* hti;
  /* 0x0008 */ struct tagRECT* prc;
  /* 0x0010 */ enum _TVITEMPART partID;
  /* 0x0014 */ long __PADDING__[1];
}; /* size: 0x0018 */

