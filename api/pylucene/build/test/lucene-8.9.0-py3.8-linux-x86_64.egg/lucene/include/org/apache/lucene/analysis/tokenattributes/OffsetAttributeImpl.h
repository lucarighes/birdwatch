#ifndef org_apache_lucene_analysis_tokenattributes_OffsetAttributeImpl_H
#define org_apache_lucene_analysis_tokenattributes_OffsetAttributeImpl_H

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
          class OffsetAttribute;
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

          class OffsetAttributeImpl : public ::org::apache::lucene::util::AttributeImpl {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_clear_f2cc1bce94666404,
              mid_copyTo_26346c38ebc9c090,
              mid_endOffset_9972fcc56b44e79d,
              mid_equals_8b72f2dcdde6fd1d,
              mid_hashCode_9972fcc56b44e79d,
              mid_reflectWith_b880c72ee67200af,
              mid_setOffset_438c62480c481c65,
              mid_startOffset_9972fcc56b44e79d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OffsetAttributeImpl(jobject obj) : ::org::apache::lucene::util::AttributeImpl(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OffsetAttributeImpl(const OffsetAttributeImpl& obj) : ::org::apache::lucene::util::AttributeImpl(obj) {}

            OffsetAttributeImpl();

            void clear() const;
            void copyTo(const ::org::apache::lucene::util::AttributeImpl &) const;
            jint endOffset() const;
            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
            void reflectWith(const ::org::apache::lucene::util::AttributeReflector &) const;
            void setOffset(jint, jint) const;
            jint startOffset() const;
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
          extern PyType_Def PY_TYPE_DEF(OffsetAttributeImpl);
          extern PyTypeObject *PY_TYPE(OffsetAttributeImpl);

          class t_OffsetAttributeImpl {
          public:
            PyObject_HEAD
            OffsetAttributeImpl object;
            static PyObject *wrap_Object(const OffsetAttributeImpl&);
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
