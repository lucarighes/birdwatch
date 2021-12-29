#ifndef org_apache_lucene_search_ReferenceManager$RefreshListener_H
#define org_apache_lucene_search_ReferenceManager$RefreshListener_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class ReferenceManager$RefreshListener : public ::java::lang::Object {
         public:
          enum {
            mid_afterRefresh_9d72768e8fdce2b7,
            mid_beforeRefresh_f2cc1bce94666404,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ReferenceManager$RefreshListener(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ReferenceManager$RefreshListener(const ReferenceManager$RefreshListener& obj) : ::java::lang::Object(obj) {}

          void afterRefresh(jboolean) const;
          void beforeRefresh() const;
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
        extern PyType_Def PY_TYPE_DEF(ReferenceManager$RefreshListener);
        extern PyTypeObject *PY_TYPE(ReferenceManager$RefreshListener);

        class t_ReferenceManager$RefreshListener {
        public:
          PyObject_HEAD
          ReferenceManager$RefreshListener object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_ReferenceManager$RefreshListener *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const ReferenceManager$RefreshListener&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const ReferenceManager$RefreshListener&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
