#ifndef org_apache_lucene_analysis_core_StopAnalyzer_H
#define org_apache_lucene_analysis_core_StopAnalyzer_H

#include "org/apache/lucene/analysis/StopwordAnalyzerBase.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
    class Reader;
  }
  namespace nio {
    namespace file {
      class Path;
    }
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
        namespace core {

          class StopAnalyzer : public ::org::apache::lucene::analysis::StopwordAnalyzerBase {
           public:
            enum {
              mid_init$_09c0eb6a436581d3,
              mid_init$_b2f3c57f5e6eb3f2,
              mid_init$_636077fee54d306c,
              mid_createComponents_c22fd244b0553c1e,
              mid_normalize_e597989422f66fcd,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit StopAnalyzer(jobject obj) : ::org::apache::lucene::analysis::StopwordAnalyzerBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            StopAnalyzer(const StopAnalyzer& obj) : ::org::apache::lucene::analysis::StopwordAnalyzerBase(obj) {}

            StopAnalyzer(const ::org::apache::lucene::analysis::CharArraySet &);
            StopAnalyzer(const ::java::io::Reader &);
            StopAnalyzer(const ::java::nio::file::Path &);
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
          extern PyType_Def PY_TYPE_DEF(StopAnalyzer);
          extern PyTypeObject *PY_TYPE(StopAnalyzer);

          class t_StopAnalyzer {
          public:
            PyObject_HEAD
            StopAnalyzer object;
            static PyObject *wrap_Object(const StopAnalyzer&);
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
