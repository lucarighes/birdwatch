#ifndef org_apache_lucene_index_MultiReader_H
#define org_apache_lucene_index_MultiReader_H

#include "org/apache/lucene/index/BaseCompositeReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
        class IndexReader$CacheHelper;
      }
    }
  }
}
namespace java {
  namespace util {
    class Comparator;
  }
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class MultiReader : public ::org::apache::lucene::index::BaseCompositeReader {
         public:
          enum {
            mid_init$_00d04f08cc6f95a7,
            mid_init$_aa10ede082e41a67,
            mid_init$_bf398e41acc52c4b,
            mid_getReaderCacheHelper_a64c414fea9a8cf6,
            mid_doClose_f2cc1bce94666404,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiReader(jobject obj) : ::org::apache::lucene::index::BaseCompositeReader(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiReader(const MultiReader& obj) : ::org::apache::lucene::index::BaseCompositeReader(obj) {}

          MultiReader(const JArray< ::org::apache::lucene::index::IndexReader > &);
          MultiReader(const JArray< ::org::apache::lucene::index::IndexReader > &, jboolean);
          MultiReader(const JArray< ::org::apache::lucene::index::IndexReader > &, const ::java::util::Comparator &, jboolean);

          ::org::apache::lucene::index::IndexReader$CacheHelper getReaderCacheHelper() const;
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
        extern PyType_Def PY_TYPE_DEF(MultiReader);
        extern PyTypeObject *PY_TYPE(MultiReader);

        class t_MultiReader {
        public:
          PyObject_HEAD
          MultiReader object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_MultiReader *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const MultiReader&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const MultiReader&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
