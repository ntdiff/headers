typedef struct _UMS_SYSTEM_THREAD_INFORMATION
{
  /* 0x0000 */ unsigned long UmsVersion;
  union
  {
    struct /* bitfield */
    {
      /* 0x0004 */ unsigned long IsUmsSchedulerThread : 1; /* bit position: 0 */
      /* 0x0004 */ unsigned long IsUmsWorkerThread : 1; /* bit position: 1 */
    }; /* bitfield */
    /* 0x0004 */ unsigned long ThreadUmsFlags;
  }; /* size: 0x0004 */
} UMS_SYSTEM_THREAD_INFORMATION, *PUMS_SYSTEM_THREAD_INFORMATION; /* size: 0x0008 */

