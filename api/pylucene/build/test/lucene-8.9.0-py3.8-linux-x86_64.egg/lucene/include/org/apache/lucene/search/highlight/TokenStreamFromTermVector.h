#ifndef org_apache_lucene_search_highlight_TokenStreamFromTermVector_H
#define org_apache_lucene_search_highlight_TokenStreamFromTermVector_H

#include "org/apache/lucene/analysis/TokenStream.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Terms;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {

          class TokenStreamFromTermVector : public ::org::apache::lucene::analysis::TokenStream {
           public:
            enum {
              mid_init$_6e48f938e517c8d6,
              mid_getTermVectorTerms_3a66bb2f11d28264,
              mid_incrementToken_8454bd5aa23fd11e,
              mid_reset_f2cc1bce94666404,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TokenStreamFromTermVector(jobject obj) : ::org::apache::lucene::analysis::TokenStream(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TokenStreamFromTermVector(const TokenStreamFromTermVector& obj) : ::org::apache::lucene::analysis::TokenStream(obj) {}

            TokenStreamFromTermVector(const ::org::apache::lucene::index::Terms &, jint);

            ::org::apache::lucene::index::Terms getTermVectorTerms() const;
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
      namespace search {
        namespace highlight {
          extern PyType_Def PY_TYPE_DEF(TokenStreamFromTermVector);
          extern PyTypeObject *PY_TYPE(TokenStreamFromTermVector);

          class t_TokenStreamFromTermVector {
          public:
            PyObject_HEAD
            TokenStreamFromTermVector object;
            static PyObject *wrap_Object(const TokenStreamFromTermVector&);
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
