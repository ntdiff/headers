typedef struct _LOADER_RESET_REASON
{
  /* 0x0000 */ unsigned char Supplied;
  union
  {
    union
    {
      struct
      {
        /* 0x0008 */ unsigned char Pch;
        /* 0x0009 */ unsigned char EmbeddedController;
        /* 0x000a */ unsigned char Reserved[6];
      } /* size: 0x0008 */ Component;
      /* 0x0008 */ unsigned __int64 AsULONG64;
      /* 0x0008 */ unsigned char AsBytes[8];
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ Basic;
  /* 0x0010 */ unsigned long AdditionalInfo[8];
} LOADER_RESET_REASON, *PLOADER_RESET_REASON; /* size: 0x0030 */

