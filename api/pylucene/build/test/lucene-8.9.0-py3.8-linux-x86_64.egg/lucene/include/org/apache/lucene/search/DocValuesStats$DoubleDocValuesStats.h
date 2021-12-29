#ifndef org_apache_lucene_search_DocValuesStats$DoubleDocValuesStats_H
#define org_apache_lucene_search_DocValuesStats$DoubleDocValuesStats_H

#include "org/apache/lucene/search/DocValuesStats$NumericDocValuesStats.h"

namespace java {
  namespace lang {
    class String;
    class Double;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class DocValuesStats$DoubleDocValuesStats : public ::org::apache::lucene::search::DocValuesStats$NumericDocValuesStats {
         public:
          enum {
            mid_init$_9fd2eb66a64e6f0f,
            mid_sum_a3794238a110f68c,
            mid_doAccumulate_040c4cd0390c5aff,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DocValuesStats$DoubleDocValuesStats(jobject obj) : ::org::apache::lucene::search::DocValuesStats$NumericDocValuesStats(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DocValuesStats$DoubleDocValuesStats(const DocValuesStats$DoubleDocValuesStats& obj) : ::org::apache::lucene::search::DocValuesStats$NumericDocValuesStats(obj) {}

          DocValuesStats$DoubleDocValuesStats(const ::java::lang::String &);

          ::java::lang::Double sum() const;
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
        extern PyType_Def PY_TYPE_DEF(DocValuesStats$DoubleDocValuesStats);
        extern PyTypeObject *PY_TYPE(DocValuesStats$DoubleDocValuesStats);

        class t_DocValuesStats$DoubleDocValuesStats {
        public:
          PyObject_HEAD
          DocValuesStats$DoubleDocValuesStats object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_DocValuesStats$DoubleDocValuesStats *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const DocValuesStats$DoubleDocValuesStats&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const DocValuesStats$DoubleDocValuesStats&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
