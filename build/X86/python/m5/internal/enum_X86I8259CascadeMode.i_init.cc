        #include "sim/init.hh"

        extern "C" {
            void init_enum_X86I8259CascadeMode();
        }

        EmbeddedSwig embed_swig_enum_X86I8259CascadeMode(init_enum_X86I8259CascadeMode, "m5.internal._enum_X86I8259CascadeMode");
        
