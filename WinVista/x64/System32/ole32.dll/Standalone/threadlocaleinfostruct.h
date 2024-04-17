struct tagLC_ID
{
  /* 0x0000 */ unsigned short wLanguage;
  /* 0x0002 */ unsigned short wCountry;
  /* 0x0004 */ unsigned short wCodePage;
}; /* size: 0x0006 */

struct threadlocaleinfostruct
{
  /* 0x0000 */ int refcount;
  /* 0x0004 */ unsigned int lc_codepage;
  /* 0x0008 */ unsigned int lc_collate_cp;
  /* 0x000c */ unsigned long lc_handle[6];
  /* 0x0024 */ struct tagLC_ID lc_id[6];
  /* 0x0048 */ struct
  {
    /* 0x0048 */ char* locale;
    /* 0x0050 */ unsigned short* wlocale;
    /* 0x0058 */ int* refcount;
    /* 0x0060 */ int* wrefcount;
  } /* size: 0x0020 */ lc_category[6];
  /* 0x0108 */ int lc_clike;
  /* 0x010c */ int mb_cur_max;
  /* 0x0110 */ int* lconv_intl_refcount;
  /* 0x0118 */ int* lconv_num_refcount;
  /* 0x0120 */ int* lconv_mon_refcount;
  /* 0x0128 */ struct lconv* lconv;
  /* 0x0130 */ int* ctype1_refcount;
  /* 0x0138 */ unsigned short* ctype1;
  /* 0x0140 */ const unsigned short* pctype;
  /* 0x0148 */ const unsigned char* pclmap;
  /* 0x0150 */ const unsigned char* pcumap;
  /* 0x0158 */ struct __lc_time_data* lc_time_curr;
}; /* size: 0x0160 */

