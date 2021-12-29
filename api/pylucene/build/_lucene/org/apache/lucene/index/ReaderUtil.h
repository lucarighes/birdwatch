#ifndef org_apache_lucene_index_ReaderUtil_H
#define org_apache_lucene_index_ReaderUtil_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class LeafReaderContext;
        class IndexReaderContext;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class ReaderUtil : public ::java::lang::Object {
         public:
          enum {
            mid_getTopLevelContext_d57b9557292906ff,
            mid_subIndex_2155253b1d6fbef1,
            mid_subIndex_d5048b0f56c661bc,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ReaderUtil(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ReaderUtil(const ReaderUtil& obj) : ::java::lang::Object(obj) {}

          static ::org::apache::lucene::index::IndexReaderContext getTopLevelContext(const ::org::apache::lucene::index::IndexReaderContext &);
          static jint subIndex(jint, const JArray< jint > &);
          static jint subIndex(jint, const ::java::util::List &);
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
        extern PyType_Def PY_TYPE_DEF(ReaderUtil);
        extern PyTypeObject *PY_TYPE(ReaderUtil);

        class t_ReaderUtil {
        public:
          PyObject_HEAD
          ReaderUtil object;
          static PyObject *wrap_Object(const ReaderUtil&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
