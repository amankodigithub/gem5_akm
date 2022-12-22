        #include "sim/init.hh"

        extern "C" {
            void init_param_CreditLink();
        }

        EmbeddedSwig embed_swig_param_CreditLink(init_param_CreditLink, "m5.internal._param_CreditLink");
        
