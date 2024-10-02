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

typedef struct _ACPI_SRAT_ENTRY
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Length;
  union
  {
    struct
    {
      /* 0x0002 */ unsigned char ProximityDomainLow;
      /* 0x0003 */ unsigned char ApicId;
      struct
      {
        struct /* bitfield */
        {
          /* 0x0004 */ unsigned long Enabled : 1; /* bit position: 0 */
          /* 0x0004 */ unsigned long Reserved : 31; /* bit position: 1 */
        }; /* bitfield */
      } /* size: 0x0004 */ Flags;
      /* 0x0008 */ unsigned char SApicEid;
      /* 0x0009 */ unsigned char ProximityDomainHigh[3];
      /* 0x000c */ unsigned long ClockDomain;
    } /* size: 0x000e */ ApicAffinity;
    struct
    {
      /* 0x0002 */ unsigned long ProximityDomain;
      /* 0x0006 */ unsigned char Reserved[2];
      /* 0x0008 */ union _LARGE_INTEGER Base;
      /* 0x0010 */ unsigned __int64 Length;
      /* 0x0018 */ unsigned long Reserved2;
      struct
      {
        struct /* bitfield */
        {
          /* 0x001c */ unsigned long Enabled : 1; /* bit position: 0 */
          /* 0x001c */ unsigned long HotPlug : 1; /* bit position: 1 */
          /* 0x001c */ unsigned long NonVolatile : 1; /* bit position: 2 */
          /* 0x001c */ unsigned long SpecificPurpose : 1; /* bit position: 3 */
          /* 0x001c */ unsigned long Reserved : 28; /* bit position: 4 */
        }; /* bitfield */
      } /* size: 0x0004 */ Flags;
      /* 0x0020 */ unsigned char Reserved3[8];
    } /* size: 0x0026 */ MemoryAffinity;
    struct
    {
      /* 0x0002 */ unsigned char Reserved[2];
      /* 0x0004 */ unsigned long ProximityDomain;
      /* 0x0008 */ unsigned long ApicId;
      struct
      {
        struct /* bitfield */
        {
          /* 0x000c */ unsigned long Enabled : 1; /* bit position: 0 */
          /* 0x000c */ unsigned long Reserved : 31; /* bit position: 1 */
        }; /* bitfield */
      } /* size: 0x0004 */ Flags;
      /* 0x0010 */ unsigned long ClockDomain;
      /* 0x0014 */ unsigned long Reserved2;
    } /* size: 0x0016 */ X2ApicAffinity;
    struct
    {
      /* 0x0002 */ unsigned long ProximityDomain;
      /* 0x0006 */ unsigned long ProcessorUid;
      struct
      {
        struct /* bitfield */
        {
          /* 0x000a */ unsigned long Enabled : 1; /* bit position: 0 */
          /* 0x000a */ unsigned long Reserved : 31; /* bit position: 1 */
        }; /* bitfield */
      } /* size: 0x0004 */ Flags;
      /* 0x000e */ unsigned long ClockDomain;
    } /* size: 0x0010 */ GiccAffinity;
    struct
    {
      /* 0x0002 */ unsigned long ProximityDomain;
      /* 0x0006 */ unsigned char Reserved[2];
      /* 0x0008 */ unsigned long ITSID;
    } /* size: 0x000a */ GicItsAffinity;
    struct
    {
      /* 0x0002 */ unsigned char Reserved;
      /* 0x0003 */ unsigned char DeviceHandleType;
      /* 0x0004 */ unsigned long ProximityDomain;
      union
      {
        union
        {
          struct
          {
            /* 0x0008 */ unsigned char ACPI_HID[8];
            /* 0x0010 */ unsigned long ACPI_UID;
            /* 0x0014 */ unsigned long Reserved;
          } /* size: 0x0010 */ ACPI;
          struct
          {
            /* 0x0008 */ unsigned short PCISegment;
            /* 0x000a */ unsigned short PCIBDFNumber;
            /* 0x000c */ unsigned char Reserved[12];
          } /* size: 0x0010 */ PCI;
        }; /* size: 0x0010 */
      } /* size: 0x0010 */ DeviceHandle;
      struct
      {
        struct /* bitfield */
        {
          /* 0x0018 */ unsigned long Enabled : 1; /* bit position: 0 */
          /* 0x0018 */ unsigned long ArchitecturalTransactions : 1; /* bit position: 1 */
          /* 0x0018 */ unsigned long Reserved : 30; /* bit position: 2 */
        }; /* bitfield */
      } /* size: 0x0004 */ Flags;
      /* 0x001c */ unsigned long Reserved2;
    } /* size: 0x001e */ GenericInitiatorAffinity;
    struct
    {
      struct
      {
        /* 0x0002 */ unsigned char Reserved;
        /* 0x0003 */ unsigned char DeviceHandleType;
        /* 0x0004 */ unsigned long ProximityDomain;
        union
        {
          union
          {
            struct
            {
              /* 0x0008 */ unsigned char ACPI_HID[8];
              /* 0x0010 */ unsigned long ACPI_UID;
              /* 0x0014 */ unsigned long Reserved;
            } /* size: 0x0010 */ ACPI;
            struct
            {
              /* 0x0008 */ unsigned short PCISegment;
              /* 0x000a */ unsigned short PCIBDFNumber;
              /* 0x000c */ unsigned char Reserved[12];
            } /* size: 0x0010 */ PCI;
          }; /* size: 0x0010 */
        } /* size: 0x0010 */ DeviceHandle;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0018 */ unsigned long Enabled : 1; /* bit position: 0 */
            /* 0x0018 */ unsigned long ArchitecturalTransactions : 1; /* bit position: 1 */
            /* 0x0018 */ unsigned long Reserved : 30; /* bit position: 2 */
          }; /* bitfield */
        } /* size: 0x0004 */ Flags;
        /* 0x001c */ unsigned long Reserved2;
      } /* size: 0x001e */ GenericPortAffinity;
      /* 0x0020 */ long __PADDING__[2];
    }; /* size: 0x0026 */
  }; /* size: 0x0026 */
} ACPI_SRAT_ENTRY, *PACPI_SRAT_ENTRY; /* size: 0x0028 */

