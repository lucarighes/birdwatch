#ifndef org_apache_lucene_util_LongBitSet_H
#define org_apache_lucene_util_LongBitSet_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class LongBitSet;
        class Accountable;
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

        class LongBitSet : public ::java::lang::Object {
         public:
          enum {
            mid_init$_9c778c9bce6694df,
            mid_init$_6b9d54909d29b341,
            mid_and_82cffb4685f37c88,
            mid_andNot_82cffb4685f37c88,
            mid_bits2words_694afffd0eb7dc3c,
            mid_cardinality_2e5ae9edcb9b072f,
            mid_clear_9c778c9bce6694df,
            mid_clear_0248b6e53dc27ea3,
            mid_clone_905861f491b11dc8,
            mid_ensureCapacity_5387ebb0e9111e64,
            mid_equals_8b72f2dcdde6fd1d,
            mid_flip_9c778c9bce6694df,
            mid_flip_0248b6e53dc27ea3,
            mid_get_129dd81483fb5856,
            mid_getAndClear_129dd81483fb5856,
            mid_getAndSet_129dd81483fb5856,
            mid_getBits_d09b715a1c5ddffd,
            mid_hashCode_9972fcc56b44e79d,
            mid_intersects_d339e41658a9ead0,
            mid_length_2e5ae9edcb9b072f,
            mid_nextSetBit_d711eecdc469624a,
            mid_or_82cffb4685f37c88,
            mid_prevSetBit_d711eecdc469624a,
            mid_ramBytesUsed_2e5ae9edcb9b072f,
            mid_scanIsEmpty_8454bd5aa23fd11e,
            mid_set_9c778c9bce6694df,
            mid_set_0248b6e53dc27ea3,
            mid_xor_82cffb4685f37c88,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LongBitSet(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LongBitSet(const LongBitSet& obj) : ::java::lang::Object(obj) {}

          static jlong MAX_NUM_BITS;

          LongBitSet(jlong);
          LongBitSet(const JArray< jlong > &, jlong);

          void and$(const LongBitSet &) const;
          void andNot(const LongBitSet &) const;
          static jint bits2words(jlong);
          jlong cardinality() const;
          void clear(jlong) const;
          void clear(jlong, jlong) const;
          LongBitSet clone() const;
          static LongBitSet ensureCapacity(const LongBitSet &, jlong);
          jboolean equals(const ::java::lang::Object &) const;
          void flip(jlong) const;
          void flip(jlong, jlong) const;
          jboolean get(jlong) const;
          jboolean getAndClear(jlong) const;
          jboolean getAndSet(jlong) const;
          JArray< jlong > getBits() const;
          jint hashCode() const;
          jboolean intersects(const LongBitSet &) const;
          jlong length() const;
          jlong nextSetBit(jlong) const;
          void or$(const LongBitSet &) const;
          jlong prevSetBit(jlong) const;
          jlong ramBytesUsed() const;
          jboolean scanIsEmpty() const;
          void set(jlong) const;
          void set(jlong, jlong) const;
          void xor$(const LongBitSet &) const;
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
        extern PyType_Def PY_TYPE_DEF(LongBitSet);
        extern PyTypeObject *PY_TYPE(LongBitSet);

        class t_LongBitSet {
        public:
          PyObject_HEAD
          LongBitSet object;
          static PyObject *wrap_Object(const LongBitSet&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
