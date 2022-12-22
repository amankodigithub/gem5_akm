        #include "sim/init.hh"

        extern "C" {
            void init_param_X86SMBiosSMBiosTable();
        }

        EmbeddedSwig embed_swig_param_X86SMBiosSMBiosTable(init_param_X86SMBiosSMBiosTable, "m5.internal._param_X86SMBiosSMBiosTable");
        
