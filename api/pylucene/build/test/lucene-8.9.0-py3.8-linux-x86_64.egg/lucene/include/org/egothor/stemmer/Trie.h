#ifndef org_egothor_stemmer_Trie_H
#define org_egothor_stemmer_Trie_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class CharSequence;
  }
  namespace io {
    class PrintStream;
    class DataOutput;
    class IOException;
    class DataInput;
  }
  namespace util {
    class List;
  }
}
namespace org {
  namespace egothor {
    namespace stemmer {
      class Reduce;
      class Trie;
      class Row;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace egothor {
    namespace stemmer {

      class Trie : public ::java::lang::Object {
       public:
        enum {
          mid_init$_9d72768e8fdce2b7,
          mid_init$_e764c090f1e602d9,
          mid_init$_9a72420e60d931d4,
          mid_getAll_c02db7a0b6b95176,
          mid_getCells_9972fcc56b44e79d,
          mid_getCellsPnt_9972fcc56b44e79d,
          mid_getCellsVal_9972fcc56b44e79d,
          mid_getFully_7239fae546f0688a,
          mid_getLastOnPath_7239fae546f0688a,
          mid_printInfo_46845747c362f3cd,
          mid_reduce_6c0a4cfd21a57862,
          mid_store_d7f8caf61d54d699,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Trie(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Trie(const Trie& obj) : ::java::lang::Object(obj) {}

        Trie(jboolean);
        Trie(const ::java::io::DataInput &);
        Trie(jboolean, jint, const ::java::util::List &, const ::java::util::List &);

        JArray< ::java::lang::CharSequence > getAll(const ::java::lang::CharSequence &) const;
        jint getCells() const;
        jint getCellsPnt() const;
        jint getCellsVal() const;
        ::java::lang::CharSequence getFully(const ::java::lang::CharSequence &) const;
        ::java::lang::CharSequence getLastOnPath(const ::java::lang::CharSequence &) const;
        void printInfo(const ::java::io::PrintStream &, const ::java::lang::CharSequence &) const;
        Trie reduce(const ::org::egothor::stemmer::Reduce &) const;
        void store(const ::java::io::DataOutput &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace egothor {
    namespace stemmer {
      extern PyType_Def PY_TYPE_DEF(Trie);
      extern PyTypeObject *PY_TYPE(Trie);

      class t_Trie {
      public:
        PyObject_HEAD
        Trie object;
        static PyObject *wrap_Object(const Trie&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
