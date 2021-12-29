#ifndef org_apache_lucene_search_CollectorManager_H
#define org_apache_lucene_search_CollectorManager_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Collector;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class CollectorManager : public ::java::lang::Object {
         public:
          enum {
            mid_newCollector_3c6c359421e4bebc,
            mid_reduce_f186668b4e43c778,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CollectorManager(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CollectorManager(const CollectorManager& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::search::Collector newCollector() const;
          ::java::lang::Object reduce(const ::java::util::Collection &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(CollectorManager);
        extern PyTypeObject *PY_TYPE(CollectorManager);

        class t_CollectorManager {
        public:
          PyObject_HEAD
          CollectorManager object;
          PyTypeObject *parameters[2];
          static PyTypeObject **parameters_(t_CollectorManager *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const CollectorManager&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const CollectorManager&, PyTypeObject *, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
