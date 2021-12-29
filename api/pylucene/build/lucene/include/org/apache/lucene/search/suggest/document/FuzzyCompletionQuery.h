#ifndef org_apache_lucene_search_suggest_document_FuzzyCompletionQuery_H
#define org_apache_lucene_search_suggest_document_FuzzyCompletionQuery_H

#include "org/apache/lucene/search/suggest/document/PrefixCompletionQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
      }
      namespace search {
        class IndexSearcher;
        namespace suggest {
          class BitsProducer;
        }
        class ScoreMode;
        class Weight;
      }
      namespace analysis {
        class Analyzer;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
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

            class FuzzyCompletionQuery : public ::org::apache::lucene::search::suggest::document::PrefixCompletionQuery {
             public:
              enum {
                mid_init$_e0bfd30c84c4b36c,
                mid_init$_b4f66d1e72f337e4,
                mid_init$_0598b1f653bd0658,
                mid_createWeight_f0ef0b5ea369ac06,
                mid_getMaxDeterminizedStates_9972fcc56b44e79d,
                mid_getMaxEdits_9972fcc56b44e79d,
                mid_getMinFuzzyLength_9972fcc56b44e79d,
                mid_getNonFuzzyPrefix_9972fcc56b44e79d,
                mid_isTranspositions_8454bd5aa23fd11e,
                mid_isUnicodeAware_8454bd5aa23fd11e,
                mid_toString_9bfa75c9f141b67f,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FuzzyCompletionQuery(jobject obj) : ::org::apache::lucene::search::suggest::document::PrefixCompletionQuery(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              FuzzyCompletionQuery(const FuzzyCompletionQuery& obj) : ::org::apache::lucene::search::suggest::document::PrefixCompletionQuery(obj) {}

              static jint DEFAULT_MAX_EDITS;
              static jint DEFAULT_MIN_FUZZY_LENGTH;
              static jint DEFAULT_NON_FUZZY_PREFIX;
              static jboolean DEFAULT_TRANSPOSITIONS;
              static jboolean DEFAULT_UNICODE_AWARE;

              FuzzyCompletionQuery(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::index::Term &);
              FuzzyCompletionQuery(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::index::Term &, const ::org::apache::lucene::search::suggest::BitsProducer &);
              FuzzyCompletionQuery(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::index::Term &, const ::org::apache::lucene::search::suggest::BitsProducer &, jint, jboolean, jint, jint, jboolean, jint);

              ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
              jint getMaxDeterminizedStates() const;
              jint getMaxEdits() const;
              jint getMinFuzzyLength() const;
              jint getNonFuzzyPrefix() const;
              jboolean isTranspositions() const;
              jboolean isUnicodeAware() const;
              ::java::lang::String toString(const ::java::lang::String &) const;
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
            extern PyType_Def PY_TYPE_DEF(FuzzyCompletionQuery);
            extern PyTypeObject *PY_TYPE(FuzzyCompletionQuery);

            class t_FuzzyCompletionQuery {
            public:
              PyObject_HEAD
              FuzzyCompletionQuery object;
              static PyObject *wrap_Object(const FuzzyCompletionQuery&);
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
