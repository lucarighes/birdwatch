#ifndef org_apache_lucene_index_IndexOptions_H
#define org_apache_lucene_index_IndexOptions_H

#include "java/lang/Enum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexOptions;
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
      namespace index {

        class IndexOptions : public ::java::lang::Enum {
         public:
          enum {
            mid_valueOf_7314196abc530909,
            mid_values_02584b44aaf90b3f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexOptions(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexOptions(const IndexOptions& obj) : ::java::lang::Enum(obj) {}

          static IndexOptions *DOCS;
          static IndexOptions *DOCS_AND_FREQS;
          static IndexOptions *DOCS_AND_FREQS_AND_POSITIONS;
          static IndexOptions *DOCS_AND_FREQS_AND_POSITIONS_AND_OFFSETS;
          static IndexOptions *NONE;

          static IndexOptions valueOf(const ::java::lang::String &);
          static JArray< IndexOptions > values();
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
        extern PyType_Def PY_TYPE_DEF(IndexOptions);
        extern PyTypeObject *PY_TYPE(IndexOptions);

        class t_IndexOptions {
        public:
          PyObject_HEAD
          IndexOptions object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_IndexOptions *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const IndexOptions&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const IndexOptions&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
