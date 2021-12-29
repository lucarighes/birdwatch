#ifndef java_io_PrintStream_H
#define java_io_PrintStream_H

#include "java/io/FilterOutputStream.h"

namespace java {
  namespace lang {
    class Class;
    class Object;
    class CharSequence;
    class String;
    class Appendable;
  }
  namespace io {
    class PrintStream;
    class FileNotFoundException;
    class OutputStream;
    class File;
    class UnsupportedEncodingException;
  }
  namespace util {
    class Locale;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class PrintStream : public ::java::io::FilterOutputStream {
     public:
      enum {
        mid_init$_7bd45e585db89e9f,
        mid_init$_02fcdace254a9894,
        mid_init$_9fd2eb66a64e6f0f,
        mid_init$_c80751a79d34c011,
        mid_init$_15b72f6a44ff93f2,
        mid_init$_539208f3c661c2fc,
        mid_init$_ce122617279d7d15,
        mid_append_41561e74a5a0a7eb,
        mid_append_a9bfc1169d417a98,
        mid_append_9c51c53e73f95295,
        mid_checkError_8454bd5aa23fd11e,
        mid_close_f2cc1bce94666404,
        mid_flush_f2cc1bce94666404,
        mid_format_7a23191334eb30e9,
        mid_format_87af196ad495a463,
        mid_print_82dffe1ba55ed767,
        mid_print_9fd2eb66a64e6f0f,
        mid_print_9d72768e8fdce2b7,
        mid_print_b227b2c08d18d29e,
        mid_print_3c435f10a3b1e038,
        mid_print_8e1d952dd65cdc3a,
        mid_print_040c4cd0390c5aff,
        mid_print_d20f626183f72f7d,
        mid_print_9c778c9bce6694df,
        mid_printf_7a23191334eb30e9,
        mid_printf_87af196ad495a463,
        mid_println_f2cc1bce94666404,
        mid_println_82dffe1ba55ed767,
        mid_println_9fd2eb66a64e6f0f,
        mid_println_9d72768e8fdce2b7,
        mid_println_b227b2c08d18d29e,
        mid_println_3c435f10a3b1e038,
        mid_println_8e1d952dd65cdc3a,
        mid_println_040c4cd0390c5aff,
        mid_println_d20f626183f72f7d,
        mid_println_9c778c9bce6694df,
        mid_write_040c4cd0390c5aff,
        mid_write_43fdd39c09bb2fad,
        mid_setError_f2cc1bce94666404,
        mid_clearError_f2cc1bce94666404,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit PrintStream(jobject obj) : ::java::io::FilterOutputStream(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      PrintStream(const PrintStream& obj) : ::java::io::FilterOutputStream(obj) {}

      PrintStream(const ::java::io::File &);
      PrintStream(const ::java::io::OutputStream &);
      PrintStream(const ::java::lang::String &);
      PrintStream(const ::java::io::File &, const ::java::lang::String &);
      PrintStream(const ::java::lang::String &, const ::java::lang::String &);
      PrintStream(const ::java::io::OutputStream &, jboolean);
      PrintStream(const ::java::io::OutputStream &, jboolean, const ::java::lang::String &);

      PrintStream append(jchar) const;
      PrintStream append(const ::java::lang::CharSequence &) const;
      PrintStream append(const ::java::lang::CharSequence &, jint, jint) const;
      jboolean checkError() const;
      void close() const;
      void flush() const;
      PrintStream format(const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
      PrintStream format(const ::java::util::Locale &, const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
      void print(const JArray< jchar > &) const;
      void print(const ::java::lang::String &) const;
      void print(jboolean) const;
      void print(jchar) const;
      void print(jdouble) const;
      void print(jfloat) const;
      void print(jint) const;
      void print(const ::java::lang::Object &) const;
      void print(jlong) const;
      PrintStream printf(const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
      PrintStream printf(const ::java::util::Locale &, const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
      void println() const;
      void println(const JArray< jchar > &) const;
      void println(const ::java::lang::String &) const;
      void println(jboolean) const;
      void println(jchar) const;
      void println(jdouble) const;
      void println(jfloat) const;
      void println(jint) const;
      void println(const ::java::lang::Object &) const;
      void println(jlong) const;
      void write(jint) const;
      void write(const JArray< jbyte > &, jint, jint) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(PrintStream);
    extern PyTypeObject *PY_TYPE(PrintStream);

    class t_PrintStream {
    public:
      PyObject_HEAD
      PrintStream object;
      static PyObject *wrap_Object(const PrintStream&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
