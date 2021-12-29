#ifndef org_apache_lucene_facet_FacetsCollectorManager_H
#define org_apache_lucene_facet_FacetsCollectorManager_H

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
      namespace facet {
        class FacetsCollector;
      }
      namespace search {
        class CollectorManager;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {

        class FacetsCollectorManager : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_newCollector_47fa8263af2d343b,
            mid_reduce_3c4d954440729da8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FacetsCollectorManager(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FacetsCollectorManager(const FacetsCollectorManager& obj) : ::java::lang::Object(obj) {}

          FacetsCollectorManager();

          ::org::apache::lucene::facet::FacetsCollector newCollector() const;
          ::org::apache::lucene::facet::FacetsCollector reduce(const ::java::util::Collection &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        extern PyType_Def PY_TYPE_DEF(FacetsCollectorManager);
        extern PyTypeObject *PY_TYPE(FacetsCollectorManager);

        class t_FacetsCollectorManager {
        public:
          PyObject_HEAD
          FacetsCollectorManager object;
          static PyObject *wrap_Object(const FacetsCollectorManager&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
