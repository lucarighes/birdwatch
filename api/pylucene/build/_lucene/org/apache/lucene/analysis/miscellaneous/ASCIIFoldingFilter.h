#ifndef org_apache_lucene_analysis_miscellaneous_ASCIIFoldingFilter_H
#define org_apache_lucene_analysis_miscellaneous_ASCIIFoldingFilter_H

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

          class ASCIIFoldingFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_c26756868a754f4e,
              mid_init$_2ffd64a9e6352a93,
              mid_foldToASCII_d7b537fea0247190,
              mid_foldToASCII_bb1020cb3a89930d,
              mid_incrementToken_8454bd5aa23fd11e,
              mid_isPreserveOriginal_8454bd5aa23fd11e,
              mid_reset_f2cc1bce94666404,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ASCIIFoldingFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ASCIIFoldingFilter(const ASCIIFoldingFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            ASCIIFoldingFilter(const ::org::apache::lucene::analysis::TokenStream &);
            ASCIIFoldingFilter(const ::org::apache::lucene::analysis::TokenStream &, jboolean);

            void foldToASCII(const JArray< jchar > &, jint) const;
            static jint foldToASCII(const JArray< jchar > &, jint, const JArray< jchar > &, jint, jint);
            jboolean incrementToken() const;
            jboolean isPreserveOriginal() const;
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
          extern PyType_Def PY_TYPE_DEF(ASCIIFoldingFilter);
          extern PyTypeObject *PY_TYPE(ASCIIFoldingFilter);

          class t_ASCIIFoldingFilter {
          public:
            PyObject_HEAD
            ASCIIFoldingFilter object;
            static PyObject *wrap_Object(const ASCIIFoldingFilter&);
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
