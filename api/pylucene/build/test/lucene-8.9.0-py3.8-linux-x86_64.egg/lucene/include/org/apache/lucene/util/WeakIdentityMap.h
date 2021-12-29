#ifndef org_apache_lucene_util_WeakIdentityMap_H
#define org_apache_lucene_util_WeakIdentityMap_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class WeakIdentityMap;
      }
    }
  }
}
namespace java {
  namespace util {
    class Iterator;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class WeakIdentityMap : public ::java::lang::Object {
         public:
          enum {
            mid_clear_f2cc1bce94666404,
            mid_containsKey_8b72f2dcdde6fd1d,
            mid_get_e5ae0f8c04795fa9,
            mid_isEmpty_8454bd5aa23fd11e,
            mid_keyIterator_233a192dadb0917d,
            mid_newConcurrentHashMap_4063a27ff8ed601d,
            mid_newConcurrentHashMap_7c317946f3b46d7b,
            mid_newHashMap_4063a27ff8ed601d,
            mid_newHashMap_7c317946f3b46d7b,
            mid_put_128a89bbc17a8b69,
            mid_reap_f2cc1bce94666404,
            mid_remove_e5ae0f8c04795fa9,
            mid_size_9972fcc56b44e79d,
            mid_valueIterator_233a192dadb0917d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit WeakIdentityMap(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          WeakIdentityMap(const WeakIdentityMap& obj) : ::java::lang::Object(obj) {}

          void clear() const;
          jboolean containsKey(const ::java::lang::Object &) const;
          ::java::lang::Object get(const ::java::lang::Object &) const;
          jboolean isEmpty() const;
          ::java::util::Iterator keyIterator() const;
          static WeakIdentityMap newConcurrentHashMap();
          static WeakIdentityMap newConcurrentHashMap(jboolean);
          static WeakIdentityMap newHashMap();
          static WeakIdentityMap newHashMap(jboolean);
          ::java::lang::Object put(const ::java::lang::Object &, const ::java::lang::Object &) const;
          void reap() const;
          ::java::lang::Object remove(const ::java::lang::Object &) const;
          jint size() const;
          ::java::util::Iterator valueIterator() const;
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
        extern PyType_Def PY_TYPE_DEF(WeakIdentityMap);
        extern PyTypeObject *PY_TYPE(WeakIdentityMap);

        class t_WeakIdentityMap {
        public:
          PyObject_HEAD
          WeakIdentityMap object;
          PyTypeObject *parameters[2];
          static PyTypeObject **parameters_(t_WeakIdentityMap *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const WeakIdentityMap&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const WeakIdentityMap&, PyTypeObject *, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
