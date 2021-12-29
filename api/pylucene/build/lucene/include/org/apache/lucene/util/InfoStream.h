#ifndef org_apache_lucene_util_InfoStream_H
#define org_apache_lucene_util_InfoStream_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class InfoStream;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class Closeable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class InfoStream : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_getDefault_05a6766ae71db614,
            mid_isEnabled_145b2d0af0c06b93,
            mid_message_15b72f6a44ff93f2,
            mid_setDefault_5c75041b743adb53,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit InfoStream(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          InfoStream(const InfoStream& obj) : ::java::lang::Object(obj) {}

          static InfoStream *NO_OUTPUT;

          InfoStream();

          static InfoStream getDefault();
          jboolean isEnabled(const ::java::lang::String &) const;
          void message(const ::java::lang::String &, const ::java::lang::String &) const;
          static void setDefault(const InfoStream &);
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
        extern PyType_Def PY_TYPE_DEF(InfoStream);
        extern PyTypeObject *PY_TYPE(InfoStream);

        class t_InfoStream {
        public:
          PyObject_HEAD
          InfoStream object;
          static PyObject *wrap_Object(const InfoStream&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
