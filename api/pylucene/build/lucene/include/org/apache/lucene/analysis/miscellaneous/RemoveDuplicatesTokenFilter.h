#ifndef org_apache_lucene_analysis_miscellaneous_RemoveDuplicatesTokenFilter_H
#define org_apache_lucene_analysis_miscellaneous_RemoveDuplicatesTokenFilter_H

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
        namespace miscellaneous {

          class RemoveDuplicatesTokenFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_c26756868a754f4e,
              mid_incrementToken_8454bd5aa23fd11e,
              mid_reset_f2cc1bce94666404,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RemoveDuplicatesTokenFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RemoveDuplicatesTokenFilter(const RemoveDuplicatesTokenFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            RemoveDuplicatesTokenFilter(const ::org::apache::lucene::analysis::TokenStream &);

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
          extern PyType_Def PY_TYPE_DEF(RemoveDuplicatesTokenFilter);
          extern PyTypeObject *PY_TYPE(RemoveDuplicatesTokenFilter);

          class t_RemoveDuplicatesTokenFilter {
          public:
            PyObject_HEAD
            RemoveDuplicatesTokenFilter object;
            static PyObject *wrap_Object(const RemoveDuplicatesTokenFilter&);
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
