#ifndef org_apache_lucene_analysis_ja_tokenattributes_PartOfSpeechAttributeImpl_H
#define org_apache_lucene_analysis_ja_tokenattributes_PartOfSpeechAttributeImpl_H

#include "org/apache/lucene/util/AttributeImpl.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {
          class Token;
          namespace tokenattributes {
            class PartOfSpeechAttribute;
          }
        }
      }
      namespace util {
        class AttributeReflector;
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

            class PartOfSpeechAttributeImpl : public ::org::apache::lucene::util::AttributeImpl {
             public:
              enum {
                mid_init$_f2cc1bce94666404,
                mid_clear_f2cc1bce94666404,
                mid_copyTo_26346c38ebc9c090,
                mid_getPartOfSpeech_db9b55ba01e03e4b,
                mid_reflectWith_b880c72ee67200af,
                mid_setToken_e7eb8cf5a63e4354,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit PartOfSpeechAttributeImpl(jobject obj) : ::org::apache::lucene::util::AttributeImpl(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              PartOfSpeechAttributeImpl(const PartOfSpeechAttributeImpl& obj) : ::org::apache::lucene::util::AttributeImpl(obj) {}

              PartOfSpeechAttributeImpl();

              void clear() const;
              void copyTo(const ::org::apache::lucene::util::AttributeImpl &) const;
              ::java::lang::String getPartOfSpeech() const;
              void reflectWith(const ::org::apache::lucene::util::AttributeReflector &) const;
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
            extern PyType_Def PY_TYPE_DEF(PartOfSpeechAttributeImpl);
            extern PyTypeObject *PY_TYPE(PartOfSpeechAttributeImpl);

            class t_PartOfSpeechAttributeImpl {
            public:
              PyObject_HEAD
              PartOfSpeechAttributeImpl object;
              static PyObject *wrap_Object(const PartOfSpeechAttributeImpl&);
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
