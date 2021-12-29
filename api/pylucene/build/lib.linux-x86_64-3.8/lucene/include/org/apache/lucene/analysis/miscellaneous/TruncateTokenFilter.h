#ifndef org_apache_lucene_analysis_miscellaneous_TruncateTokenFilter_H
#define org_apache_lucene_analysis_miscellaneous_TruncateTokenFilter_H

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

          class TruncateTokenFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_ec84dcad1ccbb797,
              mid_incrementToken_8454bd5aa23fd11e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TruncateTokenFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TruncateTokenFilter(const TruncateTokenFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            TruncateTokenFilter(const ::org::apache::lucene::analysis::TokenStream &, jint);

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
        namespace miscellaneous {
          extern PyType_Def PY_TYPE_DEF(TruncateTokenFilter);
          extern PyTypeObject *PY_TYPE(TruncateTokenFilter);

          class t_TruncateTokenFilter {
          public:
            PyObject_HEAD
            TruncateTokenFilter object;
            static PyObject *wrap_Object(const TruncateTokenFilter&);
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
