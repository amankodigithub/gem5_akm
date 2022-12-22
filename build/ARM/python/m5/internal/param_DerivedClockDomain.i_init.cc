        #include "sim/init.hh"

        extern "C" {
            void init_param_DerivedClockDomain();
        }

        EmbeddedSwig embed_swig_param_DerivedClockDomain(init_param_DerivedClockDomain, "m5.internal._param_DerivedClockDomain");
        
