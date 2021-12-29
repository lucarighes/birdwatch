#ifndef org_apache_lucene_analysis_miscellaneous_FingerprintFilter_H
#define org_apache_lucene_analysis_miscellaneous_FingerprintFilter_H

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
        namespace miscellaneous {

          class FingerprintFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_c26756868a754f4e,
              mid_init$_a3708e5b0eba3aea,
              mid_end_f2cc1bce94666404,
              mid_incrementToken_8454bd5aa23fd11e,
              mid_reset_f2cc1bce94666404,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FingerprintFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FingerprintFilter(const FingerprintFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            static jint DEFAULT_MAX_OUTPUT_TOKEN_SIZE;
            static jchar DEFAULT_SEPARATOR;

            FingerprintFilter(const ::org::apache::lucene::analysis::TokenStream &);
            FingerprintFilter(const ::org::apache::lucene::analysis::TokenStream &, jint, jchar);

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
        namespace miscellaneous {
          extern PyType_Def PY_TYPE_DEF(FingerprintFilter);
          extern PyTypeObject *PY_TYPE(FingerprintFilter);

          class t_FingerprintFilter {
          public:
            PyObject_HEAD
            FingerprintFilter object;
            static PyObject *wrap_Object(const FingerprintFilter&);
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
