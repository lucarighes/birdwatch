#ifndef org_apache_lucene_analysis_tokenattributes_PositionIncrementAttributeImpl_H
#define org_apache_lucene_analysis_tokenattributes_PositionIncrementAttributeImpl_H

#include "org/apache/lucene/util/AttributeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace tokenattributes {
          class PositionIncrementAttribute;
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
    class Object;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace tokenattributes {

          class PositionIncrementAttributeImpl : public ::org::apache::lucene::util::AttributeImpl {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_clear_f2cc1bce94666404,
              mid_copyTo_26346c38ebc9c090,
              mid_end_f2cc1bce94666404,
              mid_equals_8b72f2dcdde6fd1d,
              mid_getPositionIncrement_9972fcc56b44e79d,
              mid_hashCode_9972fcc56b44e79d,
              mid_reflectWith_b880c72ee67200af,
              mid_setPositionIncrement_040c4cd0390c5aff,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PositionIncrementAttributeImpl(jobject obj) : ::org::apache::lucene::util::AttributeImpl(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PositionIncrementAttributeImpl(const PositionIncrementAttributeImpl& obj) : ::org::apache::lucene::util::AttributeImpl(obj) {}

            PositionIncrementAttributeImpl();

            void clear() const;
            void copyTo(const ::org::apache::lucene::util::AttributeImpl &) const;
            void end() const;
            jboolean equals(const ::java::lang::Object &) const;
            jint getPositionIncrement() const;
            jint hashCode() const;
            void reflectWith(const ::org::apache::lucene::util::AttributeReflector &) const;
            void setPositionIncrement(jint) const;
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
          extern PyType_Def PY_TYPE_DEF(PositionIncrementAttributeImpl);
          extern PyTypeObject *PY_TYPE(PositionIncrementAttributeImpl);

          class t_PositionIncrementAttributeImpl {
          public:
            PyObject_HEAD
            PositionIncrementAttributeImpl object;
            static PyObject *wrap_Object(const PositionIncrementAttributeImpl&);
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
