#ifndef org_apache_lucene_index_FilterSortedDocValues_H
#define org_apache_lucene_index_FilterSortedDocValues_H

#include "org/apache/lucene/index/SortedDocValues.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        namespace automaton {
          class CompiledAutomaton;
        }
      }
      namespace index {
        class TermsEnum;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class FilterSortedDocValues : public ::org::apache::lucene::index::SortedDocValues {
         public:
          enum {
            mid_init$_884cd1bc4aebdeb3,
            mid_advance_1e143afe1894d213,
            mid_advanceExact_a1d30e1ee40c89a2,
            mid_binaryValue_7af2ea2e37ce82b8,
            mid_cost_2e5ae9edcb9b072f,
            mid_docID_9972fcc56b44e79d,
            mid_getValueCount_9972fcc56b44e79d,
            mid_intersect_2452e24ae7d5129f,
            mid_lookupOrd_83238e65a54c68bb,
            mid_lookupTerm_1c2e5fa34f4312de,
            mid_nextDoc_9972fcc56b44e79d,
            mid_ordValue_9972fcc56b44e79d,
            mid_termsEnum_3f9a21827903a65f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterSortedDocValues(jobject obj) : ::org::apache::lucene::index::SortedDocValues(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FilterSortedDocValues(const FilterSortedDocValues& obj) : ::org::apache::lucene::index::SortedDocValues(obj) {}

          FilterSortedDocValues(const ::org::apache::lucene::index::SortedDocValues &);

          jint advance(jint) const;
          jboolean advanceExact(jint) const;
          ::org::apache::lucene::util::BytesRef binaryValue() const;
          jlong cost() const;
          jint docID() const;
          jint getValueCount() const;
          ::org::apache::lucene::index::TermsEnum intersect(const ::org::apache::lucene::util::automaton::CompiledAutomaton &) const;
          ::org::apache::lucene::util::BytesRef lookupOrd(jint) const;
          jint lookupTerm(const ::org::apache::lucene::util::BytesRef &) const;
          jint nextDoc() const;
          jint ordValue() const;
          ::org::apache::lucene::index::TermsEnum termsEnum() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(FilterSortedDocValues);
        extern PyTypeObject *PY_TYPE(FilterSortedDocValues);

        class t_FilterSortedDocValues {
        public:
          PyObject_HEAD
          FilterSortedDocValues object;
          static PyObject *wrap_Object(const FilterSortedDocValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
