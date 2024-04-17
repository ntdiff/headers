typedef struct _GROUP_AFFINITY
{
  /* 0x0000 */ unsigned __int64 Mask;
  /* 0x0008 */ unsigned short Group;
  /* 0x000a */ unsigned short Reserved[3];
} GROUP_AFFINITY, *PGROUP_AFFINITY; /* size: 0x0010 */

typedef struct _PROCESSOR_RELATIONSHIP
{
  /* 0x0000 */ unsigned char Flags;
  /* 0x0001 */ unsigned char Reserved[21];
  /* 0x0016 */ unsigned short GroupCount;
  /* 0x0018 */ struct _GROUP_AFFINITY GroupMask[1];
} PROCESSOR_RELATIONSHIP, *PPROCESSOR_RELATIONSHIP; /* size: 0x0028 */

