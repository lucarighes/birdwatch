#ifndef org_apache_lucene_search_highlight_QueryTermExtractor_H
#define org_apache_lucene_search_highlight_QueryTermExtractor_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
      namespace search {
        class Query;
        namespace highlight {
          class WeightedTerm;
        }
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

          class QueryTermExtractor : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_getIdfWeightedTerms_5a662fb1493a24b6,
              mid_getTerms_7f2d9be8001c1454,
              mid_getTerms_4edb9600b319edfa,
              mid_getTerms_c401e8dff1b0a47e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit QueryTermExtractor(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            QueryTermExtractor(const QueryTermExtractor& obj) : ::java::lang::Object(obj) {}

            QueryTermExtractor();

            static JArray< ::org::apache::lucene::search::highlight::WeightedTerm > getIdfWeightedTerms(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &);
            static JArray< ::org::apache::lucene::search::highlight::WeightedTerm > getTerms(const ::org::apache::lucene::search::Query &);
            static JArray< ::org::apache::lucene::search::highlight::WeightedTerm > getTerms(const ::org::apache::lucene::search::Query &, jboolean);
            static JArray< ::org::apache::lucene::search::highlight::WeightedTerm > getTerms(const ::org::apache::lucene::search::Query &, jboolean, const ::java::lang::String &);
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
          extern PyType_Def PY_TYPE_DEF(QueryTermExtractor);
          extern PyTypeObject *PY_TYPE(QueryTermExtractor);

          class t_QueryTermExtractor {
          public:
            PyObject_HEAD
            QueryTermExtractor object;
            static PyObject *wrap_Object(const QueryTermExtractor&);
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
