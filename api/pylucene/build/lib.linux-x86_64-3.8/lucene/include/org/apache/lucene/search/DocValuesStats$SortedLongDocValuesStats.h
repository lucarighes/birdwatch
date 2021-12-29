#ifndef org_apache_lucene_search_DocValuesStats$SortedLongDocValuesStats_H
#define org_apache_lucene_search_DocValuesStats$SortedLongDocValuesStats_H

#include "org/apache/lucene/search/DocValuesStats$SortedNumericDocValuesStats.h"

namespace java {
  namespace lang {
    class Long;
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class DocValuesStats$SortedLongDocValuesStats : public ::org::apache::lucene::search::DocValuesStats$SortedNumericDocValuesStats {
         public:
          enum {
            mid_init$_9fd2eb66a64e6f0f,
            mid_sum_24165e10e82b50a8,
            mid_doAccumulate_040c4cd0390c5aff,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DocValuesStats$SortedLongDocValuesStats(jobject obj) : ::org::apache::lucene::search::DocValuesStats$SortedNumericDocValuesStats(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DocValuesStats$SortedLongDocValuesStats(const DocValuesStats$SortedLongDocValuesStats& obj) : ::org::apache::lucene::search::DocValuesStats$SortedNumericDocValuesStats(obj) {}

          DocValuesStats$SortedLongDocValuesStats(const ::java::lang::String &);

          ::java::lang::Long sum() const;
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
        extern PyType_Def PY_TYPE_DEF(DocValuesStats$SortedLongDocValuesStats);
        extern PyTypeObject *PY_TYPE(DocValuesStats$SortedLongDocValuesStats);

        class t_DocValuesStats$SortedLongDocValuesStats {
        public:
          PyObject_HEAD
          DocValuesStats$SortedLongDocValuesStats object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_DocValuesStats$SortedLongDocValuesStats *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const DocValuesStats$SortedLongDocValuesStats&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const DocValuesStats$SortedLongDocValuesStats&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
