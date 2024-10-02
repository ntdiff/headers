struct PROCESS_PERF_COUNTERS
{
  /* 0x0000 */ unsigned __int64 ProcessorTime;
  /* 0x0008 */ unsigned __int64 UserTime;
  /* 0x0010 */ unsigned __int64 PrivilegedTime;
  /* 0x0018 */ unsigned __int64 VirtualBytesPeak;
  /* 0x0020 */ unsigned __int64 VirtualBytes;
  /* 0x0028 */ unsigned long PageFaults;
  /* 0x002c */ unsigned long HandleCount;
  /* 0x0030 */ unsigned __int64 WorkingSetPeak;
  /* 0x0038 */ unsigned __int64 WorkingSet;
  /* 0x0040 */ unsigned __int64 PageFileBytesPeak;
  /* 0x0048 */ unsigned __int64 PageFileBytes;
  /* 0x0050 */ unsigned __int64 PrivateBytes;
  /* 0x0058 */ unsigned long ThreadCount;
  /* 0x005c */ unsigned long PriorityBase;
  /* 0x0060 */ unsigned __int64 ElapsedTime;
  /* 0x0068 */ unsigned long ProcessId;
  /* 0x006c */ unsigned long CreatingProcessId;
  /* 0x0070 */ unsigned __int64 PoolPagedBytes;
  /* 0x0078 */ unsigned __int64 PoolNonpagedBytes;
  /* 0x0080 */ unsigned __int64 IoReadOperations;
  /* 0x0088 */ unsigned __int64 IoWriteOperations;
  /* 0x0090 */ unsigned __int64 IoDataOperations;
  /* 0x0098 */ unsigned __int64 IoOtherOperations;
  /* 0x00a0 */ unsigned __int64 IoReadBytes;
  /* 0x00a8 */ unsigned __int64 IoWriteBytes;
  /* 0x00b0 */ unsigned __int64 IoDataBytes;
  /* 0x00b8 */ unsigned __int64 IoOtherBytes;
  /* 0x00c0 */ unsigned __int64 WorkingSetPrivate;
  /* 0x00c8 */ unsigned __int64 PerfFreq;
  /* 0x00d0 */ unsigned __int64 PerfTime;
}; /* size: 0x00d8 */

