typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _NDIS_GUID
{
  /* 0x0000 */ struct _GUID Guid;
  union
  {
    /* 0x0010 */ unsigned long Oid;
    /* 0x0010 */ int Status;
  }; /* size: 0x0004 */
  /* 0x0014 */ unsigned long Size;
  /* 0x0018 */ unsigned long Flags;
} NDIS_GUID, *PNDIS_GUID; /* size: 0x001c */

