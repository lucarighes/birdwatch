#ifndef org_apache_lucene_analysis_core_LowerCaseFilter_H
#define org_apache_lucene_analysis_core_LowerCaseFilter_H

#include "org/apache/lucene/analysis/LowerCaseFilter.h"

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
        namespace core {

          class LowerCaseFilter : public ::org::apache::lucene::analysis::LowerCaseFilter {
           public:
            enum {
              mid_init$_c26756868a754f4e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LowerCaseFilter(jobject obj) : ::org::apache::lucene::analysis::LowerCaseFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LowerCaseFilter(const LowerCaseFilter& obj) : ::org::apache::lucene::analysis::LowerCaseFilter(obj) {}

            LowerCaseFilter(const ::org::apache::lucene::analysis::TokenStream &);
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
        namespace core {
          extern PyType_Def PY_TYPE_DEF(LowerCaseFilter);
          extern PyTypeObject *PY_TYPE(LowerCaseFilter);

          class t_LowerCaseFilter {
          public:
            PyObject_HEAD
            LowerCaseFilter object;
            static PyObject *wrap_Object(const LowerCaseFilter&);
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
