typedef struct _CHAR_INFO
{
  union
  {
    union
    {
      /* 0x0000 */ wchar_t UnicodeChar;
      /* 0x0000 */ char AsciiChar;
    }; /* size: 0x0002 */
  } /* size: 0x0002 */ Char;
  /* 0x0002 */ unsigned short Attributes;
} CHAR_INFO, *PCHAR_INFO; /* size: 0x0004 */

