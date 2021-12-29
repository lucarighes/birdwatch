#ifndef org_apache_lucene_analysis_ja_JapaneseAnalyzer_H
#define org_apache_lucene_analysis_ja_JapaneseAnalyzer_H

#include "org/apache/lucene/analysis/StopwordAnalyzerBase.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Set;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {
          class JapaneseTokenizer$Mode;
          namespace dict {
            class UserDictionary;
          }
        }
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
        namespace ja {

          class JapaneseAnalyzer : public ::org::apache::lucene::analysis::StopwordAnalyzerBase {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_init$_29694002bf5adcb4,
              mid_getDefaultStopSet_7aec8e69a9807ca1,
              mid_getDefaultStopTags_7dcf4034c6d1a92a,
              mid_createComponents_c22fd244b0553c1e,
              mid_normalize_e597989422f66fcd,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit JapaneseAnalyzer(jobject obj) : ::org::apache::lucene::analysis::StopwordAnalyzerBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            JapaneseAnalyzer(const JapaneseAnalyzer& obj) : ::org::apache::lucene::analysis::StopwordAnalyzerBase(obj) {}

            JapaneseAnalyzer();
            JapaneseAnalyzer(const ::org::apache::lucene::analysis::ja::dict::UserDictionary &, const ::org::apache::lucene::analysis::ja::JapaneseTokenizer$Mode &, const ::org::apache::lucene::analysis::CharArraySet &, const ::java::util::Set &);

            static ::org::apache::lucene::analysis::CharArraySet getDefaultStopSet();
            static ::java::util::Set getDefaultStopTags();
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
        namespace ja {
          extern PyType_Def PY_TYPE_DEF(JapaneseAnalyzer);
          extern PyTypeObject *PY_TYPE(JapaneseAnalyzer);

          class t_JapaneseAnalyzer {
          public:
            PyObject_HEAD
            JapaneseAnalyzer object;
            static PyObject *wrap_Object(const JapaneseAnalyzer&);
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
