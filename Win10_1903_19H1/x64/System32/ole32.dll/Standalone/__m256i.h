typedef union __m256i
{
  union
  {
    /* 0x0000 */ char m256i_i8[32];
    /* 0x0000 */ short m256i_i16[16];
    /* 0x0000 */ int m256i_i32[8];
    /* 0x0000 */ __int64 m256i_i64[4];
    /* 0x0000 */ unsigned char m256i_u8[32];
    /* 0x0000 */ unsigned short m256i_u16[16];
    /* 0x0000 */ unsigned int m256i_u32[8];
    /* 0x0000 */ unsigned __int64 m256i_u64[4];
  }; /* size: 0x0020 */
} _m256i, *P_m256i; /* size: 0x0020 */

