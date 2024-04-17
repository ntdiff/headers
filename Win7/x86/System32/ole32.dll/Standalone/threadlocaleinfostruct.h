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
    /* 0x004c */ unsigned short* wlocale;
    /* 0x0050 */ int* refcount;
    /* 0x0054 */ int* wrefcount;
  } /* size: 0x0010 */ lc_category[6];
  /* 0x00a8 */ int lc_clike;
  /* 0x00ac */ int mb_cur_max;
  /* 0x00b0 */ int* lconv_intl_refcount;
  /* 0x00b4 */ int* lconv_num_refcount;
  /* 0x00b8 */ int* lconv_mon_refcount;
  /* 0x00bc */ struct lconv* lconv;
  /* 0x00c0 */ int* ctype1_refcount;
  /* 0x00c4 */ unsigned short* ctype1;
  /* 0x00c8 */ const unsigned short* pctype;
  /* 0x00cc */ const unsigned char* pclmap;
  /* 0x00d0 */ const unsigned char* pcumap;
  /* 0x00d4 */ struct __lc_time_data* lc_time_curr;
}; /* size: 0x00d8 */

