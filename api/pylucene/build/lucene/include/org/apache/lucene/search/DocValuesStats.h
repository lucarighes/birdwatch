#ifndef org_apache_lucene_search_DocValuesStats_H
#define org_apache_lucene_search_DocValuesStats_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class DocValuesStats : public ::java::lang::Object {
         public:
          enum {
            mid_count_9972fcc56b44e79d,
            mid_field_db9b55ba01e03e4b,
            mid_max_d6bcd06f3102c4d9,
            mid_min_d6bcd06f3102c4d9,
            mid_missing_9972fcc56b44e79d,
            mid_hasValue_a1d30e1ee40c89a2,
            mid_doAccumulate_040c4cd0390c5aff,
            mid_init_07cae694a8cf1c6d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DocValuesStats(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DocValuesStats(const DocValuesStats& obj) : ::java::lang::Object(obj) {}

          jint count() const;
          ::java::lang::String field() const;
          ::java::lang::Object max$() const;
          ::java::lang::Object min$() const;
          jint missing() const;
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
        extern PyType_Def PY_TYPE_DEF(DocValuesStats);
        extern PyTypeObject *PY_TYPE(DocValuesStats);

        class t_DocValuesStats {
        public:
          PyObject_HEAD
          DocValuesStats object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_DocValuesStats *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const DocValuesStats&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const DocValuesStats&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
