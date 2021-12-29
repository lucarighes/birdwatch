#ifndef org_apache_lucene_search_highlight_QueryTermScorer_H
#define org_apache_lucene_search_highlight_QueryTermScorer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
      namespace search {
        namespace highlight {
          class Scorer;
          class TextFragment;
          class WeightedTerm;
        }
        class Query;
      }
      namespace analysis {
        class TokenStream;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {

          class QueryTermScorer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_86dfc09fe6478bfb,
              mid_init$_ede25bb9d48237ac,
              mid_init$_e3c97842bfe33454,
              mid_init$_c5ae5fd35d2e5a2f,
              mid_allFragmentsProcessed_f2cc1bce94666404,
              mid_getFragmentScore_58aec2b64dff50c8,
              mid_getMaxTermWeight_58aec2b64dff50c8,
              mid_getTokenScore_58aec2b64dff50c8,
              mid_init_6de1e28d9d10cd9e,
              mid_startFragment_786a99056c1d5c74,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit QueryTermScorer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            QueryTermScorer(const QueryTermScorer& obj) : ::java::lang::Object(obj) {}

            QueryTermScorer(const JArray< ::org::apache::lucene::search::highlight::WeightedTerm > &);
            QueryTermScorer(const ::org::apache::lucene::search::Query &);
            QueryTermScorer(const ::org::apache::lucene::search::Query &, const ::java::lang::String &);
            QueryTermScorer(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &);

            void allFragmentsProcessed() const;
            jfloat getFragmentScore() const;
            jfloat getMaxTermWeight() const;
            jfloat getTokenScore() const;
            ::org::apache::lucene::analysis::TokenStream init(const ::org::apache::lucene::analysis::TokenStream &) const;
            void startFragment(const ::org::apache::lucene::search::highlight::TextFragment &) const;
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
        namespace highlight {
          extern PyType_Def PY_TYPE_DEF(QueryTermScorer);
          extern PyTypeObject *PY_TYPE(QueryTermScorer);

          class t_QueryTermScorer {
          public:
            PyObject_HEAD
            QueryTermScorer object;
            static PyObject *wrap_Object(const QueryTermScorer&);
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
