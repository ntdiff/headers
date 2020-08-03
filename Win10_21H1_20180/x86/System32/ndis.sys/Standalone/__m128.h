typedef union __m128
{
  union
  {
    /* 0x0000 */ float m128_f32[4];
    /* 0x0000 */ unsigned __int64 m128_u64[2];
    /* 0x0000 */ char m128_i8[16];
    /* 0x0000 */ short m128_i16[8];
    /* 0x0000 */ int m128_i32[4];
    /* 0x0000 */ __int64 m128_i64[2];
    /* 0x0000 */ unsigned char m128_u8[16];
    /* 0x0000 */ unsigned short m128_u16[8];
    /* 0x0000 */ unsigned int m128_u32[4];
  }; /* size: 0x0010 */
} _m128, *P_m128; /* size: 0x0010 */

