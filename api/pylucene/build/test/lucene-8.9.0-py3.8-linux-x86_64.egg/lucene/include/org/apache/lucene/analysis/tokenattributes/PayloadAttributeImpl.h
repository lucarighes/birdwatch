#ifndef org_apache_lucene_analysis_tokenattributes_PayloadAttributeImpl_H
#define org_apache_lucene_analysis_tokenattributes_PayloadAttributeImpl_H

#include "org/apache/lucene/util/AttributeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace tokenattributes {
          class PayloadAttributeImpl;
          class PayloadAttribute;
        }
      }
      namespace util {
        class BytesRef;
        class AttributeReflector;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace tokenattributes {

          class PayloadAttributeImpl : public ::org::apache::lucene::util::AttributeImpl {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_init$_0bdfd2603b7490a8,
              mid_clear_f2cc1bce94666404,
              mid_clone_6ba3732772f35c8c,
              mid_copyTo_26346c38ebc9c090,
              mid_equals_8b72f2dcdde6fd1d,
              mid_getPayload_7af2ea2e37ce82b8,
              mid_hashCode_9972fcc56b44e79d,
              mid_reflectWith_b880c72ee67200af,
              mid_setPayload_0bdfd2603b7490a8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PayloadAttributeImpl(jobject obj) : ::org::apache::lucene::util::AttributeImpl(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PayloadAttributeImpl(const PayloadAttributeImpl& obj) : ::org::apache::lucene::util::AttributeImpl(obj) {}

            PayloadAttributeImpl();
            PayloadAttributeImpl(const ::org::apache::lucene::util::BytesRef &);

            void clear() const;
            PayloadAttributeImpl clone() const;
            void copyTo(const ::org::apache::lucene::util::AttributeImpl &) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::util::BytesRef getPayload() const;
            jint hashCode() const;
            void reflectWith(const ::org::apache::lucene::util::AttributeReflector &) const;
            void setPayload(const ::org::apache::lucene::util::BytesRef &) const;
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
          extern PyType_Def PY_TYPE_DEF(PayloadAttributeImpl);
          extern PyTypeObject *PY_TYPE(PayloadAttributeImpl);

          class t_PayloadAttributeImpl {
          public:
            PyObject_HEAD
            PayloadAttributeImpl object;
            static PyObject *wrap_Object(const PayloadAttributeImpl&);
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
