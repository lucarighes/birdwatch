#ifndef org_apache_lucene_analysis_ko_Token_H
#define org_apache_lucene_analysis_ko_Token_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {
          namespace dict {
            class Dictionary$Morpheme;
          }
          class POS$Type;
          class POS$Tag;
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

          class Token : public ::java::lang::Object {
           public:
            enum {
              mid_init$_c2ec8b2b923491fe,
              mid_getEndOffset_9972fcc56b44e79d,
              mid_getLeftPOS_6d27d9f5e0d7f31a,
              mid_getLength_9972fcc56b44e79d,
              mid_getMorphemes_82c5e27eed5fc4af,
              mid_getOffset_9972fcc56b44e79d,
              mid_getPOSType_6e8b69211f216c5e,
              mid_getPositionIncrement_9972fcc56b44e79d,
              mid_getPositionLength_9972fcc56b44e79d,
              mid_getReading_db9b55ba01e03e4b,
              mid_getRightPOS_6d27d9f5e0d7f31a,
              mid_getStartOffset_9972fcc56b44e79d,
              mid_getSurfaceForm_e11cf13c9a887534,
              mid_getSurfaceFormString_db9b55ba01e03e4b,
              mid_setPositionIncrement_040c4cd0390c5aff,
              mid_setPositionLength_040c4cd0390c5aff,
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

            Token(const JArray< jchar > &, jint, jint, jint, jint);

            jint getEndOffset() const;
            ::org::apache::lucene::analysis::ko::POS$Tag getLeftPOS() const;
            jint getLength() const;
            JArray< ::org::apache::lucene::analysis::ko::dict::Dictionary$Morpheme > getMorphemes() const;
            jint getOffset() const;
            ::org::apache::lucene::analysis::ko::POS$Type getPOSType() const;
            jint getPositionIncrement() const;
            jint getPositionLength() const;
            ::java::lang::String getReading() const;
            ::org::apache::lucene::analysis::ko::POS$Tag getRightPOS() const;
            jint getStartOffset() const;
            JArray< jchar > getSurfaceForm() const;
            ::java::lang::String getSurfaceFormString() const;
            void setPositionIncrement(jint) const;
            void setPositionLength(jint) const;
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
