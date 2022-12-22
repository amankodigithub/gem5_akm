        #include "sim/init.hh"

        extern "C" {
            void init_enum_ThreadPolicy();
        }

        EmbeddedSwig embed_swig_enum_ThreadPolicy(init_enum_ThreadPolicy, "m5.internal._enum_ThreadPolicy");
        
