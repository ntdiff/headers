typedef struct _ETW_FILTER_STRING_TOKEN_ELEMENT
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0008 */ wchar_t* String;
} ETW_FILTER_STRING_TOKEN_ELEMENT, *PETW_FILTER_STRING_TOKEN_ELEMENT; /* size: 0x0010 */

typedef struct _ETW_FILTER_STRING_TOKEN
{
  /* 0x0000 */ unsigned short Count;
  /* 0x0008 */ struct _ETW_FILTER_STRING_TOKEN_ELEMENT Tokens[1];
} ETW_FILTER_STRING_TOKEN, *PETW_FILTER_STRING_TOKEN; /* size: 0x0018 */

