#ifndef org_apache_lucene_index_DocValuesIterator_H
#define org_apache_lucene_index_DocValuesIterator_H

#include "org/apache/lucene/search/DocIdSetIterator.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class DocValuesIterator : public ::org::apache::lucene::search::DocIdSetIterator {
         public:
          enum {
            mid_advanceExact_a1d30e1ee40c89a2,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DocValuesIterator(jobject obj) : ::org::apache::lucene::search::DocIdSetIterator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DocValuesIterator(const DocValuesIterator& obj) : ::org::apache::lucene::search::DocIdSetIterator(obj) {}

          jboolean advanceExact(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(DocValuesIterator);
        extern PyTypeObject *PY_TYPE(DocValuesIterator);

        class t_DocValuesIterator {
        public:
          PyObject_HEAD
          DocValuesIterator object;
          static PyObject *wrap_Object(const DocValuesIterator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
