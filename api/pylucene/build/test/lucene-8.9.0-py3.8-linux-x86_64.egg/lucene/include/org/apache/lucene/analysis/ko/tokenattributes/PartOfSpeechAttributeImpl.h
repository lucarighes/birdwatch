#ifndef org_apache_lucene_analysis_ko_tokenattributes_PartOfSpeechAttributeImpl_H
#define org_apache_lucene_analysis_ko_tokenattributes_PartOfSpeechAttributeImpl_H

#include "org/apache/lucene/util/AttributeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {
          namespace dict {
            class Dictionary$Morpheme;
          }
          class Token;
          namespace tokenattributes {
            class PartOfSpeechAttribute;
          }
          class POS$Type;
          class POS$Tag;
        }
      }
      namespace util {
        class AttributeReflector;
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

            class PartOfSpeechAttributeImpl : public ::org::apache::lucene::util::AttributeImpl {
             public:
              enum {
                mid_init$_f2cc1bce94666404,
                mid_clear_f2cc1bce94666404,
                mid_copyTo_26346c38ebc9c090,
                mid_getLeftPOS_6d27d9f5e0d7f31a,
                mid_getMorphemes_82c5e27eed5fc4af,
                mid_getPOSType_6e8b69211f216c5e,
                mid_getRightPOS_6d27d9f5e0d7f31a,
                mid_reflectWith_b880c72ee67200af,
                mid_setToken_0ac49e59706c84c7,
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
              ::org::apache::lucene::analysis::ko::POS$Tag getLeftPOS() const;
              JArray< ::org::apache::lucene::analysis::ko::dict::Dictionary$Morpheme > getMorphemes() const;
              ::org::apache::lucene::analysis::ko::POS$Type getPOSType() const;
              ::org::apache::lucene::analysis::ko::POS$Tag getRightPOS() const;
              void reflectWith(const ::org::apache::lucene::util::AttributeReflector &) const;
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
