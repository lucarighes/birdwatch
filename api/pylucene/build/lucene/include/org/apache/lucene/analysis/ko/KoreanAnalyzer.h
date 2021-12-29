#ifndef org_apache_lucene_analysis_ko_KoreanAnalyzer_H
#define org_apache_lucene_analysis_ko_KoreanAnalyzer_H

#include "org/apache/lucene/analysis/Analyzer.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace util {
    class Set;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {
          class KoreanTokenizer$DecompoundMode;
          class POS$Tag;
          namespace dict {
            class UserDictionary;
          }
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {

          class KoreanAnalyzer : public ::org::apache::lucene::analysis::Analyzer {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_init$_0c5c39d512f0baf1,
              mid_createComponents_c22fd244b0553c1e,
              mid_normalize_e597989422f66fcd,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit KoreanAnalyzer(jobject obj) : ::org::apache::lucene::analysis::Analyzer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            KoreanAnalyzer(const KoreanAnalyzer& obj) : ::org::apache::lucene::analysis::Analyzer(obj) {}

            KoreanAnalyzer();
            KoreanAnalyzer(const ::org::apache::lucene::analysis::ko::dict::UserDictionary &, const ::org::apache::lucene::analysis::ko::KoreanTokenizer$DecompoundMode &, const ::java::util::Set &, jboolean);
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
        namespace ko {
          extern PyType_Def PY_TYPE_DEF(KoreanAnalyzer);
          extern PyTypeObject *PY_TYPE(KoreanAnalyzer);

          class t_KoreanAnalyzer {
          public:
            PyObject_HEAD
            KoreanAnalyzer object;
            static PyObject *wrap_Object(const KoreanAnalyzer&);
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
