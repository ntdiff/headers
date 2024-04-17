typedef union __m128i
{
  union
  {
    /* 0x0000 */ char m128i_i8[16];
    /* 0x0000 */ short m128i_i16[8];
    /* 0x0000 */ int m128i_i32[4];
    /* 0x0000 */ __int64 m128i_i64[2];
    /* 0x0000 */ unsigned char m128i_u8[16];
    /* 0x0000 */ unsigned short m128i_u16[8];
    /* 0x0000 */ unsigned int m128i_u32[4];
    /* 0x0000 */ unsigned __int64 m128i_u64[2];
  }; /* size: 0x0010 */
} _m128i, *P_m128i; /* size: 0x0010 */

