#ifndef org_apache_lucene_analysis_hy_ArmenianAnalyzer_H
#define org_apache_lucene_analysis_hy_ArmenianAnalyzer_H

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
        namespace hy {

          class ArmenianAnalyzer : public ::org::apache::lucene::analysis::StopwordAnalyzerBase {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_init$_09c0eb6a436581d3,
              mid_init$_b66a15b6e54e4218,
              mid_getDefaultStopSet_7aec8e69a9807ca1,
              mid_createComponents_c22fd244b0553c1e,
              mid_normalize_e597989422f66fcd,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ArmenianAnalyzer(jobject obj) : ::org::apache::lucene::analysis::StopwordAnalyzerBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ArmenianAnalyzer(const ArmenianAnalyzer& obj) : ::org::apache::lucene::analysis::StopwordAnalyzerBase(obj) {}

            static ::java::lang::String *DEFAULT_STOPWORD_FILE;

            ArmenianAnalyzer();
            ArmenianAnalyzer(const ::org::apache::lucene::analysis::CharArraySet &);
            ArmenianAnalyzer(const ::org::apache::lucene::analysis::CharArraySet &, const ::org::apache::lucene::analysis::CharArraySet &);

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
        namespace hy {
          extern PyType_Def PY_TYPE_DEF(ArmenianAnalyzer);
          extern PyTypeObject *PY_TYPE(ArmenianAnalyzer);

          class t_ArmenianAnalyzer {
          public:
            PyObject_HEAD
            ArmenianAnalyzer object;
            static PyObject *wrap_Object(const ArmenianAnalyzer&);
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
