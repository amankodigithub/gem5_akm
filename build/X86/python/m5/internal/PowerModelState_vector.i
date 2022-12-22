%module(package="m5.internal") PowerModelState_vector
%{
#include "params/PowerModelState.hh"
%}

%include "std_container.i"

%import "python/m5/internal/param_PowerModelState.i"

%include "std_vector.i"

%template(vector_PowerModelState) std::vector< PowerModelState * >;
