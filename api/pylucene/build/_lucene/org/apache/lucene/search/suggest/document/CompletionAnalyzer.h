#ifndef org_apache_lucene_search_suggest_document_CompletionAnalyzer_H
#define org_apache_lucene_search_suggest_document_CompletionAnalyzer_H

#include "org/apache/lucene/analysis/AnalyzerWrapper.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class Analyzer;
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
        namespace suggest {
          namespace document {

            class CompletionAnalyzer : public ::org::apache::lucene::analysis::AnalyzerWrapper {
             public:
              enum {
                mid_init$_651b708fb3f85e6e,
                mid_init$_2bc54f6bb204f5dc,
                mid_init$_6b825c7d4394e60a,
                mid_init$_bab5f83d01ad8ce2,
                mid_preservePositionIncrements_8454bd5aa23fd11e,
                mid_preserveSep_8454bd5aa23fd11e,
                mid_getWrappedAnalyzer_dad9f41704206408,
                mid_wrapComponents_ad8b4daa4250cd99,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CompletionAnalyzer(jobject obj) : ::org::apache::lucene::analysis::AnalyzerWrapper(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CompletionAnalyzer(const CompletionAnalyzer& obj) : ::org::apache::lucene::analysis::AnalyzerWrapper(obj) {}

              CompletionAnalyzer(const ::org::apache::lucene::analysis::Analyzer &);
              CompletionAnalyzer(const ::org::apache::lucene::analysis::Analyzer &, jint);
              CompletionAnalyzer(const ::org::apache::lucene::analysis::Analyzer &, jboolean, jboolean);
              CompletionAnalyzer(const ::org::apache::lucene::analysis::Analyzer &, jboolean, jboolean, jint);

              jboolean preservePositionIncrements() const;
              jboolean preserveSep() const;
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
            extern PyType_Def PY_TYPE_DEF(CompletionAnalyzer);
            extern PyTypeObject *PY_TYPE(CompletionAnalyzer);

            class t_CompletionAnalyzer {
            public:
              PyObject_HEAD
              CompletionAnalyzer object;
              static PyObject *wrap_Object(const CompletionAnalyzer&);
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
