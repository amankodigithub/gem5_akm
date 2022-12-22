%module(package="m5.internal") UInt32_vector
%{
#include "base/types.hh"
%}

%include "std_container.i"

%import "stdint.i"
%import "base/types.hh"

%include "std_vector.i"

%template(vector_UInt32) std::vector< uint32_t >;
