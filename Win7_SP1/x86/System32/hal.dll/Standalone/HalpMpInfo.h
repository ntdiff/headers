struct HalpMpInfo
{
  /* 0x0000 */ unsigned long ApicVersion;
  /* 0x0004 */ unsigned long ProcessorCount;
  /* 0x0008 */ unsigned long DynamicProcessorCount;
  /* 0x000c */ unsigned long NtProcessors;
  /* 0x0010 */ unsigned long StartedPackages;
  /* 0x0014 */ unsigned long BusCount;
  /* 0x0018 */ unsigned long IoApicCount;
  /* 0x001c */ unsigned long IoApicIntiCount;
  /* 0x0020 */ unsigned long LintiCount;
  /* 0x0024 */ unsigned long IMCRPresent;
  /* 0x0028 */ unsigned long LocalApicBase;
  /* 0x002c */ unsigned long** IoApicBase;
  /* 0x0030 */ unsigned long* IoApicPhys;
  /* 0x0034 */ unsigned long* IoApicIntiBase;
}; /* size: 0x0038 */

