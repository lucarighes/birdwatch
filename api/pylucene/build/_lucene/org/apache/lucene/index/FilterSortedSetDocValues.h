#ifndef org_apache_lucene_index_FilterSortedSetDocValues_H
#define org_apache_lucene_index_FilterSortedSetDocValues_H

#include "org/apache/lucene/index/SortedSetDocValues.h"

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

        class FilterSortedSetDocValues : public ::org::apache::lucene::index::SortedSetDocValues {
         public:
          enum {
            mid_init$_4cc6ae2b32787221,
            mid_advance_1e143afe1894d213,
            mid_advanceExact_a1d30e1ee40c89a2,
            mid_cost_2e5ae9edcb9b072f,
            mid_docID_9972fcc56b44e79d,
            mid_getValueCount_2e5ae9edcb9b072f,
            mid_intersect_2452e24ae7d5129f,
            mid_lookupOrd_9a5ffc0686333682,
            mid_lookupTerm_6f6ee5bba7f22d4c,
            mid_nextDoc_9972fcc56b44e79d,
            mid_nextOrd_2e5ae9edcb9b072f,
            mid_termsEnum_3f9a21827903a65f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterSortedSetDocValues(jobject obj) : ::org::apache::lucene::index::SortedSetDocValues(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FilterSortedSetDocValues(const FilterSortedSetDocValues& obj) : ::org::apache::lucene::index::SortedSetDocValues(obj) {}

          FilterSortedSetDocValues(const ::org::apache::lucene::index::SortedSetDocValues &);

          jint advance(jint) const;
          jboolean advanceExact(jint) const;
          jlong cost() const;
          jint docID() const;
          jlong getValueCount() const;
          ::org::apache::lucene::index::TermsEnum intersect(const ::org::apache::lucene::util::automaton::CompiledAutomaton &) const;
          ::org::apache::lucene::util::BytesRef lookupOrd(jlong) const;
          jlong lookupTerm(const ::org::apache::lucene::util::BytesRef &) const;
          jint nextDoc() const;
          jlong nextOrd() const;
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
        extern PyType_Def PY_TYPE_DEF(FilterSortedSetDocValues);
        extern PyTypeObject *PY_TYPE(FilterSortedSetDocValues);

        class t_FilterSortedSetDocValues {
        public:
          PyObject_HEAD
          FilterSortedSetDocValues object;
          static PyObject *wrap_Object(const FilterSortedSetDocValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
