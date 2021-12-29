#ifndef org_apache_lucene_util_UnicodeUtil_H
#define org_apache_lucene_util_UnicodeUtil_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class CharSequence;
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
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
      namespace util {

        class UnicodeUtil : public ::java::lang::Object {
         public:
          enum {
            mid_UTF16toUTF8_1638168431659046,
            mid_UTF16toUTF8_ddd0ce25b5f0be2b,
            mid_UTF16toUTF8_e043a825e5ebeff1,
            mid_UTF8toUTF16_0591bd57795e9b7c,
            mid_UTF8toUTF16_7b948ae2b0818c23,
            mid_UTF8toUTF32_dda6a6ca610a4dae,
            mid_calcUTF16toUTF8Length_a0b845cd7e1b893f,
            mid_codePointCount_1c2e5fa34f4312de,
            mid_maxUTF8Length_1e143afe1894d213,
            mid_newString_843d19f003d86021,
            mid_toHexString_9bfa75c9f141b67f,
            mid_validUTF16String_2cd6b83cb18fe093,
            mid_validUTF16String_be9d4dcc5fee5f34,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit UnicodeUtil(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          UnicodeUtil(const UnicodeUtil& obj) : ::java::lang::Object(obj) {}

          static ::org::apache::lucene::util::BytesRef *BIG_TERM;
          static jint MAX_UTF8_BYTES_PER_CHAR;
          static jint UNI_REPLACEMENT_CHAR;
          static jint UNI_SUR_HIGH_END;
          static jint UNI_SUR_HIGH_START;
          static jint UNI_SUR_LOW_END;
          static jint UNI_SUR_LOW_START;

          static jint UTF16toUTF8(const JArray< jchar > &, jint, jint, const JArray< jbyte > &);
          static jint UTF16toUTF8(const ::java::lang::CharSequence &, jint, jint, const JArray< jbyte > &);
          static jint UTF16toUTF8(const ::java::lang::CharSequence &, jint, jint, const JArray< jbyte > &, jint);
          static jint UTF8toUTF16(const ::org::apache::lucene::util::BytesRef &, const JArray< jchar > &);
          static jint UTF8toUTF16(const JArray< jbyte > &, jint, jint, const JArray< jchar > &);
          static jint UTF8toUTF32(const ::org::apache::lucene::util::BytesRef &, const JArray< jint > &);
          static jint calcUTF16toUTF8Length(const ::java::lang::CharSequence &, jint, jint);
          static jint codePointCount(const ::org::apache::lucene::util::BytesRef &);
          static jint maxUTF8Length(jint);
          static ::java::lang::String newString(const JArray< jint > &, jint, jint);
          static ::java::lang::String toHexString(const ::java::lang::String &);
          static jboolean validUTF16String(const ::java::lang::CharSequence &);
          static jboolean validUTF16String(const JArray< jchar > &, jint);
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
        extern PyType_Def PY_TYPE_DEF(UnicodeUtil);
        extern PyTypeObject *PY_TYPE(UnicodeUtil);

        class t_UnicodeUtil {
        public:
          PyObject_HEAD
          UnicodeUtil object;
          static PyObject *wrap_Object(const UnicodeUtil&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
