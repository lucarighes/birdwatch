#ifndef org_antlr_v4_runtime_IntStream_H
#define org_antlr_v4_runtime_IntStream_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {

        class IntStream : public ::java::lang::Object {
         public:
          enum {
            mid_LA_1e143afe1894d213,
            mid_consume_f2cc1bce94666404,
            mid_getSourceName_db9b55ba01e03e4b,
            mid_index_9972fcc56b44e79d,
            mid_mark_9972fcc56b44e79d,
            mid_release_040c4cd0390c5aff,
            mid_seek_040c4cd0390c5aff,
            mid_size_9972fcc56b44e79d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IntStream(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IntStream(const IntStream& obj) : ::java::lang::Object(obj) {}

          static jint EOF;
          static ::java::lang::String *UNKNOWN_SOURCE_NAME;

          jint LA(jint) const;
          void consume() const;
          ::java::lang::String getSourceName() const;
          jint index() const;
          jint mark() const;
          void release(jint) const;
          void seek(jint) const;
          jint size() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        extern PyType_Def PY_TYPE_DEF(IntStream);
        extern PyTypeObject *PY_TYPE(IntStream);

        class t_IntStream {
        public:
          PyObject_HEAD
          IntStream object;
          static PyObject *wrap_Object(const IntStream&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
