class CSSL
{
  union
  {
    /* 0x0000 */ unsigned long _hProvider;
    /* 0x0000 */ void* _hMyStore;
    /* 0x0000 */ void* _hRootStore;
    /* 0x0000 */ const struct _CERT_CONTEXT* _pCert;
    /* 0x0000 */ HRESULT _hr;
  }; /* size: 0x0004 */
}; /* size: 0x0001 */

