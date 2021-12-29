#ifndef org_apache_lucene_util_FixedBitSet_H
#define org_apache_lucene_util_FixedBitSet_H

#include "org/apache/lucene/util/BitSet.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
        class FixedBitSet;
      }
      namespace search {
        class DocIdSetIterator;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Object;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class FixedBitSet : public ::org::apache::lucene::util::BitSet {
         public:
          enum {
            mid_init$_040c4cd0390c5aff,
            mid_init$_495563b8763b4788,
            mid_and_9aa9e9f85a8b0554,
            mid_andNot_9aa9e9f85a8b0554,
            mid_andNotCount_0264c760e1a59b7f,
            mid_asReadOnlyBits_ad87da2b626b21cf,
            mid_bits2words_1e143afe1894d213,
            mid_cardinality_9972fcc56b44e79d,
            mid_clear_040c4cd0390c5aff,
            mid_clear_438c62480c481c65,
            mid_clone_db8ef277f046a30b,
            mid_copyOf_40dc352c96ebe19b,
            mid_ensureCapacity_079aa8706e605b14,
            mid_equals_8b72f2dcdde6fd1d,
            mid_flip_040c4cd0390c5aff,
            mid_flip_438c62480c481c65,
            mid_get_a1d30e1ee40c89a2,
            mid_getAndClear_a1d30e1ee40c89a2,
            mid_getAndSet_a1d30e1ee40c89a2,
            mid_getBits_d09b715a1c5ddffd,
            mid_hashCode_9972fcc56b44e79d,
            mid_intersectionCount_0264c760e1a59b7f,
            mid_intersects_b8a305e8775ee2da,
            mid_length_9972fcc56b44e79d,
            mid_nextSetBit_1e143afe1894d213,
            mid_or_9aa9e9f85a8b0554,
            mid_or_da04cf8efc6499af,
            mid_prevSetBit_1e143afe1894d213,
            mid_ramBytesUsed_2e5ae9edcb9b072f,
            mid_scanIsEmpty_8454bd5aa23fd11e,
            mid_set_040c4cd0390c5aff,
            mid_set_438c62480c481c65,
            mid_unionCount_0264c760e1a59b7f,
            mid_xor_9aa9e9f85a8b0554,
            mid_xor_da04cf8efc6499af,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FixedBitSet(jobject obj) : ::org::apache::lucene::util::BitSet(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FixedBitSet(const FixedBitSet& obj) : ::org::apache::lucene::util::BitSet(obj) {}

          FixedBitSet(jint);
          FixedBitSet(const JArray< jlong > &, jint);

          void and$(const FixedBitSet &) const;
          void andNot(const FixedBitSet &) const;
          static jlong andNotCount(const FixedBitSet &, const FixedBitSet &);
          ::org::apache::lucene::util::Bits asReadOnlyBits() const;
          static jint bits2words(jint);
          jint cardinality() const;
          void clear(jint) const;
          void clear(jint, jint) const;
          FixedBitSet clone() const;
          static FixedBitSet copyOf(const ::org::apache::lucene::util::Bits &);
          static FixedBitSet ensureCapacity(const FixedBitSet &, jint);
          jboolean equals(const ::java::lang::Object &) const;
          void flip(jint) const;
          void flip(jint, jint) const;
          jboolean get(jint) const;
          jboolean getAndClear(jint) const;
          jboolean getAndSet(jint) const;
          JArray< jlong > getBits() const;
          jint hashCode() const;
          static jlong intersectionCount(const FixedBitSet &, const FixedBitSet &);
          jboolean intersects(const FixedBitSet &) const;
          jint length() const;
          jint nextSetBit(jint) const;
          void or$(const FixedBitSet &) const;
          void or$(const ::org::apache::lucene::search::DocIdSetIterator &) const;
          jint prevSetBit(jint) const;
          jlong ramBytesUsed() const;
          jboolean scanIsEmpty() const;
          void set(jint) const;
          void set(jint, jint) const;
          static jlong unionCount(const FixedBitSet &, const FixedBitSet &);
          void xor$(const FixedBitSet &) const;
          void xor$(const ::org::apache::lucene::search::DocIdSetIterator &) const;
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
        extern PyType_Def PY_TYPE_DEF(FixedBitSet);
        extern PyTypeObject *PY_TYPE(FixedBitSet);

        class t_FixedBitSet {
        public:
          PyObject_HEAD
          FixedBitSet object;
          static PyObject *wrap_Object(const FixedBitSet&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
