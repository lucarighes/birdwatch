#ifndef org_apache_lucene_analysis_hunspell_HunspellStemFilter_H
#define org_apache_lucene_analysis_hunspell_HunspellStemFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace hunspell {
          class Dictionary;
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
        namespace hunspell {

          class HunspellStemFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_59ff594a2dd1b954,
              mid_init$_6077f45aba152e78,
              mid_init$_8951428b09abe1b3,
              mid_incrementToken_8454bd5aa23fd11e,
              mid_reset_f2cc1bce94666404,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit HunspellStemFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            HunspellStemFilter(const HunspellStemFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            HunspellStemFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::hunspell::Dictionary &);
            HunspellStemFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::hunspell::Dictionary &, jboolean);
            HunspellStemFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::hunspell::Dictionary &, jboolean, jboolean);

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
        namespace hunspell {
          extern PyType_Def PY_TYPE_DEF(HunspellStemFilter);
          extern PyTypeObject *PY_TYPE(HunspellStemFilter);

          class t_HunspellStemFilter {
          public:
            PyObject_HEAD
            HunspellStemFilter object;
            static PyObject *wrap_Object(const HunspellStemFilter&);
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
