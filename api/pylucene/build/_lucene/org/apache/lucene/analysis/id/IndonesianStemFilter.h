#ifndef org_apache_lucene_analysis_id_IndonesianStemFilter_H
#define org_apache_lucene_analysis_id_IndonesianStemFilter_H

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
        namespace id {

          class IndonesianStemFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_c26756868a754f4e,
              mid_init$_2ffd64a9e6352a93,
              mid_incrementToken_8454bd5aa23fd11e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IndonesianStemFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IndonesianStemFilter(const IndonesianStemFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            IndonesianStemFilter(const ::org::apache::lucene::analysis::TokenStream &);
            IndonesianStemFilter(const ::org::apache::lucene::analysis::TokenStream &, jboolean);

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
        namespace id {
          extern PyType_Def PY_TYPE_DEF(IndonesianStemFilter);
          extern PyTypeObject *PY_TYPE(IndonesianStemFilter);

          class t_IndonesianStemFilter {
          public:
            PyObject_HEAD
            IndonesianStemFilter object;
            static PyObject *wrap_Object(const IndonesianStemFilter&);
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
