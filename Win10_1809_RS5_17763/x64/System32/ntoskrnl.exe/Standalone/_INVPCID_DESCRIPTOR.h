typedef union _INVPCID_DESCRIPTOR
{
  union
  {
    struct // _TAG_UNNAMED_167
    {
      union
      {
        struct /* bitfield */
        {
          /* 0x0000 */ unsigned __int64 Pcid : 12; /* bit position: 0 */
          /* 0x0000 */ unsigned __int64 Reserved : 52; /* bit position: 12 */
        }; /* bitfield */
        /* 0x0000 */ unsigned __int64 EntirePcid;
      }; /* size: 0x0008 */
      /* 0x0008 */ unsigned __int64 Virtual;
    } /* size: 0x0010 */ IndividualAddress;
    struct // _TAG_UNNAMED_168
    {
      union
      {
        struct /* bitfield */
        {
          /* 0x0000 */ unsigned __int64 Pcid : 12; /* bit position: 0 */
          /* 0x0000 */ unsigned __int64 Reserved : 52; /* bit position: 12 */
        }; /* bitfield */
        /* 0x0000 */ unsigned __int64 EntirePcid;
      }; /* size: 0x0008 */
      /* 0x0008 */ unsigned __int64 Reserved2;
    } /* size: 0x0010 */ SingleContext;
    struct // _TAG_UNNAMED_169
    {
      /* 0x0000 */ unsigned __int64 Reserved[2];
    } /* size: 0x0010 */ AllContextAndGlobals;
    struct // _TAG_UNNAMED_169
    {
      /* 0x0000 */ unsigned __int64 Reserved[2];
    } /* size: 0x0010 */ AllContext;
  }; /* size: 0x0010 */
} INVPCID_DESCRIPTOR, *PINVPCID_DESCRIPTOR; /* size: 0x0010 */

