typedef struct _MI_COLOR_BASE
{
  /* 0x0000 */ unsigned short* ColorPointer;
  /* 0x0008 */ unsigned short ColorMask;
  /* 0x000a */ unsigned short ColorNode;
  /* 0x000c */ long __PADDING__[1];
} MI_COLOR_BASE, *PMI_COLOR_BASE; /* size: 0x0010 */

