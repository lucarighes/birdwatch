#ifndef java_io_File_H
#define java_io_File_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class FilenameFilter;
    class FileFilter;
    class File;
    class IOException;
    class Serializable;
  }
  namespace lang {
    class Comparable;
    class Class;
    class String;
  }
  namespace nio {
    namespace file {
      class Path;
    }
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class File : public ::java::lang::Object {
     public:
      enum {
        mid_init$_9fd2eb66a64e6f0f,
        mid_init$_c80751a79d34c011,
        mid_init$_15b72f6a44ff93f2,
        mid_canExecute_8454bd5aa23fd11e,
        mid_canRead_8454bd5aa23fd11e,
        mid_canWrite_8454bd5aa23fd11e,
        mid_compareTo_7fa24e00a87a309a,
        mid_createNewFile_8454bd5aa23fd11e,
        mid_createTempFile_050e83e999bec806,
        mid_createTempFile_0ea07473b2efdaea,
        mid_delete_8454bd5aa23fd11e,
        mid_deleteOnExit_f2cc1bce94666404,
        mid_equals_8b72f2dcdde6fd1d,
        mid_exists_8454bd5aa23fd11e,
        mid_getAbsoluteFile_117a3aa19a964e9c,
        mid_getAbsolutePath_db9b55ba01e03e4b,
        mid_getCanonicalFile_117a3aa19a964e9c,
        mid_getCanonicalPath_db9b55ba01e03e4b,
        mid_getFreeSpace_2e5ae9edcb9b072f,
        mid_getName_db9b55ba01e03e4b,
        mid_getParent_db9b55ba01e03e4b,
        mid_getParentFile_117a3aa19a964e9c,
        mid_getPath_db9b55ba01e03e4b,
        mid_getTotalSpace_2e5ae9edcb9b072f,
        mid_getUsableSpace_2e5ae9edcb9b072f,
        mid_hashCode_9972fcc56b44e79d,
        mid_isAbsolute_8454bd5aa23fd11e,
        mid_isDirectory_8454bd5aa23fd11e,
        mid_isFile_8454bd5aa23fd11e,
        mid_isHidden_8454bd5aa23fd11e,
        mid_lastModified_2e5ae9edcb9b072f,
        mid_length_2e5ae9edcb9b072f,
        mid_list_9865da0b5ee490bc,
        mid_list_7318d5c9adef2efb,
        mid_listFiles_11270cac0013cb3a,
        mid_listFiles_3dee32e39f6b8cf0,
        mid_listFiles_c5e7dda898e53d2f,
        mid_listRoots_11270cac0013cb3a,
        mid_mkdir_8454bd5aa23fd11e,
        mid_mkdirs_8454bd5aa23fd11e,
        mid_renameTo_a51ee127954badc4,
        mid_setExecutable_e84cf59305ee1535,
        mid_setExecutable_266e12b9cc3795ac,
        mid_setLastModified_129dd81483fb5856,
        mid_setReadOnly_8454bd5aa23fd11e,
        mid_setReadable_e84cf59305ee1535,
        mid_setReadable_266e12b9cc3795ac,
        mid_setWritable_e84cf59305ee1535,
        mid_setWritable_266e12b9cc3795ac,
        mid_toPath_7f94726bf5834528,
        mid_toString_db9b55ba01e03e4b,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit File(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      File(const File& obj) : ::java::lang::Object(obj) {}

      static ::java::lang::String *pathSeparator;
      static jchar pathSeparatorChar;
      static ::java::lang::String *separator;
      static jchar separatorChar;

      File(const ::java::lang::String &);
      File(const File &, const ::java::lang::String &);
      File(const ::java::lang::String &, const ::java::lang::String &);

      jboolean canExecute() const;
      jboolean canRead() const;
      jboolean canWrite() const;
      jint compareTo(const File &) const;
      jboolean createNewFile() const;
      static File createTempFile(const ::java::lang::String &, const ::java::lang::String &);
      static File createTempFile(const ::java::lang::String &, const ::java::lang::String &, const File &);
      jboolean delete$() const;
      void deleteOnExit() const;
      jboolean equals(const ::java::lang::Object &) const;
      jboolean exists() const;
      File getAbsoluteFile() const;
      ::java::lang::String getAbsolutePath() const;
      File getCanonicalFile() const;
      ::java::lang::String getCanonicalPath() const;
      jlong getFreeSpace() const;
      ::java::lang::String getName() const;
      ::java::lang::String getParent() const;
      File getParentFile() const;
      ::java::lang::String getPath() const;
      jlong getTotalSpace() const;
      jlong getUsableSpace() const;
      jint hashCode() const;
      jboolean isAbsolute() const;
      jboolean isDirectory() const;
      jboolean isFile() const;
      jboolean isHidden() const;
      jlong lastModified() const;
      jlong length() const;
      JArray< ::java::lang::String > list() const;
      JArray< ::java::lang::String > list(const ::java::io::FilenameFilter &) const;
      JArray< File > listFiles() const;
      JArray< File > listFiles(const ::java::io::FileFilter &) const;
      JArray< File > listFiles(const ::java::io::FilenameFilter &) const;
      static JArray< File > listRoots();
      jboolean mkdir() const;
      jboolean mkdirs() const;
      jboolean renameTo(const File &) const;
      jboolean setExecutable(jboolean) const;
      jboolean setExecutable(jboolean, jboolean) const;
      jboolean setLastModified(jlong) const;
      jboolean setReadOnly() const;
      jboolean setReadable(jboolean) const;
      jboolean setReadable(jboolean, jboolean) const;
      jboolean setWritable(jboolean) const;
      jboolean setWritable(jboolean, jboolean) const;
      ::java::nio::file::Path toPath() const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(File);
    extern PyTypeObject *PY_TYPE(File);

    class t_File {
    public:
      PyObject_HEAD
      File object;
      static PyObject *wrap_Object(const File&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
