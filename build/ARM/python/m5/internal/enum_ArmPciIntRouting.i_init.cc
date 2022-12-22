        #include "sim/init.hh"

        extern "C" {
            void init_enum_ArmPciIntRouting();
        }

        EmbeddedSwig embed_swig_enum_ArmPciIntRouting(init_enum_ArmPciIntRouting, "m5.internal._enum_ArmPciIntRouting");
        
