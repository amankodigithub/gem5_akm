        #include "sim/init.hh"

        extern "C" {
            void init_param_MemTraceProbe();
        }

        EmbeddedSwig embed_swig_param_MemTraceProbe(init_param_MemTraceProbe, "m5.internal._param_MemTraceProbe");
        
