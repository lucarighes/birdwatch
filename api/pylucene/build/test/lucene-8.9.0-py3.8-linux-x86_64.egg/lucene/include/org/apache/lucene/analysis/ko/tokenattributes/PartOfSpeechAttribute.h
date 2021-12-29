#ifndef org_apache_lucene_analysis_ko_tokenattributes_PartOfSpeechAttribute_H
#define org_apache_lucene_analysis_ko_tokenattributes_PartOfSpeechAttribute_H

#include "org/apache/lucene/util/Attribute.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {
          namespace dict {
            class Dictionary$Morpheme;
          }
          class Token;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {
          namespace tokenattributes {

            class PartOfSpeechAttribute : public ::org::apache::lucene::util::Attribute {
             public:
              enum {
                mid_getLeftPOS_6d27d9f5e0d7f31a,
                mid_getMorphemes_82c5e27eed5fc4af,
                mid_getPOSType_6e8b69211f216c5e,
                mid_getRightPOS_6d27d9f5e0d7f31a,
                mid_setToken_0ac49e59706c84c7,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit PartOfSpeechAttribute(jobject obj) : ::org::apache::lucene::util::Attribute(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              PartOfSpeechAttribute(const PartOfSpeechAttribute& obj) : ::org::apache::lucene::util::Attribute(obj) {}

              ::org::apache::lucene::analysis::ko::POS$Tag getLeftPOS() const;
              JArray< ::org::apache::lucene::analysis::ko::dict::Dictionary$Morpheme > getMorphemes() const;
              ::org::apache::lucene::analysis::ko::POS$Type getPOSType() const;
              ::org::apache::lucene::analysis::ko::POS$Tag getRightPOS() const;
              void setToken(const ::org::apache::lucene::analysis::ko::Token &) const;
            };
          }
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
          namespace tokenattributes {
            extern PyType_Def PY_TYPE_DEF(PartOfSpeechAttribute);
            extern PyTypeObject *PY_TYPE(PartOfSpeechAttribute);

            class t_PartOfSpeechAttribute {
            public:
              PyObject_HEAD
              PartOfSpeechAttribute object;
              static PyObject *wrap_Object(const PartOfSpeechAttribute&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
