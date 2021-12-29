#ifndef org_apache_lucene_util_FrequencyTrackingRingBuffer_H
#define org_apache_lucene_util_FrequencyTrackingRingBuffer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class FrequencyTrackingRingBuffer : public ::java::lang::Object {
         public:
          enum {
            mid_init$_438c62480c481c65,
            mid_add_040c4cd0390c5aff,
            mid_frequency_1e143afe1894d213,
            mid_ramBytesUsed_2e5ae9edcb9b072f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FrequencyTrackingRingBuffer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FrequencyTrackingRingBuffer(const FrequencyTrackingRingBuffer& obj) : ::java::lang::Object(obj) {}

          FrequencyTrackingRingBuffer(jint, jint);

          void add(jint) const;
          jint frequency(jint) const;
          jlong ramBytesUsed() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(FrequencyTrackingRingBuffer);
        extern PyTypeObject *PY_TYPE(FrequencyTrackingRingBuffer);

        class t_FrequencyTrackingRingBuffer {
        public:
          PyObject_HEAD
          FrequencyTrackingRingBuffer object;
          static PyObject *wrap_Object(const FrequencyTrackingRingBuffer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
