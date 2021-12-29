#ifndef org_apache_lucene_search_DocValuesStats$SortedSetDocValuesStats_H
#define org_apache_lucene_search_DocValuesStats$SortedSetDocValuesStats_H

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

        class DocValuesStats$SortedSetDocValuesStats : public ::org::apache::lucene::search::DocValuesStats {
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

          explicit DocValuesStats$SortedSetDocValuesStats(jobject obj) : ::org::apache::lucene::search::DocValuesStats(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DocValuesStats$SortedSetDocValuesStats(const DocValuesStats$SortedSetDocValuesStats& obj) : ::org::apache::lucene::search::DocValuesStats(obj) {}
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
        extern PyType_Def PY_TYPE_DEF(DocValuesStats$SortedSetDocValuesStats);
        extern PyTypeObject *PY_TYPE(DocValuesStats$SortedSetDocValuesStats);

        class t_DocValuesStats$SortedSetDocValuesStats {
        public:
          PyObject_HEAD
          DocValuesStats$SortedSetDocValuesStats object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_DocValuesStats$SortedSetDocValuesStats *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const DocValuesStats$SortedSetDocValuesStats&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const DocValuesStats$SortedSetDocValuesStats&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
