%module(package="m5.internal") ArmInterrupts_vector
%{
#include "params/ArmInterrupts.hh"
%}

%include "std_container.i"

%import "python/m5/internal/param_ArmInterrupts.i"

%include "std_vector.i"

%template(vector_ArmInterrupts) std::vector< ArmISA::Interrupts * >;
