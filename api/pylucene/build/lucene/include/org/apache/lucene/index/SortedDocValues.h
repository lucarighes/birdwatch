#ifndef org_apache_lucene_index_SortedDocValues_H
#define org_apache_lucene_index_SortedDocValues_H

#include "org/apache/lucene/index/BinaryDocValues.h"

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

        class SortedDocValues : public ::org::apache::lucene::index::BinaryDocValues {
         public:
          enum {
            mid_binaryValue_7af2ea2e37ce82b8,
            mid_getValueCount_9972fcc56b44e79d,
            mid_intersect_2452e24ae7d5129f,
            mid_lookupOrd_83238e65a54c68bb,
            mid_lookupTerm_1c2e5fa34f4312de,
            mid_ordValue_9972fcc56b44e79d,
            mid_termsEnum_3f9a21827903a65f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SortedDocValues(jobject obj) : ::org::apache::lucene::index::BinaryDocValues(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SortedDocValues(const SortedDocValues& obj) : ::org::apache::lucene::index::BinaryDocValues(obj) {}

          ::org::apache::lucene::util::BytesRef binaryValue() const;
          jint getValueCount() const;
          ::org::apache::lucene::index::TermsEnum intersect(const ::org::apache::lucene::util::automaton::CompiledAutomaton &) const;
          ::org::apache::lucene::util::BytesRef lookupOrd(jint) const;
          jint lookupTerm(const ::org::apache::lucene::util::BytesRef &) const;
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
        extern PyType_Def PY_TYPE_DEF(SortedDocValues);
        extern PyTypeObject *PY_TYPE(SortedDocValues);

        class t_SortedDocValues {
        public:
          PyObject_HEAD
          SortedDocValues object;
          static PyObject *wrap_Object(const SortedDocValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
