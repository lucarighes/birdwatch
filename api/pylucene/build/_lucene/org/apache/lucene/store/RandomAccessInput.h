#ifndef org_apache_lucene_store_RandomAccessInput_H
#define org_apache_lucene_store_RandomAccessInput_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
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

        class RandomAccessInput : public ::java::lang::Object {
         public:
          enum {
            mid_readByte_70f46e25a8aca047,
            mid_readInt_694afffd0eb7dc3c,
            mid_readLong_d711eecdc469624a,
            mid_readShort_e963ff2cc414b347,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RandomAccessInput(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RandomAccessInput(const RandomAccessInput& obj) : ::java::lang::Object(obj) {}

          jbyte readByte(jlong) const;
          jint readInt(jlong) const;
          jlong readLong(jlong) const;
          jshort readShort(jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(RandomAccessInput);
        extern PyTypeObject *PY_TYPE(RandomAccessInput);

        class t_RandomAccessInput {
        public:
          PyObject_HEAD
          RandomAccessInput object;
          static PyObject *wrap_Object(const RandomAccessInput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
