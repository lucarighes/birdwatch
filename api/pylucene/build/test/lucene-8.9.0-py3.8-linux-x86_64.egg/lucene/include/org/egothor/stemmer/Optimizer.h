#ifndef org_egothor_stemmer_Optimizer_H
#define org_egothor_stemmer_Optimizer_H

#include "org/egothor/stemmer/Reduce.h"

namespace org {
  namespace egothor {
    namespace stemmer {
      class Trie;
      class Row;
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

      class Optimizer : public ::org::egothor::stemmer::Reduce {
       public:
        enum {
          mid_init$_f2cc1bce94666404,
          mid_merge_b0f643284764771f,
          mid_optimize_76214b7d9a62d571,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Optimizer(jobject obj) : ::org::egothor::stemmer::Reduce(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Optimizer(const Optimizer& obj) : ::org::egothor::stemmer::Reduce(obj) {}

        Optimizer();

        ::org::egothor::stemmer::Row merge(const ::org::egothor::stemmer::Row &, const ::org::egothor::stemmer::Row &) const;
        ::org::egothor::stemmer::Trie optimize(const ::org::egothor::stemmer::Trie &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace egothor {
    namespace stemmer {
      extern PyType_Def PY_TYPE_DEF(Optimizer);
      extern PyTypeObject *PY_TYPE(Optimizer);

      class t_Optimizer {
      public:
        PyObject_HEAD
        Optimizer object;
        static PyObject *wrap_Object(const Optimizer&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
