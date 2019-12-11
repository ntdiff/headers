struct FILTERDBS
{
  union
  {
    /* 0x0000 */ struct _X_FILTER* EthDB;
    /* 0x0000 */ struct _X_FILTER* NullDB;
  }; /* size: 0x0004 */
  /* 0x0004 */ struct _X_FILTER* TrDB;
  /* 0x0008 */ void* YYYDB;
  /* 0x000c */ void* XXXDB;
}; /* size: 0x0010 */

