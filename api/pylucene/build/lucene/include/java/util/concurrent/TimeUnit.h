#ifndef java_util_concurrent_TimeUnit_H
#define java_util_concurrent_TimeUnit_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class Class;
    class Object;
    class String;
    class InterruptedException;
    class Thread;
  }
  namespace util {
    namespace concurrent {
      class TimeUnit;
    }
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace concurrent {

      class TimeUnit : public ::java::lang::Enum {
       public:
        enum {
          mid_convert_ccb7513c89073172,
          mid_sleep_9c778c9bce6694df,
          mid_timedJoin_72ed2aade046f3ba,
          mid_timedWait_f63797c6ac19e2f5,
          mid_toDays_d711eecdc469624a,
          mid_toHours_d711eecdc469624a,
          mid_toMicros_d711eecdc469624a,
          mid_toMillis_d711eecdc469624a,
          mid_toMinutes_d711eecdc469624a,
          mid_toNanos_d711eecdc469624a,
          mid_toSeconds_d711eecdc469624a,
          mid_valueOf_d74b47f51ef4a712,
          mid_values_7ff1d7c143beb75e,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit TimeUnit(jobject obj) : ::java::lang::Enum(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        TimeUnit(const TimeUnit& obj) : ::java::lang::Enum(obj) {}

        static TimeUnit *DAYS;
        static TimeUnit *HOURS;
        static TimeUnit *MICROSECONDS;
        static TimeUnit *MILLISECONDS;
        static TimeUnit *MINUTES;
        static TimeUnit *NANOSECONDS;
        static TimeUnit *SECONDS;

        jlong convert(jlong, const TimeUnit &) const;
        void sleep(jlong) const;
        void timedJoin(const ::java::lang::Thread &, jlong) const;
        void timedWait(const ::java::lang::Object &, jlong) const;
        jlong toDays(jlong) const;
        jlong toHours(jlong) const;
        jlong toMicros(jlong) const;
        jlong toMillis(jlong) const;
        jlong toMinutes(jlong) const;
        jlong toNanos(jlong) const;
        jlong toSeconds(jlong) const;
        static TimeUnit valueOf(const ::java::lang::String &);
        static JArray< TimeUnit > values();
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace concurrent {
      extern PyType_Def PY_TYPE_DEF(TimeUnit);
      extern PyTypeObject *PY_TYPE(TimeUnit);

      class t_TimeUnit {
      public:
        PyObject_HEAD
        TimeUnit object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_TimeUnit *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const TimeUnit&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const TimeUnit&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
