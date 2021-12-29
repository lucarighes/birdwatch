#ifndef org_apache_lucene_util_IntsRefBuilder_H
#define org_apache_lucene_util_IntsRefBuilder_H

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
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class IntsRefBuilder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_append_040c4cd0390c5aff,
            mid_clear_f2cc1bce94666404,
            mid_copyInts_0be76783572fca9c,
            mid_copyInts_11b52125bd016996,
            mid_copyUTF8Bytes_0bdfd2603b7490a8,
            mid_equals_8b72f2dcdde6fd1d,
            mid_get_ce9cdfb58d7a482b,
            mid_grow_040c4cd0390c5aff,
            mid_hashCode_9972fcc56b44e79d,
            mid_intAt_1e143afe1894d213,
            mid_ints_d2c45ef07a322466,
            mid_length_9972fcc56b44e79d,
            mid_setIntAt_438c62480c481c65,
            mid_setLength_040c4cd0390c5aff,
            mid_toIntsRef_ce9cdfb58d7a482b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IntsRefBuilder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IntsRefBuilder(const IntsRefBuilder& obj) : ::java::lang::Object(obj) {}

          IntsRefBuilder();

          void append(jint) const;
          void clear() const;
          void copyInts(const ::org::apache::lucene::util::IntsRef &) const;
          void copyInts(const JArray< jint > &, jint, jint) const;
          void copyUTF8Bytes(const ::org::apache::lucene::util::BytesRef &) const;
          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::util::IntsRef get() const;
          void grow(jint) const;
          jint hashCode() const;
          jint intAt(jint) const;
          JArray< jint > ints() const;
          jint length() const;
          void setIntAt(jint, jint) const;
          void setLength(jint) const;
          ::org::apache::lucene::util::IntsRef toIntsRef() const;
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
        extern PyType_Def PY_TYPE_DEF(IntsRefBuilder);
        extern PyTypeObject *PY_TYPE(IntsRefBuilder);

        class t_IntsRefBuilder {
        public:
          PyObject_HEAD
          IntsRefBuilder object;
          static PyObject *wrap_Object(const IntsRefBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
