#ifndef org_apache_lucene_index_DocValuesType_H
#define org_apache_lucene_index_DocValuesType_H

#include "java/lang/Enum.h"

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
        class DocValuesType;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class DocValuesType : public ::java::lang::Enum {
         public:
          enum {
            mid_valueOf_d990a73d022b8e2b,
            mid_values_6eb2dcb5e864479c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DocValuesType(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DocValuesType(const DocValuesType& obj) : ::java::lang::Enum(obj) {}

          static DocValuesType *BINARY;
          static DocValuesType *NONE;
          static DocValuesType *NUMERIC;
          static DocValuesType *SORTED;
          static DocValuesType *SORTED_NUMERIC;
          static DocValuesType *SORTED_SET;

          static DocValuesType valueOf(const ::java::lang::String &);
          static JArray< DocValuesType > values();
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
        extern PyType_Def PY_TYPE_DEF(DocValuesType);
        extern PyTypeObject *PY_TYPE(DocValuesType);

        class t_DocValuesType {
        public:
          PyObject_HEAD
          DocValuesType object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_DocValuesType *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const DocValuesType&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const DocValuesType&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
