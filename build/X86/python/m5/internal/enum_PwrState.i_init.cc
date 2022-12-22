        #include "sim/init.hh"

        extern "C" {
            void init_enum_PwrState();
        }

        EmbeddedSwig embed_swig_enum_PwrState(init_enum_PwrState, "m5.internal._enum_PwrState");
        
