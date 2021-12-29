#ifndef org_apache_lucene_analysis_query_QueryAutoStopWordAnalyzer_H
#define org_apache_lucene_analysis_query_QueryAutoStopWordAnalyzer_H

#include "org/apache/lucene/analysis/AnalyzerWrapper.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
        class Term;
      }
      namespace analysis {
        class Analyzer;
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
  }
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
      namespace analysis {
        namespace query {

          class QueryAutoStopWordAnalyzer : public ::org::apache::lucene::analysis::AnalyzerWrapper {
           public:
            enum {
              mid_init$_fe7a8bd09074677d,
              mid_init$_785e8d90495cf293,
              mid_init$_4e704bd8ab990161,
              mid_init$_42c5d6fe375f6cc3,
              mid_init$_0214f229b8abff90,
              mid_getStopWords_6715d5a0d228688a,
              mid_getStopWords_1606e23a23a4a8e5,
              mid_getWrappedAnalyzer_dad9f41704206408,
              mid_wrapComponents_ad8b4daa4250cd99,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit QueryAutoStopWordAnalyzer(jobject obj) : ::org::apache::lucene::analysis::AnalyzerWrapper(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            QueryAutoStopWordAnalyzer(const QueryAutoStopWordAnalyzer& obj) : ::org::apache::lucene::analysis::AnalyzerWrapper(obj) {}

            static jfloat defaultMaxDocFreqPercent;

            QueryAutoStopWordAnalyzer(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::index::IndexReader &);
            QueryAutoStopWordAnalyzer(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::index::IndexReader &, jfloat);
            QueryAutoStopWordAnalyzer(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::index::IndexReader &, jint);
            QueryAutoStopWordAnalyzer(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::index::IndexReader &, const ::java::util::Collection &, jfloat);
            QueryAutoStopWordAnalyzer(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::index::IndexReader &, const ::java::util::Collection &, jint);

            JArray< ::org::apache::lucene::index::Term > getStopWords() const;
            JArray< ::java::lang::String > getStopWords(const ::java::lang::String &) const;
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
      namespace analysis {
        namespace query {
          extern PyType_Def PY_TYPE_DEF(QueryAutoStopWordAnalyzer);
          extern PyTypeObject *PY_TYPE(QueryAutoStopWordAnalyzer);

          class t_QueryAutoStopWordAnalyzer {
          public:
            PyObject_HEAD
            QueryAutoStopWordAnalyzer object;
            static PyObject *wrap_Object(const QueryAutoStopWordAnalyzer&);
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
