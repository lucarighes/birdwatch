#ifndef org_apache_lucene_analysis_de_GermanMinimalStemFilter_H
#define org_apache_lucene_analysis_de_GermanMinimalStemFilter_H

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
        namespace de {

          class GermanMinimalStemFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_c26756868a754f4e,
              mid_incrementToken_8454bd5aa23fd11e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GermanMinimalStemFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GermanMinimalStemFilter(const GermanMinimalStemFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            GermanMinimalStemFilter(const ::org::apache::lucene::analysis::TokenStream &);

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
        namespace de {
          extern PyType_Def PY_TYPE_DEF(GermanMinimalStemFilter);
          extern PyTypeObject *PY_TYPE(GermanMinimalStemFilter);

          class t_GermanMinimalStemFilter {
          public:
            PyObject_HEAD
            GermanMinimalStemFilter object;
            static PyObject *wrap_Object(const GermanMinimalStemFilter&);
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
