#ifndef org_apache_lucene_index_Terms_H
#define org_apache_lucene_index_Terms_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Terms;
        class TermsEnum;
      }
      namespace util {
        class BytesRef;
        namespace automaton {
          class CompiledAutomaton;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
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
      namespace index {

        class Terms : public ::java::lang::Object {
         public:
          enum {
            mid_getDocCount_9972fcc56b44e79d,
            mid_getMax_7af2ea2e37ce82b8,
            mid_getMin_7af2ea2e37ce82b8,
            mid_getStats_d6bcd06f3102c4d9,
            mid_getSumDocFreq_2e5ae9edcb9b072f,
            mid_getSumTotalTermFreq_2e5ae9edcb9b072f,
            mid_hasFreqs_8454bd5aa23fd11e,
            mid_hasOffsets_8454bd5aa23fd11e,
            mid_hasPayloads_8454bd5aa23fd11e,
            mid_hasPositions_8454bd5aa23fd11e,
            mid_intersect_20ab83ddd033f0a8,
            mid_iterator_3f9a21827903a65f,
            mid_size_2e5ae9edcb9b072f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Terms(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Terms(const Terms& obj) : ::java::lang::Object(obj) {}

          static JArray< Terms > *EMPTY_ARRAY;

          jint getDocCount() const;
          ::org::apache::lucene::util::BytesRef getMax() const;
          ::org::apache::lucene::util::BytesRef getMin() const;
          ::java::lang::Object getStats() const;
          jlong getSumDocFreq() const;
          jlong getSumTotalTermFreq() const;
          jboolean hasFreqs() const;
          jboolean hasOffsets() const;
          jboolean hasPayloads() const;
          jboolean hasPositions() const;
          ::org::apache::lucene::index::TermsEnum intersect(const ::org::apache::lucene::util::automaton::CompiledAutomaton &, const ::org::apache::lucene::util::BytesRef &) const;
          ::org::apache::lucene::index::TermsEnum iterator() const;
          jlong size() const;
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
        extern PyType_Def PY_TYPE_DEF(Terms);
        extern PyTypeObject *PY_TYPE(Terms);

        class t_Terms {
        public:
          PyObject_HEAD
          Terms object;
          static PyObject *wrap_Object(const Terms&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
