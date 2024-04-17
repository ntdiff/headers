typedef struct _FILE_OBJECTID_BUFFER
{
  /* 0x0000 */ unsigned char ObjectId[16];
  union
  {
    struct
    {
      /* 0x0010 */ unsigned char BirthVolumeId[16];
      /* 0x0020 */ unsigned char BirthObjectId[16];
      /* 0x0030 */ unsigned char DomainId[16];
    }; /* size: 0x0030 */
    /* 0x0010 */ unsigned char ExtendedInfo[48];
  }; /* size: 0x0030 */
} FILE_OBJECTID_BUFFER, *PFILE_OBJECTID_BUFFER; /* size: 0x0040 */

