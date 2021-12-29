#ifndef org_apache_lucene_analysis_core_TypeTokenFilter_H
#define org_apache_lucene_analysis_core_TypeTokenFilter_H

#include "org/apache/lucene/analysis/FilteringTokenFilter.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace util {
    class Set;
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
        namespace core {

          class TypeTokenFilter : public ::org::apache::lucene::analysis::FilteringTokenFilter {
           public:
            enum {
              mid_init$_59f4cbc95aff88bf,
              mid_init$_8ea4d6997e169d68,
              mid_accept_8454bd5aa23fd11e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TypeTokenFilter(jobject obj) : ::org::apache::lucene::analysis::FilteringTokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TypeTokenFilter(const TypeTokenFilter& obj) : ::org::apache::lucene::analysis::FilteringTokenFilter(obj) {}

            TypeTokenFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::java::util::Set &);
            TypeTokenFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::java::util::Set &, jboolean);
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
          extern PyType_Def PY_TYPE_DEF(TypeTokenFilter);
          extern PyTypeObject *PY_TYPE(TypeTokenFilter);

          class t_TypeTokenFilter {
          public:
            PyObject_HEAD
            TypeTokenFilter object;
            static PyObject *wrap_Object(const TypeTokenFilter&);
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
