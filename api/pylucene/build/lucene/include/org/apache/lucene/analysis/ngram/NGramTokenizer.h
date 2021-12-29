#ifndef org_apache_lucene_analysis_ngram_NGramTokenizer_H
#define org_apache_lucene_analysis_ngram_NGramTokenizer_H

#include "org/apache/lucene/analysis/Tokenizer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeFactory;
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
      namespace analysis {
        namespace ngram {

          class NGramTokenizer : public ::org::apache::lucene::analysis::Tokenizer {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_init$_438c62480c481c65,
              mid_init$_302276806b767fde,
              mid_end_f2cc1bce94666404,
              mid_incrementToken_8454bd5aa23fd11e,
              mid_reset_f2cc1bce94666404,
              mid_isTokenChar_a1d30e1ee40c89a2,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NGramTokenizer(jobject obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            NGramTokenizer(const NGramTokenizer& obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {}

            static jint DEFAULT_MAX_NGRAM_SIZE;
            static jint DEFAULT_MIN_NGRAM_SIZE;

            NGramTokenizer();
            NGramTokenizer(jint, jint);
            NGramTokenizer(const ::org::apache::lucene::util::AttributeFactory &, jint, jint);

            void end() const;
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
        namespace ngram {
          extern PyType_Def PY_TYPE_DEF(NGramTokenizer);
          extern PyTypeObject *PY_TYPE(NGramTokenizer);

          class t_NGramTokenizer {
          public:
            PyObject_HEAD
            NGramTokenizer object;
            static PyObject *wrap_Object(const NGramTokenizer&);
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
