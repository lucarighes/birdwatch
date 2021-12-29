#ifndef java_nio_file_FileStore_H
#define java_nio_file_FileStore_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace java {
  namespace nio {
    namespace file {

      class FileStore : public ::java::lang::Object {
       public:
        enum {
          mid_getAttribute_c0a3c3394484d296,
          mid_getTotalSpace_2e5ae9edcb9b072f,
          mid_getUnallocatedSpace_2e5ae9edcb9b072f,
          mid_getUsableSpace_2e5ae9edcb9b072f,
          mid_isReadOnly_8454bd5aa23fd11e,
          mid_name_db9b55ba01e03e4b,
          mid_supportsFileAttributeView_145b2d0af0c06b93,
          mid_type_db9b55ba01e03e4b,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FileStore(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FileStore(const FileStore& obj) : ::java::lang::Object(obj) {}

        ::java::lang::Object getAttribute(const ::java::lang::String &) const;
        jlong getTotalSpace() const;
        jlong getUnallocatedSpace() const;
        jlong getUsableSpace() const;
        jboolean isReadOnly() const;
        ::java::lang::String name() const;
        jboolean supportsFileAttributeView(const ::java::lang::String &) const;
        ::java::lang::String type() const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace nio {
    namespace file {
      extern PyType_Def PY_TYPE_DEF(FileStore);
      extern PyTypeObject *PY_TYPE(FileStore);

      class t_FileStore {
      public:
        PyObject_HEAD
        FileStore object;
        static PyObject *wrap_Object(const FileStore&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
