#ifndef org_apache_lucene_search_comparators_IntComparator_H
#define org_apache_lucene_search_comparators_IntComparator_H

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
    class Integer;
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

          class IntComparator : public ::org::apache::lucene::search::comparators::NumericComparator {
           public:
            enum {
              mid_init$_9e7832edcc6a2db0,
              mid_compare_57a58545eba514db,
              mid_getLeafComparator_6183906b7058c4b5,
              mid_setTopValue_dbbc1cc0063b348c,
              mid_value_6469c2cb31e18c67,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IntComparator(jobject obj) : ::org::apache::lucene::search::comparators::NumericComparator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntComparator(const IntComparator& obj) : ::org::apache::lucene::search::comparators::NumericComparator(obj) {}

            IntComparator(jint, const ::java::lang::String &, const ::java::lang::Integer &, jboolean, jint);

            jint compare(jint, jint) const;
            ::org::apache::lucene::search::LeafFieldComparator getLeafComparator(const ::org::apache::lucene::index::LeafReaderContext &) const;
            void setTopValue(const ::java::lang::Integer &) const;
            ::java::lang::Integer value(jint) const;
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
          extern PyType_Def PY_TYPE_DEF(IntComparator);
          extern PyTypeObject *PY_TYPE(IntComparator);

          class t_IntComparator {
          public:
            PyObject_HEAD
            IntComparator object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_IntComparator *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const IntComparator&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const IntComparator&, PyTypeObject *);
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
