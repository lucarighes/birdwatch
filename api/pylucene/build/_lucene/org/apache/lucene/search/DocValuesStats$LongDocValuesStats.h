#ifndef org_apache_lucene_search_DocValuesStats$LongDocValuesStats_H
#define org_apache_lucene_search_DocValuesStats$LongDocValuesStats_H

#include "org/apache/lucene/search/DocValuesStats$NumericDocValuesStats.h"

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

        class DocValuesStats$LongDocValuesStats : public ::org::apache::lucene::search::DocValuesStats$NumericDocValuesStats {
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

          explicit DocValuesStats$LongDocValuesStats(jobject obj) : ::org::apache::lucene::search::DocValuesStats$NumericDocValuesStats(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DocValuesStats$LongDocValuesStats(const DocValuesStats$LongDocValuesStats& obj) : ::org::apache::lucene::search::DocValuesStats$NumericDocValuesStats(obj) {}

          DocValuesStats$LongDocValuesStats(const ::java::lang::String &);

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
        extern PyType_Def PY_TYPE_DEF(DocValuesStats$LongDocValuesStats);
        extern PyTypeObject *PY_TYPE(DocValuesStats$LongDocValuesStats);

        class t_DocValuesStats$LongDocValuesStats {
        public:
          PyObject_HEAD
          DocValuesStats$LongDocValuesStats object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_DocValuesStats$LongDocValuesStats *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const DocValuesStats$LongDocValuesStats&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const DocValuesStats$LongDocValuesStats&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
