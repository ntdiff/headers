typedef union _GDI_NONREMOTE::__MIDL_IWinTypes_0002
{
  union
  {
    /* 0x0000 */ long hInproc;
    /* 0x0000 */ struct _DWORD_BLOB* hRemote;
  }; /* size: 0x0008 */
} GDI_NONREMOTE::__MIDL_IWinTypes_0002, *PGDI_NONREMOTE::__MIDL_IWinTypes_0002; /* size: 0x0008 */

typedef struct _GDI_NONREMOTE
{
  /* 0x0000 */ long fContext;
  /* 0x0008 */ union _GDI_NONREMOTE::__MIDL_IWinTypes_0002 u;
} GDI_NONREMOTE, *PGDI_NONREMOTE; /* size: 0x0010 */

