#ifndef java_util_Properties_H
#define java_util_Properties_H

#include "java/util/Hashtable.h"

namespace java {
  namespace io {
    class PrintWriter;
    class InputStream;
    class PrintStream;
    class OutputStream;
    class Reader;
    class Writer;
    class IOException;
  }
  namespace lang {
    class Class;
    class Object;
    class String;
  }
  namespace util {
    class InvalidPropertiesFormatException;
    class Enumeration;
    class Set;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Properties : public ::java::util::Hashtable {
     public:
      enum {
        mid_init$_f2cc1bce94666404,
        mid_getProperty_9bfa75c9f141b67f,
        mid_getProperty_04b762e0ad33dcc5,
        mid_list_51d7bcb97eea24e3,
        mid_list_3df1c1d548bf22a4,
        mid_load_a227449bf251faf1,
        mid_load_b2f3c57f5e6eb3f2,
        mid_loadFromXML_a227449bf251faf1,
        mid_propertyNames_f270cc1d2d4072a8,
        mid_save_6769bfc075198100,
        mid_setProperty_2f6fb31a87be462e,
        mid_store_6769bfc075198100,
        mid_store_def7691ca7c0ba7d,
        mid_storeToXML_6769bfc075198100,
        mid_storeToXML_8a8d4c88d90882a9,
        mid_stringPropertyNames_7dcf4034c6d1a92a,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Properties(jobject obj) : ::java::util::Hashtable(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Properties(const Properties& obj) : ::java::util::Hashtable(obj) {}

      Properties();

      ::java::lang::String getProperty(const ::java::lang::String &) const;
      ::java::lang::String getProperty(const ::java::lang::String &, const ::java::lang::String &) const;
      void list(const ::java::io::PrintStream &) const;
      void list(const ::java::io::PrintWriter &) const;
      void load(const ::java::io::InputStream &) const;
      void load(const ::java::io::Reader &) const;
      void loadFromXML(const ::java::io::InputStream &) const;
      ::java::util::Enumeration propertyNames() const;
      void save(const ::java::io::OutputStream &, const ::java::lang::String &) const;
      ::java::lang::Object setProperty(const ::java::lang::String &, const ::java::lang::String &) const;
      void store(const ::java::io::OutputStream &, const ::java::lang::String &) const;
      void store(const ::java::io::Writer &, const ::java::lang::String &) const;
      void storeToXML(const ::java::io::OutputStream &, const ::java::lang::String &) const;
      void storeToXML(const ::java::io::OutputStream &, const ::java::lang::String &, const ::java::lang::String &) const;
      ::java::util::Set stringPropertyNames() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Properties);
    extern PyTypeObject *PY_TYPE(Properties);

    class t_Properties {
    public:
      PyObject_HEAD
      Properties object;
      PyTypeObject *parameters[2];
      static PyTypeObject **parameters_(t_Properties *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Properties&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Properties&, PyTypeObject *, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
