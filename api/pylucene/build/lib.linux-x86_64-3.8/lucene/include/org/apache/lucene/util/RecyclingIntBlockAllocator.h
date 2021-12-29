#ifndef org_apache_lucene_util_RecyclingIntBlockAllocator_H
#define org_apache_lucene_util_RecyclingIntBlockAllocator_H

#include "org/apache/lucene/util/IntBlockPool$Allocator.h"

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

        class RecyclingIntBlockAllocator : public ::org::apache::lucene::util::IntBlockPool$Allocator {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_init$_438c62480c481c65,
            mid_init$_d5caaeae1d724489,
            mid_bytesUsed_2e5ae9edcb9b072f,
            mid_freeBlocks_1e143afe1894d213,
            mid_getIntBlock_d2c45ef07a322466,
            mid_maxBufferedBlocks_9972fcc56b44e79d,
            mid_numBufferedBlocks_9972fcc56b44e79d,
            mid_recycleIntBlocks_8cce81c663fcf6f9,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RecyclingIntBlockAllocator(jobject obj) : ::org::apache::lucene::util::IntBlockPool$Allocator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RecyclingIntBlockAllocator(const RecyclingIntBlockAllocator& obj) : ::org::apache::lucene::util::IntBlockPool$Allocator(obj) {}

          static jint DEFAULT_BUFFERED_BLOCKS;

          RecyclingIntBlockAllocator();
          RecyclingIntBlockAllocator(jint, jint);
          RecyclingIntBlockAllocator(jint, jint, const ::org::apache::lucene::util::Counter &);

          jlong bytesUsed() const;
          jint freeBlocks(jint) const;
          JArray< jint > getIntBlock() const;
          jint maxBufferedBlocks() const;
          jint numBufferedBlocks() const;
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
        extern PyType_Def PY_TYPE_DEF(RecyclingIntBlockAllocator);
        extern PyTypeObject *PY_TYPE(RecyclingIntBlockAllocator);

        class t_RecyclingIntBlockAllocator {
        public:
          PyObject_HEAD
          RecyclingIntBlockAllocator object;
          static PyObject *wrap_Object(const RecyclingIntBlockAllocator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
