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

typedef union __n128
{
  union
  {
    /* 0x0000 */ unsigned __int64 n128_u64[2];
    /* 0x0000 */ unsigned int n128_u32[4];
    /* 0x0000 */ unsigned short n128_u16[8];
    /* 0x0000 */ unsigned char n128_u8[16];
    /* 0x0000 */ __int64 n128_i64[2];
    /* 0x0000 */ int n128_i32[4];
    /* 0x0000 */ short n128_i16[8];
    /* 0x0000 */ char n128_i8[16];
    /* 0x0000 */ unsigned __int64 n128_p64[2];
    /* 0x0000 */ unsigned int n128_p32[4];
    /* 0x0000 */ unsigned short n128_p16[8];
    /* 0x0000 */ unsigned char n128_p8[16];
    /* 0x0000 */ float n128_f32[4];
    /* 0x0000 */ double n128_f64[2];
    struct
    {
      /* 0x0000 */ union __n64 low64;
      /* 0x0008 */ union __n64 high64;
    } /* size: 0x0010 */ s;
  }; /* size: 0x0010 */
} _n128, *P_n128; /* size: 0x0010 */

typedef struct __n128x3
{
  /* 0x0000 */ union __n128 val[3];
} _n128x3, *P_n128x3; /* size: 0x0030 */

