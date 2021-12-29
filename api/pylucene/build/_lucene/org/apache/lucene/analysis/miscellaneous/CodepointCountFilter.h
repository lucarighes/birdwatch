#ifndef org_apache_lucene_analysis_miscellaneous_CodepointCountFilter_H
#define org_apache_lucene_analysis_miscellaneous_CodepointCountFilter_H

#include "org/apache/lucene/analysis/FilteringTokenFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace miscellaneous {

          class CodepointCountFilter : public ::org::apache::lucene::analysis::FilteringTokenFilter {
           public:
            enum {
              mid_init$_cc3fe04da12abad6,
              mid_accept_8454bd5aa23fd11e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CodepointCountFilter(jobject obj) : ::org::apache::lucene::analysis::FilteringTokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CodepointCountFilter(const CodepointCountFilter& obj) : ::org::apache::lucene::analysis::FilteringTokenFilter(obj) {}

            CodepointCountFilter(const ::org::apache::lucene::analysis::TokenStream &, jint, jint);

            jboolean accept() const;
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
          extern PyType_Def PY_TYPE_DEF(CodepointCountFilter);
          extern PyTypeObject *PY_TYPE(CodepointCountFilter);

          class t_CodepointCountFilter {
          public:
            PyObject_HEAD
            CodepointCountFilter object;
            static PyObject *wrap_Object(const CodepointCountFilter&);
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
