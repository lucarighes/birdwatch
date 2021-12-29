#ifndef org_apache_lucene_codecs_MutablePointValues_H
#define org_apache_lucene_codecs_MutablePointValues_H

#include "org/apache/lucene/index/PointValues.h"

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
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {

        class MutablePointValues : public ::org::apache::lucene::index::PointValues {
         public:
          enum {
            mid_getByteAt_ec8084fc09951020,
            mid_getDocID_1e143afe1894d213,
            mid_getValue_2986347cf15d1696,
            mid_restore_438c62480c481c65,
            mid_save_438c62480c481c65,
            mid_swap_438c62480c481c65,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MutablePointValues(jobject obj) : ::org::apache::lucene::index::PointValues(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MutablePointValues(const MutablePointValues& obj) : ::org::apache::lucene::index::PointValues(obj) {}

          jbyte getByteAt(jint, jint) const;
          jint getDocID(jint) const;
          void getValue(jint, const ::org::apache::lucene::util::BytesRef &) const;
          void restore(jint, jint) const;
          void save(jint, jint) const;
          void swap(jint, jint) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        extern PyType_Def PY_TYPE_DEF(MutablePointValues);
        extern PyTypeObject *PY_TYPE(MutablePointValues);

        class t_MutablePointValues {
        public:
          PyObject_HEAD
          MutablePointValues object;
          static PyObject *wrap_Object(const MutablePointValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
