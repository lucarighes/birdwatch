#ifndef org_apache_lucene_analysis_ja_JapaneseTokenizer_H
#define org_apache_lucene_analysis_ja_JapaneseTokenizer_H

#include "org/apache/lucene/analysis/Tokenizer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeFactory;
      }
      namespace analysis {
        namespace ja {
          class GraphvizFormatter;
          namespace dict {
            class UnknownDictionary;
            class TokenInfoDictionary;
            class UserDictionary;
            class ConnectionCosts;
          }
          class JapaneseTokenizer$Mode;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
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
        namespace ja {

          class JapaneseTokenizer : public ::org::apache::lucene::analysis::Tokenizer {
           public:
            enum {
              mid_init$_a3856da6f1222919,
              mid_init$_6a542b7e45733db2,
              mid_init$_945afc5d9014ee60,
              mid_init$_143e55277c93402e,
              mid_init$_8d0ee0b8da25c077,
              mid_calcNBestCost_a5a7d1128e9e2bb7,
              mid_close_f2cc1bce94666404,
              mid_end_f2cc1bce94666404,
              mid_incrementToken_8454bd5aa23fd11e,
              mid_reset_f2cc1bce94666404,
              mid_setGraphvizFormatter_cb13c44080e810a0,
              mid_setNBestCost_040c4cd0390c5aff,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit JapaneseTokenizer(jobject obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            JapaneseTokenizer(const JapaneseTokenizer& obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {}

            static ::org::apache::lucene::analysis::ja::JapaneseTokenizer$Mode *DEFAULT_MODE;

            JapaneseTokenizer(const ::org::apache::lucene::analysis::ja::dict::UserDictionary &, jboolean, const ::org::apache::lucene::analysis::ja::JapaneseTokenizer$Mode &);
            JapaneseTokenizer(const ::org::apache::lucene::util::AttributeFactory &, const ::org::apache::lucene::analysis::ja::dict::UserDictionary &, jboolean, const ::org::apache::lucene::analysis::ja::JapaneseTokenizer$Mode &);
            JapaneseTokenizer(const ::org::apache::lucene::analysis::ja::dict::UserDictionary &, jboolean, jboolean, const ::org::apache::lucene::analysis::ja::JapaneseTokenizer$Mode &);
            JapaneseTokenizer(const ::org::apache::lucene::util::AttributeFactory &, const ::org::apache::lucene::analysis::ja::dict::UserDictionary &, jboolean, jboolean, const ::org::apache::lucene::analysis::ja::JapaneseTokenizer$Mode &);
            JapaneseTokenizer(const ::org::apache::lucene::util::AttributeFactory &, const ::org::apache::lucene::analysis::ja::dict::TokenInfoDictionary &, const ::org::apache::lucene::analysis::ja::dict::UnknownDictionary &, const ::org::apache::lucene::analysis::ja::dict::ConnectionCosts &, const ::org::apache::lucene::analysis::ja::dict::UserDictionary &, jboolean, jboolean, const ::org::apache::lucene::analysis::ja::JapaneseTokenizer$Mode &);

            jint calcNBestCost(const ::java::lang::String &) const;
            void close() const;
            void end() const;
            jboolean incrementToken() const;
            void reset() const;
            void setGraphvizFormatter(const ::org::apache::lucene::analysis::ja::GraphvizFormatter &) const;
            void setNBestCost(jint) const;
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
        namespace ja {
          extern PyType_Def PY_TYPE_DEF(JapaneseTokenizer);
          extern PyTypeObject *PY_TYPE(JapaneseTokenizer);

          class t_JapaneseTokenizer {
          public:
            PyObject_HEAD
            JapaneseTokenizer object;
            static PyObject *wrap_Object(const JapaneseTokenizer&);
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
