#ifndef org_apache_lucene_analysis_no_NorwegianMinimalStemFilter_H
#define org_apache_lucene_analysis_no_NorwegianMinimalStemFilter_H

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

          class NorwegianMinimalStemFilter : public ::org::apache::lucene::analysis::TokenFilter {
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

            explicit NorwegianMinimalStemFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            NorwegianMinimalStemFilter(const NorwegianMinimalStemFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            NorwegianMinimalStemFilter(const ::org::apache::lucene::analysis::TokenStream &);
            NorwegianMinimalStemFilter(const ::org::apache::lucene::analysis::TokenStream &, jint);

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
          extern PyType_Def PY_TYPE_DEF(NorwegianMinimalStemFilter);
          extern PyTypeObject *PY_TYPE(NorwegianMinimalStemFilter);

          class t_NorwegianMinimalStemFilter {
          public:
            PyObject_HEAD
            NorwegianMinimalStemFilter object;
            static PyObject *wrap_Object(const NorwegianMinimalStemFilter&);
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
