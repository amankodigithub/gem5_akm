        #include "sim/init.hh"

        extern "C" {
            void init_param_DRAMCtrl();
        }

        EmbeddedSwig embed_swig_param_DRAMCtrl(init_param_DRAMCtrl, "m5.internal._param_DRAMCtrl");
        
