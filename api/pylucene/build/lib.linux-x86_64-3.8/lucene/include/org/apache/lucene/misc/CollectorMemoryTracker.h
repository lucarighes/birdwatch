#ifndef org_apache_lucene_misc_CollectorMemoryTracker_H
#define org_apache_lucene_misc_CollectorMemoryTracker_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class MemoryTracker;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace misc {

        class CollectorMemoryTracker : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0084e2c6585d8c01,
            mid_getBytes_2e5ae9edcb9b072f,
            mid_updateBytes_9c778c9bce6694df,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CollectorMemoryTracker(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CollectorMemoryTracker(const CollectorMemoryTracker& obj) : ::java::lang::Object(obj) {}

          CollectorMemoryTracker(const ::java::lang::String &, jlong);

          jlong getBytes() const;
          void updateBytes(jlong) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace misc {
        extern PyType_Def PY_TYPE_DEF(CollectorMemoryTracker);
        extern PyTypeObject *PY_TYPE(CollectorMemoryTracker);

        class t_CollectorMemoryTracker {
        public:
          PyObject_HEAD
          CollectorMemoryTracker object;
          static PyObject *wrap_Object(const CollectorMemoryTracker&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
