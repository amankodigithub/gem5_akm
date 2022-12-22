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
            fp, pathname, description = imp.find_module('_param_GenericArmPciHost', [dirname(__file__)])
        except ImportError:
            import _param_GenericArmPciHost
            return _param_GenericArmPciHost
        if fp is not None:
            try:
                _mod = imp.load_module('_param_GenericArmPciHost', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _param_GenericArmPciHost = swig_import_helper()
    del swig_import_helper
else:
    import _param_GenericArmPciHost
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


import m5.internal.enum_ArmPciIntRouting
import m5.internal.param_GenericPciHost
import m5.internal.param_Platform
import m5.internal.param_IntrControl
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
import m5.internal.param_PciHost
import m5.internal.param_PioDevice
class GenericArmPciHost(m5.internal.param_GenericPciHost.GenericPciHost):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')

    def __init__(self, *args, **kwargs):
        raise AttributeError("No constructor defined - class is abstract")
    __repr__ = _swig_repr
GenericArmPciHost_swigregister = _param_GenericArmPciHost.GenericArmPciHost_swigregister
GenericArmPciHost_swigregister(GenericArmPciHost)

class GenericArmPciHostParams(m5.internal.param_GenericPciHost.GenericPciHostParams):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr

    def create(self):
        return _param_GenericArmPciHost.GenericArmPciHostParams_create(self)
    int_base = _swig_property(_param_GenericArmPciHost.GenericArmPciHostParams_int_base_get, _param_GenericArmPciHost.GenericArmPciHostParams_int_base_set)
    int_count = _swig_property(_param_GenericArmPciHost.GenericArmPciHostParams_int_count_get, _param_GenericArmPciHost.GenericArmPciHostParams_int_count_set)
    int_policy = _swig_property(_param_GenericArmPciHost.GenericArmPciHostParams_int_policy_get, _param_GenericArmPciHost.GenericArmPciHostParams_int_policy_set)

    def __init__(self):
        this = _param_GenericArmPciHost.new_GenericArmPciHostParams()
        try:
            self.this.append(this)
        except Exception:
            self.this = this
    __swig_destroy__ = _param_GenericArmPciHost.delete_GenericArmPciHostParams
    __del__ = lambda self: None
GenericArmPciHostParams_swigregister = _param_GenericArmPciHost.GenericArmPciHostParams_swigregister
GenericArmPciHostParams_swigregister(GenericArmPciHostParams)


