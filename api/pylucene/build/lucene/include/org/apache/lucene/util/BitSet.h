#ifndef org_apache_lucene_util_BitSet_H
#define org_apache_lucene_util_BitSet_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
        class Accountable;
        class BitSet;
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

        class BitSet : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_approximateCardinality_9972fcc56b44e79d,
            mid_cardinality_9972fcc56b44e79d,
            mid_clear_040c4cd0390c5aff,
            mid_clear_438c62480c481c65,
            mid_nextSetBit_1e143afe1894d213,
            mid_of_5c55adea82bf1d76,
            mid_or_da04cf8efc6499af,
            mid_prevSetBit_1e143afe1894d213,
            mid_set_040c4cd0390c5aff,
            mid_checkUnpositioned_da04cf8efc6499af,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BitSet(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BitSet(const BitSet& obj) : ::java::lang::Object(obj) {}

          BitSet();

          jint approximateCardinality() const;
          jint cardinality() const;
          void clear(jint) const;
          void clear(jint, jint) const;
          jint nextSetBit(jint) const;
          static BitSet of(const ::org::apache::lucene::search::DocIdSetIterator &, jint);
          void or$(const ::org::apache::lucene::search::DocIdSetIterator &) const;
          jint prevSetBit(jint) const;
          void set(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(BitSet);
        extern PyTypeObject *PY_TYPE(BitSet);

        class t_BitSet {
        public:
          PyObject_HEAD
          BitSet object;
          static PyObject *wrap_Object(const BitSet&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
