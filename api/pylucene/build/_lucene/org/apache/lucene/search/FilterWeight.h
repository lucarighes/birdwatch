#ifndef org_apache_lucene_search_FilterWeight_H
#define org_apache_lucene_search_FilterWeight_H

#include "org/apache/lucene/search/Weight.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class LeafReaderContext;
        class Term;
      }
      namespace search {
        class Explanation;
        class Scorer;
        class Matches;
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

        class FilterWeight : public ::org::apache::lucene::search::Weight {
         public:
          enum {
            mid_explain_4cf8bab0b7954f4a,
            mid_extractTerms_d5a4a8d4b806f0ba,
            mid_isCacheable_07cae694a8cf1c6d,
            mid_matches_a177ac6f01316d86,
            mid_scorer_4046a1267922adae,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterWeight(jobject obj) : ::org::apache::lucene::search::Weight(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FilterWeight(const FilterWeight& obj) : ::org::apache::lucene::search::Weight(obj) {}

          ::org::apache::lucene::search::Explanation explain(const ::org::apache::lucene::index::LeafReaderContext &, jint) const;
          void extractTerms(const ::java::util::Set &) const;
          jboolean isCacheable(const ::org::apache::lucene::index::LeafReaderContext &) const;
          ::org::apache::lucene::search::Matches matches(const ::org::apache::lucene::index::LeafReaderContext &, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(FilterWeight);
        extern PyTypeObject *PY_TYPE(FilterWeight);

        class t_FilterWeight {
        public:
          PyObject_HEAD
          FilterWeight object;
          static PyObject *wrap_Object(const FilterWeight&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
