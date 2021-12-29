#ifndef org_apache_lucene_analysis_DelegatingAnalyzerWrapper_H
#define org_apache_lucene_analysis_DelegatingAnalyzerWrapper_H

#include "org/apache/lucene/analysis/AnalyzerWrapper.h"

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

        class DelegatingAnalyzerWrapper : public ::org::apache::lucene::analysis::AnalyzerWrapper {
         public:
          enum {
            mid_wrapTokenStreamForNormalization_e597989422f66fcd,
            mid_wrapReaderForNormalization_8dbb4487391277c7,
            mid_wrapComponents_ad8b4daa4250cd99,
            mid_wrapReader_8dbb4487391277c7,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DelegatingAnalyzerWrapper(jobject obj) : ::org::apache::lucene::analysis::AnalyzerWrapper(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DelegatingAnalyzerWrapper(const DelegatingAnalyzerWrapper& obj) : ::org::apache::lucene::analysis::AnalyzerWrapper(obj) {}
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        extern PyType_Def PY_TYPE_DEF(DelegatingAnalyzerWrapper);
        extern PyTypeObject *PY_TYPE(DelegatingAnalyzerWrapper);

        class t_DelegatingAnalyzerWrapper {
        public:
          PyObject_HEAD
          DelegatingAnalyzerWrapper object;
          static PyObject *wrap_Object(const DelegatingAnalyzerWrapper&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
