#ifndef org_apache_lucene_search_comparators_FloatComparator_H
#define org_apache_lucene_search_comparators_FloatComparator_H

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
    class Float;
    class Class;
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

          class FloatComparator : public ::org::apache::lucene::search::comparators::NumericComparator {
           public:
            enum {
              mid_init$_7eea80f78a0a7ef5,
              mid_compare_57a58545eba514db,
              mid_getLeafComparator_6183906b7058c4b5,
              mid_setTopValue_983cdbc3424b161f,
              mid_value_36191ce480b45955,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FloatComparator(jobject obj) : ::org::apache::lucene::search::comparators::NumericComparator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FloatComparator(const FloatComparator& obj) : ::org::apache::lucene::search::comparators::NumericComparator(obj) {}

            FloatComparator(jint, const ::java::lang::String &, const ::java::lang::Float &, jboolean, jint);

            jint compare(jint, jint) const;
            ::org::apache::lucene::search::LeafFieldComparator getLeafComparator(const ::org::apache::lucene::index::LeafReaderContext &) const;
            void setTopValue(const ::java::lang::Float &) const;
            ::java::lang::Float value(jint) const;
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
          extern PyType_Def PY_TYPE_DEF(FloatComparator);
          extern PyTypeObject *PY_TYPE(FloatComparator);

          class t_FloatComparator {
          public:
            PyObject_HEAD
            FloatComparator object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FloatComparator *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FloatComparator&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FloatComparator&, PyTypeObject *);
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
