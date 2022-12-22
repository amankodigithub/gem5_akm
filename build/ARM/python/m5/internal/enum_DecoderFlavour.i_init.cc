        #include "sim/init.hh"

        extern "C" {
            void init_enum_DecoderFlavour();
        }

        EmbeddedSwig embed_swig_enum_DecoderFlavour(init_enum_DecoderFlavour, "m5.internal._enum_DecoderFlavour");
        
