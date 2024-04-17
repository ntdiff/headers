typedef struct _CERT_SYSTEM_STORE_RELOCATE_PARA
{
  union
  {
    /* 0x0000 */ struct HKEY__* hKeyBase;
    /* 0x0000 */ void* pvBase;
  }; /* size: 0x0004 */
  union
  {
    /* 0x0004 */ void* pvSystemStore;
    /* 0x0004 */ const char* pszSystemStore;
    /* 0x0004 */ const wchar_t* pwszSystemStore;
  }; /* size: 0x0004 */
} CERT_SYSTEM_STORE_RELOCATE_PARA, *PCERT_SYSTEM_STORE_RELOCATE_PARA; /* size: 0x0008 */

