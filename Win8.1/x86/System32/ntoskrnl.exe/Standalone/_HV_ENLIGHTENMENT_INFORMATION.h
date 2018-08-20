typedef struct _HV_ENLIGHTENMENT_INFORMATION
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned int UseHypercallForAddressSpaceSwitch : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned int UseHypercallForLocalFlush : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned int UseHypercallForRemoteFlush : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned int UseApicMsrs : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned int UseMsrForReset : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned int UseRelaxedTiming : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned int UseDmaRemapping : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned int UseInterruptRemapping : 1; /* bit position: 7 */
    /* 0x0000 */ unsigned int UseX2ApicMsrs : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned int DeprecateAutoEoi : 1; /* bit position: 9 */
    /* 0x0000 */ unsigned int Reserved : 22; /* bit position: 10 */
  }; /* bitfield */
  /* 0x0004 */ unsigned int LongSpinWaitCount;
  /* 0x0008 */ unsigned int ReservedEcx;
  /* 0x000c */ unsigned int ReservedEdx;
} HV_ENLIGHTENMENT_INFORMATION, *PHV_ENLIGHTENMENT_INFORMATION; /* size: 0x0010 */

