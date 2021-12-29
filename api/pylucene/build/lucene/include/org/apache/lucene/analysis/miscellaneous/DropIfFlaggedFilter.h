#ifndef org_apache_lucene_analysis_miscellaneous_DropIfFlaggedFilter_H
#define org_apache_lucene_analysis_miscellaneous_DropIfFlaggedFilter_H

#include "org/apache/lucene/analysis/FilteringTokenFilter.h"

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

          class DropIfFlaggedFilter : public ::org::apache::lucene::analysis::FilteringTokenFilter {
           public:
            enum {
              mid_accept_8454bd5aa23fd11e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DropIfFlaggedFilter(jobject obj) : ::org::apache::lucene::analysis::FilteringTokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DropIfFlaggedFilter(const DropIfFlaggedFilter& obj) : ::org::apache::lucene::analysis::FilteringTokenFilter(obj) {}
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
          extern PyType_Def PY_TYPE_DEF(DropIfFlaggedFilter);
          extern PyTypeObject *PY_TYPE(DropIfFlaggedFilter);

          class t_DropIfFlaggedFilter {
          public:
            PyObject_HEAD
            DropIfFlaggedFilter object;
            static PyObject *wrap_Object(const DropIfFlaggedFilter&);
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
