#ifndef org_apache_lucene_search_LiveFieldValues_H
#define org_apache_lucene_search_LiveFieldValues_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class ReferenceManager;
        class ReferenceManager$RefreshListener;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class Closeable;
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class LiveFieldValues : public ::java::lang::Object {
         public:
          enum {
            mid_init$_34f8794a84182b97,
            mid_add_a814174df0bbb9ee,
            mid_afterRefresh_9d72768e8fdce2b7,
            mid_beforeRefresh_f2cc1bce94666404,
            mid_close_f2cc1bce94666404,
            mid_delete_9fd2eb66a64e6f0f,
            mid_get_c0a3c3394484d296,
            mid_size_9972fcc56b44e79d,
            mid_lookupFromSearcher_dff1704659391eef,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LiveFieldValues(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LiveFieldValues(const LiveFieldValues& obj) : ::java::lang::Object(obj) {}

          LiveFieldValues(const ::org::apache::lucene::search::ReferenceManager &, const ::java::lang::Object &);

          void add(const ::java::lang::String &, const ::java::lang::Object &) const;
          void afterRefresh(jboolean) const;
          void beforeRefresh() const;
          void close() const;
          void delete$(const ::java::lang::String &) const;
          ::java::lang::Object get(const ::java::lang::String &) const;
          jint size() const;
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
        extern PyType_Def PY_TYPE_DEF(LiveFieldValues);
        extern PyTypeObject *PY_TYPE(LiveFieldValues);

        class t_LiveFieldValues {
        public:
          PyObject_HEAD
          LiveFieldValues object;
          PyTypeObject *parameters[2];
          static PyTypeObject **parameters_(t_LiveFieldValues *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const LiveFieldValues&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const LiveFieldValues&, PyTypeObject *, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
