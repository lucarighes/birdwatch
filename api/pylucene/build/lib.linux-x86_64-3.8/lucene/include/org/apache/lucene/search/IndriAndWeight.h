#ifndef org_apache_lucene_search_IndriAndWeight_H
#define org_apache_lucene_search_IndriAndWeight_H

#include "org/apache/lucene/search/Weight.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class LeafReaderContext;
        class Term;
      }
      namespace search {
        class IndexSearcher;
        class Explanation;
        class Scorer;
        class BulkScorer;
        class IndriAndQuery;
        class ScoreMode;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace util {
    class Set;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class IndriAndWeight : public ::org::apache::lucene::search::Weight {
         public:
          enum {
            mid_init$_e9ea31b9439f9bad,
            mid_bulkScorer_67bb05f0d672560c,
            mid_explain_4cf8bab0b7954f4a,
            mid_extractTerms_d5a4a8d4b806f0ba,
            mid_isCacheable_07cae694a8cf1c6d,
            mid_scorer_4046a1267922adae,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndriAndWeight(jobject obj) : ::org::apache::lucene::search::Weight(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndriAndWeight(const IndriAndWeight& obj) : ::org::apache::lucene::search::Weight(obj) {}

          IndriAndWeight(const ::org::apache::lucene::search::IndriAndQuery &, const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat);

          ::org::apache::lucene::search::BulkScorer bulkScorer(const ::org::apache::lucene::index::LeafReaderContext &) const;
          ::org::apache::lucene::search::Explanation explain(const ::org::apache::lucene::index::LeafReaderContext &, jint) const;
          void extractTerms(const ::java::util::Set &) const;
          jboolean isCacheable(const ::org::apache::lucene::index::LeafReaderContext &) const;
          ::org::apache::lucene::search::Scorer scorer(const ::org::apache::lucene::index::LeafReaderContext &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(IndriAndWeight);
        extern PyTypeObject *PY_TYPE(IndriAndWeight);

        class t_IndriAndWeight {
        public:
          PyObject_HEAD
          IndriAndWeight object;
          static PyObject *wrap_Object(const IndriAndWeight&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
