        #include "sim/init.hh"

        extern "C" {
            void init_param_TimingExprReadIntReg();
        }

        EmbeddedSwig embed_swig_param_TimingExprReadIntReg(init_param_TimingExprReadIntReg, "m5.internal._param_TimingExprReadIntReg");
        
