#ifndef org_apache_lucene_analysis_ga_IrishLowerCaseFilter_H
#define org_apache_lucene_analysis_ga_IrishLowerCaseFilter_H

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
        namespace ga {

          class IrishLowerCaseFilter : public ::org::apache::lucene::analysis::TokenFilter {
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

            explicit IrishLowerCaseFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IrishLowerCaseFilter(const IrishLowerCaseFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            IrishLowerCaseFilter(const ::org::apache::lucene::analysis::TokenStream &);

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
        namespace ga {
          extern PyType_Def PY_TYPE_DEF(IrishLowerCaseFilter);
          extern PyTypeObject *PY_TYPE(IrishLowerCaseFilter);

          class t_IrishLowerCaseFilter {
          public:
            PyObject_HEAD
            IrishLowerCaseFilter object;
            static PyObject *wrap_Object(const IrishLowerCaseFilter&);
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
