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

