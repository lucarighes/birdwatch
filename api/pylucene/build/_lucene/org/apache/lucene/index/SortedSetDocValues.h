#ifndef org_apache_lucene_index_SortedSetDocValues_H
#define org_apache_lucene_index_SortedSetDocValues_H

#include "org/apache/lucene/index/DocValuesIterator.h"

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

        class SortedSetDocValues : public ::org::apache::lucene::index::DocValuesIterator {
         public:
          enum {
            mid_getValueCount_2e5ae9edcb9b072f,
            mid_intersect_2452e24ae7d5129f,
            mid_lookupOrd_9a5ffc0686333682,
            mid_lookupTerm_6f6ee5bba7f22d4c,
            mid_nextOrd_2e5ae9edcb9b072f,
            mid_termsEnum_3f9a21827903a65f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SortedSetDocValues(jobject obj) : ::org::apache::lucene::index::DocValuesIterator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SortedSetDocValues(const SortedSetDocValues& obj) : ::org::apache::lucene::index::DocValuesIterator(obj) {}

          static jlong NO_MORE_ORDS;

          jlong getValueCount() const;
          ::org::apache::lucene::index::TermsEnum intersect(const ::org::apache::lucene::util::automaton::CompiledAutomaton &) const;
          ::org::apache::lucene::util::BytesRef lookupOrd(jlong) const;
          jlong lookupTerm(const ::org::apache::lucene::util::BytesRef &) const;
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
        extern PyType_Def PY_TYPE_DEF(SortedSetDocValues);
        extern PyTypeObject *PY_TYPE(SortedSetDocValues);

        class t_SortedSetDocValues {
        public:
          PyObject_HEAD
          SortedSetDocValues object;
          static PyObject *wrap_Object(const SortedSetDocValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
