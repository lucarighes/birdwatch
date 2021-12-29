#ifndef org_apache_lucene_index_TermStates_H
#define org_apache_lucene_index_TermStates_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class LeafReaderContext;
        class Term;
        class IndexReaderContext;
        class TermState;
        class TermStates;
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
      namespace index {

        class TermStates : public ::java::lang::Object {
         public:
          enum {
            mid_init$_436a8b1eb9db2e88,
            mid_init$_0e305a3e42e79178,
            mid_accumulateStatistics_7b2f5b9ddfcb9416,
            mid_build_1c32b8602dc4905c,
            mid_clear_f2cc1bce94666404,
            mid_docFreq_9972fcc56b44e79d,
            mid_get_50c2626fd6a9d679,
            mid_register_23adf82e9103f1f2,
            mid_register_c05814ca04b61828,
            mid_toString_db9b55ba01e03e4b,
            mid_totalTermFreq_2e5ae9edcb9b072f,
            mid_wasBuiltFor_9a191fcb2f0f9f74,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TermStates(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TermStates(const TermStates& obj) : ::java::lang::Object(obj) {}

          TermStates(const ::org::apache::lucene::index::IndexReaderContext &);
          TermStates(const ::org::apache::lucene::index::IndexReaderContext &, const ::org::apache::lucene::index::TermState &, jint, jint, jlong);

          void accumulateStatistics(jint, jlong) const;
          static TermStates build(const ::org::apache::lucene::index::IndexReaderContext &, const ::org::apache::lucene::index::Term &, jboolean);
          void clear() const;
          jint docFreq() const;
          ::org::apache::lucene::index::TermState get(const ::org::apache::lucene::index::LeafReaderContext &) const;
          void register$(const ::org::apache::lucene::index::TermState &, jint) const;
          void register$(const ::org::apache::lucene::index::TermState &, jint, jint, jlong) const;
          ::java::lang::String toString() const;
          jlong totalTermFreq() const;
          jboolean wasBuiltFor(const ::org::apache::lucene::index::IndexReaderContext &) const;
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
        extern PyType_Def PY_TYPE_DEF(TermStates);
        extern PyTypeObject *PY_TYPE(TermStates);

        class t_TermStates {
        public:
          PyObject_HEAD
          TermStates object;
          static PyObject *wrap_Object(const TermStates&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
