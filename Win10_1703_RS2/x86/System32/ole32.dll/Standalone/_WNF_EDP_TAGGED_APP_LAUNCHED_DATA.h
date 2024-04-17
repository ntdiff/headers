typedef enum _EDP_TAGGED_APP_MODE
{
  EdpTagUnenlightenedEnterpriseWin32 = 1,
  EdpTagUnenlightenedEnterpriseModern = 2,
} EDP_TAGGED_APP_MODE, *PEDP_TAGGED_APP_MODE;

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _WNF_EDP_TAGGED_APP_LAUNCHED_DATA
{
  /* 0x0000 */ enum _EDP_TAGGED_APP_MODE Mode;
  /* 0x0004 */ struct _UNICODE_STRING AppFilePath;
  /* 0x000c */ struct _UNICODE_STRING EnterpriseId;
} WNF_EDP_TAGGED_APP_LAUNCHED_DATA, *PWNF_EDP_TAGGED_APP_LAUNCHED_DATA; /* size: 0x0014 */

