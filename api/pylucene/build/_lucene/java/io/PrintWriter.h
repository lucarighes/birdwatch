#ifndef java_io_PrintWriter_H
#define java_io_PrintWriter_H

#include "java/io/Writer.h"

namespace java {
  namespace io {
    class PrintWriter;
    class FileNotFoundException;
    class OutputStream;
    class File;
    class UnsupportedEncodingException;
  }
  namespace lang {
    class Class;
    class Object;
    class CharSequence;
    class String;
  }
  namespace util {
    class Locale;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class PrintWriter : public ::java::io::Writer {
     public:
      enum {
        mid_init$_7bd45e585db89e9f,
        mid_init$_02fcdace254a9894,
        mid_init$_86f814b19baecb9d,
        mid_init$_9fd2eb66a64e6f0f,
        mid_init$_c80751a79d34c011,
        mid_init$_15b72f6a44ff93f2,
        mid_init$_539208f3c661c2fc,
        mid_init$_f5225e9eb078714c,
        mid_append_4ec980fb2eb0b2de,
        mid_append_3c57c570c884851a,
        mid_append_c9a32b256e52dee3,
        mid_checkError_8454bd5aa23fd11e,
        mid_close_f2cc1bce94666404,
        mid_flush_f2cc1bce94666404,
        mid_format_6f6452000036181c,
        mid_format_3a017636fee8d9b6,
        mid_print_82dffe1ba55ed767,
        mid_print_9fd2eb66a64e6f0f,
        mid_print_9d72768e8fdce2b7,
        mid_print_b227b2c08d18d29e,
        mid_print_3c435f10a3b1e038,
        mid_print_8e1d952dd65cdc3a,
        mid_print_040c4cd0390c5aff,
        mid_print_d20f626183f72f7d,
        mid_print_9c778c9bce6694df,
        mid_printf_6f6452000036181c,
        mid_printf_3a017636fee8d9b6,
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
        mid_write_82dffe1ba55ed767,
        mid_write_9fd2eb66a64e6f0f,
        mid_write_040c4cd0390c5aff,
        mid_write_d5128be76a214037,
        mid_write_08af6957f9159d4d,
        mid_setError_f2cc1bce94666404,
        mid_clearError_f2cc1bce94666404,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit PrintWriter(jobject obj) : ::java::io::Writer(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      PrintWriter(const PrintWriter& obj) : ::java::io::Writer(obj) {}

      PrintWriter(const ::java::io::File &);
      PrintWriter(const ::java::io::OutputStream &);
      PrintWriter(const ::java::io::Writer &);
      PrintWriter(const ::java::lang::String &);
      PrintWriter(const ::java::io::File &, const ::java::lang::String &);
      PrintWriter(const ::java::lang::String &, const ::java::lang::String &);
      PrintWriter(const ::java::io::OutputStream &, jboolean);
      PrintWriter(const ::java::io::Writer &, jboolean);

      PrintWriter append(jchar) const;
      PrintWriter append(const ::java::lang::CharSequence &) const;
      PrintWriter append(const ::java::lang::CharSequence &, jint, jint) const;
      jboolean checkError() const;
      void close() const;
      void flush() const;
      PrintWriter format(const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
      PrintWriter format(const ::java::util::Locale &, const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
      void print(const JArray< jchar > &) const;
      void print(const ::java::lang::String &) const;
      void print(jboolean) const;
      void print(jchar) const;
      void print(jdouble) const;
      void print(jfloat) const;
      void print(jint) const;
      void print(const ::java::lang::Object &) const;
      void print(jlong) const;
      PrintWriter printf(const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
      PrintWriter printf(const ::java::util::Locale &, const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
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
      void write(const JArray< jchar > &) const;
      void write(const ::java::lang::String &) const;
      void write(jint) const;
      void write(const JArray< jchar > &, jint, jint) const;
      void write(const ::java::lang::String &, jint, jint) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(PrintWriter);
    extern PyTypeObject *PY_TYPE(PrintWriter);

    class t_PrintWriter {
    public:
      PyObject_HEAD
      PrintWriter object;
      static PyObject *wrap_Object(const PrintWriter&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
