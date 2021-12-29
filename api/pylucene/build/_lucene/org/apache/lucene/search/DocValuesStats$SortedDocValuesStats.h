#ifndef org_apache_lucene_search_DocValuesStats$SortedDocValuesStats_H
#define org_apache_lucene_search_DocValuesStats$SortedDocValuesStats_H

#include "org/apache/lucene/search/DocValuesStats.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
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
      namespace search {

        class DocValuesStats$SortedDocValuesStats : public ::org::apache::lucene::search::DocValuesStats {
         public:
          enum {
            mid_hasValue_a1d30e1ee40c89a2,
            mid_doAccumulate_040c4cd0390c5aff,
            mid_init_07cae694a8cf1c6d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DocValuesStats$SortedDocValuesStats(jobject obj) : ::org::apache::lucene::search::DocValuesStats(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DocValuesStats$SortedDocValuesStats(const DocValuesStats$SortedDocValuesStats& obj) : ::org::apache::lucene::search::DocValuesStats(obj) {}
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(DocValuesStats$SortedDocValuesStats);
        extern PyTypeObject *PY_TYPE(DocValuesStats$SortedDocValuesStats);

        class t_DocValuesStats$SortedDocValuesStats {
        public:
          PyObject_HEAD
          DocValuesStats$SortedDocValuesStats object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_DocValuesStats$SortedDocValuesStats *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const DocValuesStats$SortedDocValuesStats&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const DocValuesStats$SortedDocValuesStats&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
