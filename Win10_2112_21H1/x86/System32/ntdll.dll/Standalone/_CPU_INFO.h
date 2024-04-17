typedef union _CPU_INFO
{
  union
  {
    /* 0x0000 */ unsigned int AsUINT32[4];
    struct
    {
      /* 0x0000 */ unsigned long Eax;
      /* 0x0004 */ unsigned long Ebx;
      /* 0x0008 */ unsigned long Ecx;
      /* 0x000c */ unsigned long Edx;
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
} CPU_INFO, *PCPU_INFO; /* size: 0x0010 */

