#ifndef org_apache_lucene_codecs_uniformsplit_UniformSplitTerms_H
#define org_apache_lucene_codecs_uniformsplit_UniformSplitTerms_H

#include "org/apache/lucene/index/Terms.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
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
      namespace codecs {
        namespace uniformsplit {

          class UniformSplitTerms : public ::org::apache::lucene::index::Terms {
           public:
            enum {
              mid_getDictionaryRamBytesUsed_2e5ae9edcb9b072f,
              mid_getDocCount_9972fcc56b44e79d,
              mid_getMax_7af2ea2e37ce82b8,
              mid_getSumDocFreq_2e5ae9edcb9b072f,
              mid_getSumTotalTermFreq_2e5ae9edcb9b072f,
              mid_hasFreqs_8454bd5aa23fd11e,
              mid_hasOffsets_8454bd5aa23fd11e,
              mid_hasPayloads_8454bd5aa23fd11e,
              mid_hasPositions_8454bd5aa23fd11e,
              mid_intersect_20ab83ddd033f0a8,
              mid_iterator_3f9a21827903a65f,
              mid_ramBytesUsed_2e5ae9edcb9b072f,
              mid_ramBytesUsedWithoutDictionary_2e5ae9edcb9b072f,
              mid_size_2e5ae9edcb9b072f,
              mid_checkIntersectAutomatonType_5cce1ea99900863e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit UniformSplitTerms(jobject obj) : ::org::apache::lucene::index::Terms(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            UniformSplitTerms(const UniformSplitTerms& obj) : ::org::apache::lucene::index::Terms(obj) {}

            jlong getDictionaryRamBytesUsed() const;
            jint getDocCount() const;
            ::org::apache::lucene::util::BytesRef getMax() const;
            jlong getSumDocFreq() const;
            jlong getSumTotalTermFreq() const;
            jboolean hasFreqs() const;
            jboolean hasOffsets() const;
            jboolean hasPayloads() const;
            jboolean hasPositions() const;
            ::org::apache::lucene::index::TermsEnum intersect(const ::org::apache::lucene::util::automaton::CompiledAutomaton &, const ::org::apache::lucene::util::BytesRef &) const;
            ::org::apache::lucene::index::TermsEnum iterator() const;
            jlong ramBytesUsed() const;
            jlong ramBytesUsedWithoutDictionary() const;
            jlong size() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace uniformsplit {
          extern PyType_Def PY_TYPE_DEF(UniformSplitTerms);
          extern PyTypeObject *PY_TYPE(UniformSplitTerms);

          class t_UniformSplitTerms {
          public:
            PyObject_HEAD
            UniformSplitTerms object;
            static PyObject *wrap_Object(const UniformSplitTerms&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
