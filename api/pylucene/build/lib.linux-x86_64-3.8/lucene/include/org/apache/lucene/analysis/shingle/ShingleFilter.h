#ifndef org_apache_lucene_analysis_shingle_ShingleFilter_H
#define org_apache_lucene_analysis_shingle_ShingleFilter_H

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
        namespace shingle {

          class ShingleFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_c26756868a754f4e,
              mid_init$_b047379931b7623e,
              mid_init$_ec84dcad1ccbb797,
              mid_init$_cc3fe04da12abad6,
              mid_end_f2cc1bce94666404,
              mid_incrementToken_8454bd5aa23fd11e,
              mid_reset_f2cc1bce94666404,
              mid_setFillerToken_9fd2eb66a64e6f0f,
              mid_setMaxShingleSize_040c4cd0390c5aff,
              mid_setMinShingleSize_040c4cd0390c5aff,
              mid_setOutputUnigrams_9d72768e8fdce2b7,
              mid_setOutputUnigramsIfNoShingles_9d72768e8fdce2b7,
              mid_setTokenSeparator_9fd2eb66a64e6f0f,
              mid_setTokenType_9fd2eb66a64e6f0f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ShingleFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ShingleFilter(const ShingleFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            static ::java::lang::String *DEFAULT_FILLER_TOKEN;
            static jint DEFAULT_MAX_SHINGLE_SIZE;
            static jint DEFAULT_MIN_SHINGLE_SIZE;
            static ::java::lang::String *DEFAULT_TOKEN_SEPARATOR;
            static ::java::lang::String *DEFAULT_TOKEN_TYPE;

            ShingleFilter(const ::org::apache::lucene::analysis::TokenStream &);
            ShingleFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::java::lang::String &);
            ShingleFilter(const ::org::apache::lucene::analysis::TokenStream &, jint);
            ShingleFilter(const ::org::apache::lucene::analysis::TokenStream &, jint, jint);

            void end() const;
            jboolean incrementToken() const;
            void reset() const;
            void setFillerToken(const ::java::lang::String &) const;
            void setMaxShingleSize(jint) const;
            void setMinShingleSize(jint) const;
            void setOutputUnigrams(jboolean) const;
            void setOutputUnigramsIfNoShingles(jboolean) const;
            void setTokenSeparator(const ::java::lang::String &) const;
            void setTokenType(const ::java::lang::String &) const;
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
        namespace shingle {
          extern PyType_Def PY_TYPE_DEF(ShingleFilter);
          extern PyTypeObject *PY_TYPE(ShingleFilter);

          class t_ShingleFilter {
          public:
            PyObject_HEAD
            ShingleFilter object;
            static PyObject *wrap_Object(const ShingleFilter&);
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
