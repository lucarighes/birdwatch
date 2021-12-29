#ifndef org_apache_lucene_analysis_ja_Token_H
#define org_apache_lucene_analysis_ja_Token_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {
          namespace dict {
            class Dictionary;
          }
          class JapaneseTokenizer$Type;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {

          class Token : public ::java::lang::Object {
           public:
            enum {
              mid_init$_fbf39a41c44c2038,
              mid_getBaseForm_db9b55ba01e03e4b,
              mid_getInflectionForm_db9b55ba01e03e4b,
              mid_getInflectionType_db9b55ba01e03e4b,
              mid_getLength_9972fcc56b44e79d,
              mid_getOffset_9972fcc56b44e79d,
              mid_getPartOfSpeech_db9b55ba01e03e4b,
              mid_getPosition_9972fcc56b44e79d,
              mid_getPositionLength_9972fcc56b44e79d,
              mid_getPronunciation_db9b55ba01e03e4b,
              mid_getReading_db9b55ba01e03e4b,
              mid_getSurfaceForm_e11cf13c9a887534,
              mid_getSurfaceFormString_db9b55ba01e03e4b,
              mid_getType_8d694c58d9cd8153,
              mid_isKnown_8454bd5aa23fd11e,
              mid_isUnknown_8454bd5aa23fd11e,
              mid_isUser_8454bd5aa23fd11e,
              mid_setPositionLength_040c4cd0390c5aff,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Token(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Token(const Token& obj) : ::java::lang::Object(obj) {}

            Token(jint, const JArray< jchar > &, jint, jint, const ::org::apache::lucene::analysis::ja::JapaneseTokenizer$Type &, jint, const ::org::apache::lucene::analysis::ja::dict::Dictionary &);

            ::java::lang::String getBaseForm() const;
            ::java::lang::String getInflectionForm() const;
            ::java::lang::String getInflectionType() const;
            jint getLength() const;
            jint getOffset() const;
            ::java::lang::String getPartOfSpeech() const;
            jint getPosition() const;
            jint getPositionLength() const;
            ::java::lang::String getPronunciation() const;
            ::java::lang::String getReading() const;
            JArray< jchar > getSurfaceForm() const;
            ::java::lang::String getSurfaceFormString() const;
            ::org::apache::lucene::analysis::ja::JapaneseTokenizer$Type getType() const;
            jboolean isKnown() const;
            jboolean isUnknown() const;
            jboolean isUser() const;
            void setPositionLength(jint) const;
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
        namespace ja {
          extern PyType_Def PY_TYPE_DEF(Token);
          extern PyTypeObject *PY_TYPE(Token);

          class t_Token {
          public:
            PyObject_HEAD
            Token object;
            static PyObject *wrap_Object(const Token&);
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
