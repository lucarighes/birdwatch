#ifndef org_apache_lucene_util_AttributeImpl_H
#define org_apache_lucene_util_AttributeImpl_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Cloneable;
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Attribute;
        class AttributeImpl;
        class AttributeReflector;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class AttributeImpl : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_clear_f2cc1bce94666404,
            mid_clone_3e3d10fb1bca89d9,
            mid_copyTo_26346c38ebc9c090,
            mid_end_f2cc1bce94666404,
            mid_reflectAsString_46a3600c464a391e,
            mid_reflectWith_b880c72ee67200af,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AttributeImpl(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AttributeImpl(const AttributeImpl& obj) : ::java::lang::Object(obj) {}

          AttributeImpl();

          void clear() const;
          AttributeImpl clone() const;
          void copyTo(const AttributeImpl &) const;
          void end() const;
          ::java::lang::String reflectAsString(jboolean) const;
          void reflectWith(const ::org::apache::lucene::util::AttributeReflector &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(AttributeImpl);
        extern PyTypeObject *PY_TYPE(AttributeImpl);

        class t_AttributeImpl {
        public:
          PyObject_HEAD
          AttributeImpl object;
          static PyObject *wrap_Object(const AttributeImpl&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
