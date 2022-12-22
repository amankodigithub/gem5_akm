        #include "sim/init.hh"

        extern "C" {
            void init_pyobject();
        }

        EmbeddedSwig embed_swig_pyobject(init_pyobject, "m5.internal._pyobject");
        
