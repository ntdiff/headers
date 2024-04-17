typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

struct KEY_PID_ARRAY
{
  /* 0x0000 */ void* PID;
  /* 0x0008 */ struct _UNICODE_STRING KeyName;
}; /* size: 0x0018 */

typedef struct _KEY_OPEN_SUBKEYS_INFORMATION
{
  /* 0x0000 */ unsigned long Count;
  /* 0x0008 */ struct KEY_PID_ARRAY KeyArray[1];
} KEY_OPEN_SUBKEYS_INFORMATION, *PKEY_OPEN_SUBKEYS_INFORMATION; /* size: 0x0020 */

