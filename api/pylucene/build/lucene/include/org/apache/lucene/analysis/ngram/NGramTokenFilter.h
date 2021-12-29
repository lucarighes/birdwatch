#ifndef org_apache_lucene_analysis_ngram_NGramTokenFilter_H
#define org_apache_lucene_analysis_ngram_NGramTokenFilter_H

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
        namespace ngram {

          class NGramTokenFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_ec84dcad1ccbb797,
              mid_init$_90f95d18f5f2d791,
              mid_end_f2cc1bce94666404,
              mid_incrementToken_8454bd5aa23fd11e,
              mid_reset_f2cc1bce94666404,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NGramTokenFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            NGramTokenFilter(const NGramTokenFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            static jboolean DEFAULT_PRESERVE_ORIGINAL;

            NGramTokenFilter(const ::org::apache::lucene::analysis::TokenStream &, jint);
            NGramTokenFilter(const ::org::apache::lucene::analysis::TokenStream &, jint, jint, jboolean);

            void end() const;
            jboolean incrementToken() const;
            void reset() const;
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
        namespace ngram {
          extern PyType_Def PY_TYPE_DEF(NGramTokenFilter);
          extern PyTypeObject *PY_TYPE(NGramTokenFilter);

          class t_NGramTokenFilter {
          public:
            PyObject_HEAD
            NGramTokenFilter object;
            static PyObject *wrap_Object(const NGramTokenFilter&);
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
