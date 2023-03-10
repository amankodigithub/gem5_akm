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
            fp, pathname, description = imp.find_module('_param_CustomNoMaliGpu', [dirname(__file__)])
        except ImportError:
            import _param_CustomNoMaliGpu
            return _param_CustomNoMaliGpu
        if fp is not None:
            try:
                _mod = imp.load_module('_param_CustomNoMaliGpu', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _param_CustomNoMaliGpu = swig_import_helper()
    del swig_import_helper
else:
    import _param_CustomNoMaliGpu
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


import m5.internal.UInt32_vector
import m5.internal.param_NoMaliGpu
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
class CustomNoMaliGpu(m5.internal.param_NoMaliGpu.NoMaliGpu):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')

    def __init__(self, *args, **kwargs):
        raise AttributeError("No constructor defined - class is abstract")
    __repr__ = _swig_repr
CustomNoMaliGpu_swigregister = _param_CustomNoMaliGpu.CustomNoMaliGpu_swigregister
CustomNoMaliGpu_swigregister(CustomNoMaliGpu)

class CustomNoMaliGpuParams(m5.internal.param_NoMaliGpu.NoMaliGpuParams):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr

    def create(self):
        return _param_CustomNoMaliGpu.CustomNoMaliGpuParams_create(self)
    as_present = _swig_property(_param_CustomNoMaliGpu.CustomNoMaliGpuParams_as_present_get, _param_CustomNoMaliGpu.CustomNoMaliGpuParams_as_present_set)
    gpu_id = _swig_property(_param_CustomNoMaliGpu.CustomNoMaliGpuParams_gpu_id_get, _param_CustomNoMaliGpu.CustomNoMaliGpuParams_gpu_id_set)
    js_features = _swig_property(_param_CustomNoMaliGpu.CustomNoMaliGpuParams_js_features_get, _param_CustomNoMaliGpu.CustomNoMaliGpuParams_js_features_set)
    js_present = _swig_property(_param_CustomNoMaliGpu.CustomNoMaliGpuParams_js_present_get, _param_CustomNoMaliGpu.CustomNoMaliGpuParams_js_present_set)
    l2_features = _swig_property(_param_CustomNoMaliGpu.CustomNoMaliGpuParams_l2_features_get, _param_CustomNoMaliGpu.CustomNoMaliGpuParams_l2_features_set)
    l2_present = _swig_property(_param_CustomNoMaliGpu.CustomNoMaliGpuParams_l2_present_get, _param_CustomNoMaliGpu.CustomNoMaliGpuParams_l2_present_set)
    mem_features = _swig_property(_param_CustomNoMaliGpu.CustomNoMaliGpuParams_mem_features_get, _param_CustomNoMaliGpu.CustomNoMaliGpuParams_mem_features_set)
    mmu_features = _swig_property(_param_CustomNoMaliGpu.CustomNoMaliGpuParams_mmu_features_get, _param_CustomNoMaliGpu.CustomNoMaliGpuParams_mmu_features_set)
    shader_present = _swig_property(_param_CustomNoMaliGpu.CustomNoMaliGpuParams_shader_present_get, _param_CustomNoMaliGpu.CustomNoMaliGpuParams_shader_present_set)
    texture_features = _swig_property(_param_CustomNoMaliGpu.CustomNoMaliGpuParams_texture_features_get, _param_CustomNoMaliGpu.CustomNoMaliGpuParams_texture_features_set)
    thread_features = _swig_property(_param_CustomNoMaliGpu.CustomNoMaliGpuParams_thread_features_get, _param_CustomNoMaliGpu.CustomNoMaliGpuParams_thread_features_set)
    thread_max_barrier_size = _swig_property(_param_CustomNoMaliGpu.CustomNoMaliGpuParams_thread_max_barrier_size_get, _param_CustomNoMaliGpu.CustomNoMaliGpuParams_thread_max_barrier_size_set)
    thread_max_threads = _swig_property(_param_CustomNoMaliGpu.CustomNoMaliGpuParams_thread_max_threads_get, _param_CustomNoMaliGpu.CustomNoMaliGpuParams_thread_max_threads_set)
    thread_max_workgroup_size = _swig_property(_param_CustomNoMaliGpu.CustomNoMaliGpuParams_thread_max_workgroup_size_get, _param_CustomNoMaliGpu.CustomNoMaliGpuParams_thread_max_workgroup_size_set)
    tiler_features = _swig_property(_param_CustomNoMaliGpu.CustomNoMaliGpuParams_tiler_features_get, _param_CustomNoMaliGpu.CustomNoMaliGpuParams_tiler_features_set)
    tiler_present = _swig_property(_param_CustomNoMaliGpu.CustomNoMaliGpuParams_tiler_present_get, _param_CustomNoMaliGpu.CustomNoMaliGpuParams_tiler_present_set)

    def __init__(self):
        this = _param_CustomNoMaliGpu.new_CustomNoMaliGpuParams()
        try:
            self.this.append(this)
        except Exception:
            self.this = this
    __swig_destroy__ = _param_CustomNoMaliGpu.delete_CustomNoMaliGpuParams
    __del__ = lambda self: None
CustomNoMaliGpuParams_swigregister = _param_CustomNoMaliGpu.CustomNoMaliGpuParams_swigregister
CustomNoMaliGpuParams_swigregister(CustomNoMaliGpuParams)



