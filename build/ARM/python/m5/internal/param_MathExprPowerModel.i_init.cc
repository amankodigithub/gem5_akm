        #include "sim/init.hh"

        extern "C" {
            void init_param_MathExprPowerModel();
        }

        EmbeddedSwig embed_swig_param_MathExprPowerModel(init_param_MathExprPowerModel, "m5.internal._param_MathExprPowerModel");
        
