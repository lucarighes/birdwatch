#ifndef org_apache_lucene_analysis_core_SimpleAnalyzer_H
#define org_apache_lucene_analysis_core_SimpleAnalyzer_H

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

          class SimpleAnalyzer : public ::org::apache::lucene::analysis::Analyzer {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_createComponents_c22fd244b0553c1e,
              mid_normalize_e597989422f66fcd,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SimpleAnalyzer(jobject obj) : ::org::apache::lucene::analysis::Analyzer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SimpleAnalyzer(const SimpleAnalyzer& obj) : ::org::apache::lucene::analysis::Analyzer(obj) {}

            SimpleAnalyzer();
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
          extern PyType_Def PY_TYPE_DEF(SimpleAnalyzer);
          extern PyTypeObject *PY_TYPE(SimpleAnalyzer);

          class t_SimpleAnalyzer {
          public:
            PyObject_HEAD
            SimpleAnalyzer object;
            static PyObject *wrap_Object(const SimpleAnalyzer&);
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
