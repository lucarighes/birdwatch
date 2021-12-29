#ifndef org_apache_lucene_analysis_no_NorwegianLightStemFilter_H
#define org_apache_lucene_analysis_no_NorwegianLightStemFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace no {

          class NorwegianLightStemFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_c26756868a754f4e,
              mid_init$_ec84dcad1ccbb797,
              mid_incrementToken_8454bd5aa23fd11e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NorwegianLightStemFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            NorwegianLightStemFilter(const NorwegianLightStemFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            NorwegianLightStemFilter(const ::org::apache::lucene::analysis::TokenStream &);
            NorwegianLightStemFilter(const ::org::apache::lucene::analysis::TokenStream &, jint);

            jboolean incrementToken() const;
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
        namespace no {
          extern PyType_Def PY_TYPE_DEF(NorwegianLightStemFilter);
          extern PyTypeObject *PY_TYPE(NorwegianLightStemFilter);

          class t_NorwegianLightStemFilter {
          public:
            PyObject_HEAD
            NorwegianLightStemFilter object;
            static PyObject *wrap_Object(const NorwegianLightStemFilter&);
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
