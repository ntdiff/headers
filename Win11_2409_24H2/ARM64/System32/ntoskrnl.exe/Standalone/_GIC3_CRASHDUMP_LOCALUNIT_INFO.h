typedef struct _GIC3_CRASHDUMP_LOCALUNIT_INFO
{
  /* 0x0000 */ unsigned __int64 IccCtrlEl1;
  /* 0x0008 */ unsigned __int64 IccPmrEl1;
  /* 0x0010 */ unsigned __int64 IccBpr1El1;
  /* 0x0018 */ unsigned __int64 IccIgrpen1El1;
  /* 0x0020 */ unsigned __int64 IccRprEl1;
  /* 0x0028 */ unsigned __int64 IccHppir1El1;
  /* 0x0030 */ void* Redistributor;
  /* 0x0038 */ void* PendingTable;
} GIC3_CRASHDUMP_LOCALUNIT_INFO, *PGIC3_CRASHDUMP_LOCALUNIT_INFO; /* size: 0x0040 */

