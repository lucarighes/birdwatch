#ifndef org_apache_lucene_index_SlowImpactsEnum_H
#define org_apache_lucene_index_SlowImpactsEnum_H

#include "org/apache/lucene/index/ImpactsEnum.h"

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
      namespace index {
        class PostingsEnum;
        class Impacts;
      }
      namespace util {
        class BytesRef;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class SlowImpactsEnum : public ::org::apache::lucene::index::ImpactsEnum {
         public:
          enum {
            mid_init$_00af2cc6e79e7447,
            mid_advance_1e143afe1894d213,
            mid_advanceShallow_040c4cd0390c5aff,
            mid_cost_2e5ae9edcb9b072f,
            mid_docID_9972fcc56b44e79d,
            mid_endOffset_9972fcc56b44e79d,
            mid_freq_9972fcc56b44e79d,
            mid_getImpacts_292e6cb194dff836,
            mid_getPayload_7af2ea2e37ce82b8,
            mid_nextDoc_9972fcc56b44e79d,
            mid_nextPosition_9972fcc56b44e79d,
            mid_startOffset_9972fcc56b44e79d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SlowImpactsEnum(jobject obj) : ::org::apache::lucene::index::ImpactsEnum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SlowImpactsEnum(const SlowImpactsEnum& obj) : ::org::apache::lucene::index::ImpactsEnum(obj) {}

          SlowImpactsEnum(const ::org::apache::lucene::index::PostingsEnum &);

          jint advance(jint) const;
          void advanceShallow(jint) const;
          jlong cost() const;
          jint docID() const;
          jint endOffset() const;
          jint freq() const;
          ::org::apache::lucene::index::Impacts getImpacts() const;
          ::org::apache::lucene::util::BytesRef getPayload() const;
          jint nextDoc() const;
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
        extern PyType_Def PY_TYPE_DEF(SlowImpactsEnum);
        extern PyTypeObject *PY_TYPE(SlowImpactsEnum);

        class t_SlowImpactsEnum {
        public:
          PyObject_HEAD
          SlowImpactsEnum object;
          static PyObject *wrap_Object(const SlowImpactsEnum&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
