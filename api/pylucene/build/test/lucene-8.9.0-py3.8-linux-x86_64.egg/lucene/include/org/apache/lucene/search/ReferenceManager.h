#ifndef org_apache_lucene_search_ReferenceManager_H
#define org_apache_lucene_search_ReferenceManager_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class Closeable;
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class ReferenceManager$RefreshListener;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class ReferenceManager : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_acquire_d6bcd06f3102c4d9,
            mid_addListener_995291342c906072,
            mid_close_f2cc1bce94666404,
            mid_maybeRefresh_8454bd5aa23fd11e,
            mid_maybeRefreshBlocking_f2cc1bce94666404,
            mid_release_d20f626183f72f7d,
            mid_removeListener_995291342c906072,
            mid_afterClose_f2cc1bce94666404,
            mid_afterMaybeRefresh_f2cc1bce94666404,
            mid_refreshIfNeeded_e5ae0f8c04795fa9,
            mid_tryIncRef_8b72f2dcdde6fd1d,
            mid_decRef_d20f626183f72f7d,
            mid_getRefCount_5a4805a36cf611e7,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ReferenceManager(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ReferenceManager(const ReferenceManager& obj) : ::java::lang::Object(obj) {}

          ReferenceManager();

          ::java::lang::Object acquire() const;
          void addListener(const ::org::apache::lucene::search::ReferenceManager$RefreshListener &) const;
          void close() const;
          jboolean maybeRefresh() const;
          void maybeRefreshBlocking() const;
          void release(const ::java::lang::Object &) const;
          void removeListener(const ::org::apache::lucene::search::ReferenceManager$RefreshListener &) const;
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
        extern PyType_Def PY_TYPE_DEF(ReferenceManager);
        extern PyTypeObject *PY_TYPE(ReferenceManager);

        class t_ReferenceManager {
        public:
          PyObject_HEAD
          ReferenceManager object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_ReferenceManager *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const ReferenceManager&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const ReferenceManager&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
