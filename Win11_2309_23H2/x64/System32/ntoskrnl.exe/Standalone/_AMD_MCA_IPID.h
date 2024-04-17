typedef union _AMD_MCA_IPID
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 InstanceId : 32; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 HardwareId : 12; /* bit position: 32 */
      /* 0x0000 */ unsigned __int64 Reserved : 4; /* bit position: 44 */
      /* 0x0000 */ unsigned __int64 McaType : 16; /* bit position: 48 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 AsUINT64;
  }; /* size: 0x0008 */
} AMD_MCA_IPID, *PAMD_MCA_IPID; /* size: 0x0008 */

