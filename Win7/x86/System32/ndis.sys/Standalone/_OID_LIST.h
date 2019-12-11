typedef struct _OID_LIST
{
  /* 0x0000 */ unsigned long StatsOidCount;
  /* 0x0004 */ unsigned long FullOidCount;
  /* 0x0008 */ unsigned long* StatsOidArray;
  /* 0x000c */ unsigned long* FullOidArray;
} OID_LIST, *POID_LIST; /* size: 0x0010 */

