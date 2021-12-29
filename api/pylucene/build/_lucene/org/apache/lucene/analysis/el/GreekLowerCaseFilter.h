#ifndef org_apache_lucene_analysis_el_GreekLowerCaseFilter_H
#define org_apache_lucene_analysis_el_GreekLowerCaseFilter_H

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
        namespace el {

          class GreekLowerCaseFilter : public ::org::apache::lucene::analysis::TokenFilter {
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

            explicit GreekLowerCaseFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GreekLowerCaseFilter(const GreekLowerCaseFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            GreekLowerCaseFilter(const ::org::apache::lucene::analysis::TokenStream &);

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
        namespace el {
          extern PyType_Def PY_TYPE_DEF(GreekLowerCaseFilter);
          extern PyTypeObject *PY_TYPE(GreekLowerCaseFilter);

          class t_GreekLowerCaseFilter {
          public:
            PyObject_HEAD
            GreekLowerCaseFilter object;
            static PyObject *wrap_Object(const GreekLowerCaseFilter&);
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
