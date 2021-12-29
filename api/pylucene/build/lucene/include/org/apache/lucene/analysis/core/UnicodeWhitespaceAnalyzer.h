#ifndef org_apache_lucene_analysis_core_UnicodeWhitespaceAnalyzer_H
#define org_apache_lucene_analysis_core_UnicodeWhitespaceAnalyzer_H

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

          class UnicodeWhitespaceAnalyzer : public ::org::apache::lucene::analysis::Analyzer {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_createComponents_c22fd244b0553c1e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit UnicodeWhitespaceAnalyzer(jobject obj) : ::org::apache::lucene::analysis::Analyzer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            UnicodeWhitespaceAnalyzer(const UnicodeWhitespaceAnalyzer& obj) : ::org::apache::lucene::analysis::Analyzer(obj) {}

            UnicodeWhitespaceAnalyzer();
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
          extern PyType_Def PY_TYPE_DEF(UnicodeWhitespaceAnalyzer);
          extern PyTypeObject *PY_TYPE(UnicodeWhitespaceAnalyzer);

          class t_UnicodeWhitespaceAnalyzer {
          public:
            PyObject_HEAD
            UnicodeWhitespaceAnalyzer object;
            static PyObject *wrap_Object(const UnicodeWhitespaceAnalyzer&);
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
