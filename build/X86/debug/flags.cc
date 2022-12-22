/*
 * DO NOT EDIT THIS FILE! Automatically generated by SCons.
 */

#include "base/debug.hh"

namespace Debug {

SimpleFlag Activity("Activity", "None");
SimpleFlag AddrRanges("AddrRanges", "None");
SimpleFlag Annotate("Annotate", "State machine annotation debugging");
SimpleFlag AnnotateQ("AnnotateQ", "State machine annotation queue debugging");
SimpleFlag AnnotateVerbose("AnnotateVerbose", "Dump all state machine annotation details");
SimpleFlag BaseXBar("BaseXBar", "None");
SimpleFlag Branch("Branch", "None");
SimpleFlag Bridge("Bridge", "None");
SimpleFlag CCRegs("CCRegs", "None");
SimpleFlag CMOS("CMOS", "Accesses to CMOS devices");
SimpleFlag Cache("Cache", "None");
SimpleFlag CachePort("CachePort", "None");
SimpleFlag CacheRepl("CacheRepl", "None");
SimpleFlag CacheTags("CacheTags", "None");
SimpleFlag CacheVerbose("CacheVerbose", "None");
SimpleFlag Checker("Checker", "None");
SimpleFlag Checkpoint("Checkpoint", "None");
SimpleFlag ClockDomain("ClockDomain", "None");
SimpleFlag CoherentXBar("CoherentXBar", "None");
SimpleFlag CommMonitor("CommMonitor", "None");
SimpleFlag Commit("Commit", "None");
SimpleFlag CommitRate("CommitRate", "None");
SimpleFlag Config("Config", "None");
SimpleFlag Context("Context", "None");
SimpleFlag CxxConfig("CxxConfig", "None");
SimpleFlag DMA("DMA", "None");
SimpleFlag DMACopyEngine("DMACopyEngine", "None");
SimpleFlag DRAM("DRAM", "None");
SimpleFlag DRAMPower("DRAMPower", "None");
SimpleFlag DRAMSim2("DRAMSim2", "None");
SimpleFlag DRAMState("DRAMState", "None");
SimpleFlag DVFS("DVFS", "None");
SimpleFlag DebugPrintf("DebugPrintf", "None");
SimpleFlag Decode("Decode", "None");
SimpleFlag Decoder("Decoder", "Decoder debug output");
SimpleFlag DirectedTest("DirectedTest", "None");
SimpleFlag DiskImageRead("DiskImageRead", "None");
SimpleFlag DiskImageWrite("DiskImageWrite", "None");
SimpleFlag DistEthernet("DistEthernet", "None");
SimpleFlag DistEthernetCmd("DistEthernetCmd", "None");
SimpleFlag DistEthernetPkt("DistEthernetPkt", "None");
SimpleFlag Drain("Drain", "None");
SimpleFlag DynInst("DynInst", "None");
SimpleFlag ElasticTrace("ElasticTrace", "None");
SimpleFlag Ethernet("Ethernet", "None");
SimpleFlag EthernetCksum("EthernetCksum", "None");
SimpleFlag EthernetDMA("EthernetDMA", "None");
SimpleFlag EthernetData("EthernetData", "None");
SimpleFlag EthernetDesc("EthernetDesc", "None");
SimpleFlag EthernetEEPROM("EthernetEEPROM", "None");
SimpleFlag EthernetIntr("EthernetIntr", "None");
SimpleFlag EthernetPIO("EthernetPIO", "None");
SimpleFlag EthernetSM("EthernetSM", "None");
SimpleFlag Event("Event", "None");
SimpleFlag ExecAsid("ExecAsid", "Format: Include ASID in trace");
SimpleFlag ExecCPSeq("ExecCPSeq", "Format: Instruction sequence number");
SimpleFlag ExecEffAddr("ExecEffAddr", "Format: Include effective address");
SimpleFlag ExecEnable("ExecEnable", "Filter: Enable exec tracing (no tracing without this)");
SimpleFlag ExecFaulting("ExecFaulting", "Trace faulting instructions");
SimpleFlag ExecFetchSeq("ExecFetchSeq", "Format: Fetch sequence number");
SimpleFlag ExecFlags("ExecFlags", "Format: Include instruction flags in trace");
SimpleFlag ExecKernel("ExecKernel", "Filter: Trace kernel mode instructions");
SimpleFlag ExecMacro("ExecMacro", "Filter: Include macroops");
SimpleFlag ExecMicro("ExecMicro", "Filter: Include microops");
SimpleFlag ExecOpClass("ExecOpClass", "Format: Include operand class");
SimpleFlag ExecRegDelta("ExecRegDelta", "None");
SimpleFlag ExecResult("ExecResult", "Format: Include results from execution");
SimpleFlag ExecSymbol("ExecSymbol", "Format: Try to include symbol names");
SimpleFlag ExecThread("ExecThread", "Format: Include thread ID in trace");
SimpleFlag ExecTicks("ExecTicks", "Format: Include tick count");
SimpleFlag ExecUser("ExecUser", "Filter: Trace user mode instructions");
SimpleFlag ExternalPort("ExternalPort", "None");
SimpleFlag Fault("Fault", "None");
SimpleFlag Faults("Faults", "Trace all faults/exceptions/traps");
SimpleFlag Fetch("Fetch", "None");
SimpleFlag FloatRegs("FloatRegs", "None");
SimpleFlag Flow("Flow", "None");
SimpleFlag FreeList("FreeList", "None");
SimpleFlag GDBAcc("GDBAcc", "Remote debugger accesses");
SimpleFlag GDBExtra("GDBExtra", "Dump extra information on reads and writes");
SimpleFlag GDBMisc("GDBMisc", "Breakpoints, traps, watchpoints, etc.");
SimpleFlag GDBRead("GDBRead", "Reads to the remote address space");
SimpleFlag GDBRecv("GDBRecv", "Messages received from the remote application");
SimpleFlag GDBSend("GDBSend", "Messages sent to the remote application");
SimpleFlag GDBWrite("GDBWrite", "Writes to the remote address space");
SimpleFlag GarnetSyntheticTraffic("GarnetSyntheticTraffic", "None");
SimpleFlag HMCController("HMCController", "None");
SimpleFlag HWPrefetch("HWPrefetch", "None");
SimpleFlag Hello("Hello", "None");
SimpleFlag I8042("I8042", "The I8042 keyboard controller");
SimpleFlag I82094AA("I82094AA", "None");
SimpleFlag I8237("I8237", "The I8237 dma controller");
SimpleFlag I8254("I8254", "Interrupts from the I8254 timer");
SimpleFlag I8259("I8259", "Accesses to the I8259 PIC devices");
SimpleFlag IEW("IEW", "None");
SimpleFlag IPI("IPI", "None");
SimpleFlag IPR("IPR", "None");
SimpleFlag IQ("IQ", "None");
SimpleFlag IdeCtrl("IdeCtrl", "None");
SimpleFlag IdeDisk("IdeDisk", "None");
SimpleFlag Indirect("Indirect", "None");
SimpleFlag IntDevice("IntDevice", "None");
SimpleFlag IntRegs("IntRegs", "None");
SimpleFlag Intel8254Timer("Intel8254Timer", "None");
SimpleFlag Interrupt("Interrupt", "None");
SimpleFlag IntrControl("IntrControl", "None");
SimpleFlag IsaFake("IsaFake", "None");
SimpleFlag Kvm("Kvm", "Basic KVM Functionality");
SimpleFlag KvmContext("KvmContext", "KVM/gem5 context synchronization");
SimpleFlag KvmIO("KvmIO", "KVM MMIO diagnostics");
SimpleFlag KvmInt("KvmInt", "KVM Interrupt handling");
SimpleFlag KvmRun("KvmRun", "KvmRun entry/exit diagnostics");
SimpleFlag KvmTimer("KvmTimer", "KVM timing");
SimpleFlag LLSC("LLSC", "None");
SimpleFlag LSQ("LSQ", "None");
SimpleFlag LSQUnit("LSQUnit", "None");
SimpleFlag LTage("LTage", "None");
SimpleFlag Loader("Loader", "None");
SimpleFlag LocalApic("LocalApic", "Local APIC debugging");
SimpleFlag MC146818("MC146818", "None");
SimpleFlag MMU("MMU", "None");
SimpleFlag MemChecker("MemChecker", "None");
SimpleFlag MemCheckerMonitor("MemCheckerMonitor", "None");
SimpleFlag MemDepUnit("MemDepUnit", "None");
SimpleFlag MemTest("MemTest", "None");
SimpleFlag MemoryAccess("MemoryAccess", "None");
SimpleFlag MiscRegs("MiscRegs", "None");
SimpleFlag Mwait("Mwait", "None");
SimpleFlag NoncoherentXBar("NoncoherentXBar", "None");
SimpleFlag O3CPU("O3CPU", "None");
SimpleFlag O3PipeView("O3PipeView", "None");
SimpleFlag PCEvent("PCEvent", "None");
SimpleFlag PacketQueue("PacketQueue", "None");
SimpleFlag PageTableWalker("PageTableWalker", "Page table walker state machine debugging");
SimpleFlag PcSpeaker("PcSpeaker", "None");
SimpleFlag PciDevice("PciDevice", "None");
SimpleFlag PciHost("PciHost", "None");
SimpleFlag Printf("Printf", "None");
SimpleFlag ProbeVerbose("ProbeVerbose", "None");
SimpleFlag ProtocolTrace("ProtocolTrace", "None");
SimpleFlag PseudoInst("PseudoInst", "None");
SimpleFlag Quiesce("Quiesce", "None");
SimpleFlag ROB("ROB", "None");
SimpleFlag Rename("Rename", "None");
SimpleFlag RubyCache("RubyCache", "None");
SimpleFlag RubyCacheTrace("RubyCacheTrace", "None");
SimpleFlag RubyDma("RubyDma", "None");
SimpleFlag RubyGenerated("RubyGenerated", "None");
SimpleFlag RubyNetwork("RubyNetwork", "None");
SimpleFlag RubyPort("RubyPort", "None");
SimpleFlag RubyPrefetcher("RubyPrefetcher", "None");
SimpleFlag RubyQueue("RubyQueue", "None");
SimpleFlag RubyResourceStalls("RubyResourceStalls", "None");
SimpleFlag RubySequencer("RubySequencer", "None");
SimpleFlag RubySlicc("RubySlicc", "None");
SimpleFlag RubyStats("RubyStats", "None");
SimpleFlag RubySystem("RubySystem", "None");
SimpleFlag RubyTest("RubyTest", "None");
SimpleFlag RubyTester("RubyTester", "None");
SimpleFlag SQL("SQL", "SQL queries sent to the server");
SimpleFlag Scoreboard("Scoreboard", "None");
SimpleFlag SerialLink("SerialLink", "None");
SimpleFlag SimpleCPU("SimpleCPU", "None");
SimpleFlag SimpleDisk("SimpleDisk", "None");
SimpleFlag SimpleDiskData("SimpleDiskData", "None");
SimpleFlag SimpleTrace("SimpleTrace", "None");
SimpleFlag SnoopFilter("SnoopFilter", "None");
SimpleFlag Stack("Stack", "None");
SimpleFlag StackDist("StackDist", "None");
SimpleFlag StatEvents("StatEvents", "Statistics event tracking");
SimpleFlag StoreSet("StoreSet", "None");
SimpleFlag SyscallBase("SyscallBase", "None");
SimpleFlag SyscallVerbose("SyscallVerbose", "None");
SimpleFlag TLB("TLB", "None");
SimpleFlag Terminal("Terminal", "None");
SimpleFlag TerminalVerbose("TerminalVerbose", "None");
SimpleFlag ThermalDomain("ThermalDomain", "None");
SimpleFlag Thread("Thread", "None");
SimpleFlag TimeSync("TimeSync", "None");
SimpleFlag Timer("Timer", "None");
SimpleFlag TraceCPUData("TraceCPUData", "None");
SimpleFlag TraceCPUInst("TraceCPUInst", "None");
SimpleFlag TrafficGen("TrafficGen", "None");
SimpleFlag Uart("Uart", "None");
SimpleFlag VIO("VIO", "VirtIO base functionality");
SimpleFlag VIO9P("VIO9P", "General 9p over VirtIO debugging");
SimpleFlag VIO9PData("VIO9PData", "Dump data in VirtIO 9p connections");
SimpleFlag VIOBlock("VIOBlock", "VirtIO block device");
SimpleFlag VIOConsole("VIOConsole", "VirtIO console device");
SimpleFlag VIOPci("VIOPci", "VirtIO PCI transport");
SimpleFlag VNC("VNC", "None");
SimpleFlag VoltageDomain("VoltageDomain", "None");
SimpleFlag VtoPhys("VtoPhys", "None");
SimpleFlag WorkItems("WorkItems", "None");
SimpleFlag Writeback("Writeback", "None");
SimpleFlag X86("X86", "Generic X86 ISA debugging");
CompoundFlag AnnotateAll("AnnotateAll", "All Annotation flags",
    &Annotate,
    &AnnotateQ,
    &AnnotateVerbose);
CompoundFlag CacheAll("CacheAll", "None",
    &Cache,
    &CachePort,
    &CacheRepl,
    &CacheVerbose,
    &HWPrefetch);
CompoundFlag DiskImageAll("DiskImageAll", "None",
    &DiskImageRead,
    &DiskImageWrite);
CompoundFlag EthernetAll("EthernetAll", "None",
    &Ethernet,
    &EthernetPIO,
    &EthernetDMA,
    &EthernetData,
    &EthernetDesc,
    &EthernetIntr,
    &EthernetSM,
    &EthernetCksum,
    &EthernetEEPROM);
CompoundFlag EthernetNoData("EthernetNoData", "None",
    &Ethernet,
    &EthernetPIO,
    &EthernetDesc,
    &EthernetIntr,
    &EthernetSM,
    &EthernetCksum);
CompoundFlag Exec("Exec", "None",
    &ExecEnable,
    &ExecTicks,
    &ExecOpClass,
    &ExecThread,
    &ExecEffAddr,
    &ExecResult,
    &ExecSymbol,
    &ExecMicro,
    &ExecMacro,
    &ExecFaulting,
    &ExecUser,
    &ExecKernel);
CompoundFlag ExecAll("ExecAll", "None",
    &ExecEnable,
    &ExecCPSeq,
    &ExecEffAddr,
    &ExecFaulting,
    &ExecFetchSeq,
    &ExecOpClass,
    &ExecRegDelta,
    &ExecResult,
    &ExecSymbol,
    &ExecThread,
    &ExecTicks,
    &ExecMicro,
    &ExecMacro,
    &ExecUser,
    &ExecKernel,
    &ExecAsid,
    &ExecFlags);
CompoundFlag ExecNoTicks("ExecNoTicks", "None",
    &ExecEnable,
    &ExecOpClass,
    &ExecThread,
    &ExecEffAddr,
    &ExecResult,
    &ExecMicro,
    &ExecMacro,
    &ExecFaulting,
    &ExecUser,
    &ExecKernel);
CompoundFlag GDBAll("GDBAll", "All Remote debugging flags",
    &GDBMisc,
    &GDBAcc,
    &GDBRead,
    &GDBWrite,
    &GDBSend,
    &GDBRecv,
    &GDBExtra);
CompoundFlag IdeAll("IdeAll", "None",
    &IdeCtrl,
    &IdeDisk);
CompoundFlag KvmAll("KvmAll", "All KVM debug flags",
    &Kvm,
    &KvmContext,
    &KvmRun,
    &KvmIO,
    &KvmInt,
    &KvmTimer);
CompoundFlag O3CPUAll("O3CPUAll", "None",
    &Fetch,
    &Decode,
    &Rename,
    &IEW,
    &Commit,
    &IQ,
    &ROB,
    &FreeList,
    &LSQ,
    &LSQUnit,
    &StoreSet,
    &MemDepUnit,
    &DynInst,
    &O3CPU,
    &Activity,
    &Scoreboard,
    &Writeback);
CompoundFlag Registers("Registers", "None",
    &IntRegs,
    &FloatRegs,
    &CCRegs,
    &MiscRegs);
CompoundFlag Ruby("Ruby", "None",
    &RubyQueue,
    &RubyNetwork,
    &RubyTester,
    &RubyGenerated,
    &RubySlicc,
    &RubySystem,
    &RubyCache,
    &RubyDma,
    &RubyPort,
    &RubySequencer,
    &RubyCacheTrace,
    &RubyPrefetcher);
CompoundFlag SyscallAll("SyscallAll", "None",
    &SyscallBase,
    &SyscallVerbose);
CompoundFlag XBar("XBar", "None",
    &BaseXBar,
    &CoherentXBar,
    &NoncoherentXBar,
    &SnoopFilter);

} // namespace Debug
