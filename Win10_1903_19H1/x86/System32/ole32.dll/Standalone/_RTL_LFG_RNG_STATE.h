typedef struct _RTL_LFG_RNG_STATE
{
  /* 0x0000 */ unsigned long SeedArray[55];
  /* 0x00dc */ unsigned long Next;
  /* 0x00e0 */ unsigned long NextP;
} RTL_LFG_RNG_STATE, *PRTL_LFG_RNG_STATE; /* size: 0x00e4 */

