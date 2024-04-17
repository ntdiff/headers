struct COPYFILE2_EXTENDED_PARAMETERS
{
  /* 0x0000 */ unsigned long dwSize;
  /* 0x0004 */ unsigned long dwCopyFlags;
  /* 0x0008 */ int* pfCancel;
  /* 0x0010 */ void* pProgressRoutine /* function */;
  /* 0x0018 */ void* pvCallbackContext;
}; /* size: 0x0020 */

