typedef struct _EISA_IRQ_DESCRIPTOR
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char Interrupt : 4; /* bit position: 0 */
    /* 0x0000 */ unsigned char Reserved : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned char LevelTriggered : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned char Shared : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned char MoreEntries : 1; /* bit position: 7 */
  }; /* bitfield */
} EISA_IRQ_DESCRIPTOR, *PEISA_IRQ_DESCRIPTOR; /* size: 0x0001 */

typedef struct _EISA_IRQ_CONFIGURATION
{
  /* 0x0000 */ struct _EISA_IRQ_DESCRIPTOR ConfigurationByte;
  /* 0x0001 */ unsigned char Reserved;
} EISA_IRQ_CONFIGURATION, *PEISA_IRQ_CONFIGURATION; /* size: 0x0002 */

