struct mmtime_tag
{
  /* 0x0000 */ unsigned int wType;
  union
  {
    union
    {
      /* 0x0004 */ unsigned long ms;
      /* 0x0004 */ unsigned long sample;
      /* 0x0004 */ unsigned long cb;
      /* 0x0004 */ unsigned long ticks;
      struct
      {
        /* 0x0004 */ unsigned char hour;
        /* 0x0005 */ unsigned char min;
        /* 0x0006 */ unsigned char sec;
        /* 0x0007 */ unsigned char frame;
        /* 0x0008 */ unsigned char fps;
        /* 0x0009 */ unsigned char dummy;
        /* 0x000a */ unsigned char pad[2];
      } /* size: 0x0008 */ smpte;
      struct
      {
        /* 0x0004 */ unsigned long songptrpos;
      } /* size: 0x0004 */ midi;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u;
}; /* size: 0x000c */

