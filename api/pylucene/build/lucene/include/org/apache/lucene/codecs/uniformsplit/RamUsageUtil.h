#ifndef org_apache_lucene_codecs_uniformsplit_RamUsageUtil_H
#define org_apache_lucene_codecs_uniformsplit_RamUsageUtil_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        class BytesRefBuilder;
      }
      namespace index {
        class TermState;
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
        namespace uniformsplit {

          class RamUsageUtil : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_ramBytesUsed_48fe61a8eb679d1f,
              mid_ramBytesUsed_6f6ee5bba7f22d4c,
              mid_ramBytesUsed_b0acf8af0cd4dbe7,
              mid_ramBytesUsedByByteArrayOfLength_0f1d64a641e8af53,
              mid_ramBytesUsedByHashMapOfSize_0f1d64a641e8af53,
              mid_ramBytesUsedByObjectArrayOfLength_0f1d64a641e8af53,
              mid_ramBytesUsedByUnmodifiableArrayListOfSize_0f1d64a641e8af53,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RamUsageUtil(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RamUsageUtil(const RamUsageUtil& obj) : ::java::lang::Object(obj) {}

            RamUsageUtil();

            static jlong ramBytesUsed(const ::org::apache::lucene::index::TermState &);
            static jlong ramBytesUsed(const ::org::apache::lucene::util::BytesRef &);
            static jlong ramBytesUsed(const ::org::apache::lucene::util::BytesRefBuilder &);
            static jlong ramBytesUsedByByteArrayOfLength(jint);
            static jlong ramBytesUsedByHashMapOfSize(jint);
            static jlong ramBytesUsedByObjectArrayOfLength(jint);
            static jlong ramBytesUsedByUnmodifiableArrayListOfSize(jint);
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
          extern PyType_Def PY_TYPE_DEF(RamUsageUtil);
          extern PyTypeObject *PY_TYPE(RamUsageUtil);

          class t_RamUsageUtil {
          public:
            PyObject_HEAD
            RamUsageUtil object;
            static PyObject *wrap_Object(const RamUsageUtil&);
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
