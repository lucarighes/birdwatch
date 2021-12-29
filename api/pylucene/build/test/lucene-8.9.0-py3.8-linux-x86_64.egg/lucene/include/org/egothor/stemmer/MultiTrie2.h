#ifndef org_egothor_stemmer_MultiTrie2_H
#define org_egothor_stemmer_MultiTrie2_H

#include "org/egothor/stemmer/MultiTrie.h"

namespace java {
  namespace lang {
    class Class;
    class CharSequence;
  }
  namespace io {
    class DataOutput;
    class IOException;
    class DataInput;
  }
}
namespace org {
  namespace egothor {
    namespace stemmer {
      class Reduce;
      class Trie;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace egothor {
    namespace stemmer {

      class MultiTrie2 : public ::org::egothor::stemmer::MultiTrie {
       public:
        enum {
          mid_init$_9d72768e8fdce2b7,
          mid_init$_e764c090f1e602d9,
          mid_add_64031c067d5ae464,
          mid_decompose_c02db7a0b6b95176,
          mid_getFully_7239fae546f0688a,
          mid_getLastOnPath_7239fae546f0688a,
          mid_reduce_6c0a4cfd21a57862,
          mid_store_d7f8caf61d54d699,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit MultiTrie2(jobject obj) : ::org::egothor::stemmer::MultiTrie(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        MultiTrie2(const MultiTrie2& obj) : ::org::egothor::stemmer::MultiTrie(obj) {}

        MultiTrie2(jboolean);
        MultiTrie2(const ::java::io::DataInput &);

        void add(const ::java::lang::CharSequence &, const ::java::lang::CharSequence &) const;
        JArray< ::java::lang::CharSequence > decompose(const ::java::lang::CharSequence &) const;
        ::java::lang::CharSequence getFully(const ::java::lang::CharSequence &) const;
        ::java::lang::CharSequence getLastOnPath(const ::java::lang::CharSequence &) const;
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
      extern PyType_Def PY_TYPE_DEF(MultiTrie2);
      extern PyTypeObject *PY_TYPE(MultiTrie2);

      class t_MultiTrie2 {
      public:
        PyObject_HEAD
        MultiTrie2 object;
        static PyObject *wrap_Object(const MultiTrie2&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
