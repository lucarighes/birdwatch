#ifndef org_apache_lucene_search_FieldComparator$TermOrdValComparator_H
#define org_apache_lucene_search_FieldComparator$TermOrdValComparator_H

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

        class FieldComparator$TermOrdValComparator : public ::org::apache::lucene::search::FieldComparator {
         public:
          enum {
            mid_init$_836a82ec1a65a0bc,
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
            mid_getSortedDocValues_f74ff9015a5b23ee,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldComparator$TermOrdValComparator(jobject obj) : ::org::apache::lucene::search::FieldComparator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldComparator$TermOrdValComparator(const FieldComparator$TermOrdValComparator& obj) : ::org::apache::lucene::search::FieldComparator(obj) {}

          FieldComparator$TermOrdValComparator(jint, const ::java::lang::String &);
          FieldComparator$TermOrdValComparator(jint, const ::java::lang::String &, jboolean);

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
        extern PyType_Def PY_TYPE_DEF(FieldComparator$TermOrdValComparator);
        extern PyTypeObject *PY_TYPE(FieldComparator$TermOrdValComparator);

        class t_FieldComparator$TermOrdValComparator {
        public:
          PyObject_HEAD
          FieldComparator$TermOrdValComparator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldComparator$TermOrdValComparator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldComparator$TermOrdValComparator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldComparator$TermOrdValComparator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
