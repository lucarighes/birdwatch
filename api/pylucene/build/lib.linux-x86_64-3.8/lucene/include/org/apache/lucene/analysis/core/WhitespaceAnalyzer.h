#ifndef org_apache_lucene_analysis_core_WhitespaceAnalyzer_H
#define org_apache_lucene_analysis_core_WhitespaceAnalyzer_H

#include "org/apache/lucene/analysis/Analyzer.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace core {

          class WhitespaceAnalyzer : public ::org::apache::lucene::analysis::Analyzer {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_init$_040c4cd0390c5aff,
              mid_createComponents_c22fd244b0553c1e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit WhitespaceAnalyzer(jobject obj) : ::org::apache::lucene::analysis::Analyzer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            WhitespaceAnalyzer(const WhitespaceAnalyzer& obj) : ::org::apache::lucene::analysis::Analyzer(obj) {}

            WhitespaceAnalyzer();
            WhitespaceAnalyzer(jint);
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
        namespace core {
          extern PyType_Def PY_TYPE_DEF(WhitespaceAnalyzer);
          extern PyTypeObject *PY_TYPE(WhitespaceAnalyzer);

          class t_WhitespaceAnalyzer {
          public:
            PyObject_HEAD
            WhitespaceAnalyzer object;
            static PyObject *wrap_Object(const WhitespaceAnalyzer&);
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
