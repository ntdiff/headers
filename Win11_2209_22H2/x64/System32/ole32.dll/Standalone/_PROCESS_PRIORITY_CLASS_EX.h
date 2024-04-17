typedef struct _PROCESS_PRIORITY_CLASS_EX
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned short ForegroundValid : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned short PriorityClassValid : 1; /* bit position: 1 */
    }; /* bitfield */
    /* 0x0000 */ unsigned short AllFlags;
  }; /* size: 0x0002 */
  /* 0x0002 */ unsigned char PriorityClass;
  /* 0x0003 */ unsigned char Foreground;
} PROCESS_PRIORITY_CLASS_EX, *PPROCESS_PRIORITY_CLASS_EX; /* size: 0x0004 */

