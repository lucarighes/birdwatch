#ifndef org_apache_lucene_index_IndexReader$ClosedListener_H
#define org_apache_lucene_index_IndexReader$ClosedListener_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader$CacheKey;
      }
    }
  }
}
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

        class IndexReader$ClosedListener : public ::java::lang::Object {
         public:
          enum {
            mid_onClose_c5f144062e12bc8f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexReader$ClosedListener(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexReader$ClosedListener(const IndexReader$ClosedListener& obj) : ::java::lang::Object(obj) {}

          void onClose(const ::org::apache::lucene::index::IndexReader$CacheKey &) const;
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
        extern PyType_Def PY_TYPE_DEF(IndexReader$ClosedListener);
        extern PyTypeObject *PY_TYPE(IndexReader$ClosedListener);

        class t_IndexReader$ClosedListener {
        public:
          PyObject_HEAD
          IndexReader$ClosedListener object;
          static PyObject *wrap_Object(const IndexReader$ClosedListener&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
