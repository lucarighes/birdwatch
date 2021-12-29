#ifndef org_apache_lucene_analysis_ja_tokenattributes_ReadingAttribute_H
#define org_apache_lucene_analysis_ja_tokenattributes_ReadingAttribute_H

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

            class ReadingAttribute : public ::org::apache::lucene::util::Attribute {
             public:
              enum {
                mid_getPronunciation_db9b55ba01e03e4b,
                mid_getReading_db9b55ba01e03e4b,
                mid_setToken_e7eb8cf5a63e4354,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ReadingAttribute(jobject obj) : ::org::apache::lucene::util::Attribute(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ReadingAttribute(const ReadingAttribute& obj) : ::org::apache::lucene::util::Attribute(obj) {}

              ::java::lang::String getPronunciation() const;
              ::java::lang::String getReading() const;
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
            extern PyType_Def PY_TYPE_DEF(ReadingAttribute);
            extern PyTypeObject *PY_TYPE(ReadingAttribute);

            class t_ReadingAttribute {
            public:
              PyObject_HEAD
              ReadingAttribute object;
              static PyObject *wrap_Object(const ReadingAttribute&);
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
