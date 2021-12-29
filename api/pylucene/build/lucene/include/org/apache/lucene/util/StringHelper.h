#ifndef org_apache_lucene_util_StringHelper_H
#define org_apache_lucene_util_StringHelper_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class IntsRef;
        class BytesRef;
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
      namespace util {

        class StringHelper : public ::java::lang::Object {
         public:
          enum {
            mid_bytesDifference_f465493e4f3be174,
            mid_endsWith_b7af11e6f81980b6,
            mid_idToString_724cde42c4d4b340,
            mid_intsRefToBytesRef_887f798643eedba4,
            mid_murmurhash3_x86_32_9f7425bab85cd786,
            mid_murmurhash3_x86_32_f28ba127c1c46b31,
            mid_randomId_cf386cdb1bbd339f,
            mid_sortKeyLength_f465493e4f3be174,
            mid_startsWith_49c9de354ba24a5d,
            mid_startsWith_b7af11e6f81980b6,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StringHelper(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          StringHelper(const StringHelper& obj) : ::java::lang::Object(obj) {}

          static jint GOOD_FAST_HASH_SEED;
          static jint ID_LENGTH;

          static jint bytesDifference(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &);
          static jboolean endsWith(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &);
          static ::java::lang::String idToString(const JArray< jbyte > &);
          static ::org::apache::lucene::util::BytesRef intsRefToBytesRef(const ::org::apache::lucene::util::IntsRef &);
          static jint murmurhash3_x86_32(const ::org::apache::lucene::util::BytesRef &, jint);
          static jint murmurhash3_x86_32(const JArray< jbyte > &, jint, jint, jint);
          static JArray< jbyte > randomId();
          static jint sortKeyLength(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &);
          static jboolean startsWith(const JArray< jbyte > &, const ::org::apache::lucene::util::BytesRef &);
          static jboolean startsWith(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(StringHelper);
        extern PyTypeObject *PY_TYPE(StringHelper);

        class t_StringHelper {
        public:
          PyObject_HEAD
          StringHelper object;
          static PyObject *wrap_Object(const StringHelper&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
