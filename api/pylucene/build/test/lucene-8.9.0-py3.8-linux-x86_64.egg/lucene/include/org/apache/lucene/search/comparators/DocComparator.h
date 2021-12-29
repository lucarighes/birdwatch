#ifndef org_apache_lucene_search_comparators_DocComparator_H
#define org_apache_lucene_search_comparators_DocComparator_H

#include "org/apache/lucene/search/FieldComparator.h"

namespace java {
  namespace lang {
    class Integer;
    class Class;
  }
}
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
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace comparators {

          class DocComparator : public ::org::apache::lucene::search::FieldComparator {
           public:
            enum {
              mid_init$_bb058390899ffbb1,
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

            explicit DocComparator(jobject obj) : ::org::apache::lucene::search::FieldComparator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DocComparator(const DocComparator& obj) : ::org::apache::lucene::search::FieldComparator(obj) {}

            DocComparator(jint, jboolean, jint);

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
          extern PyType_Def PY_TYPE_DEF(DocComparator);
          extern PyTypeObject *PY_TYPE(DocComparator);

          class t_DocComparator {
          public:
            PyObject_HEAD
            DocComparator object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_DocComparator *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const DocComparator&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const DocComparator&, PyTypeObject *);
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
