typedef union __m512i
{
  union
  {
    /* 0x0000 */ char m512i_i8[64];
    /* 0x0000 */ short m512i_i16[32];
    /* 0x0000 */ int m512i_i32[16];
    /* 0x0000 */ __int64 m512i_i64[8];
    /* 0x0000 */ unsigned char m512i_u8[64];
    /* 0x0000 */ unsigned short m512i_u16[32];
    /* 0x0000 */ unsigned int m512i_u32[16];
    /* 0x0000 */ unsigned __int64 m512i_u64[8];
  }; /* size: 0x0040 */
} _m512i, *P_m512i; /* size: 0x0040 */

