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

typedef struct _CHANGER_ELEMENT_LIST
{
  /* 0x0000 */ struct _CHANGER_ELEMENT Element;
  /* 0x0008 */ unsigned long NumberOfElements;
} CHANGER_ELEMENT_LIST, *PCHANGER_ELEMENT_LIST; /* size: 0x000c */

