#ifndef org_apache_lucene_collation_CollationAttributeFactory_H
#define org_apache_lucene_collation_CollationAttributeFactory_H

#include "org/apache/lucene/util/AttributeFactory$StaticImplementationAttributeFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeFactory;
      }
      namespace collation {
        namespace tokenattributes {
          class CollatedTermAttributeImpl;
        }
      }
    }
  }
}
namespace java {
  namespace text {
    class Collator;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace collation {

        class CollationAttributeFactory : public ::org::apache::lucene::util::AttributeFactory$StaticImplementationAttributeFactory {
         public:
          enum {
            mid_init$_5752a611d0e456db,
            mid_init$_857978efc63f23cc,
            mid_createInstance_24a1bd2bf1472156,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CollationAttributeFactory(jobject obj) : ::org::apache::lucene::util::AttributeFactory$StaticImplementationAttributeFactory(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CollationAttributeFactory(const CollationAttributeFactory& obj) : ::org::apache::lucene::util::AttributeFactory$StaticImplementationAttributeFactory(obj) {}

          CollationAttributeFactory(const ::java::text::Collator &);
          CollationAttributeFactory(const ::org::apache::lucene::util::AttributeFactory &, const ::java::text::Collator &);

          ::org::apache::lucene::collation::tokenattributes::CollatedTermAttributeImpl createInstance() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace collation {
        extern PyType_Def PY_TYPE_DEF(CollationAttributeFactory);
        extern PyTypeObject *PY_TYPE(CollationAttributeFactory);

        class t_CollationAttributeFactory {
        public:
          PyObject_HEAD
          CollationAttributeFactory object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_CollationAttributeFactory *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const CollationAttributeFactory&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const CollationAttributeFactory&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
