#ifndef org_apache_lucene_search_suggest_document_PrefixCompletionQuery_H
#define org_apache_lucene_search_suggest_document_PrefixCompletionQuery_H

#include "org/apache/lucene/search/suggest/document/CompletionQuery.h"

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
        class QueryVisitor;
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
    class Object;
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

            class PrefixCompletionQuery : public ::org::apache::lucene::search::suggest::document::CompletionQuery {
             public:
              enum {
                mid_init$_e0bfd30c84c4b36c,
                mid_init$_b4f66d1e72f337e4,
                mid_createWeight_f0ef0b5ea369ac06,
                mid_equals_8b72f2dcdde6fd1d,
                mid_getAnalyzer_75a99b097bd64493,
                mid_hashCode_9972fcc56b44e79d,
                mid_visit_f9e6207006c5b6c1,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit PrefixCompletionQuery(jobject obj) : ::org::apache::lucene::search::suggest::document::CompletionQuery(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              PrefixCompletionQuery(const PrefixCompletionQuery& obj) : ::org::apache::lucene::search::suggest::document::CompletionQuery(obj) {}

              PrefixCompletionQuery(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::index::Term &);
              PrefixCompletionQuery(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::index::Term &, const ::org::apache::lucene::search::suggest::BitsProducer &);

              ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
              jboolean equals(const ::java::lang::Object &) const;
              ::org::apache::lucene::analysis::Analyzer getAnalyzer() const;
              jint hashCode() const;
              void visit(const ::org::apache::lucene::search::QueryVisitor &) const;
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
            extern PyType_Def PY_TYPE_DEF(PrefixCompletionQuery);
            extern PyTypeObject *PY_TYPE(PrefixCompletionQuery);

            class t_PrefixCompletionQuery {
            public:
              PyObject_HEAD
              PrefixCompletionQuery object;
              static PyObject *wrap_Object(const PrefixCompletionQuery&);
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
