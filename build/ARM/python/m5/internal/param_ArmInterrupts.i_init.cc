        #include "sim/init.hh"

        extern "C" {
            void init_param_ArmInterrupts();
        }

        EmbeddedSwig embed_swig_param_ArmInterrupts(init_param_ArmInterrupts, "m5.internal._param_ArmInterrupts");
        
