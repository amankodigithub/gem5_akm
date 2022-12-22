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
            fp, pathname, description = imp.find_module('_param_NoMaliGpu', [dirname(__file__)])
        except ImportError:
            import _param_NoMaliGpu
            return _param_NoMaliGpu
        if fp is not None:
            try:
                _mod = imp.load_module('_param_NoMaliGpu', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _param_NoMaliGpu = swig_import_helper()
    del swig_import_helper
else:
    import _param_NoMaliGpu
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


import m5.internal.enum_NoMaliGpuType
import m5.internal.param_RealView
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
import m5.internal.param_Platform
import m5.internal.param_IntrControl
import m5.internal.param_PioDevice
class NoMaliGpu(m5.internal.param_PioDevice.PioDevice):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')

    def __init__(self, *args, **kwargs):
        raise AttributeError("No constructor defined - class is abstract")
    __repr__ = _swig_repr
NoMaliGpu_swigregister = _param_NoMaliGpu.NoMaliGpu_swigregister
NoMaliGpu_swigregister(NoMaliGpu)

class NoMaliGpuParams(m5.internal.param_PioDevice.PioDeviceParams):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr

    def create(self):
        return _param_NoMaliGpu.NoMaliGpuParams_create(self)
    gpu_type = _swig_property(_param_NoMaliGpu.NoMaliGpuParams_gpu_type_get, _param_NoMaliGpu.NoMaliGpuParams_gpu_type_set)
    int_gpu = _swig_property(_param_NoMaliGpu.NoMaliGpuParams_int_gpu_get, _param_NoMaliGpu.NoMaliGpuParams_int_gpu_set)
    int_job = _swig_property(_param_NoMaliGpu.NoMaliGpuParams_int_job_get, _param_NoMaliGpu.NoMaliGpuParams_int_job_set)
    int_mmu = _swig_property(_param_NoMaliGpu.NoMaliGpuParams_int_mmu_get, _param_NoMaliGpu.NoMaliGpuParams_int_mmu_set)
    pio_addr = _swig_property(_param_NoMaliGpu.NoMaliGpuParams_pio_addr_get, _param_NoMaliGpu.NoMaliGpuParams_pio_addr_set)
    platform = _swig_property(_param_NoMaliGpu.NoMaliGpuParams_platform_get, _param_NoMaliGpu.NoMaliGpuParams_platform_set)
    ver_maj = _swig_property(_param_NoMaliGpu.NoMaliGpuParams_ver_maj_get, _param_NoMaliGpu.NoMaliGpuParams_ver_maj_set)
    ver_min = _swig_property(_param_NoMaliGpu.NoMaliGpuParams_ver_min_get, _param_NoMaliGpu.NoMaliGpuParams_ver_min_set)
    ver_status = _swig_property(_param_NoMaliGpu.NoMaliGpuParams_ver_status_get, _param_NoMaliGpu.NoMaliGpuParams_ver_status_set)

    def __init__(self):
        this = _param_NoMaliGpu.new_NoMaliGpuParams()
        try:
            self.this.append(this)
        except Exception:
            self.this = this
    __swig_destroy__ = _param_NoMaliGpu.delete_NoMaliGpuParams
    __del__ = lambda self: None
NoMaliGpuParams_swigregister = _param_NoMaliGpu.NoMaliGpuParams_swigregister
NoMaliGpuParams_swigregister(NoMaliGpuParams)



