#ifndef org_egothor_stemmer_Lift_H
#define org_egothor_stemmer_Lift_H

#include "org/egothor/stemmer/Reduce.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace egothor {
    namespace stemmer {
      class Trie;
      class Row;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace egothor {
    namespace stemmer {

      class Lift : public ::org::egothor::stemmer::Reduce {
       public:
        enum {
          mid_init$_9d72768e8fdce2b7,
          mid_liftUp_9cec145f36b80a32,
          mid_optimize_76214b7d9a62d571,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Lift(jobject obj) : ::org::egothor::stemmer::Reduce(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Lift(const Lift& obj) : ::org::egothor::stemmer::Reduce(obj) {}

        Lift(jboolean);

        void liftUp(const ::org::egothor::stemmer::Row &, const ::java::util::List &) const;
        ::org::egothor::stemmer::Trie optimize(const ::org::egothor::stemmer::Trie &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace egothor {
    namespace stemmer {
      extern PyType_Def PY_TYPE_DEF(Lift);
      extern PyTypeObject *PY_TYPE(Lift);

      class t_Lift {
      public:
        PyObject_HEAD
        Lift object;
        static PyObject *wrap_Object(const Lift&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
