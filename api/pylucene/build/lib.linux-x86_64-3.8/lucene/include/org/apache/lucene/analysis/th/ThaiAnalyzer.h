#ifndef org_apache_lucene_analysis_th_ThaiAnalyzer_H
#define org_apache_lucene_analysis_th_ThaiAnalyzer_H

#include "org/apache/lucene/analysis/StopwordAnalyzerBase.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class CharArraySet;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace th {

          class ThaiAnalyzer : public ::org::apache::lucene::analysis::StopwordAnalyzerBase {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_init$_09c0eb6a436581d3,
              mid_getDefaultStopSet_7aec8e69a9807ca1,
              mid_createComponents_c22fd244b0553c1e,
              mid_normalize_e597989422f66fcd,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ThaiAnalyzer(jobject obj) : ::org::apache::lucene::analysis::StopwordAnalyzerBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ThaiAnalyzer(const ThaiAnalyzer& obj) : ::org::apache::lucene::analysis::StopwordAnalyzerBase(obj) {}

            static ::java::lang::String *DEFAULT_STOPWORD_FILE;

            ThaiAnalyzer();
            ThaiAnalyzer(const ::org::apache::lucene::analysis::CharArraySet &);

            static ::org::apache::lucene::analysis::CharArraySet getDefaultStopSet();
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
        namespace th {
          extern PyType_Def PY_TYPE_DEF(ThaiAnalyzer);
          extern PyTypeObject *PY_TYPE(ThaiAnalyzer);

          class t_ThaiAnalyzer {
          public:
            PyObject_HEAD
            ThaiAnalyzer object;
            static PyObject *wrap_Object(const ThaiAnalyzer&);
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
