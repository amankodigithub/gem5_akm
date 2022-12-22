        #include "sim/init.hh"

        extern "C" {
            void init_param_TimingExprLiteral();
        }

        EmbeddedSwig embed_swig_param_TimingExprLiteral(init_param_TimingExprLiteral, "m5.internal._param_TimingExprLiteral");
        
