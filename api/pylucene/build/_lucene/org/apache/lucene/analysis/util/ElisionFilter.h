#ifndef org_apache_lucene_analysis_util_ElisionFilter_H
#define org_apache_lucene_analysis_util_ElisionFilter_H

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
        class CharArraySet;
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
        namespace util {

          class ElisionFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_85e689f6ceab32ee,
              mid_incrementToken_8454bd5aa23fd11e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ElisionFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ElisionFilter(const ElisionFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            ElisionFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::CharArraySet &);

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
        namespace util {
          extern PyType_Def PY_TYPE_DEF(ElisionFilter);
          extern PyTypeObject *PY_TYPE(ElisionFilter);

          class t_ElisionFilter {
          public:
            PyObject_HEAD
            ElisionFilter object;
            static PyObject *wrap_Object(const ElisionFilter&);
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
