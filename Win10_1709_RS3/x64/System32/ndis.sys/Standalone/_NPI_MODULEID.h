typedef enum _NPI_MODULEID_TYPE
{
  MIT_GUID = 1,
  MIT_IF_LUID = 2,
} NPI_MODULEID_TYPE, *PNPI_MODULEID_TYPE;

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _LUID
{
  /* 0x0000 */ unsigned long LowPart;
  /* 0x0004 */ long HighPart;
} LUID, *PLUID; /* size: 0x0008 */

typedef struct _NPI_MODULEID
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0004 */ enum _NPI_MODULEID_TYPE Type;
  union
  {
    /* 0x0008 */ struct _GUID Guid;
    struct
    {
      /* 0x0008 */ struct _LUID IfLuid;
      /* 0x0010 */ long __PADDING__[2];
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
} NPI_MODULEID, *PNPI_MODULEID; /* size: 0x0018 */

