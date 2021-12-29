#ifndef org_apache_lucene_util_NamedSPILoader_H
#define org_apache_lucene_util_NamedSPILoader_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class Iterable;
    class String;
    class ClassLoader;
  }
  namespace util {
    class Iterator;
    class Set;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class NamedSPILoader$NamedSPI;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class NamedSPILoader : public ::java::lang::Object {
         public:
          enum {
            mid_init$_67ec072891501dcc,
            mid_init$_b125dde523e94597,
            mid_availableServices_7dcf4034c6d1a92a,
            mid_checkServiceName_9fd2eb66a64e6f0f,
            mid_iterator_233a192dadb0917d,
            mid_lookup_fbf73fb8c8677042,
            mid_reload_98a876e82795b112,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NamedSPILoader(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          NamedSPILoader(const NamedSPILoader& obj) : ::java::lang::Object(obj) {}

          NamedSPILoader(const ::java::lang::Class &);
          NamedSPILoader(const ::java::lang::Class &, const ::java::lang::ClassLoader &);

          ::java::util::Set availableServices() const;
          static void checkServiceName(const ::java::lang::String &);
          ::java::util::Iterator iterator() const;
          ::org::apache::lucene::util::NamedSPILoader$NamedSPI lookup(const ::java::lang::String &) const;
          void reload(const ::java::lang::ClassLoader &) const;
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
        extern PyType_Def PY_TYPE_DEF(NamedSPILoader);
        extern PyTypeObject *PY_TYPE(NamedSPILoader);

        class t_NamedSPILoader {
        public:
          PyObject_HEAD
          NamedSPILoader object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_NamedSPILoader *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const NamedSPILoader&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const NamedSPILoader&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
