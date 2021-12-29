#ifndef org_egothor_stemmer_Reduce_H
#define org_egothor_stemmer_Reduce_H

#include "java/lang/Object.h"

namespace org {
  namespace egothor {
    namespace stemmer {
      class Trie;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace egothor {
    namespace stemmer {

      class Reduce : public ::java::lang::Object {
       public:
        enum {
          mid_init$_f2cc1bce94666404,
          mid_optimize_76214b7d9a62d571,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Reduce(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Reduce(const Reduce& obj) : ::java::lang::Object(obj) {}

        Reduce();

        ::org::egothor::stemmer::Trie optimize(const ::org::egothor::stemmer::Trie &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace egothor {
    namespace stemmer {
      extern PyType_Def PY_TYPE_DEF(Reduce);
      extern PyTypeObject *PY_TYPE(Reduce);

      class t_Reduce {
      public:
        PyObject_HEAD
        Reduce object;
        static PyObject *wrap_Object(const Reduce&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
