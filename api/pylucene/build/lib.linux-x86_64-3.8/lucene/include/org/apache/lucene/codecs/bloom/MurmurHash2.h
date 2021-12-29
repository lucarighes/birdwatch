#ifndef org_apache_lucene_codecs_bloom_MurmurHash2_H
#define org_apache_lucene_codecs_bloom_MurmurHash2_H

#include "org/apache/lucene/codecs/bloom/HashFunction.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace codecs {
        namespace bloom {
          class MurmurHash2;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace bloom {

          class MurmurHash2 : public ::org::apache::lucene::codecs::bloom::HashFunction {
           public:
            enum {
              mid_hash_1c2e5fa34f4312de,
              mid_hash_f28ba127c1c46b31,
              mid_hash32_a974b127529aaf33,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MurmurHash2(jobject obj) : ::org::apache::lucene::codecs::bloom::HashFunction(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MurmurHash2(const MurmurHash2& obj) : ::org::apache::lucene::codecs::bloom::HashFunction(obj) {}

            static MurmurHash2 *INSTANCE;

            jint hash(const ::org::apache::lucene::util::BytesRef &) const;
            static jint hash(const JArray< jbyte > &, jint, jint, jint);
            static jint hash32(const JArray< jbyte > &, jint, jint);
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
        namespace bloom {
          extern PyType_Def PY_TYPE_DEF(MurmurHash2);
          extern PyTypeObject *PY_TYPE(MurmurHash2);

          class t_MurmurHash2 {
          public:
            PyObject_HEAD
            MurmurHash2 object;
            static PyObject *wrap_Object(const MurmurHash2&);
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
