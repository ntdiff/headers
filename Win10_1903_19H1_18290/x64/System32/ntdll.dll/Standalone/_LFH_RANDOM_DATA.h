typedef union _LFH_RANDOM_DATA
{
  union
  {
    /* 0x0000 */ unsigned char Bytes[256];
    /* 0x0000 */ unsigned short Words[128];
    /* 0x0000 */ unsigned __int64 Quadwords[32];
  }; /* size: 0x0100 */
} LFH_RANDOM_DATA, *PLFH_RANDOM_DATA; /* size: 0x0100 */

