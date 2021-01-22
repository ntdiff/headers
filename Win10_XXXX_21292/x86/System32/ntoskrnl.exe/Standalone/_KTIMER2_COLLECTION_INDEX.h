typedef enum _KTIMER2_COLLECTION_INDEX
{
  KTimer2CollectionNoWake = 0,
  KTimer2CollectionHr = 1,
  KTimer2CollectionPseudoHr = 2,
  KTimer2CollectionFinite = 3,
  KTimer2CollectionIr = 4,
  KTimer2CollectionNotInserted = 16,
  KTimer2CollectionInvalid = 21,
  KTimer2CollectionOptional = 32,
  KTimer2CollectionMin = 0,
  KTimer2CollectionMax = 5,
  KTimer2CollectionNode1 = 2,
} KTIMER2_COLLECTION_INDEX, *PKTIMER2_COLLECTION_INDEX;

