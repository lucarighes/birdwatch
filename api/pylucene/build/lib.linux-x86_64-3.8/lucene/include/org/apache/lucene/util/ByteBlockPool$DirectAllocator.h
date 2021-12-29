#ifndef org_apache_lucene_util_ByteBlockPool$DirectAllocator_H
#define org_apache_lucene_util_ByteBlockPool$DirectAllocator_H

#include "org/apache/lucene/util/ByteBlockPool$Allocator.h"

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

        class ByteBlockPool$DirectAllocator : public ::org::apache::lucene::util::ByteBlockPool$Allocator {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_init$_040c4cd0390c5aff,
            mid_recycleByteBlocks_06d20f962341558f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ByteBlockPool$DirectAllocator(jobject obj) : ::org::apache::lucene::util::ByteBlockPool$Allocator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ByteBlockPool$DirectAllocator(const ByteBlockPool$DirectAllocator& obj) : ::org::apache::lucene::util::ByteBlockPool$Allocator(obj) {}

          ByteBlockPool$DirectAllocator();
          ByteBlockPool$DirectAllocator(jint);

          void recycleByteBlocks(const JArray< JArray< jbyte > > &, jint, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(ByteBlockPool$DirectAllocator);
        extern PyTypeObject *PY_TYPE(ByteBlockPool$DirectAllocator);

        class t_ByteBlockPool$DirectAllocator {
        public:
          PyObject_HEAD
          ByteBlockPool$DirectAllocator object;
          static PyObject *wrap_Object(const ByteBlockPool$DirectAllocator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
