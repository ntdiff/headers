typedef enum _KTIMER2_COLLECTION_INDEX
{
  KTimer2CollectionNoWake = 0,
  KTimer2CollectionNoWakeHr = 1,
  KTimer2CollectionHr = 2,
  KTimer2CollectionPseudoHr = 3,
  KTimer2CollectionFinite = 4,
  KTimer2CollectionIr = 5,
  KTimer2CollectionAr = 6,
  KTimer2CollectionNotInserted = 16,
  KTimer2CollectionInvalid = 23,
  KTimer2CollectionOptional = 32,
  KTimer2CollectionMin = 0,
  KTimer2CollectionMax = 7,
  KTimer2CollectionNode1 = 3,
} KTIMER2_COLLECTION_INDEX, *PKTIMER2_COLLECTION_INDEX;

