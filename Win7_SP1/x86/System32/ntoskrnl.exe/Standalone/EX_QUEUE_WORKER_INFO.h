union EX_QUEUE_WORKER_INFO
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long QueueDisabled : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long MakeThreadsAsNecessary : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long WaitMode : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long WorkerCount : 29; /* bit position: 3 */
    }; /* bitfield */
    /* 0x0000 */ long QueueWorkerInfo;
  }; /* size: 0x0004 */
}; /* size: 0x0004 */

