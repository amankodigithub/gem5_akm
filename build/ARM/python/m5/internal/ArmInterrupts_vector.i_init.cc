        #include "sim/init.hh"

        extern "C" {
            void init_ArmInterrupts_vector();
        }

        EmbeddedSwig embed_swig_ArmInterrupts_vector(init_ArmInterrupts_vector, "m5.internal._ArmInterrupts_vector");
        
