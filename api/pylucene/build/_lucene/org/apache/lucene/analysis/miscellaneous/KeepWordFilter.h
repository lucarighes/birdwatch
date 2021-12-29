#ifndef org_apache_lucene_analysis_miscellaneous_KeepWordFilter_H
#define org_apache_lucene_analysis_miscellaneous_KeepWordFilter_H

#include "org/apache/lucene/analysis/FilteringTokenFilter.h"

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
        namespace miscellaneous {

          class KeepWordFilter : public ::org::apache::lucene::analysis::FilteringTokenFilter {
           public:
            enum {
              mid_init$_85e689f6ceab32ee,
              mid_accept_8454bd5aa23fd11e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit KeepWordFilter(jobject obj) : ::org::apache::lucene::analysis::FilteringTokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            KeepWordFilter(const KeepWordFilter& obj) : ::org::apache::lucene::analysis::FilteringTokenFilter(obj) {}

            KeepWordFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::CharArraySet &);

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
          extern PyType_Def PY_TYPE_DEF(KeepWordFilter);
          extern PyTypeObject *PY_TYPE(KeepWordFilter);

          class t_KeepWordFilter {
          public:
            PyObject_HEAD
            KeepWordFilter object;
            static PyObject *wrap_Object(const KeepWordFilter&);
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
