struct tMIXERCONTROLDETAILS
{
  /* 0x0000 */ unsigned long cbStruct;
  /* 0x0004 */ unsigned long dwControlID;
  /* 0x0008 */ unsigned long cChannels;
  union
  {
    /* 0x000c */ struct HWND__* hwndOwner;
    /* 0x000c */ unsigned long cMultipleItems;
  }; /* size: 0x0008 */
  /* 0x0014 */ unsigned long cbDetails;
  /* 0x0018 */ void* paDetails;
}; /* size: 0x0020 */

