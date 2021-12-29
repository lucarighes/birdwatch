#ifndef org_apache_lucene_index_MultiPostingsEnum_H
#define org_apache_lucene_index_MultiPostingsEnum_H

#include "org/apache/lucene/index/PostingsEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class MultiPostingsEnum$EnumWithSlice;
        class MultiPostingsEnum;
        class MultiTermsEnum;
      }
      namespace util {
        class BytesRef;
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

        class MultiPostingsEnum : public ::org::apache::lucene::index::PostingsEnum {
         public:
          enum {
            mid_init$_86f36fcc4e752960,
            mid_advance_1e143afe1894d213,
            mid_canReuse_94de085e6df95ec4,
            mid_cost_2e5ae9edcb9b072f,
            mid_docID_9972fcc56b44e79d,
            mid_endOffset_9972fcc56b44e79d,
            mid_freq_9972fcc56b44e79d,
            mid_getNumSubs_9972fcc56b44e79d,
            mid_getPayload_7af2ea2e37ce82b8,
            mid_getSubs_6a22e46343c8a832,
            mid_nextDoc_9972fcc56b44e79d,
            mid_nextPosition_9972fcc56b44e79d,
            mid_reset_d0c48b3ebbefc2e6,
            mid_startOffset_9972fcc56b44e79d,
            mid_toString_db9b55ba01e03e4b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiPostingsEnum(jobject obj) : ::org::apache::lucene::index::PostingsEnum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiPostingsEnum(const MultiPostingsEnum& obj) : ::org::apache::lucene::index::PostingsEnum(obj) {}

          MultiPostingsEnum(const ::org::apache::lucene::index::MultiTermsEnum &, jint);

          jint advance(jint) const;
          jboolean canReuse(const ::org::apache::lucene::index::MultiTermsEnum &) const;
          jlong cost() const;
          jint docID() const;
          jint endOffset() const;
          jint freq() const;
          jint getNumSubs() const;
          ::org::apache::lucene::util::BytesRef getPayload() const;
          JArray< ::org::apache::lucene::index::MultiPostingsEnum$EnumWithSlice > getSubs() const;
          jint nextDoc() const;
          jint nextPosition() const;
          MultiPostingsEnum reset(const JArray< ::org::apache::lucene::index::MultiPostingsEnum$EnumWithSlice > &, jint) const;
          jint startOffset() const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(MultiPostingsEnum);
        extern PyTypeObject *PY_TYPE(MultiPostingsEnum);

        class t_MultiPostingsEnum {
        public:
          PyObject_HEAD
          MultiPostingsEnum object;
          static PyObject *wrap_Object(const MultiPostingsEnum&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
