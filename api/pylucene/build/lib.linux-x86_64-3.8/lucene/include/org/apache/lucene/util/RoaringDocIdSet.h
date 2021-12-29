#ifndef org_apache_lucene_util_RoaringDocIdSet_H
#define org_apache_lucene_util_RoaringDocIdSet_H

#include "org/apache/lucene/search/DocIdSet.h"

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

        class RoaringDocIdSet : public ::org::apache::lucene::search::DocIdSet {
         public:
          enum {
            mid_cardinality_9972fcc56b44e79d,
            mid_iterator_173d81d7b8f93882,
            mid_ramBytesUsed_2e5ae9edcb9b072f,
            mid_toString_db9b55ba01e03e4b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RoaringDocIdSet(jobject obj) : ::org::apache::lucene::search::DocIdSet(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RoaringDocIdSet(const RoaringDocIdSet& obj) : ::org::apache::lucene::search::DocIdSet(obj) {}

          jint cardinality() const;
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
        extern PyType_Def PY_TYPE_DEF(RoaringDocIdSet);
        extern PyTypeObject *PY_TYPE(RoaringDocIdSet);

        class t_RoaringDocIdSet {
        public:
          PyObject_HEAD
          RoaringDocIdSet object;
          static PyObject *wrap_Object(const RoaringDocIdSet&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
