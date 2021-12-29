#ifndef org_apache_lucene_codecs_blocktree_FieldReader_H
#define org_apache_lucene_codecs_blocktree_FieldReader_H

#include "org/apache/lucene/index/Terms.h"

namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
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
      namespace codecs {
        namespace blocktree {
          class Stats;
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
      namespace codecs {
        namespace blocktree {

          class FieldReader : public ::org::apache::lucene::index::Terms {
           public:
            enum {
              mid_getChildResources_d4dfbf7a26ff41df,
              mid_getDocCount_9972fcc56b44e79d,
              mid_getMax_7af2ea2e37ce82b8,
              mid_getMin_7af2ea2e37ce82b8,
              mid_getStats_3e5b165a6bc9d464,
              mid_getSumDocFreq_2e5ae9edcb9b072f,
              mid_getSumTotalTermFreq_2e5ae9edcb9b072f,
              mid_hasFreqs_8454bd5aa23fd11e,
              mid_hasOffsets_8454bd5aa23fd11e,
              mid_hasPayloads_8454bd5aa23fd11e,
              mid_hasPositions_8454bd5aa23fd11e,
              mid_intersect_20ab83ddd033f0a8,
              mid_iterator_3f9a21827903a65f,
              mid_ramBytesUsed_2e5ae9edcb9b072f,
              mid_size_2e5ae9edcb9b072f,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldReader(jobject obj) : ::org::apache::lucene::index::Terms(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldReader(const FieldReader& obj) : ::org::apache::lucene::index::Terms(obj) {}

            ::java::util::Collection getChildResources() const;
            jint getDocCount() const;
            ::org::apache::lucene::util::BytesRef getMax() const;
            ::org::apache::lucene::util::BytesRef getMin() const;
            ::org::apache::lucene::codecs::blocktree::Stats getStats() const;
            jlong getSumDocFreq() const;
            jlong getSumTotalTermFreq() const;
            jboolean hasFreqs() const;
            jboolean hasOffsets() const;
            jboolean hasPayloads() const;
            jboolean hasPositions() const;
            ::org::apache::lucene::index::TermsEnum intersect(const ::org::apache::lucene::util::automaton::CompiledAutomaton &, const ::org::apache::lucene::util::BytesRef &) const;
            ::org::apache::lucene::index::TermsEnum iterator() const;
            jlong ramBytesUsed() const;
            jlong size() const;
            ::java::lang::String toString() const;
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
        namespace blocktree {
          extern PyType_Def PY_TYPE_DEF(FieldReader);
          extern PyTypeObject *PY_TYPE(FieldReader);

          class t_FieldReader {
          public:
            PyObject_HEAD
            FieldReader object;
            static PyObject *wrap_Object(const FieldReader&);
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
