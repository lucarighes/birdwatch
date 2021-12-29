#ifndef org_apache_lucene_index_CompositeReader_H
#define org_apache_lucene_index_CompositeReader_H

#include "org/apache/lucene/index/IndexReader.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class CompositeReaderContext;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class CompositeReader : public ::org::apache::lucene::index::IndexReader {
         public:
          enum {
            mid_getContext_f54dd1fbe08ba9c6,
            mid_toString_db9b55ba01e03e4b,
            mid_getSequentialSubReaders_49ec78390f08338a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CompositeReader(jobject obj) : ::org::apache::lucene::index::IndexReader(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CompositeReader(const CompositeReader& obj) : ::org::apache::lucene::index::IndexReader(obj) {}

          ::org::apache::lucene::index::CompositeReaderContext getContext() const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(CompositeReader);
        extern PyTypeObject *PY_TYPE(CompositeReader);

        class t_CompositeReader {
        public:
          PyObject_HEAD
          CompositeReader object;
          static PyObject *wrap_Object(const CompositeReader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
