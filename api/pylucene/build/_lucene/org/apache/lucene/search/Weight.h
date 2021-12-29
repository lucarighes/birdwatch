#ifndef org_apache_lucene_search_Weight_H
#define org_apache_lucene_search_Weight_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class SegmentCacheable;
        class ScorerSupplier;
        class Explanation;
        class Scorer;
        class BulkScorer;
        class Query;
        class Matches;
      }
      namespace index {
        class LeafReaderContext;
        class Term;
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

        class Weight : public ::java::lang::Object {
         public:
          enum {
            mid_bulkScorer_67bb05f0d672560c,
            mid_explain_4cf8bab0b7954f4a,
            mid_extractTerms_d5a4a8d4b806f0ba,
            mid_getQuery_cbf839a480265450,
            mid_matches_a177ac6f01316d86,
            mid_scorer_4046a1267922adae,
            mid_scorerSupplier_1e186b5977f256f7,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Weight(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Weight(const Weight& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::search::BulkScorer bulkScorer(const ::org::apache::lucene::index::LeafReaderContext &) const;
          ::org::apache::lucene::search::Explanation explain(const ::org::apache::lucene::index::LeafReaderContext &, jint) const;
          void extractTerms(const ::java::util::Set &) const;
          ::org::apache::lucene::search::Query getQuery() const;
          ::org::apache::lucene::search::Matches matches(const ::org::apache::lucene::index::LeafReaderContext &, jint) const;
          ::org::apache::lucene::search::Scorer scorer(const ::org::apache::lucene::index::LeafReaderContext &) const;
          ::org::apache::lucene::search::ScorerSupplier scorerSupplier(const ::org::apache::lucene::index::LeafReaderContext &) const;
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
        extern PyType_Def PY_TYPE_DEF(Weight);
        extern PyTypeObject *PY_TYPE(Weight);

        class t_Weight {
        public:
          PyObject_HEAD
          Weight object;
          static PyObject *wrap_Object(const Weight&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
