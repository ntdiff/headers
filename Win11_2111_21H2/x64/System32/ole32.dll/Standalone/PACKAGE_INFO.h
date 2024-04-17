struct PACKAGE_VERSION
{
  union
  {
    /* 0x0000 */ unsigned __int64 Version;
    struct
    {
      /* 0x0000 */ unsigned short Revision;
      /* 0x0002 */ unsigned short Build;
      /* 0x0004 */ unsigned short Minor;
      /* 0x0006 */ unsigned short Major;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
}; /* size: 0x0008 */

struct PACKAGE_ID
{
  /* 0x0000 */ unsigned int reserved;
  /* 0x0004 */ unsigned int processorArchitecture;
  /* 0x0008 */ struct PACKAGE_VERSION version;
  /* 0x0010 */ wchar_t* name;
  /* 0x0018 */ wchar_t* publisher;
  /* 0x0020 */ wchar_t* resourceId;
  /* 0x0028 */ wchar_t* publisherId;
}; /* size: 0x0030 */

struct PACKAGE_INFO
{
  /* 0x0000 */ unsigned int reserved;
  /* 0x0004 */ unsigned int flags;
  /* 0x0008 */ wchar_t* path;
  /* 0x0010 */ wchar_t* packageFullName;
  /* 0x0018 */ wchar_t* packageFamilyName;
  /* 0x0020 */ struct PACKAGE_ID packageId;
}; /* size: 0x0050 */

