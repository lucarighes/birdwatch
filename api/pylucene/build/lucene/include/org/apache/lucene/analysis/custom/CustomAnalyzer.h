#ifndef org_apache_lucene_analysis_custom_CustomAnalyzer_H
#define org_apache_lucene_analysis_custom_CustomAnalyzer_H

#include "org/apache/lucene/analysis/Analyzer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {
          class CharFilterFactory;
          class TokenizerFactory;
          class TokenFilterFactory;
          class ResourceLoader;
        }
        namespace custom {
          class CustomAnalyzer$Builder;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class List;
  }
  namespace nio {
    namespace file {
      class Path;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace custom {

          class CustomAnalyzer : public ::org::apache::lucene::analysis::Analyzer {
           public:
            enum {
              mid_builder_ebbca44065426767,
              mid_builder_ce21e87fe389a17a,
              mid_builder_c1f751be47b37c61,
              mid_getCharFilterFactories_49ec78390f08338a,
              mid_getOffsetGap_a5a7d1128e9e2bb7,
              mid_getPositionIncrementGap_a5a7d1128e9e2bb7,
              mid_getTokenFilterFactories_49ec78390f08338a,
              mid_getTokenizerFactory_df42031a9fdfdfed,
              mid_toString_db9b55ba01e03e4b,
              mid_createComponents_c22fd244b0553c1e,
              mid_initReader_8dbb4487391277c7,
              mid_initReaderForNormalization_8dbb4487391277c7,
              mid_normalize_e597989422f66fcd,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CustomAnalyzer(jobject obj) : ::org::apache::lucene::analysis::Analyzer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CustomAnalyzer(const CustomAnalyzer& obj) : ::org::apache::lucene::analysis::Analyzer(obj) {}

            static ::org::apache::lucene::analysis::custom::CustomAnalyzer$Builder builder();
            static ::org::apache::lucene::analysis::custom::CustomAnalyzer$Builder builder(const ::java::nio::file::Path &);
            static ::org::apache::lucene::analysis::custom::CustomAnalyzer$Builder builder(const ::org::apache::lucene::analysis::util::ResourceLoader &);
            ::java::util::List getCharFilterFactories() const;
            jint getOffsetGap(const ::java::lang::String &) const;
            jint getPositionIncrementGap(const ::java::lang::String &) const;
            ::java::util::List getTokenFilterFactories() const;
            ::org::apache::lucene::analysis::util::TokenizerFactory getTokenizerFactory() const;
            ::java::lang::String toString() const;
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
        namespace custom {
          extern PyType_Def PY_TYPE_DEF(CustomAnalyzer);
          extern PyTypeObject *PY_TYPE(CustomAnalyzer);

          class t_CustomAnalyzer {
          public:
            PyObject_HEAD
            CustomAnalyzer object;
            static PyObject *wrap_Object(const CustomAnalyzer&);
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
