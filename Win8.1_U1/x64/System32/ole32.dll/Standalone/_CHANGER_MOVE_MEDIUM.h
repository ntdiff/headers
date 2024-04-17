typedef enum _ELEMENT_TYPE
{
  AllElements = 0,
  ChangerTransport = 1,
  ChangerSlot = 2,
  ChangerIEPort = 3,
  ChangerDrive = 4,
  ChangerDoor = 5,
  ChangerKeypad = 6,
  ChangerMaxElement = 7,
} ELEMENT_TYPE, *PELEMENT_TYPE;

typedef struct _CHANGER_ELEMENT
{
  /* 0x0000 */ enum _ELEMENT_TYPE ElementType;
  /* 0x0004 */ unsigned long ElementAddress;
} CHANGER_ELEMENT, *PCHANGER_ELEMENT; /* size: 0x0008 */

typedef struct _CHANGER_MOVE_MEDIUM
{
  /* 0x0000 */ struct _CHANGER_ELEMENT Transport;
  /* 0x0008 */ struct _CHANGER_ELEMENT Source;
  /* 0x0010 */ struct _CHANGER_ELEMENT Destination;
  /* 0x0018 */ unsigned char Flip;
  /* 0x0019 */ char __PADDING__[3];
} CHANGER_MOVE_MEDIUM, *PCHANGER_MOVE_MEDIUM; /* size: 0x001c */

