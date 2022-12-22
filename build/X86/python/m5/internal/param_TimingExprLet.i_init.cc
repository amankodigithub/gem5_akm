        #include "sim/init.hh"

        extern "C" {
            void init_param_TimingExprLet();
        }

        EmbeddedSwig embed_swig_param_TimingExprLet(init_param_TimingExprLet, "m5.internal._param_TimingExprLet");
        
