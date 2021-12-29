#ifndef org_apache_lucene_analysis_hu_HungarianAnalyzer_H
#define org_apache_lucene_analysis_hu_HungarianAnalyzer_H

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
        namespace hu {

          class HungarianAnalyzer : public ::org::apache::lucene::analysis::StopwordAnalyzerBase {
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

            explicit HungarianAnalyzer(jobject obj) : ::org::apache::lucene::analysis::StopwordAnalyzerBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            HungarianAnalyzer(const HungarianAnalyzer& obj) : ::org::apache::lucene::analysis::StopwordAnalyzerBase(obj) {}

            static ::java::lang::String *DEFAULT_STOPWORD_FILE;

            HungarianAnalyzer();
            HungarianAnalyzer(const ::org::apache::lucene::analysis::CharArraySet &);
            HungarianAnalyzer(const ::org::apache::lucene::analysis::CharArraySet &, const ::org::apache::lucene::analysis::CharArraySet &);

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
        namespace hu {
          extern PyType_Def PY_TYPE_DEF(HungarianAnalyzer);
          extern PyTypeObject *PY_TYPE(HungarianAnalyzer);

          class t_HungarianAnalyzer {
          public:
            PyObject_HEAD
            HungarianAnalyzer object;
            static PyObject *wrap_Object(const HungarianAnalyzer&);
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
