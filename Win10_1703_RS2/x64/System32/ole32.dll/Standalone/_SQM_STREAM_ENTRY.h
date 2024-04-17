typedef struct _SQM_STREAM_ENTRY
{
  /* 0x0000 */ unsigned long dwType;
  union
  {
    union
    {
      /* 0x0008 */ const wchar_t* pwszVal;
      /* 0x0008 */ unsigned long dwVal;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ val;
} SQM_STREAM_ENTRY, *PSQM_STREAM_ENTRY; /* size: 0x0010 */

