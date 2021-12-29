#ifndef org_apache_lucene_analysis_AnalyzerWrapper_H
#define org_apache_lucene_analysis_AnalyzerWrapper_H

#include "org/apache/lucene/analysis/Analyzer.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class Reader;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {

        class AnalyzerWrapper : public ::org::apache::lucene::analysis::Analyzer {
         public:
          enum {
            mid_getOffsetGap_a5a7d1128e9e2bb7,
            mid_getPositionIncrementGap_a5a7d1128e9e2bb7,
            mid_initReader_8dbb4487391277c7,
            mid_attributeFactory_11e9c67770fe4372,
            mid_createComponents_c22fd244b0553c1e,
            mid_initReaderForNormalization_8dbb4487391277c7,
            mid_getWrappedAnalyzer_dad9f41704206408,
            mid_wrapTokenStreamForNormalization_e597989422f66fcd,
            mid_wrapReaderForNormalization_8dbb4487391277c7,
            mid_wrapComponents_ad8b4daa4250cd99,
            mid_wrapReader_8dbb4487391277c7,
            mid_normalize_e597989422f66fcd,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AnalyzerWrapper(jobject obj) : ::org::apache::lucene::analysis::Analyzer(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AnalyzerWrapper(const AnalyzerWrapper& obj) : ::org::apache::lucene::analysis::Analyzer(obj) {}

          jint getOffsetGap(const ::java::lang::String &) const;
          jint getPositionIncrementGap(const ::java::lang::String &) const;
          ::java::io::Reader initReader(const ::java::lang::String &, const ::java::io::Reader &) const;
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
        extern PyType_Def PY_TYPE_DEF(AnalyzerWrapper);
        extern PyTypeObject *PY_TYPE(AnalyzerWrapper);

        class t_AnalyzerWrapper {
        public:
          PyObject_HEAD
          AnalyzerWrapper object;
          static PyObject *wrap_Object(const AnalyzerWrapper&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
