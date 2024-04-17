typedef struct _PRINTER_NOTIFY_INFO_DATA
{
  /* 0x0000 */ unsigned short Type;
  /* 0x0002 */ unsigned short Field;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ unsigned long Id;
  union
  {
    union
    {
      /* 0x000c */ unsigned long adwData[2];
      struct
      {
        /* 0x000c */ unsigned long cbBuf;
        /* 0x0010 */ void* pBuf;
      } /* size: 0x0008 */ Data;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ NotifyData;
} PRINTER_NOTIFY_INFO_DATA, *PPRINTER_NOTIFY_INFO_DATA; /* size: 0x0014 */

typedef struct _PRINTER_NOTIFY_INFO
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long Count;
  /* 0x000c */ struct _PRINTER_NOTIFY_INFO_DATA aData[1];
} PRINTER_NOTIFY_INFO, *PPRINTER_NOTIFY_INFO; /* size: 0x0020 */

