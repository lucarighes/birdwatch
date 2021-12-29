#ifndef org_apache_lucene_util_IntBlockPool$DirectAllocator_H
#define org_apache_lucene_util_IntBlockPool$DirectAllocator_H

#include "org/apache/lucene/util/IntBlockPool$Allocator.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class IntBlockPool$DirectAllocator : public ::org::apache::lucene::util::IntBlockPool$Allocator {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_recycleIntBlocks_8cce81c663fcf6f9,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IntBlockPool$DirectAllocator(jobject obj) : ::org::apache::lucene::util::IntBlockPool$Allocator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IntBlockPool$DirectAllocator(const IntBlockPool$DirectAllocator& obj) : ::org::apache::lucene::util::IntBlockPool$Allocator(obj) {}

          IntBlockPool$DirectAllocator();

          void recycleIntBlocks(const JArray< JArray< jint > > &, jint, jint) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(IntBlockPool$DirectAllocator);
        extern PyTypeObject *PY_TYPE(IntBlockPool$DirectAllocator);

        class t_IntBlockPool$DirectAllocator {
        public:
          PyObject_HEAD
          IntBlockPool$DirectAllocator object;
          static PyObject *wrap_Object(const IntBlockPool$DirectAllocator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
