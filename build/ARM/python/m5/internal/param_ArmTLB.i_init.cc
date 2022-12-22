        #include "sim/init.hh"

        extern "C" {
            void init_param_ArmTLB();
        }

        EmbeddedSwig embed_swig_param_ArmTLB(init_param_ArmTLB, "m5.internal._param_ArmTLB");
        
