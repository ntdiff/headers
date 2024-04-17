typedef struct _EISA_PORT_DESCRIPTOR
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char NumberPorts : 5; /* bit position: 0 */
    /* 0x0000 */ unsigned char Reserved : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned char Shared : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned char MoreEntries : 1; /* bit position: 7 */
  }; /* bitfield */
} EISA_PORT_DESCRIPTOR, *PEISA_PORT_DESCRIPTOR; /* size: 0x0001 */

typedef struct _EISA_PORT_CONFIGURATION
{
  /* 0x0000 */ struct _EISA_PORT_DESCRIPTOR Configuration;
  /* 0x0001 */ unsigned short PortAddress;
} EISA_PORT_CONFIGURATION, *PEISA_PORT_CONFIGURATION; /* size: 0x0003 */

