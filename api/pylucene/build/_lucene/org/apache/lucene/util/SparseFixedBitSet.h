#ifndef org_apache_lucene_util_SparseFixedBitSet_H
#define org_apache_lucene_util_SparseFixedBitSet_H

#include "org/apache/lucene/util/BitSet.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class DocIdSetIterator;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class SparseFixedBitSet : public ::org::apache::lucene::util::BitSet {
         public:
          enum {
            mid_init$_040c4cd0390c5aff,
            mid_approximateCardinality_9972fcc56b44e79d,
            mid_cardinality_9972fcc56b44e79d,
            mid_clear_040c4cd0390c5aff,
            mid_clear_438c62480c481c65,
            mid_get_a1d30e1ee40c89a2,
            mid_length_9972fcc56b44e79d,
            mid_nextSetBit_1e143afe1894d213,
            mid_or_da04cf8efc6499af,
            mid_prevSetBit_1e143afe1894d213,
            mid_ramBytesUsed_2e5ae9edcb9b072f,
            mid_set_040c4cd0390c5aff,
            mid_toString_db9b55ba01e03e4b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SparseFixedBitSet(jobject obj) : ::org::apache::lucene::util::BitSet(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SparseFixedBitSet(const SparseFixedBitSet& obj) : ::org::apache::lucene::util::BitSet(obj) {}

          SparseFixedBitSet(jint);

          jint approximateCardinality() const;
          jint cardinality() const;
          void clear(jint) const;
          void clear(jint, jint) const;
          jboolean get(jint) const;
          jint length() const;
          jint nextSetBit(jint) const;
          void or$(const ::org::apache::lucene::search::DocIdSetIterator &) const;
          jint prevSetBit(jint) const;
          jlong ramBytesUsed() const;
          void set(jint) const;
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
      namespace util {
        extern PyType_Def PY_TYPE_DEF(SparseFixedBitSet);
        extern PyTypeObject *PY_TYPE(SparseFixedBitSet);

        class t_SparseFixedBitSet {
        public:
          PyObject_HEAD
          SparseFixedBitSet object;
          static PyObject *wrap_Object(const SparseFixedBitSet&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
