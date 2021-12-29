#ifndef org_apache_lucene_util_BitDocIdSet_H
#define org_apache_lucene_util_BitDocIdSet_H

#include "org/apache/lucene/search/DocIdSet.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BitSet;
      }
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

        class BitDocIdSet : public ::org::apache::lucene::search::DocIdSet {
         public:
          enum {
            mid_init$_4eda08c7010ba824,
            mid_init$_3c9f50c8b4ac8730,
            mid_bits_b6503785024a1489,
            mid_iterator_173d81d7b8f93882,
            mid_ramBytesUsed_2e5ae9edcb9b072f,
            mid_toString_db9b55ba01e03e4b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BitDocIdSet(jobject obj) : ::org::apache::lucene::search::DocIdSet(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BitDocIdSet(const BitDocIdSet& obj) : ::org::apache::lucene::search::DocIdSet(obj) {}

          BitDocIdSet(const ::org::apache::lucene::util::BitSet &);
          BitDocIdSet(const ::org::apache::lucene::util::BitSet &, jlong);

          ::org::apache::lucene::util::BitSet bits() const;
          ::org::apache::lucene::search::DocIdSetIterator iterator() const;
          jlong ramBytesUsed() const;
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
        extern PyType_Def PY_TYPE_DEF(BitDocIdSet);
        extern PyTypeObject *PY_TYPE(BitDocIdSet);

        class t_BitDocIdSet {
        public:
          PyObject_HEAD
          BitDocIdSet object;
          static PyObject *wrap_Object(const BitDocIdSet&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
