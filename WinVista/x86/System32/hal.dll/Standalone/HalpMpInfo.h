struct HalpMpInfo
{
  /* 0x0000 */ unsigned long ApicVersion;
  /* 0x0004 */ unsigned long ProcessorCount;
  /* 0x0008 */ unsigned long NtProcessors;
  /* 0x000c */ unsigned long BusCount;
  /* 0x0010 */ unsigned long IOApicCount;
  /* 0x0014 */ unsigned long IntiCount;
  /* 0x0018 */ unsigned long LintiCount;
  /* 0x001c */ unsigned long IMCRPresent;
  /* 0x0020 */ unsigned long LocalApicBase;
  /* 0x0024 */ unsigned long* IoApicBase[64];
  /* 0x0124 */ unsigned long IoApicPhys[64];
  /* 0x0224 */ unsigned long IoApicIntiBase[64];
}; /* size: 0x0324 */

