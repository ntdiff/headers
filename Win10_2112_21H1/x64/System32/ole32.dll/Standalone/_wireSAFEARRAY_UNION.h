typedef struct _wireSAFEARR_BSTR
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0008 */ struct _FLAGGED_WORD_BLOB** aBstr;
} wireSAFEARR_BSTR, *PwireSAFEARR_BSTR; /* size: 0x0010 */

typedef struct _wireSAFEARR_UNKNOWN
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0008 */ struct IUnknown** apUnknown;
} wireSAFEARR_UNKNOWN, *PwireSAFEARR_UNKNOWN; /* size: 0x0010 */

typedef struct _wireSAFEARR_DISPATCH
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0008 */ struct IDispatch** apDispatch;
} wireSAFEARR_DISPATCH, *PwireSAFEARR_DISPATCH; /* size: 0x0010 */

typedef struct _wireSAFEARR_VARIANT
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0008 */ struct _wireVARIANT** aVariant;
} wireSAFEARR_VARIANT, *PwireSAFEARR_VARIANT; /* size: 0x0010 */

typedef struct _wireSAFEARR_BRECORD
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0008 */ struct _wireBRECORD** aRecord;
} wireSAFEARR_BRECORD, *PwireSAFEARR_BRECORD; /* size: 0x0010 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _wireSAFEARR_HAVEIID
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0008 */ struct IUnknown** apUnknown;
  /* 0x0010 */ struct _GUID iid;
} wireSAFEARR_HAVEIID, *PwireSAFEARR_HAVEIID; /* size: 0x0020 */

typedef struct _BYTE_SIZEDARR
{
  /* 0x0000 */ unsigned long clSize;
  /* 0x0008 */ unsigned char* pData;
} BYTE_SIZEDARR, *PBYTE_SIZEDARR; /* size: 0x0010 */

typedef struct _SHORT_SIZEDARR
{
  /* 0x0000 */ unsigned long clSize;
  /* 0x0008 */ wchar_t* pData;
} SHORT_SIZEDARR, *PSHORT_SIZEDARR; /* size: 0x0010 */

typedef struct _LONG_SIZEDARR
{
  /* 0x0000 */ unsigned long clSize;
  /* 0x0008 */ unsigned long* pData;
} LONG_SIZEDARR, *PLONG_SIZEDARR; /* size: 0x0010 */

typedef struct _HYPER_SIZEDARR
{
  /* 0x0000 */ unsigned long clSize;
  /* 0x0008 */ __int64* pData;
} HYPER_SIZEDARR, *PHYPER_SIZEDARR; /* size: 0x0010 */

typedef union _wireSAFEARRAY_UNION::__MIDL_IOleAutomationTypes_0001
{
  union
  {
    /* 0x0000 */ struct _wireSAFEARR_BSTR BstrStr;
    /* 0x0000 */ struct _wireSAFEARR_UNKNOWN UnknownStr;
    /* 0x0000 */ struct _wireSAFEARR_DISPATCH DispatchStr;
    /* 0x0000 */ struct _wireSAFEARR_VARIANT VariantStr;
    /* 0x0000 */ struct _wireSAFEARR_BRECORD RecordStr;
    /* 0x0000 */ struct _wireSAFEARR_HAVEIID HaveIidStr;
    /* 0x0000 */ struct _BYTE_SIZEDARR ByteStr;
    /* 0x0000 */ struct _SHORT_SIZEDARR WordStr;
    /* 0x0000 */ struct _LONG_SIZEDARR LongStr;
    /* 0x0000 */ struct _HYPER_SIZEDARR HyperStr;
  }; /* size: 0x0020 */
} wireSAFEARRAY_UNION::__MIDL_IOleAutomationTypes_0001, *PwireSAFEARRAY_UNION::__MIDL_IOleAutomationTypes_0001; /* size: 0x0020 */

typedef struct _wireSAFEARRAY_UNION
{
  /* 0x0000 */ unsigned long sfType;
  /* 0x0008 */ union _wireSAFEARRAY_UNION::__MIDL_IOleAutomationTypes_0001 u;
} wireSAFEARRAY_UNION, *PwireSAFEARRAY_UNION; /* size: 0x0028 */

