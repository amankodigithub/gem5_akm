        #include "sim/init.hh"

        extern "C" {
            void init_param_PcSpeaker();
        }

        EmbeddedSwig embed_swig_param_PcSpeaker(init_param_PcSpeaker, "m5.internal._param_PcSpeaker");
        
