#ifndef org_apache_lucene_analysis_ko_DictionaryToken_H
#define org_apache_lucene_analysis_ko_DictionaryToken_H

#include "org/apache/lucene/analysis/ko/Token.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {
          namespace dict {
            class Dictionary$Morpheme;
            class Dictionary;
          }
          class POS$Type;
          class POS$Tag;
          class KoreanTokenizer$Type;
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
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {

          class DictionaryToken : public ::org::apache::lucene::analysis::ko::Token {
           public:
            enum {
              mid_init$_c04bcab320147d7e,
              mid_getLeftPOS_6d27d9f5e0d7f31a,
              mid_getMorphemes_82c5e27eed5fc4af,
              mid_getPOSType_6e8b69211f216c5e,
              mid_getReading_db9b55ba01e03e4b,
              mid_getRightPOS_6d27d9f5e0d7f31a,
              mid_getType_3e090cda568d96dd,
              mid_isKnown_8454bd5aa23fd11e,
              mid_isUnknown_8454bd5aa23fd11e,
              mid_isUser_8454bd5aa23fd11e,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DictionaryToken(jobject obj) : ::org::apache::lucene::analysis::ko::Token(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DictionaryToken(const DictionaryToken& obj) : ::org::apache::lucene::analysis::ko::Token(obj) {}

            DictionaryToken(const ::org::apache::lucene::analysis::ko::KoreanTokenizer$Type &, const ::org::apache::lucene::analysis::ko::dict::Dictionary &, jint, const JArray< jchar > &, jint, jint, jint, jint);

            ::org::apache::lucene::analysis::ko::POS$Tag getLeftPOS() const;
            JArray< ::org::apache::lucene::analysis::ko::dict::Dictionary$Morpheme > getMorphemes() const;
            ::org::apache::lucene::analysis::ko::POS$Type getPOSType() const;
            ::java::lang::String getReading() const;
            ::org::apache::lucene::analysis::ko::POS$Tag getRightPOS() const;
            ::org::apache::lucene::analysis::ko::KoreanTokenizer$Type getType() const;
            jboolean isKnown() const;
            jboolean isUnknown() const;
            jboolean isUser() const;
            ::java::lang::String toString() const;
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
          extern PyType_Def PY_TYPE_DEF(DictionaryToken);
          extern PyTypeObject *PY_TYPE(DictionaryToken);

          class t_DictionaryToken {
          public:
            PyObject_HEAD
            DictionaryToken object;
            static PyObject *wrap_Object(const DictionaryToken&);
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
