#ifndef org_apache_lucene_search_SortedSetSelector$Type_H
#define org_apache_lucene_search_SortedSetSelector$Type_H

#include "java/lang/Enum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class SortedSetSelector$Type;
      }
    }
  }
}
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

        class SortedSetSelector$Type : public ::java::lang::Enum {
         public:
          enum {
            mid_valueOf_fc1d123e60aef9c1,
            mid_values_693c03f1625a4576,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SortedSetSelector$Type(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SortedSetSelector$Type(const SortedSetSelector$Type& obj) : ::java::lang::Enum(obj) {}

          static SortedSetSelector$Type *MAX;
          static SortedSetSelector$Type *MIDDLE_MAX;
          static SortedSetSelector$Type *MIDDLE_MIN;
          static SortedSetSelector$Type *MIN;

          static SortedSetSelector$Type valueOf(const ::java::lang::String &);
          static JArray< SortedSetSelector$Type > values();
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
        extern PyType_Def PY_TYPE_DEF(SortedSetSelector$Type);
        extern PyTypeObject *PY_TYPE(SortedSetSelector$Type);

        class t_SortedSetSelector$Type {
        public:
          PyObject_HEAD
          SortedSetSelector$Type object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_SortedSetSelector$Type *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const SortedSetSelector$Type&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const SortedSetSelector$Type&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
