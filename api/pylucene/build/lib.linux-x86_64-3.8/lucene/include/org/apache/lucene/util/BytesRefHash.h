#ifndef org_apache_lucene_util_BytesRefHash_H
#define org_apache_lucene_util_BytesRefHash_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
        class BytesRefHash$BytesStartArray;
        class BytesRef;
        class ByteBlockPool;
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

        class BytesRefHash : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_init$_b9f6105a1b83c49f,
            mid_init$_12b0e1cf87e2cb2c,
            mid_add_1c2e5fa34f4312de,
            mid_addByPoolOffset_1e143afe1894d213,
            mid_byteStart_1e143afe1894d213,
            mid_clear_f2cc1bce94666404,
            mid_clear_9d72768e8fdce2b7,
            mid_close_f2cc1bce94666404,
            mid_compact_d2c45ef07a322466,
            mid_find_1c2e5fa34f4312de,
            mid_get_79b9a35851668850,
            mid_ramBytesUsed_2e5ae9edcb9b072f,
            mid_reinit_f2cc1bce94666404,
            mid_size_9972fcc56b44e79d,
            mid_sort_d2c45ef07a322466,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BytesRefHash(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BytesRefHash(const BytesRefHash& obj) : ::java::lang::Object(obj) {}

          static jint DEFAULT_CAPACITY;

          BytesRefHash();
          BytesRefHash(const ::org::apache::lucene::util::ByteBlockPool &);
          BytesRefHash(const ::org::apache::lucene::util::ByteBlockPool &, jint, const ::org::apache::lucene::util::BytesRefHash$BytesStartArray &);

          jint add(const ::org::apache::lucene::util::BytesRef &) const;
          jint addByPoolOffset(jint) const;
          jint byteStart(jint) const;
          void clear() const;
          void clear(jboolean) const;
          void close() const;
          JArray< jint > compact() const;
          jint find(const ::org::apache::lucene::util::BytesRef &) const;
          ::org::apache::lucene::util::BytesRef get(jint, const ::org::apache::lucene::util::BytesRef &) const;
          jlong ramBytesUsed() const;
          void reinit() const;
          jint size() const;
          JArray< jint > sort() const;
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
        extern PyType_Def PY_TYPE_DEF(BytesRefHash);
        extern PyTypeObject *PY_TYPE(BytesRefHash);

        class t_BytesRefHash {
        public:
          PyObject_HEAD
          BytesRefHash object;
          static PyObject *wrap_Object(const BytesRefHash&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
