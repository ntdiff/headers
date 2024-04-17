typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _SILOOBJECT_ROOT_DIRECTORY
{
  union
  {
    /* 0x0000 */ unsigned long ControlFlags;
    /* 0x0000 */ struct _UNICODE_STRING Path;
  }; /* size: 0x0010 */
} SILOOBJECT_ROOT_DIRECTORY, *PSILOOBJECT_ROOT_DIRECTORY; /* size: 0x0010 */

