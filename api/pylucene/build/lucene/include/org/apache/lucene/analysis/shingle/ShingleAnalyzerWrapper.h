#ifndef org_apache_lucene_analysis_shingle_ShingleAnalyzerWrapper_H
#define org_apache_lucene_analysis_shingle_ShingleAnalyzerWrapper_H

#include "org/apache/lucene/analysis/AnalyzerWrapper.h"

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
        class Analyzer;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace shingle {

          class ShingleAnalyzerWrapper : public ::org::apache::lucene::analysis::AnalyzerWrapper {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_init$_651b708fb3f85e6e,
              mid_init$_2bc54f6bb204f5dc,
              mid_init$_438c62480c481c65,
              mid_init$_ae5ffe198c7b17dd,
              mid_init$_7b9722beed377992,
              mid_getFillerToken_db9b55ba01e03e4b,
              mid_getMaxShingleSize_9972fcc56b44e79d,
              mid_getMinShingleSize_9972fcc56b44e79d,
              mid_getTokenSeparator_db9b55ba01e03e4b,
              mid_getWrappedAnalyzer_dad9f41704206408,
              mid_isOutputUnigrams_8454bd5aa23fd11e,
              mid_isOutputUnigramsIfNoShingles_8454bd5aa23fd11e,
              mid_wrapComponents_ad8b4daa4250cd99,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ShingleAnalyzerWrapper(jobject obj) : ::org::apache::lucene::analysis::AnalyzerWrapper(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ShingleAnalyzerWrapper(const ShingleAnalyzerWrapper& obj) : ::org::apache::lucene::analysis::AnalyzerWrapper(obj) {}

            ShingleAnalyzerWrapper();
            ShingleAnalyzerWrapper(const ::org::apache::lucene::analysis::Analyzer &);
            ShingleAnalyzerWrapper(const ::org::apache::lucene::analysis::Analyzer &, jint);
            ShingleAnalyzerWrapper(jint, jint);
            ShingleAnalyzerWrapper(const ::org::apache::lucene::analysis::Analyzer &, jint, jint);
            ShingleAnalyzerWrapper(const ::org::apache::lucene::analysis::Analyzer &, jint, jint, const ::java::lang::String &, jboolean, jboolean, const ::java::lang::String &);

            ::java::lang::String getFillerToken() const;
            jint getMaxShingleSize() const;
            jint getMinShingleSize() const;
            ::java::lang::String getTokenSeparator() const;
            ::org::apache::lucene::analysis::Analyzer getWrappedAnalyzer(const ::java::lang::String &) const;
            jboolean isOutputUnigrams() const;
            jboolean isOutputUnigramsIfNoShingles() const;
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
        namespace shingle {
          extern PyType_Def PY_TYPE_DEF(ShingleAnalyzerWrapper);
          extern PyTypeObject *PY_TYPE(ShingleAnalyzerWrapper);

          class t_ShingleAnalyzerWrapper {
          public:
            PyObject_HEAD
            ShingleAnalyzerWrapper object;
            static PyObject *wrap_Object(const ShingleAnalyzerWrapper&);
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
