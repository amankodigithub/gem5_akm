        #include "sim/init.hh"

        extern "C" {
            void init_param_I82094AA();
        }

        EmbeddedSwig embed_swig_param_I82094AA(init_param_I82094AA, "m5.internal._param_I82094AA");
        
