#ifndef org_apache_lucene_analysis_sr_SerbianNormalizationFilter_H
#define org_apache_lucene_analysis_sr_SerbianNormalizationFilter_H

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
        namespace sr {

          class SerbianNormalizationFilter : public ::org::apache::lucene::analysis::TokenFilter {
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

            explicit SerbianNormalizationFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SerbianNormalizationFilter(const SerbianNormalizationFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            SerbianNormalizationFilter(const ::org::apache::lucene::analysis::TokenStream &);

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
        namespace sr {
          extern PyType_Def PY_TYPE_DEF(SerbianNormalizationFilter);
          extern PyTypeObject *PY_TYPE(SerbianNormalizationFilter);

          class t_SerbianNormalizationFilter {
          public:
            PyObject_HEAD
            SerbianNormalizationFilter object;
            static PyObject *wrap_Object(const SerbianNormalizationFilter&);
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
