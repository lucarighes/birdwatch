#ifndef org_apache_lucene_analysis_tokenattributes_KeywordAttributeImpl_H
#define org_apache_lucene_analysis_tokenattributes_KeywordAttributeImpl_H

#include "org/apache/lucene/util/AttributeImpl.h"

namespace java {
  namespace lang {
    class Class;
    class Object;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace tokenattributes {
          class KeywordAttribute;
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
        namespace tokenattributes {

          class KeywordAttributeImpl : public ::org::apache::lucene::util::AttributeImpl {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_clear_f2cc1bce94666404,
              mid_copyTo_26346c38ebc9c090,
              mid_equals_8b72f2dcdde6fd1d,
              mid_hashCode_9972fcc56b44e79d,
              mid_isKeyword_8454bd5aa23fd11e,
              mid_reflectWith_b880c72ee67200af,
              mid_setKeyword_9d72768e8fdce2b7,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit KeywordAttributeImpl(jobject obj) : ::org::apache::lucene::util::AttributeImpl(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            KeywordAttributeImpl(const KeywordAttributeImpl& obj) : ::org::apache::lucene::util::AttributeImpl(obj) {}

            KeywordAttributeImpl();

            void clear() const;
            void copyTo(const ::org::apache::lucene::util::AttributeImpl &) const;
            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
            jboolean isKeyword() const;
            void reflectWith(const ::org::apache::lucene::util::AttributeReflector &) const;
            void setKeyword(jboolean) const;
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
        namespace tokenattributes {
          extern PyType_Def PY_TYPE_DEF(KeywordAttributeImpl);
          extern PyTypeObject *PY_TYPE(KeywordAttributeImpl);

          class t_KeywordAttributeImpl {
          public:
            PyObject_HEAD
            KeywordAttributeImpl object;
            static PyObject *wrap_Object(const KeywordAttributeImpl&);
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
