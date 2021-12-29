#ifndef org_apache_lucene_search_suggest_document_CompletionWeight_H
#define org_apache_lucene_search_suggest_document_CompletionWeight_H

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
        class BulkScorer;
        namespace suggest {
          namespace document {
            class CompletionQuery;
          }
        }
      }
      namespace util {
        namespace automaton {
          class Automaton;
        }
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
        namespace suggest {
          namespace document {

            class CompletionWeight : public ::org::apache::lucene::search::Weight {
             public:
              enum {
                mid_init$_ff95c74ceb8467d1,
                mid_bulkScorer_67bb05f0d672560c,
                mid_explain_4cf8bab0b7954f4a,
                mid_extractTerms_d5a4a8d4b806f0ba,
                mid_getAutomaton_d9f5c446a29ec187,
                mid_isCacheable_07cae694a8cf1c6d,
                mid_scorer_4046a1267922adae,
                mid_boost_58aec2b64dff50c8,
                mid_setNextMatch_0be76783572fca9c,
                mid_context_ba44900ab7d793b9,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CompletionWeight(jobject obj) : ::org::apache::lucene::search::Weight(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CompletionWeight(const CompletionWeight& obj) : ::org::apache::lucene::search::Weight(obj) {}

              CompletionWeight(const ::org::apache::lucene::search::suggest::document::CompletionQuery &, const ::org::apache::lucene::util::automaton::Automaton &);

              ::org::apache::lucene::search::BulkScorer bulkScorer(const ::org::apache::lucene::index::LeafReaderContext &) const;
              ::org::apache::lucene::search::Explanation explain(const ::org::apache::lucene::index::LeafReaderContext &, jint) const;
              void extractTerms(const ::java::util::Set &) const;
              ::org::apache::lucene::util::automaton::Automaton getAutomaton() const;
              jboolean isCacheable(const ::org::apache::lucene::index::LeafReaderContext &) const;
              ::org::apache::lucene::search::Scorer scorer(const ::org::apache::lucene::index::LeafReaderContext &) const;
            };
          }
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
        namespace suggest {
          namespace document {
            extern PyType_Def PY_TYPE_DEF(CompletionWeight);
            extern PyTypeObject *PY_TYPE(CompletionWeight);

            class t_CompletionWeight {
            public:
              PyObject_HEAD
              CompletionWeight object;
              static PyObject *wrap_Object(const CompletionWeight&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
