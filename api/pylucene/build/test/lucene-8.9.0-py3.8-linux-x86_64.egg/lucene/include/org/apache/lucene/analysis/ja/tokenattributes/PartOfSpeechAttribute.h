#ifndef org_apache_lucene_analysis_ja_tokenattributes_PartOfSpeechAttribute_H
#define org_apache_lucene_analysis_ja_tokenattributes_PartOfSpeechAttribute_H

#include "org/apache/lucene/util/Attribute.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {
          class Token;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {
          namespace tokenattributes {

            class PartOfSpeechAttribute : public ::org::apache::lucene::util::Attribute {
             public:
              enum {
                mid_getPartOfSpeech_db9b55ba01e03e4b,
                mid_setToken_e7eb8cf5a63e4354,
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

              ::java::lang::String getPartOfSpeech() const;
              void setToken(const ::org::apache::lucene::analysis::ja::Token &) const;
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
        namespace ja {
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
