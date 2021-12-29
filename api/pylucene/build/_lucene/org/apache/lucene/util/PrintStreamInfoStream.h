#ifndef org_apache_lucene_util_PrintStreamInfoStream_H
#define org_apache_lucene_util_PrintStreamInfoStream_H

#include "org/apache/lucene/util/InfoStream.h"

namespace java {
  namespace io {
    class PrintStream;
    class IOException;
  }
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

        class PrintStreamInfoStream : public ::org::apache::lucene::util::InfoStream {
         public:
          enum {
            mid_init$_51d7bcb97eea24e3,
            mid_init$_7efc5d571081ec1e,
            mid_close_f2cc1bce94666404,
            mid_isEnabled_145b2d0af0c06b93,
            mid_isSystemStream_8454bd5aa23fd11e,
            mid_message_15b72f6a44ff93f2,
            mid_getTimestamp_db9b55ba01e03e4b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PrintStreamInfoStream(jobject obj) : ::org::apache::lucene::util::InfoStream(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PrintStreamInfoStream(const PrintStreamInfoStream& obj) : ::org::apache::lucene::util::InfoStream(obj) {}

          PrintStreamInfoStream(const ::java::io::PrintStream &);
          PrintStreamInfoStream(const ::java::io::PrintStream &, jint);

          void close() const;
          jboolean isEnabled(const ::java::lang::String &) const;
          jboolean isSystemStream() const;
          void message(const ::java::lang::String &, const ::java::lang::String &) const;
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
        extern PyType_Def PY_TYPE_DEF(PrintStreamInfoStream);
        extern PyTypeObject *PY_TYPE(PrintStreamInfoStream);

        class t_PrintStreamInfoStream {
        public:
          PyObject_HEAD
          PrintStreamInfoStream object;
          static PyObject *wrap_Object(const PrintStreamInfoStream&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
