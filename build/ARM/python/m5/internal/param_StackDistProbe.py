# This file was automatically generated by SWIG (http://www.swig.org).
# Version 3.0.8
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.





from sys import version_info
if version_info >= (2, 6, 0):
    def swig_import_helper():
        from os.path import dirname
        import imp
        fp = None
        try:
            fp, pathname, description = imp.find_module('_param_StackDistProbe', [dirname(__file__)])
        except ImportError:
            import _param_StackDistProbe
            return _param_StackDistProbe
        if fp is not None:
            try:
                _mod = imp.load_module('_param_StackDistProbe', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _param_StackDistProbe = swig_import_helper()
    del swig_import_helper
else:
    import _param_StackDistProbe
del version_info
try:
    _swig_property = property
except NameError:
    pass  # Python < 2.2 doesn't have 'property'.


def _swig_setattr_nondynamic(self, class_type, name, value, static=1):
    if (name == "thisown"):
        return self.this.own(value)
    if (name == "this"):
        if type(value).__name__ == 'SwigPyObject':
            self.__dict__[name] = value
            return
    method = class_type.__swig_setmethods__.get(name, None)
    if method:
        return method(self, value)
    if (not static):
        object.__setattr__(self, name, value)
    else:
        raise AttributeError("You cannot add attributes to %s" % self)


def _swig_setattr(self, class_type, name, value):
    return _swig_setattr_nondynamic(self, class_type, name, value, 0)


def _swig_getattr_nondynamic(self, class_type, name, static=1):
    if (name == "thisown"):
        return self.this.own()
    method = class_type.__swig_getmethods__.get(name, None)
    if method:
        return method(self)
    if (not static):
        return object.__getattr__(self, name)
    else:
        raise AttributeError(name)

def _swig_getattr(self, class_type, name):
    return _swig_getattr_nondynamic(self, class_type, name, 0)


def _swig_repr(self):
    try:
        strthis = "proxy of " + self.this.__repr__()
    except Exception:
        strthis = ""
    return "<%s.%s; %s >" % (self.__class__.__module__, self.__class__.__name__, strthis,)

try:
    _object = object
    _newclass = 1
except AttributeError:
    class _object:
        pass
    _newclass = 0



def _swig_setattr_nondynamic_method(set):
    def set_attr(self, name, value):
        if (name == "thisown"):
            return self.this.own(value)
        if hasattr(self, name) or (name == "this"):
            set(self, name, value)
        else:
            raise AttributeError("You cannot add attributes to %s" % self)
    return set_attr


import m5.internal.param_System
import m5.internal.enum_MemoryMode
import m5.internal.AddrRange_vector
import m5.internal.AbstractMemory_vector
import m5.internal.param_AbstractMemory
import m5.internal.param_MemObject
import m5.internal.param_ClockedObject
import m5.internal.param_ClockDomain
import m5.internal.param_SimObject
import m5.internal.drain
import m5.internal.serialize
import m5.internal.enum_PwrState
import m5.internal.param_PowerModel
import m5.internal.PowerModelState_vector
import m5.internal.param_PowerModelState
import m5.internal.param_SubSystem
import m5.internal.param_ThermalDomain
import m5.internal.SimObject_vector
import m5.internal.param_ThermalModel
import m5.internal.param_BaseMemProbe
class StackDistProbe(m5.internal.param_BaseMemProbe.BaseMemProbe):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')

    def __init__(self, *args, **kwargs):
        raise AttributeError("No constructor defined - class is abstract")
    __repr__ = _swig_repr
StackDistProbe_swigregister = _param_StackDistProbe.StackDistProbe_swigregister
StackDistProbe_swigregister(StackDistProbe)

class StackDistProbeParams(m5.internal.param_BaseMemProbe.BaseMemProbeParams):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr

    def create(self):
        return _param_StackDistProbe.StackDistProbeParams_create(self)
    disable_linear_hists = _swig_property(_param_StackDistProbe.StackDistProbeParams_disable_linear_hists_get, _param_StackDistProbe.StackDistProbeParams_disable_linear_hists_set)
    disable_log_hists = _swig_property(_param_StackDistProbe.StackDistProbeParams_disable_log_hists_get, _param_StackDistProbe.StackDistProbeParams_disable_log_hists_set)
    line_size = _swig_property(_param_StackDistProbe.StackDistProbeParams_line_size_get, _param_StackDistProbe.StackDistProbeParams_line_size_set)
    linear_hist_bins = _swig_property(_param_StackDistProbe.StackDistProbeParams_linear_hist_bins_get, _param_StackDistProbe.StackDistProbeParams_linear_hist_bins_set)
    log_hist_bins = _swig_property(_param_StackDistProbe.StackDistProbeParams_log_hist_bins_get, _param_StackDistProbe.StackDistProbeParams_log_hist_bins_set)
    system = _swig_property(_param_StackDistProbe.StackDistProbeParams_system_get, _param_StackDistProbe.StackDistProbeParams_system_set)
    verify = _swig_property(_param_StackDistProbe.StackDistProbeParams_verify_get, _param_StackDistProbe.StackDistProbeParams_verify_set)

    def __init__(self):
        this = _param_StackDistProbe.new_StackDistProbeParams()
        try:
            self.this.append(this)
        except Exception:
            self.this = this
    __swig_destroy__ = _param_StackDistProbe.delete_StackDistProbeParams
    __del__ = lambda self: None
StackDistProbeParams_swigregister = _param_StackDistProbe.StackDistProbeParams_swigregister
StackDistProbeParams_swigregister(StackDistProbeParams)



