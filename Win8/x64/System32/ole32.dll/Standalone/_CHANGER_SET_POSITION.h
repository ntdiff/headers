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

typedef struct _CHANGER_SET_POSITION
{
  /* 0x0000 */ struct _CHANGER_ELEMENT Transport;
  /* 0x0008 */ struct _CHANGER_ELEMENT Destination;
  /* 0x0010 */ unsigned char Flip;
  /* 0x0011 */ char __PADDING__[3];
} CHANGER_SET_POSITION, *PCHANGER_SET_POSITION; /* size: 0x0014 */

