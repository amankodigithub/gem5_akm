%module(package="m5.internal") param_PowerModel

%{
#include "sim/sim_object.hh"
#include "params/PowerModel.hh"
#include <vector>
#include "params/PowerModelState.hh"
#include <cstddef>
#include "params/SubSystem.hh"
#include "sim/power/power_model.hh"
/**
  * This is a workaround for bug in swig. Prior to gcc 4.6.1 the STL
  * headers like vector, string, etc. used to automatically pull in
  * the cstddef header but starting with gcc 4.6.1 they no longer do.
  * This leads to swig generated a file that does not compile so we
  * explicitly include cstddef. Additionally, including version 2.0.4,
  * swig uses ptrdiff_t without the std:: namespace prefix which is
  * required with gcc 4.6.1. We explicitly provide access to it.
  */
#include <cstddef>
using std::ptrdiff_t;
%}

%import "PowerModelState_vector.i"
%import "python/m5/internal/param_SubSystem.i"

%import "python/m5/internal/param_SimObject.i"


// stop swig from creating/wrapping default ctor/dtor
%nodefault PowerModel;
class PowerModel
    : public SimObject
{
  public:
      double getDynamicPower() const;
      double getStaticPower() const;
};

%include "params/PowerModel.hh"
