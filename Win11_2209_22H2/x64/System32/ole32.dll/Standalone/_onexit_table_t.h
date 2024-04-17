typedef struct _onexit_table_t
{
  /* 0x0000 */ void** _first /* function */;
  /* 0x0008 */ void** _last /* function */;
  /* 0x0010 */ void** _end /* function */;
} onexit_table_t, *Ponexit_table_t; /* size: 0x0018 */

