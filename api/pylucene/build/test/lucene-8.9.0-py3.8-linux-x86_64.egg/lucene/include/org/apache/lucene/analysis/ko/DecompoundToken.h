#ifndef org_apache_lucene_analysis_ko_DecompoundToken_H
#define org_apache_lucene_analysis_ko_DecompoundToken_H

#include "org/apache/lucene/analysis/ko/Token.h"

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

          class DecompoundToken : public ::org::apache::lucene::analysis::ko::Token {
           public:
            enum {
              mid_init$_10df34893e27a5b4,
              mid_getLeftPOS_6d27d9f5e0d7f31a,
              mid_getMorphemes_82c5e27eed5fc4af,
              mid_getPOSType_6e8b69211f216c5e,
              mid_getReading_db9b55ba01e03e4b,
              mid_getRightPOS_6d27d9f5e0d7f31a,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DecompoundToken(jobject obj) : ::org::apache::lucene::analysis::ko::Token(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DecompoundToken(const DecompoundToken& obj) : ::org::apache::lucene::analysis::ko::Token(obj) {}

            DecompoundToken(const ::org::apache::lucene::analysis::ko::POS$Tag &, const ::java::lang::String &, jint, jint);

            ::org::apache::lucene::analysis::ko::POS$Tag getLeftPOS() const;
            JArray< ::org::apache::lucene::analysis::ko::dict::Dictionary$Morpheme > getMorphemes() const;
            ::org::apache::lucene::analysis::ko::POS$Type getPOSType() const;
            ::java::lang::String getReading() const;
            ::org::apache::lucene::analysis::ko::POS$Tag getRightPOS() const;
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
          extern PyType_Def PY_TYPE_DEF(DecompoundToken);
          extern PyTypeObject *PY_TYPE(DecompoundToken);

          class t_DecompoundToken {
          public:
            PyObject_HEAD
            DecompoundToken object;
            static PyObject *wrap_Object(const DecompoundToken&);
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
