typedef enum _GPIO_PIN_IORESTRICTION_TYPE
{
  IoRestrictionNone = 0,
  IoRestrictionInputOnly = 1,
  IoRestrictionOutputOnly = 2,
  IoRestrictionNoneAndPreserve = 3,
} GPIO_PIN_IORESTRICTION_TYPE, *PGPIO_PIN_IORESTRICTION_TYPE;

