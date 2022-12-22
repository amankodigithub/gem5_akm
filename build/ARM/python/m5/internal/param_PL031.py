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
            fp, pathname, description = imp.find_module('_param_PL031', [dirname(__file__)])
        except ImportError:
            import _param_PL031
            return _param_PL031
        if fp is not None:
            try:
                _mod = imp.load_module('_param_PL031', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _param_PL031 = swig_import_helper()
    del swig_import_helper
else:
    import _param_PL031
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


class tm(object):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    tm_sec = _swig_property(_param_PL031.tm_tm_sec_get, _param_PL031.tm_tm_sec_set)
    tm_min = _swig_property(_param_PL031.tm_tm_min_get, _param_PL031.tm_tm_min_set)
    tm_hour = _swig_property(_param_PL031.tm_tm_hour_get, _param_PL031.tm_tm_hour_set)
    tm_mday = _swig_property(_param_PL031.tm_tm_mday_get, _param_PL031.tm_tm_mday_set)
    tm_mon = _swig_property(_param_PL031.tm_tm_mon_get, _param_PL031.tm_tm_mon_set)
    tm_year = _swig_property(_param_PL031.tm_tm_year_get, _param_PL031.tm_tm_year_set)
    tm_wday = _swig_property(_param_PL031.tm_tm_wday_get, _param_PL031.tm_tm_wday_set)
    tm_yday = _swig_property(_param_PL031.tm_tm_yday_get, _param_PL031.tm_tm_yday_set)

    def __init__(self):
        this = _param_PL031.new_tm()
        try:
            self.this.append(this)
        except Exception:
            self.this = this
    __swig_destroy__ = _param_PL031.delete_tm
    __del__ = lambda self: None
tm_swigregister = _param_PL031.tm_swigregister
tm_swigregister(tm)

import m5.internal.param_AmbaIntDevice
import m5.internal.param_BaseGic
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
import m5.internal.param_PioDevice
import m5.internal.param_AmbaPioDevice
import m5.internal.param_BasicPioDevice
class PL031(m5.internal.param_AmbaIntDevice.AmbaIntDevice):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')

    def __init__(self, *args, **kwargs):
        raise AttributeError("No constructor defined - class is abstract")
    __repr__ = _swig_repr
PL031_swigregister = _param_PL031.PL031_swigregister
PL031_swigregister(PL031)

class PL031Params(m5.internal.param_AmbaIntDevice.AmbaIntDeviceParams):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr

    def create(self):
        return _param_PL031.PL031Params_create(self)
    time = _swig_property(_param_PL031.PL031Params_time_get, _param_PL031.PL031Params_time_set)

    def __init__(self):
        this = _param_PL031.new_PL031Params()
        try:
            self.this.append(this)
        except Exception:
            self.this = this
    __swig_destroy__ = _param_PL031.delete_PL031Params
    __del__ = lambda self: None
PL031Params_swigregister = _param_PL031.PL031Params_swigregister
PL031Params_swigregister(PL031Params)


