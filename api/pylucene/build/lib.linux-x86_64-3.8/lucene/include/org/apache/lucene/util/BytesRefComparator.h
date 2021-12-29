#ifndef org_apache_lucene_util_BytesRefComparator_H
#define org_apache_lucene_util_BytesRefComparator_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Comparator;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class BytesRefComparator : public ::java::lang::Object {
         public:
          enum {
            mid_compare_f465493e4f3be174,
            mid_byteAt_9f7425bab85cd786,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BytesRefComparator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BytesRefComparator(const BytesRefComparator& obj) : ::java::lang::Object(obj) {}

          jint compare(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &) const;
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
        extern PyType_Def PY_TYPE_DEF(BytesRefComparator);
        extern PyTypeObject *PY_TYPE(BytesRefComparator);

        class t_BytesRefComparator {
        public:
          PyObject_HEAD
          BytesRefComparator object;
          static PyObject *wrap_Object(const BytesRefComparator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
