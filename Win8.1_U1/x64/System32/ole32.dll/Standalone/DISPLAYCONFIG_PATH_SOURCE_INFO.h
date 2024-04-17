typedef struct _LUID
{
  /* 0x0000 */ unsigned long LowPart;
  /* 0x0004 */ long HighPart;
} LUID, *PLUID; /* size: 0x0008 */

struct DISPLAYCONFIG_PATH_SOURCE_INFO
{
  /* 0x0000 */ struct _LUID adapterId;
  /* 0x0008 */ unsigned int id;
  /* 0x000c */ unsigned int modeInfoIdx;
  /* 0x0010 */ unsigned int statusFlags;
}; /* size: 0x0014 */

