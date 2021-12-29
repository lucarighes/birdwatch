#ifndef org_apache_lucene_facet_StringDocValuesReaderState_H
#define org_apache_lucene_facet_StringDocValuesReaderState_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {

        class StringDocValuesReaderState : public ::java::lang::Object {
         public:
          enum {
            mid_init$_456f925f19f7f45c,
            mid_toString_db9b55ba01e03e4b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StringDocValuesReaderState(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          StringDocValuesReaderState(const StringDocValuesReaderState& obj) : ::java::lang::Object(obj) {}

          StringDocValuesReaderState(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &);

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
      namespace facet {
        extern PyType_Def PY_TYPE_DEF(StringDocValuesReaderState);
        extern PyTypeObject *PY_TYPE(StringDocValuesReaderState);

        class t_StringDocValuesReaderState {
        public:
          PyObject_HEAD
          StringDocValuesReaderState object;
          static PyObject *wrap_Object(const StringDocValuesReaderState&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
