#ifndef java_nio_file_DirectoryStream_H
#define java_nio_file_DirectoryStream_H

#include "java/io/Closeable.h"

namespace java {
  namespace lang {
    class Class;
    class Object;
    class Iterable;
  }
  namespace util {
    class Iterator;
  }
}
template<class T> class JArray;

namespace java {
  namespace nio {
    namespace file {

      class DirectoryStream : public ::java::io::Closeable {
       public:
        enum {
          mid_iterator_233a192dadb0917d,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit DirectoryStream(jobject obj) : ::java::io::Closeable(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        DirectoryStream(const DirectoryStream& obj) : ::java::io::Closeable(obj) {}

        ::java::util::Iterator iterator() const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace nio {
    namespace file {
      extern PyType_Def PY_TYPE_DEF(DirectoryStream);
      extern PyTypeObject *PY_TYPE(DirectoryStream);

      class t_DirectoryStream {
      public:
        PyObject_HEAD
        DirectoryStream object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_DirectoryStream *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const DirectoryStream&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const DirectoryStream&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
