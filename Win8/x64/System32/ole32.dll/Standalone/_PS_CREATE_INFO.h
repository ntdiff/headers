enum PS_CREATE_STATE
{
  PsCreateInitialState = 0,
  PsCreateFailOnFileOpen = 1,
  PsCreateFailOnSectionCreate = 2,
  PsCreateFailExeFormat = 3,
  PsCreateFailMachineMismatch = 4,
  PsCreateFailExeName = 5,
  PsCreateSuccess = 6,
  PsCreateMaximumStates = 7,
};

typedef struct _PS_CREATE_INFO
{
  /* 0x0000 */ unsigned __int64 Size;
  /* 0x0008 */ enum PS_CREATE_STATE State;
  union
  {
    struct
    {
      union
      {
        /* 0x0010 */ unsigned long InitFlags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0010 */ unsigned char WriteOutputOnExit : 1; /* bit position: 0 */
            /* 0x0010 */ unsigned char DetectManifest : 1; /* bit position: 1 */
            /* 0x0010 */ unsigned char IFEOSkipDebugger : 1; /* bit position: 2 */
            /* 0x0010 */ unsigned char IFEODoNotPropagateKeyState : 1; /* bit position: 3 */
            /* 0x0010 */ unsigned char SpareBits1 : 4; /* bit position: 4 */
          }; /* bitfield */
          /* 0x0011 */ unsigned char SpareBits2 : 8; /* bit position: 0 */
          /* 0x0012 */ unsigned short ProhibitedImageCharacteristics : 16; /* bit position: 0 */
        }; /* size: 0x0004 */
      }; /* size: 0x0004 */
      /* 0x0014 */ unsigned long AdditionalFileAccess;
    } /* size: 0x0008 */ InitState;
    struct
    {
      /* 0x0010 */ void* FileHandle;
    } /* size: 0x0008 */ FailSection;
    struct
    {
      /* 0x0010 */ unsigned short DllCharacteristics;
    } /* size: 0x0002 */ ExeFormat;
    struct
    {
      /* 0x0010 */ void* IFEOKey;
    } /* size: 0x0008 */ ExeName;
    struct
    {
      union
      {
        /* 0x0010 */ unsigned long OutputFlags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0010 */ unsigned char ProtectedProcess : 1; /* bit position: 0 */
            /* 0x0010 */ unsigned char AddressSpaceOverride : 1; /* bit position: 1 */
            /* 0x0010 */ unsigned char DevOverrideEnabled : 1; /* bit position: 2 */
            /* 0x0010 */ unsigned char ManifestDetected : 1; /* bit position: 3 */
            /* 0x0010 */ unsigned char SpareBits1 : 4; /* bit position: 4 */
          }; /* bitfield */
          /* 0x0011 */ unsigned char SpareBits2 : 8; /* bit position: 0 */
          /* 0x0012 */ unsigned short SpareBits3 : 16; /* bit position: 0 */
        }; /* size: 0x0004 */
      }; /* size: 0x0004 */
      /* 0x0018 */ void* FileHandle;
      /* 0x0020 */ void* SectionHandle;
      /* 0x0028 */ unsigned __int64 UserProcessParametersNative;
      /* 0x0030 */ unsigned long UserProcessParametersWow64;
      /* 0x0034 */ unsigned long CurrentParameterFlags;
      /* 0x0038 */ unsigned __int64 PebAddressNative;
      /* 0x0040 */ unsigned long PebAddressWow64;
      /* 0x0048 */ unsigned __int64 ManifestAddress;
      /* 0x0050 */ unsigned long ManifestSize;
      /* 0x0054 */ long __PADDING__[1];
    } /* size: 0x0048 */ SuccessState;
  }; /* size: 0x0048 */
} PS_CREATE_INFO, *PPS_CREATE_INFO; /* size: 0x0058 */

