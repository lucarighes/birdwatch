#ifndef org_apache_lucene_analysis_util_CharTokenizer_H
#define org_apache_lucene_analysis_util_CharTokenizer_H

#include "org/apache/lucene/analysis/Tokenizer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeFactory;
      }
      namespace analysis {
        namespace util {
          class CharTokenizer;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    namespace function {
      class IntPredicate;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {

          class CharTokenizer : public ::org::apache::lucene::analysis::Tokenizer {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_init$_a55a4d78167a7843,
              mid_init$_541d20dfedf4268e,
              mid_end_f2cc1bce94666404,
              mid_fromSeparatorCharPredicate_77d0d46ed616c4c8,
              mid_fromSeparatorCharPredicate_88589fc9717d1efa,
              mid_fromTokenCharPredicate_77d0d46ed616c4c8,
              mid_fromTokenCharPredicate_88589fc9717d1efa,
              mid_incrementToken_8454bd5aa23fd11e,
              mid_reset_f2cc1bce94666404,
              mid_isTokenChar_a1d30e1ee40c89a2,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CharTokenizer(jobject obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CharTokenizer(const CharTokenizer& obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {}

            static jint DEFAULT_MAX_WORD_LEN;

            CharTokenizer();
            CharTokenizer(const ::org::apache::lucene::util::AttributeFactory &);
            CharTokenizer(const ::org::apache::lucene::util::AttributeFactory &, jint);

            void end() const;
            static CharTokenizer fromSeparatorCharPredicate(const ::java::util::function::IntPredicate &);
            static CharTokenizer fromSeparatorCharPredicate(const ::org::apache::lucene::util::AttributeFactory &, const ::java::util::function::IntPredicate &);
            static CharTokenizer fromTokenCharPredicate(const ::java::util::function::IntPredicate &);
            static CharTokenizer fromTokenCharPredicate(const ::org::apache::lucene::util::AttributeFactory &, const ::java::util::function::IntPredicate &);
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
        namespace util {
          extern PyType_Def PY_TYPE_DEF(CharTokenizer);
          extern PyTypeObject *PY_TYPE(CharTokenizer);

          class t_CharTokenizer {
          public:
            PyObject_HEAD
            CharTokenizer object;
            static PyObject *wrap_Object(const CharTokenizer&);
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
