        #include "sim/init.hh"

        extern "C" {
            void init_param_LinuxX86System();
        }

        EmbeddedSwig embed_swig_param_LinuxX86System(init_param_LinuxX86System, "m5.internal._param_LinuxX86System");
        
