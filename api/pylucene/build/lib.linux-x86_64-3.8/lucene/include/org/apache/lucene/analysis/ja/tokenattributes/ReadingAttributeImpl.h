#ifndef org_apache_lucene_analysis_ja_tokenattributes_ReadingAttributeImpl_H
#define org_apache_lucene_analysis_ja_tokenattributes_ReadingAttributeImpl_H

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
          namespace tokenattributes {
            class ReadingAttribute;
          }
          class Token;
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

            class ReadingAttributeImpl : public ::org::apache::lucene::util::AttributeImpl {
             public:
              enum {
                mid_init$_f2cc1bce94666404,
                mid_clear_f2cc1bce94666404,
                mid_copyTo_26346c38ebc9c090,
                mid_getPronunciation_db9b55ba01e03e4b,
                mid_getReading_db9b55ba01e03e4b,
                mid_reflectWith_b880c72ee67200af,
                mid_setToken_e7eb8cf5a63e4354,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ReadingAttributeImpl(jobject obj) : ::org::apache::lucene::util::AttributeImpl(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ReadingAttributeImpl(const ReadingAttributeImpl& obj) : ::org::apache::lucene::util::AttributeImpl(obj) {}

              ReadingAttributeImpl();

              void clear() const;
              void copyTo(const ::org::apache::lucene::util::AttributeImpl &) const;
              ::java::lang::String getPronunciation() const;
              ::java::lang::String getReading() const;
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
            extern PyType_Def PY_TYPE_DEF(ReadingAttributeImpl);
            extern PyTypeObject *PY_TYPE(ReadingAttributeImpl);

            class t_ReadingAttributeImpl {
            public:
              PyObject_HEAD
              ReadingAttributeImpl object;
              static PyObject *wrap_Object(const ReadingAttributeImpl&);
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
