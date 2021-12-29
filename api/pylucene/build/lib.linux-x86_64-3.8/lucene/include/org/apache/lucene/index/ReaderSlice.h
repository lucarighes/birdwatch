#ifndef org_apache_lucene_index_ReaderSlice_H
#define org_apache_lucene_index_ReaderSlice_H

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
      namespace index {
        class ReaderSlice;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class ReaderSlice : public ::java::lang::Object {
         public:
          enum {
            mid_init$_db3e97653d3683f3,
            mid_toString_db9b55ba01e03e4b,
            max_mid
          };

          enum {
            fid_length,
            fid_readerIndex,
            fid_start,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ReaderSlice(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ReaderSlice(const ReaderSlice& obj) : ::java::lang::Object(obj) {}

          static JArray< ReaderSlice > *EMPTY_ARRAY;

          jint _get_length() const;
          jint _get_readerIndex() const;
          jint _get_start() const;

          ReaderSlice(jint, jint, jint);

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
      namespace index {
        extern PyType_Def PY_TYPE_DEF(ReaderSlice);
        extern PyTypeObject *PY_TYPE(ReaderSlice);

        class t_ReaderSlice {
        public:
          PyObject_HEAD
          ReaderSlice object;
          static PyObject *wrap_Object(const ReaderSlice&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
