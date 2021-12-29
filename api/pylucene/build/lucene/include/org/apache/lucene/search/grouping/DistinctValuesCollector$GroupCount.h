#ifndef org_apache_lucene_search_grouping_DistinctValuesCollector$GroupCount_H
#define org_apache_lucene_search_grouping_DistinctValuesCollector$GroupCount_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Set;
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
        namespace grouping {

          class DistinctValuesCollector$GroupCount : public ::java::lang::Object {
           public:
            enum {
              mid_init$_d9e61008f3b32536,
              max_mid
            };

            enum {
              fid_groupValue,
              fid_uniqueValues,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DistinctValuesCollector$GroupCount(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DistinctValuesCollector$GroupCount(const DistinctValuesCollector$GroupCount& obj) : ::java::lang::Object(obj) {}

            ::java::lang::Object _get_groupValue() const;
            ::java::util::Set _get_uniqueValues() const;

            DistinctValuesCollector$GroupCount(const ::java::lang::Object &, const ::java::util::Set &);
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace grouping {
          extern PyType_Def PY_TYPE_DEF(DistinctValuesCollector$GroupCount);
          extern PyTypeObject *PY_TYPE(DistinctValuesCollector$GroupCount);

          class t_DistinctValuesCollector$GroupCount {
          public:
            PyObject_HEAD
            DistinctValuesCollector$GroupCount object;
            PyTypeObject *parameters[2];
            static PyTypeObject **parameters_(t_DistinctValuesCollector$GroupCount *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const DistinctValuesCollector$GroupCount&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const DistinctValuesCollector$GroupCount&, PyTypeObject *, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
