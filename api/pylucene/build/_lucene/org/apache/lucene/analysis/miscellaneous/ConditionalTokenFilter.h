#ifndef org_apache_lucene_analysis_miscellaneous_ConditionalTokenFilter_H
#define org_apache_lucene_analysis_miscellaneous_ConditionalTokenFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

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
        namespace miscellaneous {

          class ConditionalTokenFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_close_f2cc1bce94666404,
              mid_end_f2cc1bce94666404,
              mid_incrementToken_8454bd5aa23fd11e,
              mid_reset_f2cc1bce94666404,
              mid_shouldFilter_8454bd5aa23fd11e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ConditionalTokenFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ConditionalTokenFilter(const ConditionalTokenFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            void close() const;
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
          extern PyType_Def PY_TYPE_DEF(ConditionalTokenFilter);
          extern PyTypeObject *PY_TYPE(ConditionalTokenFilter);

          class t_ConditionalTokenFilter {
          public:
            PyObject_HEAD
            ConditionalTokenFilter object;
            static PyObject *wrap_Object(const ConditionalTokenFilter&);
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
