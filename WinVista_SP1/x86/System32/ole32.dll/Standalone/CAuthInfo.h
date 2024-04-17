class CAuthInfo
{
  union
  {
    /* 0x0000 */ struct tagSOLE_AUTHENTICATION_LIST* _sList;
    /* 0x0000 */ int _fNeedSSL;
  }; /* size: 0x0004 */
}; /* size: 0x0001 */

