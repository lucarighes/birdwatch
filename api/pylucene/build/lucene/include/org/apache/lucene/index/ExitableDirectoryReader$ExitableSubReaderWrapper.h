#ifndef org_apache_lucene_index_ExitableDirectoryReader$ExitableSubReaderWrapper_H
#define org_apache_lucene_index_ExitableDirectoryReader$ExitableSubReaderWrapper_H

#include "org/apache/lucene/index/FilterDirectoryReader$SubReaderWrapper.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class QueryTimeout;
        class LeafReader;
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
      namespace index {

        class ExitableDirectoryReader$ExitableSubReaderWrapper : public ::org::apache::lucene::index::FilterDirectoryReader$SubReaderWrapper {
         public:
          enum {
            mid_init$_f41b94f71519ae1d,
            mid_wrap_c175952bcee17188,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ExitableDirectoryReader$ExitableSubReaderWrapper(jobject obj) : ::org::apache::lucene::index::FilterDirectoryReader$SubReaderWrapper(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ExitableDirectoryReader$ExitableSubReaderWrapper(const ExitableDirectoryReader$ExitableSubReaderWrapper& obj) : ::org::apache::lucene::index::FilterDirectoryReader$SubReaderWrapper(obj) {}

          ExitableDirectoryReader$ExitableSubReaderWrapper(const ::org::apache::lucene::index::QueryTimeout &);

          ::org::apache::lucene::index::LeafReader wrap(const ::org::apache::lucene::index::LeafReader &) const;
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
        extern PyType_Def PY_TYPE_DEF(ExitableDirectoryReader$ExitableSubReaderWrapper);
        extern PyTypeObject *PY_TYPE(ExitableDirectoryReader$ExitableSubReaderWrapper);

        class t_ExitableDirectoryReader$ExitableSubReaderWrapper {
        public:
          PyObject_HEAD
          ExitableDirectoryReader$ExitableSubReaderWrapper object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_ExitableDirectoryReader$ExitableSubReaderWrapper *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const ExitableDirectoryReader$ExitableSubReaderWrapper&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const ExitableDirectoryReader$ExitableSubReaderWrapper&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
