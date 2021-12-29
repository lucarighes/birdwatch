#ifndef org_apache_lucene_index_SlowCodecReaderWrapper_H
#define org_apache_lucene_index_SlowCodecReaderWrapper_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class LeafReader;
        class CodecReader;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class SlowCodecReaderWrapper : public ::java::lang::Object {
         public:
          enum {
            mid_wrap_d1287858ca697fcd,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SlowCodecReaderWrapper(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SlowCodecReaderWrapper(const SlowCodecReaderWrapper& obj) : ::java::lang::Object(obj) {}

          static ::org::apache::lucene::index::CodecReader wrap(const ::org::apache::lucene::index::LeafReader &);
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
        extern PyType_Def PY_TYPE_DEF(SlowCodecReaderWrapper);
        extern PyTypeObject *PY_TYPE(SlowCodecReaderWrapper);

        class t_SlowCodecReaderWrapper {
        public:
          PyObject_HEAD
          SlowCodecReaderWrapper object;
          static PyObject *wrap_Object(const SlowCodecReaderWrapper&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
