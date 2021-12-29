#ifndef org_apache_lucene_analysis_standard_StandardTokenizerImpl_H
#define org_apache_lucene_analysis_standard_StandardTokenizerImpl_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace tokenattributes {
          class CharTermAttribute;
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
    class Reader;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace standard {

          class StandardTokenizerImpl : public ::java::lang::Object {
           public:
            enum {
              mid_init$_b2f3c57f5e6eb3f2,
              mid_getNextToken_9972fcc56b44e79d,
              mid_getText_5e9737191854bf83,
              mid_setBufferSize_040c4cd0390c5aff,
              mid_yybegin_040c4cd0390c5aff,
              mid_yychar_9972fcc56b44e79d,
              mid_yycharat_ebc61ec1e57770d1,
              mid_yyclose_f2cc1bce94666404,
              mid_yylength_9972fcc56b44e79d,
              mid_yypushback_040c4cd0390c5aff,
              mid_yyreset_b2f3c57f5e6eb3f2,
              mid_yystate_9972fcc56b44e79d,
              mid_yytext_db9b55ba01e03e4b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit StandardTokenizerImpl(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            StandardTokenizerImpl(const StandardTokenizerImpl& obj) : ::java::lang::Object(obj) {}

            static jint EMOJI_TYPE;
            static jint HANGUL_TYPE;
            static jint HIRAGANA_TYPE;
            static jint IDEOGRAPHIC_TYPE;
            static jint KATAKANA_TYPE;
            static jint NUMERIC_TYPE;
            static jint SOUTH_EAST_ASIAN_TYPE;
            static jint WORD_TYPE;
            static jint YYEOF;
            static jint YYINITIAL;

            StandardTokenizerImpl(const ::java::io::Reader &);

            jint getNextToken() const;
            void getText(const ::org::apache::lucene::analysis::tokenattributes::CharTermAttribute &) const;
            void setBufferSize(jint) const;
            void yybegin(jint) const;
            jint yychar() const;
            jchar yycharat(jint) const;
            void yyclose() const;
            jint yylength() const;
            void yypushback(jint) const;
            void yyreset(const ::java::io::Reader &) const;
            jint yystate() const;
            ::java::lang::String yytext() const;
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
        namespace standard {
          extern PyType_Def PY_TYPE_DEF(StandardTokenizerImpl);
          extern PyTypeObject *PY_TYPE(StandardTokenizerImpl);

          class t_StandardTokenizerImpl {
          public:
            PyObject_HEAD
            StandardTokenizerImpl object;
            static PyObject *wrap_Object(const StandardTokenizerImpl&);
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
