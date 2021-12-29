#ifndef org_apache_lucene_index_PostingsEnum_H
#define org_apache_lucene_index_PostingsEnum_H

#include "org/apache/lucene/search/DocIdSetIterator.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class PostingsEnum : public ::org::apache::lucene::search::DocIdSetIterator {
         public:
          enum {
            mid_endOffset_9972fcc56b44e79d,
            mid_featureRequested_dcd74565058a1be4,
            mid_freq_9972fcc56b44e79d,
            mid_getPayload_7af2ea2e37ce82b8,
            mid_nextPosition_9972fcc56b44e79d,
            mid_startOffset_9972fcc56b44e79d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PostingsEnum(jobject obj) : ::org::apache::lucene::search::DocIdSetIterator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PostingsEnum(const PostingsEnum& obj) : ::org::apache::lucene::search::DocIdSetIterator(obj) {}

          static jshort ALL;
          static jshort FREQS;
          static jshort NONE;
          static jshort OFFSETS;
          static jshort PAYLOADS;
          static jshort POSITIONS;

          jint endOffset() const;
          static jboolean featureRequested(jint, jshort);
          jint freq() const;
          ::org::apache::lucene::util::BytesRef getPayload() const;
          jint nextPosition() const;
          jint startOffset() const;
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
        extern PyType_Def PY_TYPE_DEF(PostingsEnum);
        extern PyTypeObject *PY_TYPE(PostingsEnum);

        class t_PostingsEnum {
        public:
          PyObject_HEAD
          PostingsEnum object;
          static PyObject *wrap_Object(const PostingsEnum&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
