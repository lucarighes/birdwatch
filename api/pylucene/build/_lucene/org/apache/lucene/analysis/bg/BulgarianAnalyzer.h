#ifndef org_apache_lucene_analysis_bg_BulgarianAnalyzer_H
#define org_apache_lucene_analysis_bg_BulgarianAnalyzer_H

#include "org/apache/lucene/analysis/StopwordAnalyzerBase.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class Analyzer$TokenStreamComponents;
        class CharArraySet;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace bg {

          class BulgarianAnalyzer : public ::org::apache::lucene::analysis::StopwordAnalyzerBase {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_init$_09c0eb6a436581d3,
              mid_init$_b66a15b6e54e4218,
              mid_createComponents_c22fd244b0553c1e,
              mid_getDefaultStopSet_7aec8e69a9807ca1,
              mid_normalize_e597989422f66fcd,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BulgarianAnalyzer(jobject obj) : ::org::apache::lucene::analysis::StopwordAnalyzerBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BulgarianAnalyzer(const BulgarianAnalyzer& obj) : ::org::apache::lucene::analysis::StopwordAnalyzerBase(obj) {}

            static ::java::lang::String *DEFAULT_STOPWORD_FILE;

            BulgarianAnalyzer();
            BulgarianAnalyzer(const ::org::apache::lucene::analysis::CharArraySet &);
            BulgarianAnalyzer(const ::org::apache::lucene::analysis::CharArraySet &, const ::org::apache::lucene::analysis::CharArraySet &);

            ::org::apache::lucene::analysis::Analyzer$TokenStreamComponents createComponents(const ::java::lang::String &) const;
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
        namespace bg {
          extern PyType_Def PY_TYPE_DEF(BulgarianAnalyzer);
          extern PyTypeObject *PY_TYPE(BulgarianAnalyzer);

          class t_BulgarianAnalyzer {
          public:
            PyObject_HEAD
            BulgarianAnalyzer object;
            static PyObject *wrap_Object(const BulgarianAnalyzer&);
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
