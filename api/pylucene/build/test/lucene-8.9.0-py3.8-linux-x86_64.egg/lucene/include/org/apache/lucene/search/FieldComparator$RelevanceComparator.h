#ifndef org_apache_lucene_search_FieldComparator$RelevanceComparator_H
#define org_apache_lucene_search_FieldComparator$RelevanceComparator_H

#include "org/apache/lucene/search/FieldComparator.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class LeafReaderContext;
      }
      namespace search {
        class LeafFieldComparator;
        class Scorable;
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

        class FieldComparator$RelevanceComparator : public ::org::apache::lucene::search::FieldComparator {
         public:
          enum {
            mid_init$_040c4cd0390c5aff,
            mid_compare_57a58545eba514db,
            mid_compareBottom_1e143afe1894d213,
            mid_compareTop_1e143afe1894d213,
            mid_compareValues_4fc408d80c14bb24,
            mid_copy_438c62480c481c65,
            mid_getLeafComparator_6183906b7058c4b5,
            mid_setBottom_040c4cd0390c5aff,
            mid_setScorer_57a565cc0113e133,
            mid_setTopValue_983cdbc3424b161f,
            mid_value_36191ce480b45955,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldComparator$RelevanceComparator(jobject obj) : ::org::apache::lucene::search::FieldComparator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldComparator$RelevanceComparator(const FieldComparator$RelevanceComparator& obj) : ::org::apache::lucene::search::FieldComparator(obj) {}

          FieldComparator$RelevanceComparator(jint);

          jint compare(jint, jint) const;
          jint compareBottom(jint) const;
          jint compareTop(jint) const;
          jint compareValues(const ::java::lang::Float &, const ::java::lang::Float &) const;
          void copy(jint, jint) const;
          ::org::apache::lucene::search::LeafFieldComparator getLeafComparator(const ::org::apache::lucene::index::LeafReaderContext &) const;
          void setBottom(jint) const;
          void setScorer(const ::org::apache::lucene::search::Scorable &) const;
          void setTopValue(const ::java::lang::Float &) const;
          ::java::lang::Float value(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(FieldComparator$RelevanceComparator);
        extern PyTypeObject *PY_TYPE(FieldComparator$RelevanceComparator);

        class t_FieldComparator$RelevanceComparator {
        public:
          PyObject_HEAD
          FieldComparator$RelevanceComparator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldComparator$RelevanceComparator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldComparator$RelevanceComparator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldComparator$RelevanceComparator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
