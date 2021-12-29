#ifndef org_apache_lucene_util_AttributeFactory_H
#define org_apache_lucene_util_AttributeFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeFactory;
        class AttributeImpl;
        class Attribute;
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
      namespace util {

        class AttributeFactory : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_createAttributeInstance_735d71ec4c74ee78,
            mid_getStaticImplementation_b43af07435791b5c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AttributeFactory(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AttributeFactory(const AttributeFactory& obj) : ::java::lang::Object(obj) {}

          static AttributeFactory *DEFAULT_ATTRIBUTE_FACTORY;

          AttributeFactory();

          ::org::apache::lucene::util::AttributeImpl createAttributeInstance(const ::java::lang::Class &) const;
          static AttributeFactory getStaticImplementation(const AttributeFactory &, const ::java::lang::Class &);
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
        extern PyType_Def PY_TYPE_DEF(AttributeFactory);
        extern PyTypeObject *PY_TYPE(AttributeFactory);

        class t_AttributeFactory {
        public:
          PyObject_HEAD
          AttributeFactory object;
          static PyObject *wrap_Object(const AttributeFactory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
