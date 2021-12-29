#ifndef org_egothor_stemmer_Row_H
#define org_egothor_stemmer_Row_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class Character;
  }
  namespace io {
    class PrintStream;
    class DataOutput;
    class IOException;
    class DataInput;
  }
}
template<class T> class JArray;

namespace org {
  namespace egothor {
    namespace stemmer {

      class Row : public ::java::lang::Object {
       public:
        enum {
          mid_init$_f2cc1bce94666404,
          mid_init$_e764c090f1e602d9,
          mid_getCells_9972fcc56b44e79d,
          mid_getCellsPnt_9972fcc56b44e79d,
          mid_getCellsVal_9972fcc56b44e79d,
          mid_getCmd_1e2c3e1773615084,
          mid_getCnt_1e2c3e1773615084,
          mid_getRef_1e2c3e1773615084,
          mid_print_51d7bcb97eea24e3,
          mid_setCmd_91ddcfce6853346b,
          mid_setRef_91ddcfce6853346b,
          mid_store_d7f8caf61d54d699,
          mid_uniformCmd_07672f3f11b6ddc5,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Row(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Row(const Row& obj) : ::java::lang::Object(obj) {}

        Row();
        Row(const ::java::io::DataInput &);

        jint getCells() const;
        jint getCellsPnt() const;
        jint getCellsVal() const;
        jint getCmd(const ::java::lang::Character &) const;
        jint getCnt(const ::java::lang::Character &) const;
        jint getRef(const ::java::lang::Character &) const;
        void print(const ::java::io::PrintStream &) const;
        void setCmd(const ::java::lang::Character &, jint) const;
        void setRef(const ::java::lang::Character &, jint) const;
        void store(const ::java::io::DataOutput &) const;
        jint uniformCmd(jboolean) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace egothor {
    namespace stemmer {
      extern PyType_Def PY_TYPE_DEF(Row);
      extern PyTypeObject *PY_TYPE(Row);

      class t_Row {
      public:
        PyObject_HEAD
        Row object;
        static PyObject *wrap_Object(const Row&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
