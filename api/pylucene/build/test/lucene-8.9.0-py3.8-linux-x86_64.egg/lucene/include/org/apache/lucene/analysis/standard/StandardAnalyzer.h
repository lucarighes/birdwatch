#ifndef org_apache_lucene_analysis_standard_StandardAnalyzer_H
#define org_apache_lucene_analysis_standard_StandardAnalyzer_H

#include "org/apache/lucene/analysis/StopwordAnalyzerBase.h"

namespace java {
  namespace io {
    class IOException;
    class Reader;
  }
  namespace lang {
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
        namespace standard {

          class StandardAnalyzer : public ::org::apache::lucene::analysis::StopwordAnalyzerBase {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_init$_09c0eb6a436581d3,
              mid_init$_b2f3c57f5e6eb3f2,
              mid_getMaxTokenLength_9972fcc56b44e79d,
              mid_setMaxTokenLength_040c4cd0390c5aff,
              mid_createComponents_c22fd244b0553c1e,
              mid_normalize_e597989422f66fcd,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit StandardAnalyzer(jobject obj) : ::org::apache::lucene::analysis::StopwordAnalyzerBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            StandardAnalyzer(const StandardAnalyzer& obj) : ::org::apache::lucene::analysis::StopwordAnalyzerBase(obj) {}

            static jint DEFAULT_MAX_TOKEN_LENGTH;

            StandardAnalyzer();
            StandardAnalyzer(const ::org::apache::lucene::analysis::CharArraySet &);
            StandardAnalyzer(const ::java::io::Reader &);

            jint getMaxTokenLength() const;
            void setMaxTokenLength(jint) const;
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
        namespace standard {
          extern PyType_Def PY_TYPE_DEF(StandardAnalyzer);
          extern PyTypeObject *PY_TYPE(StandardAnalyzer);

          class t_StandardAnalyzer {
          public:
            PyObject_HEAD
            StandardAnalyzer object;
            static PyObject *wrap_Object(const StandardAnalyzer&);
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
