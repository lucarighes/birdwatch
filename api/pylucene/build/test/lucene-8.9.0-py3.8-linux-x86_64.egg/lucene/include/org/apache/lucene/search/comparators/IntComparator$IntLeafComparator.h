#ifndef org_apache_lucene_search_comparators_IntComparator$IntLeafComparator_H
#define org_apache_lucene_search_comparators_IntComparator$IntLeafComparator_H

#include "org/apache/lucene/search/comparators/NumericComparator$NumericLeafComparator.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class LeafReaderContext;
      }
      namespace search {
        namespace comparators {
          class IntComparator;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Integer;
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

          class IntComparator$IntLeafComparator : public ::org::apache::lucene::search::comparators::NumericComparator$NumericLeafComparator {
           public:
            enum {
              mid_init$_f549e32ce4b52f7e,
              mid_compareBottom_1e143afe1894d213,
              mid_compareTop_1e143afe1894d213,
              mid_copy_438c62480c481c65,
              mid_setBottom_040c4cd0390c5aff,
              mid_encodeTop_9ffdf271836656c4,
              mid_encodeBottom_9ffdf271836656c4,
              mid_isMissingValueCompetitive_8454bd5aa23fd11e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IntComparator$IntLeafComparator(jobject obj) : ::org::apache::lucene::search::comparators::NumericComparator$NumericLeafComparator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntComparator$IntLeafComparator(const IntComparator$IntLeafComparator& obj) : ::org::apache::lucene::search::comparators::NumericComparator$NumericLeafComparator(obj) {}

            IntComparator$IntLeafComparator(const ::org::apache::lucene::search::comparators::IntComparator &, const ::org::apache::lucene::index::LeafReaderContext &);

            jint compareBottom(jint) const;
            jint compareTop(jint) const;
            void copy(jint, jint) const;
            void setBottom(jint) const;
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
          extern PyType_Def PY_TYPE_DEF(IntComparator$IntLeafComparator);
          extern PyTypeObject *PY_TYPE(IntComparator$IntLeafComparator);

          class t_IntComparator$IntLeafComparator {
          public:
            PyObject_HEAD
            IntComparator$IntLeafComparator object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_IntComparator$IntLeafComparator *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const IntComparator$IntLeafComparator&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const IntComparator$IntLeafComparator&, PyTypeObject *);
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
