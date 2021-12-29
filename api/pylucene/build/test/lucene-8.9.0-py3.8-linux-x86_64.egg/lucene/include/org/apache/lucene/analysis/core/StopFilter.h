#ifndef org_apache_lucene_analysis_core_StopFilter_H
#define org_apache_lucene_analysis_core_StopFilter_H

#include "org/apache/lucene/analysis/StopFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class CharArraySet;
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

          class StopFilter : public ::org::apache::lucene::analysis::StopFilter {
           public:
            enum {
              mid_init$_85e689f6ceab32ee,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit StopFilter(jobject obj) : ::org::apache::lucene::analysis::StopFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            StopFilter(const StopFilter& obj) : ::org::apache::lucene::analysis::StopFilter(obj) {}

            StopFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::CharArraySet &);
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
          extern PyType_Def PY_TYPE_DEF(StopFilter);
          extern PyTypeObject *PY_TYPE(StopFilter);

          class t_StopFilter {
          public:
            PyObject_HEAD
            StopFilter object;
            static PyObject *wrap_Object(const StopFilter&);
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
