#ifndef org_apache_lucene_analysis_stempel_StempelFilter_H
#define org_apache_lucene_analysis_stempel_StempelFilter_H

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
        namespace stempel {
          class StempelStemmer;
        }
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
        namespace stempel {

          class StempelFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_10ebfd2d6cbcfdf0,
              mid_init$_9d5fa47d46a5d825,
              mid_incrementToken_8454bd5aa23fd11e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit StempelFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            StempelFilter(const StempelFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            static jint DEFAULT_MIN_LENGTH;

            StempelFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::stempel::StempelStemmer &);
            StempelFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::stempel::StempelStemmer &, jint);

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
        namespace stempel {
          extern PyType_Def PY_TYPE_DEF(StempelFilter);
          extern PyTypeObject *PY_TYPE(StempelFilter);

          class t_StempelFilter {
          public:
            PyObject_HEAD
            StempelFilter object;
            static PyObject *wrap_Object(const StempelFilter&);
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
