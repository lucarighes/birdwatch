#ifndef org_apache_lucene_search_DocValuesStats$SortedDoubleDocValuesStats_H
#define org_apache_lucene_search_DocValuesStats$SortedDoubleDocValuesStats_H

#include "org/apache/lucene/search/DocValuesStats$SortedNumericDocValuesStats.h"

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

        class DocValuesStats$SortedDoubleDocValuesStats : public ::org::apache::lucene::search::DocValuesStats$SortedNumericDocValuesStats {
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

          explicit DocValuesStats$SortedDoubleDocValuesStats(jobject obj) : ::org::apache::lucene::search::DocValuesStats$SortedNumericDocValuesStats(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DocValuesStats$SortedDoubleDocValuesStats(const DocValuesStats$SortedDoubleDocValuesStats& obj) : ::org::apache::lucene::search::DocValuesStats$SortedNumericDocValuesStats(obj) {}

          DocValuesStats$SortedDoubleDocValuesStats(const ::java::lang::String &);

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
        extern PyType_Def PY_TYPE_DEF(DocValuesStats$SortedDoubleDocValuesStats);
        extern PyTypeObject *PY_TYPE(DocValuesStats$SortedDoubleDocValuesStats);

        class t_DocValuesStats$SortedDoubleDocValuesStats {
        public:
          PyObject_HEAD
          DocValuesStats$SortedDoubleDocValuesStats object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_DocValuesStats$SortedDoubleDocValuesStats *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const DocValuesStats$SortedDoubleDocValuesStats&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const DocValuesStats$SortedDoubleDocValuesStats&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
