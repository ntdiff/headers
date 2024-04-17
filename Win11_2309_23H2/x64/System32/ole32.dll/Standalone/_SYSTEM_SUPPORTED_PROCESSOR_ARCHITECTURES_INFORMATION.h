typedef struct _SYSTEM_SUPPORTED_PROCESSOR_ARCHITECTURES_INFORMATION
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long Machine : 16; /* bit position: 0 */
    /* 0x0000 */ unsigned long KernelMode : 1; /* bit position: 16 */
    /* 0x0000 */ unsigned long UserMode : 1; /* bit position: 17 */
    /* 0x0000 */ unsigned long Native : 1; /* bit position: 18 */
    /* 0x0000 */ unsigned long Process : 1; /* bit position: 19 */
    /* 0x0000 */ unsigned long WoW64Container : 1; /* bit position: 20 */
    /* 0x0000 */ unsigned long ReservedZero0 : 11; /* bit position: 21 */
  }; /* bitfield */
} SYSTEM_SUPPORTED_PROCESSOR_ARCHITECTURES_INFORMATION, *PSYSTEM_SUPPORTED_PROCESSOR_ARCHITECTURES_INFORMATION; /* size: 0x0004 */

