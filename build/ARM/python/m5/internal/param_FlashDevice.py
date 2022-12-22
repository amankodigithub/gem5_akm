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
            fp, pathname, description = imp.find_module('_param_FlashDevice', [dirname(__file__)])
        except ImportError:
            import _param_FlashDevice
            return _param_FlashDevice
        if fp is not None:
            try:
                _mod = imp.load_module('_param_FlashDevice', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _param_FlashDevice = swig_import_helper()
    del swig_import_helper
else:
    import _param_FlashDevice
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


import m5.internal.enum_DataDistribution
import m5.internal.param_AbstractNVM
import m5.internal.param_SimObject
import m5.internal.drain
import m5.internal.serialize
class FlashDevice(m5.internal.param_AbstractNVM.AbstractNVM):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')

    def __init__(self, *args, **kwargs):
        raise AttributeError("No constructor defined - class is abstract")
    __repr__ = _swig_repr
FlashDevice_swigregister = _param_FlashDevice.FlashDevice_swigregister
FlashDevice_swigregister(FlashDevice)

class FlashDeviceParams(m5.internal.param_AbstractNVM.AbstractNVMParams):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr

    def create(self):
        return _param_FlashDevice.FlashDeviceParams_create(self)
    GC_active = _swig_property(_param_FlashDevice.FlashDeviceParams_GC_active_get, _param_FlashDevice.FlashDeviceParams_GC_active_set)
    blk_size = _swig_property(_param_FlashDevice.FlashDeviceParams_blk_size_get, _param_FlashDevice.FlashDeviceParams_blk_size_set)
    data_distribution = _swig_property(_param_FlashDevice.FlashDeviceParams_data_distribution_get, _param_FlashDevice.FlashDeviceParams_data_distribution_set)
    erase_lat = _swig_property(_param_FlashDevice.FlashDeviceParams_erase_lat_get, _param_FlashDevice.FlashDeviceParams_erase_lat_set)
    num_planes = _swig_property(_param_FlashDevice.FlashDeviceParams_num_planes_get, _param_FlashDevice.FlashDeviceParams_num_planes_set)
    page_size = _swig_property(_param_FlashDevice.FlashDeviceParams_page_size_get, _param_FlashDevice.FlashDeviceParams_page_size_set)
    read_lat = _swig_property(_param_FlashDevice.FlashDeviceParams_read_lat_get, _param_FlashDevice.FlashDeviceParams_read_lat_set)
    write_lat = _swig_property(_param_FlashDevice.FlashDeviceParams_write_lat_get, _param_FlashDevice.FlashDeviceParams_write_lat_set)

    def __init__(self):
        this = _param_FlashDevice.new_FlashDeviceParams()
        try:
            self.this.append(this)
        except Exception:
            self.this = this
    __swig_destroy__ = _param_FlashDevice.delete_FlashDeviceParams
    __del__ = lambda self: None
FlashDeviceParams_swigregister = _param_FlashDevice.FlashDeviceParams_swigregister
FlashDeviceParams_swigregister(FlashDeviceParams)


