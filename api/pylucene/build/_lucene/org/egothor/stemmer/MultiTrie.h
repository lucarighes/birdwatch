#ifndef org_egothor_stemmer_MultiTrie_H
#define org_egothor_stemmer_MultiTrie_H

#include "org/egothor/stemmer/Trie.h"

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
}
namespace org {
  namespace egothor {
    namespace stemmer {
      class Reduce;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace egothor {
    namespace stemmer {

      class MultiTrie : public ::org::egothor::stemmer::Trie {
       public:
        enum {
          mid_init$_9d72768e8fdce2b7,
          mid_init$_e764c090f1e602d9,
          mid_add_64031c067d5ae464,
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

        explicit MultiTrie(jobject obj) : ::org::egothor::stemmer::Trie(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        MultiTrie(const MultiTrie& obj) : ::org::egothor::stemmer::Trie(obj) {}

        MultiTrie(jboolean);
        MultiTrie(const ::java::io::DataInput &);

        void add(const ::java::lang::CharSequence &, const ::java::lang::CharSequence &) const;
        ::java::lang::CharSequence getFully(const ::java::lang::CharSequence &) const;
        ::java::lang::CharSequence getLastOnPath(const ::java::lang::CharSequence &) const;
        void printInfo(const ::java::io::PrintStream &, const ::java::lang::CharSequence &) const;
        ::org::egothor::stemmer::Trie reduce(const ::org::egothor::stemmer::Reduce &) const;
        void store(const ::java::io::DataOutput &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace egothor {
    namespace stemmer {
      extern PyType_Def PY_TYPE_DEF(MultiTrie);
      extern PyTypeObject *PY_TYPE(MultiTrie);

      class t_MultiTrie {
      public:
        PyObject_HEAD
        MultiTrie object;
        static PyObject *wrap_Object(const MultiTrie&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
