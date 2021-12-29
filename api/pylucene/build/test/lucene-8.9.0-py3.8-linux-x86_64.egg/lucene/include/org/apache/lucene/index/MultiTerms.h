#ifndef org_apache_lucene_index_MultiTerms_H
#define org_apache_lucene_index_MultiTerms_H

#include "org/apache/lucene/index/Terms.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
        class PostingsEnum;
        class ReaderSlice;
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

        class MultiTerms : public ::org::apache::lucene::index::Terms {
         public:
          enum {
            mid_init$_bd9f3e87f7844b8f,
            mid_getDocCount_9972fcc56b44e79d,
            mid_getMax_7af2ea2e37ce82b8,
            mid_getMin_7af2ea2e37ce82b8,
            mid_getSubSlices_de4835eeab049e85,
            mid_getSubTerms_2ef2d2f5db3e1a35,
            mid_getSumDocFreq_2e5ae9edcb9b072f,
            mid_getSumTotalTermFreq_2e5ae9edcb9b072f,
            mid_getTermPostingsEnum_a34afe7cb9819d94,
            mid_getTermPostingsEnum_e92505bbdef91c61,
            mid_getTerms_ac193a0ff9bfa681,
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

          explicit MultiTerms(jobject obj) : ::org::apache::lucene::index::Terms(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiTerms(const MultiTerms& obj) : ::org::apache::lucene::index::Terms(obj) {}

          MultiTerms(const JArray< ::org::apache::lucene::index::Terms > &, const JArray< ::org::apache::lucene::index::ReaderSlice > &);

          jint getDocCount() const;
          ::org::apache::lucene::util::BytesRef getMax() const;
          ::org::apache::lucene::util::BytesRef getMin() const;
          JArray< ::org::apache::lucene::index::ReaderSlice > getSubSlices() const;
          JArray< ::org::apache::lucene::index::Terms > getSubTerms() const;
          jlong getSumDocFreq() const;
          jlong getSumTotalTermFreq() const;
          static ::org::apache::lucene::index::PostingsEnum getTermPostingsEnum(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &);
          static ::org::apache::lucene::index::PostingsEnum getTermPostingsEnum(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &, jint);
          static ::org::apache::lucene::index::Terms getTerms(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &);
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
        extern PyType_Def PY_TYPE_DEF(MultiTerms);
        extern PyTypeObject *PY_TYPE(MultiTerms);

        class t_MultiTerms {
        public:
          PyObject_HEAD
          MultiTerms object;
          static PyObject *wrap_Object(const MultiTerms&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
