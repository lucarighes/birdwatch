#ifndef org_apache_lucene_store_ByteBuffersDataOutput$ByteBufferRecycler_H
#define org_apache_lucene_store_ByteBuffersDataOutput$ByteBufferRecycler_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace function {
      class IntFunction;
    }
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class ByteBuffersDataOutput$ByteBufferRecycler : public ::java::lang::Object {
         public:

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ByteBuffersDataOutput$ByteBufferRecycler(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ByteBuffersDataOutput$ByteBufferRecycler(const ByteBuffersDataOutput$ByteBufferRecycler& obj) : ::java::lang::Object(obj) {}
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        extern PyType_Def PY_TYPE_DEF(ByteBuffersDataOutput$ByteBufferRecycler);
        extern PyTypeObject *PY_TYPE(ByteBuffersDataOutput$ByteBufferRecycler);

        class t_ByteBuffersDataOutput$ByteBufferRecycler {
        public:
          PyObject_HEAD
          ByteBuffersDataOutput$ByteBufferRecycler object;
          static PyObject *wrap_Object(const ByteBuffersDataOutput$ByteBufferRecycler&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
