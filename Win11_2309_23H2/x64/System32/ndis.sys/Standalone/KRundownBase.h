typedef struct _EX_RUNDOWN_REF
{
  union
  {
    /* 0x0000 */ unsigned __int64 Count;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} EX_RUNDOWN_REF, *PEX_RUNDOWN_REF; /* size: 0x0008 */

class KRundownBase
{
  /* 0x0000 */ struct _EX_RUNDOWN_REF m_rundown;
}; /* size: 0x0008 */

