#ifndef org_apache_lucene_index_CompositeReaderContext_H
#define org_apache_lucene_index_CompositeReaderContext_H

#include "org/apache/lucene/index/IndexReaderContext.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class LeafReaderContext;
        class CompositeReader;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class UnsupportedOperationException;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class CompositeReaderContext : public ::org::apache::lucene::index::IndexReaderContext {
         public:
          enum {
            mid_children_49ec78390f08338a,
            mid_leaves_49ec78390f08338a,
            mid_reader_a7183b90f90f645f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CompositeReaderContext(jobject obj) : ::org::apache::lucene::index::IndexReaderContext(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CompositeReaderContext(const CompositeReaderContext& obj) : ::org::apache::lucene::index::IndexReaderContext(obj) {}

          ::java::util::List children() const;
          ::java::util::List leaves() const;
          ::org::apache::lucene::index::CompositeReader reader() const;
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
        extern PyType_Def PY_TYPE_DEF(CompositeReaderContext);
        extern PyTypeObject *PY_TYPE(CompositeReaderContext);

        class t_CompositeReaderContext {
        public:
          PyObject_HEAD
          CompositeReaderContext object;
          static PyObject *wrap_Object(const CompositeReaderContext&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
