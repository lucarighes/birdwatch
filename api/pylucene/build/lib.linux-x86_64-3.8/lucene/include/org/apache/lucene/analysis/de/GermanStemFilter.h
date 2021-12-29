#ifndef org_apache_lucene_analysis_de_GermanStemFilter_H
#define org_apache_lucene_analysis_de_GermanStemFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace de {
          class GermanStemmer;
        }
        class TokenStream;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace de {

          class GermanStemFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_c26756868a754f4e,
              mid_incrementToken_8454bd5aa23fd11e,
              mid_setStemmer_b79d03a38dfc3903,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GermanStemFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GermanStemFilter(const GermanStemFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            GermanStemFilter(const ::org::apache::lucene::analysis::TokenStream &);

            jboolean incrementToken() const;
            void setStemmer(const ::org::apache::lucene::analysis::de::GermanStemmer &) const;
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
          extern PyType_Def PY_TYPE_DEF(GermanStemFilter);
          extern PyTypeObject *PY_TYPE(GermanStemFilter);

          class t_GermanStemFilter {
          public:
            PyObject_HEAD
            GermanStemFilter object;
            static PyObject *wrap_Object(const GermanStemFilter&);
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
