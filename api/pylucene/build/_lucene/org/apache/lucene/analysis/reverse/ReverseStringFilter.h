#ifndef org_apache_lucene_analysis_reverse_ReverseStringFilter_H
#define org_apache_lucene_analysis_reverse_ReverseStringFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
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
        namespace reverse {

          class ReverseStringFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_c26756868a754f4e,
              mid_init$_ab485f7fd2eaf684,
              mid_incrementToken_8454bd5aa23fd11e,
              mid_reverse_82dffe1ba55ed767,
              mid_reverse_9bfa75c9f141b67f,
              mid_reverse_d7b537fea0247190,
              mid_reverse_d5128be76a214037,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ReverseStringFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ReverseStringFilter(const ReverseStringFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            static jchar INFORMATION_SEPARATOR_MARKER;
            static jchar PUA_EC00_MARKER;
            static jchar RTL_DIRECTION_MARKER;
            static jchar START_OF_HEADING_MARKER;

            ReverseStringFilter(const ::org::apache::lucene::analysis::TokenStream &);
            ReverseStringFilter(const ::org::apache::lucene::analysis::TokenStream &, jchar);

            jboolean incrementToken() const;
            static void reverse(const JArray< jchar > &);
            static ::java::lang::String reverse(const ::java::lang::String &);
            static void reverse(const JArray< jchar > &, jint);
            static void reverse(const JArray< jchar > &, jint, jint);
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
        namespace reverse {
          extern PyType_Def PY_TYPE_DEF(ReverseStringFilter);
          extern PyTypeObject *PY_TYPE(ReverseStringFilter);

          class t_ReverseStringFilter {
          public:
            PyObject_HEAD
            ReverseStringFilter object;
            static PyObject *wrap_Object(const ReverseStringFilter&);
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
