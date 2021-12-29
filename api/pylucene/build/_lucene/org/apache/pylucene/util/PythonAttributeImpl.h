#ifndef org_apache_pylucene_util_PythonAttributeImpl_H
#define org_apache_pylucene_util_PythonAttributeImpl_H

#include "org/apache/lucene/util/AttributeImpl.h"

namespace java {
  namespace lang {
    class Class;
    class Object;
    class Throwable;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeReflector;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace util {

        class PythonAttributeImpl : public ::org::apache::lucene::util::AttributeImpl {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_clear_f2cc1bce94666404,
            mid_copyTo_26346c38ebc9c090,
            mid_equals_8b72f2dcdde6fd1d,
            mid_finalize_f2cc1bce94666404,
            mid_hashCode_9972fcc56b44e79d,
            mid_pythonDecRef_f2cc1bce94666404,
            mid_pythonExtension_2e5ae9edcb9b072f,
            mid_pythonExtension_9c778c9bce6694df,
            mid_reflectWith_b880c72ee67200af,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonAttributeImpl(jobject obj) : ::org::apache::lucene::util::AttributeImpl(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonAttributeImpl(const PythonAttributeImpl& obj) : ::org::apache::lucene::util::AttributeImpl(obj) {}

          PythonAttributeImpl();

          void clear() const;
          void copyTo(const ::org::apache::lucene::util::AttributeImpl &) const;
          jboolean equals(const ::java::lang::Object &) const;
          void finalize() const;
          jint hashCode() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
          void reflectWith(const ::org::apache::lucene::util::AttributeReflector &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace pylucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(PythonAttributeImpl);
        extern PyTypeObject *PY_TYPE(PythonAttributeImpl);

        class t_PythonAttributeImpl {
        public:
          PyObject_HEAD
          PythonAttributeImpl object;
          static PyObject *wrap_Object(const PythonAttributeImpl&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
