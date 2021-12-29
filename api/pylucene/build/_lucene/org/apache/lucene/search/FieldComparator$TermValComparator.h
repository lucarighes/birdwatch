#ifndef org_apache_lucene_search_FieldComparator$TermValComparator_H
#define org_apache_lucene_search_FieldComparator$TermValComparator_H

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
      namespace util {
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
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

        class FieldComparator$TermValComparator : public ::org::apache::lucene::search::FieldComparator {
         public:
          enum {
            mid_init$_c668924727dbd3e1,
            mid_compare_57a58545eba514db,
            mid_compareBottom_1e143afe1894d213,
            mid_compareTop_1e143afe1894d213,
            mid_compareValues_f465493e4f3be174,
            mid_copy_438c62480c481c65,
            mid_getLeafComparator_6183906b7058c4b5,
            mid_setBottom_040c4cd0390c5aff,
            mid_setScorer_57a565cc0113e133,
            mid_setTopValue_0bdfd2603b7490a8,
            mid_value_83238e65a54c68bb,
            mid_getBinaryDocValues_06fcee42e0cb3ebc,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldComparator$TermValComparator(jobject obj) : ::org::apache::lucene::search::FieldComparator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldComparator$TermValComparator(const FieldComparator$TermValComparator& obj) : ::org::apache::lucene::search::FieldComparator(obj) {}

          FieldComparator$TermValComparator(jint, const ::java::lang::String &, jboolean);

          jint compare(jint, jint) const;
          jint compareBottom(jint) const;
          jint compareTop(jint) const;
          jint compareValues(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &) const;
          void copy(jint, jint) const;
          ::org::apache::lucene::search::LeafFieldComparator getLeafComparator(const ::org::apache::lucene::index::LeafReaderContext &) const;
          void setBottom(jint) const;
          void setScorer(const ::org::apache::lucene::search::Scorable &) const;
          void setTopValue(const ::org::apache::lucene::util::BytesRef &) const;
          ::org::apache::lucene::util::BytesRef value(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(FieldComparator$TermValComparator);
        extern PyTypeObject *PY_TYPE(FieldComparator$TermValComparator);

        class t_FieldComparator$TermValComparator {
        public:
          PyObject_HEAD
          FieldComparator$TermValComparator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldComparator$TermValComparator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldComparator$TermValComparator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldComparator$TermValComparator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
