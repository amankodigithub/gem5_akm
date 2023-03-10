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
            fp, pathname, description = imp.find_module('_event', [dirname(__file__)])
        except ImportError:
            import _event
            return _event
        if fp is not None:
            try:
                _mod = imp.load_module('_event', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _event = swig_import_helper()
    del swig_import_helper
else:
    import _event
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


import m5.internal.serialize
class Cycles(object):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr

    def __init__(self, *args):
        this = _event.new_Cycles(*args)
        try:
            self.this.append(this)
        except Exception:
            self.this = this
    __swig_destroy__ = _event.delete_Cycles
    __del__ = lambda self: None
Cycles_swigregister = _event.Cycles_swigregister
Cycles_swigregister(Cycles)
cvar = _event.cvar
MaxTick = cvar.MaxTick


def romMicroPC(upc):
    return _event.romMicroPC(upc)
romMicroPC = _event.romMicroPC

def normalMicroPC(upc):
    return _event.normalMicroPC(upc)
normalMicroPC = _event.normalMicroPC

def isRomMicroPC(upc):
    return _event.isRomMicroPC(upc)
isRomMicroPC = _event.isRomMicroPC
class AtomicOpFunctor(object):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')

    def __init__(self, *args, **kwargs):
        raise AttributeError("No constructor defined - class is abstract")
    __repr__ = _swig_repr

    def __call__(self, p):
        return _event.AtomicOpFunctor___call__(self, p)
    __swig_destroy__ = _event.delete_AtomicOpFunctor
    __del__ = lambda self: None
AtomicOpFunctor_swigregister = _event.AtomicOpFunctor_swigregister
AtomicOpFunctor_swigregister(AtomicOpFunctor)
MicroPCRomBit = cvar.MicroPCRomBit
MaxAddr = cvar.MaxAddr
InvalidThreadID = cvar.InvalidThreadID
InvalidContextID = cvar.InvalidContextID
InvalidPortID = cvar.InvalidPortID


_event.BigEndianByteOrder_swigconstant(_event)
BigEndianByteOrder = _event.BigEndianByteOrder

_event.LittleEndianByteOrder_swigconstant(_event)
LittleEndianByteOrder = _event.LittleEndianByteOrder

def getEventQueue(index):
    return _event.getEventQueue(index)
getEventQueue = _event.getEventQueue

def curEventQueue(*args):
    return _event.curEventQueue(*args)
curEventQueue = _event.curEventQueue
class EventBase(object):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    Minimum_Pri = _event.EventBase_Minimum_Pri
    Debug_Enable_Pri = _event.EventBase_Debug_Enable_Pri
    Debug_Break_Pri = _event.EventBase_Debug_Break_Pri
    CPU_Switch_Pri = _event.EventBase_CPU_Switch_Pri
    Delayed_Writeback_Pri = _event.EventBase_Delayed_Writeback_Pri
    Default_Pri = _event.EventBase_Default_Pri
    DVFS_Update_Pri = _event.EventBase_DVFS_Update_Pri
    Serialize_Pri = _event.EventBase_Serialize_Pri
    CPU_Tick_Pri = _event.EventBase_CPU_Tick_Pri
    Stat_Event_Pri = _event.EventBase_Stat_Event_Pri
    Progress_Event_Pri = _event.EventBase_Progress_Event_Pri
    Sim_Exit_Pri = _event.EventBase_Sim_Exit_Pri
    Maximum_Pri = _event.EventBase_Maximum_Pri

    def __init__(self):
        this = _event.new_EventBase()
        try:
            self.this.append(this)
        except Exception:
            self.this = this
    __swig_destroy__ = _event.delete_EventBase
    __del__ = lambda self: None
EventBase_swigregister = _event.EventBase_swigregister
EventBase_swigregister(EventBase)

class Event(EventBase, m5.internal.serialize.Serializable):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')

    def __init__(self, *args, **kwargs):
        raise AttributeError("No constructor defined - class is abstract")
    __repr__ = _swig_repr
    __swig_destroy__ = _event.delete_Event
    __del__ = lambda self: None

    def name(self):
        return _event.Event_name(self)

    def description(self):
        return _event.Event_description(self)

    def dump(self):
        return _event.Event_dump(self)

    def process(self):
        return _event.Event_process(self)

    def scheduled(self):
        return _event.Event_scheduled(self)

    def squash(self):
        return _event.Event_squash(self)

    def squashed(self):
        return _event.Event_squashed(self)

    def isExitEvent(self):
        return _event.Event_isExitEvent(self)

    def isAutoDelete(self):
        return _event.Event_isAutoDelete(self)

    def when(self):
        return _event.Event_when(self)

    def priority(self):
        return _event.Event_priority(self)

    def globalEvent(self):
        return _event.Event_globalEvent(self)
Event_swigregister = _event.Event_swigregister
Event_swigregister(Event)

class EventQueue(object):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr

    def __init__(self, n):
        this = _event.new_EventQueue(n)
        try:
            self.this.append(this)
        except Exception:
            self.this = this

    def name(self, *args):
        return _event.EventQueue_name(self, *args)

    def reschedule(self, event, when, always=False):
        return _event.EventQueue_reschedule(self, event, when, always)

    def nextTick(self):
        return _event.EventQueue_nextTick(self)

    def setCurTick(self, newVal):
        return _event.EventQueue_setCurTick(self, newVal)

    def getCurTick(self):
        return _event.EventQueue_getCurTick(self)

    def getHead(self):
        return _event.EventQueue_getHead(self)

    def serviceOne(self):
        return _event.EventQueue_serviceOne(self)

    def serviceEvents(self, when):
        return _event.EventQueue_serviceEvents(self, when)

    def empty(self):
        return _event.EventQueue_empty(self)

    def dump(self):
        return _event.EventQueue_dump(self)

    def debugVerify(self):
        return _event.EventQueue_debugVerify(self)

    def handleAsyncInsertions(self):
        return _event.EventQueue_handleAsyncInsertions(self)

    def wakeup(self, *args):
        return _event.EventQueue_wakeup(self, *args)

    def replaceHead(self, s):
        return _event.EventQueue_replaceHead(self, s)

    def lock(self):
        return _event.EventQueue_lock(self)

    def unlock(self):
        return _event.EventQueue_unlock(self)

    def checkpointReschedule(self, event):
        return _event.EventQueue_checkpointReschedule(self, event)
    __swig_destroy__ = _event.delete_EventQueue
    __del__ = lambda self: None

    def schedule(self, event, when):
        return _event.EventQueue_schedule(self, event, when)

    def deschedule(self, event):
        return _event.EventQueue_deschedule(self, event)
EventQueue_swigregister = _event.EventQueue_swigregister
EventQueue_swigregister(EventQueue)


def dumpMainQueue():
    return _event.dumpMainQueue()
dumpMainQueue = _event.dumpMainQueue
class PythonEvent(Event):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    object = _swig_property(_event.PythonEvent_object_get, _event.PythonEvent_object_set)

    def __init__(self, obj, priority):
        this = _event.new_PythonEvent(obj, priority)
        try:
            self.this.append(this)
        except Exception:
            self.this = this
    __swig_destroy__ = _event.delete_PythonEvent
    __del__ = lambda self: None

    def incref(self):
        return _event.PythonEvent_incref(self)

    def decref(self):
        return _event.PythonEvent_decref(self)

    def process(self):
        return _event.PythonEvent_process(self)
PythonEvent_swigregister = _event.PythonEvent_swigregister
PythonEvent_swigregister(PythonEvent)

class GlobalSimLoopExitEvent(object):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr

    def getCause(self):
        return _event.GlobalSimLoopExitEvent_getCause(self)

    def getCode(self):
        return _event.GlobalSimLoopExitEvent_getCode(self)

    def __init__(self, when, _cause, c, _repeat=0):
        this = _event.new_GlobalSimLoopExitEvent(when, _cause, c, _repeat)
        try:
            self.this.append(this)
        except Exception:
            self.this = this
    __swig_destroy__ = _event.delete_GlobalSimLoopExitEvent
    __del__ = lambda self: None
GlobalSimLoopExitEvent_swigregister = _event.GlobalSimLoopExitEvent_swigregister
GlobalSimLoopExitEvent_swigregister(GlobalSimLoopExitEvent)


def simulate(*args):
    return _event.simulate(*args)
simulate = _event.simulate

def exitSimLoop(message, exit_code):
    return _event.exitSimLoop(message, exit_code)
exitSimLoop = _event.exitSimLoop


