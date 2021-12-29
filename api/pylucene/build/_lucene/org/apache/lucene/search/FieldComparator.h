#ifndef org_apache_lucene_search_FieldComparator_H
#define org_apache_lucene_search_FieldComparator_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class LeafReaderContext;
      }
      namespace search {
        class LeafFieldComparator;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class FieldComparator : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_compare_57a58545eba514db,
            mid_compareValues_9dae63203ae747af,
            mid_disableSkipping_f2cc1bce94666404,
            mid_getLeafComparator_6183906b7058c4b5,
            mid_setSingleSort_f2cc1bce94666404,
            mid_setTopValue_d20f626183f72f7d,
            mid_value_b15c79acb15c2870,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldComparator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldComparator(const FieldComparator& obj) : ::java::lang::Object(obj) {}

          FieldComparator();

          jint compare(jint, jint) const;
          jint compareValues(const ::java::lang::Object &, const ::java::lang::Object &) const;
          void disableSkipping() const;
          ::org::apache::lucene::search::LeafFieldComparator getLeafComparator(const ::org::apache::lucene::index::LeafReaderContext &) const;
          void setSingleSort() const;
          void setTopValue(const ::java::lang::Object &) const;
          ::java::lang::Object value(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(FieldComparator);
        extern PyTypeObject *PY_TYPE(FieldComparator);

        class t_FieldComparator {
        public:
          PyObject_HEAD
          FieldComparator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldComparator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldComparator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldComparator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
