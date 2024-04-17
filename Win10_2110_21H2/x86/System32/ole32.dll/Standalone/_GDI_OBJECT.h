typedef union _GDI_OBJECT::__MIDL_IAdviseSink_0002
{
  union
  {
    /* 0x0000 */ struct _userHBITMAP* hBitmap;
    /* 0x0000 */ struct _userHPALETTE* hPalette;
    /* 0x0000 */ struct _userHGLOBAL* hGeneric;
  }; /* size: 0x0004 */
} GDI_OBJECT::__MIDL_IAdviseSink_0002, *PGDI_OBJECT::__MIDL_IAdviseSink_0002; /* size: 0x0004 */

typedef struct _GDI_OBJECT
{
  /* 0x0000 */ unsigned long ObjectType;
  /* 0x0004 */ union _GDI_OBJECT::__MIDL_IAdviseSink_0002 u;
} GDI_OBJECT, *PGDI_OBJECT; /* size: 0x0008 */

