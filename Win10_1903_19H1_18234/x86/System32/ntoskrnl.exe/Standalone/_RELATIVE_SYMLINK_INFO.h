typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _RELATIVE_SYMLINK_INFO
{
  /* 0x0000 */ unsigned short ExposedNamespaceLength;
  /* 0x0002 */ unsigned short Flags;
  /* 0x0004 */ unsigned short DeviceNameLength;
  /* 0x0006 */ unsigned short Reserved;
  /* 0x0008 */ struct _RELATIVE_SYMLINK_INFO* InteriorMountPoint;
  /* 0x000c */ struct _UNICODE_STRING OpenedName;
} RELATIVE_SYMLINK_INFO, *PRELATIVE_SYMLINK_INFO; /* size: 0x0014 */

