#ifndef org_apache_lucene_search_comparators_FloatComparator$FloatLeafComparator_H
#define org_apache_lucene_search_comparators_FloatComparator$FloatLeafComparator_H

#include "org/apache/lucene/search/comparators/NumericComparator$NumericLeafComparator.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace comparators {
          class FloatComparator;
        }
      }
      namespace index {
        class LeafReaderContext;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Float;
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
        namespace comparators {

          class FloatComparator$FloatLeafComparator : public ::org::apache::lucene::search::comparators::NumericComparator$NumericLeafComparator {
           public:
            enum {
              mid_init$_107de66f3f52855e,
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

            explicit FloatComparator$FloatLeafComparator(jobject obj) : ::org::apache::lucene::search::comparators::NumericComparator$NumericLeafComparator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FloatComparator$FloatLeafComparator(const FloatComparator$FloatLeafComparator& obj) : ::org::apache::lucene::search::comparators::NumericComparator$NumericLeafComparator(obj) {}

            FloatComparator$FloatLeafComparator(const ::org::apache::lucene::search::comparators::FloatComparator &, const ::org::apache::lucene::index::LeafReaderContext &);

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
          extern PyType_Def PY_TYPE_DEF(FloatComparator$FloatLeafComparator);
          extern PyTypeObject *PY_TYPE(FloatComparator$FloatLeafComparator);

          class t_FloatComparator$FloatLeafComparator {
          public:
            PyObject_HEAD
            FloatComparator$FloatLeafComparator object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FloatComparator$FloatLeafComparator *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FloatComparator$FloatLeafComparator&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FloatComparator$FloatLeafComparator&, PyTypeObject *);
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
