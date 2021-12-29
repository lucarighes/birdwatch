#ifndef org_apache_lucene_analysis_ja_tokenattributes_InflectionAttribute_H
#define org_apache_lucene_analysis_ja_tokenattributes_InflectionAttribute_H

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

            class InflectionAttribute : public ::org::apache::lucene::util::Attribute {
             public:
              enum {
                mid_getInflectionForm_db9b55ba01e03e4b,
                mid_getInflectionType_db9b55ba01e03e4b,
                mid_setToken_e7eb8cf5a63e4354,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit InflectionAttribute(jobject obj) : ::org::apache::lucene::util::Attribute(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              InflectionAttribute(const InflectionAttribute& obj) : ::org::apache::lucene::util::Attribute(obj) {}

              ::java::lang::String getInflectionForm() const;
              ::java::lang::String getInflectionType() const;
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
            extern PyType_Def PY_TYPE_DEF(InflectionAttribute);
            extern PyTypeObject *PY_TYPE(InflectionAttribute);

            class t_InflectionAttribute {
            public:
              PyObject_HEAD
              InflectionAttribute object;
              static PyObject *wrap_Object(const InflectionAttribute&);
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
