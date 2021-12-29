#ifndef org_apache_lucene_search_DocValuesStats$NumericDocValuesStats_H
#define org_apache_lucene_search_DocValuesStats$NumericDocValuesStats_H

#include "org/apache/lucene/search/DocValuesStats.h"

namespace java {
  namespace lang {
    class Number;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class DocValuesStats$NumericDocValuesStats : public ::org::apache::lucene::search::DocValuesStats {
         public:
          enum {
            mid_mean_8c74b787998ce4bc,
            mid_stdev_8c74b787998ce4bc,
            mid_sum_f5813404cc5e3a1e,
            mid_variance_8c74b787998ce4bc,
            mid_hasValue_a1d30e1ee40c89a2,
            mid_init_07cae694a8cf1c6d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DocValuesStats$NumericDocValuesStats(jobject obj) : ::org::apache::lucene::search::DocValuesStats(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DocValuesStats$NumericDocValuesStats(const DocValuesStats$NumericDocValuesStats& obj) : ::org::apache::lucene::search::DocValuesStats(obj) {}

          jdouble mean() const;
          jdouble stdev() const;
          ::java::lang::Number sum() const;
          jdouble variance() const;
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
        extern PyType_Def PY_TYPE_DEF(DocValuesStats$NumericDocValuesStats);
        extern PyTypeObject *PY_TYPE(DocValuesStats$NumericDocValuesStats);

        class t_DocValuesStats$NumericDocValuesStats {
        public:
          PyObject_HEAD
          DocValuesStats$NumericDocValuesStats object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_DocValuesStats$NumericDocValuesStats *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const DocValuesStats$NumericDocValuesStats&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const DocValuesStats$NumericDocValuesStats&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
