        #include "sim/init.hh"

        extern "C" {
            void init_param_X86PagetableWalker();
        }

        EmbeddedSwig embed_swig_param_X86PagetableWalker(init_param_X86PagetableWalker, "m5.internal._param_X86PagetableWalker");
        
