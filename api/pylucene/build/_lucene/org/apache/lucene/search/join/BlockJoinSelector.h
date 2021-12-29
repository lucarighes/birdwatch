#ifndef org_apache_lucene_search_join_BlockJoinSelector_H
#define org_apache_lucene_search_join_BlockJoinSelector_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
        class BitSet;
      }
      namespace index {
        class SortedNumericDocValues;
        class SortedSetDocValues;
        class NumericDocValues;
        class SortedDocValues;
      }
      namespace search {
        namespace join {
          class BlockJoinSelector$Type;
        }
        class DocIdSetIterator;
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
      namespace search {
        namespace join {

          class BlockJoinSelector : public ::java::lang::Object {
           public:
            enum {
              mid_wrap_80a84ea23f5b643b,
              mid_wrap_97ceeea0bdfbad65,
              mid_wrap_e31706942d80a284,
              mid_wrap_10af5e7cc2f8875f,
              mid_wrap_e62f33900bcfd49a,
              mid_wrap_cf248e9965d7ec7e,
              mid_wrap_8e746cb12ec50299,
              mid_wrap_2e36d38c7309b376,
              mid_wrap_727a56c301cfc5ad,
              mid_toIter_77bd3be32b4acc21,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BlockJoinSelector(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BlockJoinSelector(const BlockJoinSelector& obj) : ::java::lang::Object(obj) {}

            static ::org::apache::lucene::util::Bits wrap(const ::org::apache::lucene::util::Bits &, const ::org::apache::lucene::util::BitSet &, const ::org::apache::lucene::util::BitSet &);
            static ::org::apache::lucene::index::SortedDocValues wrap(const ::org::apache::lucene::index::SortedDocValues &, const ::org::apache::lucene::search::join::BlockJoinSelector$Type &, const ::org::apache::lucene::util::BitSet &, const ::org::apache::lucene::search::DocIdSetIterator &);
            static ::org::apache::lucene::index::SortedDocValues wrap(const ::org::apache::lucene::index::SortedDocValues &, const ::org::apache::lucene::search::join::BlockJoinSelector$Type &, const ::org::apache::lucene::util::BitSet &, const ::org::apache::lucene::util::BitSet &);
            static ::org::apache::lucene::index::NumericDocValues wrap(const ::org::apache::lucene::index::NumericDocValues &, const ::org::apache::lucene::search::join::BlockJoinSelector$Type &, const ::org::apache::lucene::util::BitSet &, const ::org::apache::lucene::search::DocIdSetIterator &);
            static ::org::apache::lucene::index::NumericDocValues wrap(const ::org::apache::lucene::index::NumericDocValues &, const ::org::apache::lucene::search::join::BlockJoinSelector$Type &, const ::org::apache::lucene::util::BitSet &, const ::org::apache::lucene::util::BitSet &);
            static ::org::apache::lucene::index::NumericDocValues wrap(const ::org::apache::lucene::index::SortedNumericDocValues &, const ::org::apache::lucene::search::join::BlockJoinSelector$Type &, const ::org::apache::lucene::util::BitSet &, const ::org::apache::lucene::search::DocIdSetIterator &);
            static ::org::apache::lucene::index::SortedDocValues wrap(const ::org::apache::lucene::index::SortedSetDocValues &, const ::org::apache::lucene::search::join::BlockJoinSelector$Type &, const ::org::apache::lucene::util::BitSet &, const ::org::apache::lucene::search::DocIdSetIterator &);
            static ::org::apache::lucene::index::NumericDocValues wrap(const ::org::apache::lucene::index::SortedNumericDocValues &, const ::org::apache::lucene::search::join::BlockJoinSelector$Type &, const ::org::apache::lucene::util::BitSet &, const ::org::apache::lucene::util::BitSet &);
            static ::org::apache::lucene::index::SortedDocValues wrap(const ::org::apache::lucene::index::SortedSetDocValues &, const ::org::apache::lucene::search::join::BlockJoinSelector$Type &, const ::org::apache::lucene::util::BitSet &, const ::org::apache::lucene::util::BitSet &);
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace join {
          extern PyType_Def PY_TYPE_DEF(BlockJoinSelector);
          extern PyTypeObject *PY_TYPE(BlockJoinSelector);

          class t_BlockJoinSelector {
          public:
            PyObject_HEAD
            BlockJoinSelector object;
            static PyObject *wrap_Object(const BlockJoinSelector&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
