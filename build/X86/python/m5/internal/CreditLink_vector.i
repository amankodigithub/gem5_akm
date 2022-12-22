%module(package="m5.internal") CreditLink_vector
%{
#include "params/CreditLink.hh"
%}

%include "std_container.i"

%import "python/m5/internal/param_CreditLink.i"

%include "std_vector.i"

%template(vector_CreditLink) std::vector< CreditLink * >;
