typedef struct _FILE_OBJECTID_INFORMATION
{
  /* 0x0000 */ __int64 FileReference;
  /* 0x0008 */ unsigned char ObjectId[16];
  union
  {
    struct
    {
      /* 0x0018 */ unsigned char BirthVolumeId[16];
      /* 0x0028 */ unsigned char BirthObjectId[16];
      /* 0x0038 */ unsigned char DomainId[16];
    }; /* size: 0x0030 */
    /* 0x0018 */ unsigned char ExtendedInfo[48];
  }; /* size: 0x0030 */
} FILE_OBJECTID_INFORMATION, *PFILE_OBJECTID_INFORMATION; /* size: 0x0048 */

