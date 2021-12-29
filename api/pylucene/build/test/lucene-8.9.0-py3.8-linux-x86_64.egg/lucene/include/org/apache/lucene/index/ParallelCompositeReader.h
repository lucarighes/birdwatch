#ifndef org_apache_lucene_index_ParallelCompositeReader_H
#define org_apache_lucene_index_ParallelCompositeReader_H

#include "org/apache/lucene/index/BaseCompositeReader.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class LeafReader;
        class IndexReader$CacheHelper;
        class CompositeReader;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class ParallelCompositeReader : public ::org::apache::lucene::index::BaseCompositeReader {
         public:
          enum {
            mid_init$_1b3bfe3fbd844e34,
            mid_init$_43d4317ce0fca9b0,
            mid_init$_2645e843ec7713c1,
            mid_getReaderCacheHelper_a64c414fea9a8cf6,
            mid_doClose_f2cc1bce94666404,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ParallelCompositeReader(jobject obj) : ::org::apache::lucene::index::BaseCompositeReader(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ParallelCompositeReader(const ParallelCompositeReader& obj) : ::org::apache::lucene::index::BaseCompositeReader(obj) {}

          ParallelCompositeReader(const JArray< ::org::apache::lucene::index::CompositeReader > &);
          ParallelCompositeReader(jboolean, const JArray< ::org::apache::lucene::index::CompositeReader > &);
          ParallelCompositeReader(jboolean, const JArray< ::org::apache::lucene::index::CompositeReader > &, const JArray< ::org::apache::lucene::index::CompositeReader > &);

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
        extern PyType_Def PY_TYPE_DEF(ParallelCompositeReader);
        extern PyTypeObject *PY_TYPE(ParallelCompositeReader);

        class t_ParallelCompositeReader {
        public:
          PyObject_HEAD
          ParallelCompositeReader object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_ParallelCompositeReader *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const ParallelCompositeReader&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const ParallelCompositeReader&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
