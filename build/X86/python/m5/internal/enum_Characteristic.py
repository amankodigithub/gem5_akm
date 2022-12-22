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
            fp, pathname, description = imp.find_module('_enum_Characteristic', [dirname(__file__)])
        except ImportError:
            import _enum_Characteristic
            return _enum_Characteristic
        if fp is not None:
            try:
                _mod = imp.load_module('_enum_Characteristic', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _enum_Characteristic = swig_import_helper()
    del swig_import_helper
else:
    import _enum_Characteristic
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



_enum_Characteristic.APM_swigconstant(_enum_Characteristic)
APM = _enum_Characteristic.APM

_enum_Characteristic.CDBoot_swigconstant(_enum_Characteristic)
CDBoot = _enum_Characteristic.CDBoot

_enum_Characteristic.CGA_Mono_swigconstant(_enum_Characteristic)
CGA_Mono = _enum_Characteristic.CGA_Mono

_enum_Characteristic.EDD_swigconstant(_enum_Characteristic)
EDD = _enum_Characteristic.EDD

_enum_Characteristic.EISA_swigconstant(_enum_Characteristic)
EISA = _enum_Characteristic.EISA

_enum_Characteristic.ESCD_swigconstant(_enum_Characteristic)
ESCD = _enum_Characteristic.ESCD

_enum_Characteristic.Flash_swigconstant(_enum_Characteristic)
Flash = _enum_Characteristic.Flash

_enum_Characteristic.Floppy_3_5_2_88MB_swigconstant(_enum_Characteristic)
Floppy_3_5_2_88MB = _enum_Characteristic.Floppy_3_5_2_88MB

_enum_Characteristic.Floppy_3_5_720KB_swigconstant(_enum_Characteristic)
Floppy_3_5_720KB = _enum_Characteristic.Floppy_3_5_720KB

_enum_Characteristic.Floppy_5_25_1_2MB_swigconstant(_enum_Characteristic)
Floppy_5_25_1_2MB = _enum_Characteristic.Floppy_5_25_1_2MB

_enum_Characteristic.Floppy_5_25_360KB_swigconstant(_enum_Characteristic)
Floppy_5_25_360KB = _enum_Characteristic.Floppy_5_25_360KB

_enum_Characteristic.ISA_swigconstant(_enum_Characteristic)
ISA = _enum_Characteristic.ISA

_enum_Characteristic.Keyboard8024_swigconstant(_enum_Characteristic)
Keyboard8024 = _enum_Characteristic.Keyboard8024

_enum_Characteristic.MCA_swigconstant(_enum_Characteristic)
MCA = _enum_Characteristic.MCA

_enum_Characteristic.NEC9800_swigconstant(_enum_Characteristic)
NEC9800 = _enum_Characteristic.NEC9800

_enum_Characteristic.NEC_PC_98_swigconstant(_enum_Characteristic)
NEC_PC_98 = _enum_Characteristic.NEC_PC_98

_enum_Characteristic.PCI_swigconstant(_enum_Characteristic)
PCI = _enum_Characteristic.PCI

_enum_Characteristic.PCMCIA_swigconstant(_enum_Characteristic)
PCMCIA = _enum_Characteristic.PCMCIA

_enum_Characteristic.PCMCIABoot_swigconstant(_enum_Characteristic)
PCMCIABoot = _enum_Characteristic.PCMCIABoot

_enum_Characteristic.PnP_swigconstant(_enum_Characteristic)
PnP = _enum_Characteristic.PnP

_enum_Characteristic.PrintScreen_swigconstant(_enum_Characteristic)
PrintScreen = _enum_Characteristic.PrintScreen

_enum_Characteristic.Printer_swigconstant(_enum_Characteristic)
Printer = _enum_Characteristic.Printer

_enum_Characteristic.SelectBoot_swigconstant(_enum_Characteristic)
SelectBoot = _enum_Characteristic.SelectBoot

_enum_Characteristic.Serial_swigconstant(_enum_Characteristic)
Serial = _enum_Characteristic.Serial

_enum_Characteristic.Shadow_swigconstant(_enum_Characteristic)
Shadow = _enum_Characteristic.Shadow

_enum_Characteristic.Socketed_swigconstant(_enum_Characteristic)
Socketed = _enum_Characteristic.Socketed

_enum_Characteristic.Toshiba_swigconstant(_enum_Characteristic)
Toshiba = _enum_Characteristic.Toshiba

_enum_Characteristic.Unknown_swigconstant(_enum_Characteristic)
Unknown = _enum_Characteristic.Unknown

_enum_Characteristic.Unsupported_swigconstant(_enum_Characteristic)
Unsupported = _enum_Characteristic.Unsupported

_enum_Characteristic.VL_Vesa_swigconstant(_enum_Characteristic)
VL_Vesa = _enum_Characteristic.VL_Vesa

_enum_Characteristic.Num_Characteristic_swigconstant(_enum_Characteristic)
Num_Characteristic = _enum_Characteristic.Num_Characteristic

cvar = _enum_Characteristic.cvar
