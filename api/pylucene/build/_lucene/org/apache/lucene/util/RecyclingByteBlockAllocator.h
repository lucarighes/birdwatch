#ifndef org_apache_lucene_util_RecyclingByteBlockAllocator_H
#define org_apache_lucene_util_RecyclingByteBlockAllocator_H

#include "org/apache/lucene/util/ByteBlockPool$Allocator.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Counter;
      }
    }
  }
}
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

        class RecyclingByteBlockAllocator : public ::org::apache::lucene::util::ByteBlockPool$Allocator {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_init$_438c62480c481c65,
            mid_init$_d5caaeae1d724489,
            mid_bytesUsed_2e5ae9edcb9b072f,
            mid_freeBlocks_1e143afe1894d213,
            mid_getByteBlock_cf386cdb1bbd339f,
            mid_maxBufferedBlocks_9972fcc56b44e79d,
            mid_numBufferedBlocks_9972fcc56b44e79d,
            mid_recycleByteBlocks_06d20f962341558f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RecyclingByteBlockAllocator(jobject obj) : ::org::apache::lucene::util::ByteBlockPool$Allocator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RecyclingByteBlockAllocator(const RecyclingByteBlockAllocator& obj) : ::org::apache::lucene::util::ByteBlockPool$Allocator(obj) {}

          static jint DEFAULT_BUFFERED_BLOCKS;

          RecyclingByteBlockAllocator();
          RecyclingByteBlockAllocator(jint, jint);
          RecyclingByteBlockAllocator(jint, jint, const ::org::apache::lucene::util::Counter &);

          jlong bytesUsed() const;
          jint freeBlocks(jint) const;
          JArray< jbyte > getByteBlock() const;
          jint maxBufferedBlocks() const;
          jint numBufferedBlocks() const;
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
        extern PyType_Def PY_TYPE_DEF(RecyclingByteBlockAllocator);
        extern PyTypeObject *PY_TYPE(RecyclingByteBlockAllocator);

        class t_RecyclingByteBlockAllocator {
        public:
          PyObject_HEAD
          RecyclingByteBlockAllocator object;
          static PyObject *wrap_Object(const RecyclingByteBlockAllocator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
