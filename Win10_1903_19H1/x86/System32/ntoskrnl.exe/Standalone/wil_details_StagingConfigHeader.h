struct wil_details_StagingConfigHeaderProperties
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned int ignoreServiceState : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned int ignoreUserState : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned int ignoreTestState : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned int ignoreVariants : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned int unused : 28; /* bit position: 4 */
  }; /* bitfield */
}; /* size: 0x0004 */

struct wil_details_StagingConfigHeader
{
  /* 0x0000 */ unsigned char version;
  /* 0x0001 */ unsigned char versionMinor;
  /* 0x0002 */ unsigned short headerSizeBytes;
  /* 0x0004 */ unsigned short featureCount;
  /* 0x0006 */ unsigned short featureUsageTriggerCount;
  /* 0x0008 */ struct wil_details_StagingConfigHeaderProperties sessionProperties;
  /* 0x000c */ struct wil_details_StagingConfigHeaderProperties properties;
}; /* size: 0x0010 */

