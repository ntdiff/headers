typedef struct _FILETIME
{
  /* 0x0000 */ unsigned long dwLowDateTime;
  /* 0x0004 */ unsigned long dwHighDateTime;
} FILETIME, *PFILETIME; /* size: 0x0008 */

union FT
{
  union
  {
    /* 0x0000 */ unsigned __int64 ft_scalar;
    /* 0x0000 */ struct _FILETIME ft_struct;
  }; /* size: 0x0008 */
}; /* size: 0x0008 */

