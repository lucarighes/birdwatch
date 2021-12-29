#ifndef org_apache_lucene_search_comparators_DoubleComparator_H
#define org_apache_lucene_search_comparators_DoubleComparator_H

#include "org/apache/lucene/search/comparators/NumericComparator.h"

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
    class Double;
    class String;
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
        namespace comparators {

          class DoubleComparator : public ::org::apache::lucene::search::comparators::NumericComparator {
           public:
            enum {
              mid_init$_9efc79397c9a5cbb,
              mid_compare_57a58545eba514db,
              mid_getLeafComparator_6183906b7058c4b5,
              mid_setTopValue_aaa8c43db41d592f,
              mid_value_d9720b5e40990579,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DoubleComparator(jobject obj) : ::org::apache::lucene::search::comparators::NumericComparator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DoubleComparator(const DoubleComparator& obj) : ::org::apache::lucene::search::comparators::NumericComparator(obj) {}

            DoubleComparator(jint, const ::java::lang::String &, const ::java::lang::Double &, jboolean, jint);

            jint compare(jint, jint) const;
            ::org::apache::lucene::search::LeafFieldComparator getLeafComparator(const ::org::apache::lucene::index::LeafReaderContext &) const;
            void setTopValue(const ::java::lang::Double &) const;
            ::java::lang::Double value(jint) const;
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
        namespace comparators {
          extern PyType_Def PY_TYPE_DEF(DoubleComparator);
          extern PyTypeObject *PY_TYPE(DoubleComparator);

          class t_DoubleComparator {
          public:
            PyObject_HEAD
            DoubleComparator object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_DoubleComparator *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const DoubleComparator&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const DoubleComparator&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
