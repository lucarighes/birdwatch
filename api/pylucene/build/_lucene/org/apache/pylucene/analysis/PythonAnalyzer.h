#ifndef org_apache_pylucene_analysis_PythonAnalyzer_H
#define org_apache_pylucene_analysis_PythonAnalyzer_H

#include "org/apache/lucene/analysis/Analyzer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class Analyzer$TokenStreamComponents;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
    class Throwable;
  }
  namespace io {
    class Reader;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace analysis {

        class PythonAnalyzer : public ::org::apache::lucene::analysis::Analyzer {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_createComponents_c22fd244b0553c1e,
            mid_finalize_f2cc1bce94666404,
            mid_initReader_8dbb4487391277c7,
            mid_pythonDecRef_f2cc1bce94666404,
            mid_pythonExtension_2e5ae9edcb9b072f,
            mid_pythonExtension_9c778c9bce6694df,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonAnalyzer(jobject obj) : ::org::apache::lucene::analysis::Analyzer(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonAnalyzer(const PythonAnalyzer& obj) : ::org::apache::lucene::analysis::Analyzer(obj) {}

          PythonAnalyzer();

          ::org::apache::lucene::analysis::Analyzer$TokenStreamComponents createComponents(const ::java::lang::String &) const;
          void finalize() const;
          ::java::io::Reader initReader(const ::java::lang::String &, const ::java::io::Reader &) const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace pylucene {
      namespace analysis {
        extern PyType_Def PY_TYPE_DEF(PythonAnalyzer);
        extern PyTypeObject *PY_TYPE(PythonAnalyzer);

        class t_PythonAnalyzer {
        public:
          PyObject_HEAD
          PythonAnalyzer object;
          static PyObject *wrap_Object(const PythonAnalyzer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
