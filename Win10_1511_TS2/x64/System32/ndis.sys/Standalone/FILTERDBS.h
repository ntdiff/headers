struct FILTERDBS
{
  union
  {
    /* 0x0000 */ struct _X_FILTER* EthDB;
    /* 0x0000 */ struct _X_FILTER* NullDB;
  }; /* size: 0x0008 */
  /* 0x0008 */ struct _X_FILTER* TrDB;
  /* 0x0010 */ void* YYYDB;
  /* 0x0018 */ void* XXXDB;
}; /* size: 0x0020 */

