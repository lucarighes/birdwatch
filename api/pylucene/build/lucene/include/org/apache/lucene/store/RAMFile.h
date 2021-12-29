#ifndef org_apache_lucene_store_RAMFile_H
#define org_apache_lucene_store_RAMFile_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class RAMFile : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_equals_8b72f2dcdde6fd1d,
            mid_getLength_2e5ae9edcb9b072f,
            mid_hashCode_9972fcc56b44e79d,
            mid_ramBytesUsed_2e5ae9edcb9b072f,
            mid_toString_db9b55ba01e03e4b,
            mid_getBuffer_81fae1e0e2d0070b,
            mid_newBuffer_81fae1e0e2d0070b,
            mid_numBuffers_9972fcc56b44e79d,
            mid_addBuffer_81fae1e0e2d0070b,
            mid_setLength_9c778c9bce6694df,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RAMFile(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RAMFile(const RAMFile& obj) : ::java::lang::Object(obj) {}

          RAMFile();

          jboolean equals(const ::java::lang::Object &) const;
          jlong getLength() const;
          jint hashCode() const;
          jlong ramBytesUsed() const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(RAMFile);
        extern PyTypeObject *PY_TYPE(RAMFile);

        class t_RAMFile {
        public:
          PyObject_HEAD
          RAMFile object;
          static PyObject *wrap_Object(const RAMFile&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
