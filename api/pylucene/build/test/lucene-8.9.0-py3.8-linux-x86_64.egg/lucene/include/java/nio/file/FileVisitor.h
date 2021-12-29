#ifndef java_nio_file_FileVisitor_H
#define java_nio_file_FileVisitor_H

#include "java/lang/Object.h"

namespace java {
  namespace nio {
    namespace file {
      class FileVisitResult;
    }
  }
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace nio {
    namespace file {

      class FileVisitor : public ::java::lang::Object {
       public:
        enum {
          mid_postVisitDirectory_92412eff65de8915,
          mid_visitFileFailed_92412eff65de8915,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FileVisitor(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FileVisitor(const FileVisitor& obj) : ::java::lang::Object(obj) {}

        ::java::nio::file::FileVisitResult postVisitDirectory(const ::java::lang::Object &, const ::java::io::IOException &) const;
        ::java::nio::file::FileVisitResult visitFileFailed(const ::java::lang::Object &, const ::java::io::IOException &) const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace nio {
    namespace file {
      extern PyType_Def PY_TYPE_DEF(FileVisitor);
      extern PyTypeObject *PY_TYPE(FileVisitor);

      class t_FileVisitor {
      public:
        PyObject_HEAD
        FileVisitor object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FileVisitor *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FileVisitor&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FileVisitor&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
