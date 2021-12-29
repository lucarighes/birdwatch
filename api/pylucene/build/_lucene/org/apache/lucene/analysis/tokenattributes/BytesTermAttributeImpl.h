#ifndef org_apache_lucene_analysis_tokenattributes_BytesTermAttributeImpl_H
#define org_apache_lucene_analysis_tokenattributes_BytesTermAttributeImpl_H

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
          class TermToBytesRefAttribute;
          class BytesTermAttribute;
        }
      }
      namespace util {
        class BytesRef;
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

          class BytesTermAttributeImpl : public ::org::apache::lucene::util::AttributeImpl {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_clear_f2cc1bce94666404,
              mid_clone_3e3d10fb1bca89d9,
              mid_copyTo_26346c38ebc9c090,
              mid_equals_8b72f2dcdde6fd1d,
              mid_getBytesRef_7af2ea2e37ce82b8,
              mid_hashCode_9972fcc56b44e79d,
              mid_reflectWith_b880c72ee67200af,
              mid_setBytesRef_0bdfd2603b7490a8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BytesTermAttributeImpl(jobject obj) : ::org::apache::lucene::util::AttributeImpl(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BytesTermAttributeImpl(const BytesTermAttributeImpl& obj) : ::org::apache::lucene::util::AttributeImpl(obj) {}

            BytesTermAttributeImpl();

            void clear() const;
            ::org::apache::lucene::util::AttributeImpl clone() const;
            void copyTo(const ::org::apache::lucene::util::AttributeImpl &) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::util::BytesRef getBytesRef() const;
            jint hashCode() const;
            void reflectWith(const ::org::apache::lucene::util::AttributeReflector &) const;
            void setBytesRef(const ::org::apache::lucene::util::BytesRef &) const;
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
          extern PyType_Def PY_TYPE_DEF(BytesTermAttributeImpl);
          extern PyTypeObject *PY_TYPE(BytesTermAttributeImpl);

          class t_BytesTermAttributeImpl {
          public:
            PyObject_HEAD
            BytesTermAttributeImpl object;
            static PyObject *wrap_Object(const BytesTermAttributeImpl&);
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
