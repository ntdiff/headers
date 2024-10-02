typedef union __n64
{
  union
  {
    /* 0x0000 */ unsigned __int64 n64_u64[1];
    /* 0x0000 */ unsigned int n64_u32[2];
    /* 0x0000 */ unsigned short n64_u16[4];
    /* 0x0000 */ unsigned char n64_u8[8];
    /* 0x0000 */ __int64 n64_i64[1];
    /* 0x0000 */ int n64_i32[2];
    /* 0x0000 */ short n64_i16[4];
    /* 0x0000 */ char n64_i8[8];
    /* 0x0000 */ unsigned __int64 n64_p64[1];
    /* 0x0000 */ unsigned int n64_p32[2];
    /* 0x0000 */ unsigned short n64_p16[4];
    /* 0x0000 */ unsigned char n64_p8[8];
    /* 0x0000 */ float n64_f32[2];
    /* 0x0000 */ double n64_f64[1];
  }; /* size: 0x0008 */
} _n64, *P_n64; /* size: 0x0008 */

typedef struct __n64x4
{
  /* 0x0000 */ union __n64 val[4];
} _n64x4, *P_n64x4; /* size: 0x0020 */

