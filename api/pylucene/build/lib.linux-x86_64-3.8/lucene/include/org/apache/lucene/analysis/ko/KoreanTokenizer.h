#ifndef org_apache_lucene_analysis_ko_KoreanTokenizer_H
#define org_apache_lucene_analysis_ko_KoreanTokenizer_H

#include "org/apache/lucene/analysis/Tokenizer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeFactory;
      }
      namespace analysis {
        namespace ko {
          class KoreanTokenizer$DecompoundMode;
          namespace dict {
            class UnknownDictionary;
            class ConnectionCosts;
            class UserDictionary;
            class TokenInfoDictionary;
          }
          class GraphvizFormatter;
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
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {

          class KoreanTokenizer : public ::org::apache::lucene::analysis::Tokenizer {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_init$_167c467481a84eb8,
              mid_init$_43a048873eddd3f5,
              mid_init$_60c9edb24915e7bf,
              mid_close_f2cc1bce94666404,
              mid_end_f2cc1bce94666404,
              mid_incrementToken_8454bd5aa23fd11e,
              mid_reset_f2cc1bce94666404,
              mid_setGraphvizFormatter_c3064ff64d53289f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit KoreanTokenizer(jobject obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            KoreanTokenizer(const KoreanTokenizer& obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {}

            static ::org::apache::lucene::analysis::ko::KoreanTokenizer$DecompoundMode *DEFAULT_DECOMPOUND;

            KoreanTokenizer();
            KoreanTokenizer(const ::org::apache::lucene::util::AttributeFactory &, const ::org::apache::lucene::analysis::ko::dict::UserDictionary &, const ::org::apache::lucene::analysis::ko::KoreanTokenizer$DecompoundMode &, jboolean);
            KoreanTokenizer(const ::org::apache::lucene::util::AttributeFactory &, const ::org::apache::lucene::analysis::ko::dict::UserDictionary &, const ::org::apache::lucene::analysis::ko::KoreanTokenizer$DecompoundMode &, jboolean, jboolean);
            KoreanTokenizer(const ::org::apache::lucene::util::AttributeFactory &, const ::org::apache::lucene::analysis::ko::dict::TokenInfoDictionary &, const ::org::apache::lucene::analysis::ko::dict::UnknownDictionary &, const ::org::apache::lucene::analysis::ko::dict::ConnectionCosts &, const ::org::apache::lucene::analysis::ko::dict::UserDictionary &, const ::org::apache::lucene::analysis::ko::KoreanTokenizer$DecompoundMode &, jboolean, jboolean);

            void close() const;
            void end() const;
            jboolean incrementToken() const;
            void reset() const;
            void setGraphvizFormatter(const ::org::apache::lucene::analysis::ko::GraphvizFormatter &) const;
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
        namespace ko {
          extern PyType_Def PY_TYPE_DEF(KoreanTokenizer);
          extern PyTypeObject *PY_TYPE(KoreanTokenizer);

          class t_KoreanTokenizer {
          public:
            PyObject_HEAD
            KoreanTokenizer object;
            static PyObject *wrap_Object(const KoreanTokenizer&);
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
