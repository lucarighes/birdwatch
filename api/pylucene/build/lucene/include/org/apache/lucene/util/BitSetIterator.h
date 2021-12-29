#ifndef org_apache_lucene_util_BitSetIterator_H
#define org_apache_lucene_util_BitSetIterator_H

#include "org/apache/lucene/search/DocIdSetIterator.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class SparseFixedBitSet;
        class FixedBitSet;
        class BitSet;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class BitSetIterator : public ::org::apache::lucene::search::DocIdSetIterator {
         public:
          enum {
            mid_init$_3c9f50c8b4ac8730,
            mid_advance_1e143afe1894d213,
            mid_cost_2e5ae9edcb9b072f,
            mid_docID_9972fcc56b44e79d,
            mid_getBitSet_b6503785024a1489,
            mid_getFixedBitSetOrNull_cb952c58db86e860,
            mid_getSparseFixedBitSetOrNull_8394b99a464d79e5,
            mid_nextDoc_9972fcc56b44e79d,
            mid_setDocId_040c4cd0390c5aff,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BitSetIterator(jobject obj) : ::org::apache::lucene::search::DocIdSetIterator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BitSetIterator(const BitSetIterator& obj) : ::org::apache::lucene::search::DocIdSetIterator(obj) {}

          BitSetIterator(const ::org::apache::lucene::util::BitSet &, jlong);

          jint advance(jint) const;
          jlong cost() const;
          jint docID() const;
          ::org::apache::lucene::util::BitSet getBitSet() const;
          static ::org::apache::lucene::util::FixedBitSet getFixedBitSetOrNull(const ::org::apache::lucene::search::DocIdSetIterator &);
          static ::org::apache::lucene::util::SparseFixedBitSet getSparseFixedBitSetOrNull(const ::org::apache::lucene::search::DocIdSetIterator &);
          jint nextDoc() const;
          void setDocId(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(BitSetIterator);
        extern PyTypeObject *PY_TYPE(BitSetIterator);

        class t_BitSetIterator {
        public:
          PyObject_HEAD
          BitSetIterator object;
          static PyObject *wrap_Object(const BitSetIterator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
