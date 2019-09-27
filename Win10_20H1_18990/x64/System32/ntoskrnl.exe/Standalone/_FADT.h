typedef struct _DESCRIPTION_HEADER
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0004 */ unsigned long Length;
  /* 0x0008 */ unsigned char Revision;
  /* 0x0009 */ unsigned char Checksum;
  /* 0x000a */ char OEMID[6];
  /* 0x0010 */ char OEMTableID[8];
  /* 0x0018 */ unsigned long OEMRevision;
  /* 0x001c */ char CreatorID[4];
  /* 0x0020 */ unsigned long CreatorRev;
} DESCRIPTION_HEADER, *PDESCRIPTION_HEADER; /* size: 0x0024 */

typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _GEN_ADDR
{
  /* 0x0000 */ unsigned char AddressSpaceID;
  /* 0x0001 */ unsigned char BitWidth;
  /* 0x0002 */ unsigned char BitOffset;
  /* 0x0003 */ unsigned char AccessSize;
  /* 0x0004 */ union _LARGE_INTEGER Address;
} GEN_ADDR, *PGEN_ADDR; /* size: 0x000c */

typedef struct _FADT
{
  /* 0x0000 */ struct _DESCRIPTION_HEADER Header;
  /* 0x0024 */ unsigned long facs;
  /* 0x0028 */ unsigned long dsdt;
  /* 0x002c */ unsigned char int_model;
  /* 0x002d */ unsigned char pm_profile;
  /* 0x002e */ unsigned short sci_int_vector;
  /* 0x0030 */ unsigned long smi_cmd_io_port;
  /* 0x0034 */ unsigned char acpi_on_value;
  /* 0x0035 */ unsigned char acpi_off_value;
  /* 0x0036 */ unsigned char s4bios_req;
  /* 0x0037 */ unsigned char pstate_control;
  /* 0x0038 */ unsigned long pm1a_evt_blk_io_port;
  /* 0x003c */ unsigned long pm1b_evt_blk_io_port;
  /* 0x0040 */ unsigned long pm1a_ctrl_blk_io_port;
  /* 0x0044 */ unsigned long pm1b_ctrl_blk_io_port;
  /* 0x0048 */ unsigned long pm2_ctrl_blk_io_port;
  /* 0x004c */ unsigned long pm_tmr_blk_io_port;
  /* 0x0050 */ unsigned long gp0_blk_io_port;
  /* 0x0054 */ unsigned long gp1_blk_io_port;
  /* 0x0058 */ unsigned char pm1_evt_len;
  /* 0x0059 */ unsigned char pm1_ctrl_len;
  /* 0x005a */ unsigned char pm2_ctrl_len;
  /* 0x005b */ unsigned char pm_tmr_len;
  /* 0x005c */ unsigned char gp0_blk_len;
  /* 0x005d */ unsigned char gp1_blk_len;
  /* 0x005e */ unsigned char gp1_base;
  /* 0x005f */ unsigned char cstate_control;
  /* 0x0060 */ unsigned short lvl2_latency;
  /* 0x0062 */ unsigned short lvl3_latency;
  /* 0x0064 */ unsigned short flush_size;
  /* 0x0066 */ unsigned short flush_stride;
  /* 0x0068 */ unsigned char duty_offset;
  /* 0x0069 */ unsigned char duty_width;
  /* 0x006a */ unsigned char day_alarm_index;
  /* 0x006b */ unsigned char month_alarm_index;
  /* 0x006c */ unsigned char century_alarm_index;
  /* 0x006d */ unsigned short boot_arch;
  /* 0x006f */ unsigned char reserved3[1];
  /* 0x0070 */ unsigned long flags;
  /* 0x0074 */ struct _GEN_ADDR reset_reg;
  /* 0x0080 */ unsigned char reset_val;
  /* 0x0081 */ unsigned short arm_boot_arch;
  /* 0x0083 */ unsigned char minor_version_number;
  /* 0x0084 */ union _LARGE_INTEGER x_firmware_ctrl;
  /* 0x008c */ union _LARGE_INTEGER x_dsdt;
  /* 0x0094 */ struct _GEN_ADDR x_pm1a_evt_blk;
  /* 0x00a0 */ struct _GEN_ADDR x_pm1b_evt_blk;
  /* 0x00ac */ struct _GEN_ADDR x_pm1a_ctrl_blk;
  /* 0x00b8 */ struct _GEN_ADDR x_pm1b_ctrl_blk;
  /* 0x00c4 */ struct _GEN_ADDR x_pm2_ctrl_blk;
  /* 0x00d0 */ struct _GEN_ADDR x_pm_tmr_blk;
  /* 0x00dc */ struct _GEN_ADDR x_gp0_blk;
  /* 0x00e8 */ struct _GEN_ADDR x_gp1_blk;
  /* 0x00f4 */ struct _GEN_ADDR sleep_control_reg;
  /* 0x0100 */ struct _GEN_ADDR sleep_status_reg;
} FADT, *PFADT; /* size: 0x010c */

