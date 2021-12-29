#ifndef org_apache_lucene_analysis_miscellaneous_DateRecognizerFilter_H
#define org_apache_lucene_analysis_miscellaneous_DateRecognizerFilter_H

#include "org/apache/lucene/analysis/FilteringTokenFilter.h"

namespace java {
  namespace text {
    class DateFormat;
  }
  namespace lang {
    class String;
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

          class DateRecognizerFilter : public ::org::apache::lucene::analysis::FilteringTokenFilter {
           public:
            enum {
              mid_init$_c26756868a754f4e,
              mid_init$_f5c0954da5ce5781,
              mid_accept_8454bd5aa23fd11e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DateRecognizerFilter(jobject obj) : ::org::apache::lucene::analysis::FilteringTokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DateRecognizerFilter(const DateRecognizerFilter& obj) : ::org::apache::lucene::analysis::FilteringTokenFilter(obj) {}

            static ::java::lang::String *DATE_TYPE;

            DateRecognizerFilter(const ::org::apache::lucene::analysis::TokenStream &);
            DateRecognizerFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::java::text::DateFormat &);

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
          extern PyType_Def PY_TYPE_DEF(DateRecognizerFilter);
          extern PyTypeObject *PY_TYPE(DateRecognizerFilter);

          class t_DateRecognizerFilter {
          public:
            PyObject_HEAD
            DateRecognizerFilter object;
            static PyObject *wrap_Object(const DateRecognizerFilter&);
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
