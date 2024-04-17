typedef enum _PROPOP
{
  PROPOP_IGNORE = 1,
  PROPOP_DELETE = 2,
  PROPOP_INSERT = 3,
  PROPOP_MOVE = 4,
  PROPOP_UPDATE = 5,
} PROPOP, *PPROPOP;

struct tagPROPERTY_INFORMATION
{
  /* 0x0000 */ unsigned long pid;
  /* 0x0004 */ unsigned long cbprop;
  /* 0x0008 */ enum _PROPOP operation;
}; /* size: 0x000c */

