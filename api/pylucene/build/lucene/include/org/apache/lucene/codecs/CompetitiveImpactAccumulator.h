#ifndef org_apache_lucene_codecs_CompetitiveImpactAccumulator_H
#define org_apache_lucene_codecs_CompetitiveImpactAccumulator_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        class CompetitiveImpactAccumulator;
      }
      namespace index {
        class Impact;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {

        class CompetitiveImpactAccumulator : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_add_7b2f5b9ddfcb9416,
            mid_addAll_ccab6c8e5d000d1e,
            mid_clear_f2cc1bce94666404,
            mid_getCompetitiveFreqNormPairs_d4dfbf7a26ff41df,
            mid_toString_db9b55ba01e03e4b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CompetitiveImpactAccumulator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CompetitiveImpactAccumulator(const CompetitiveImpactAccumulator& obj) : ::java::lang::Object(obj) {}

          CompetitiveImpactAccumulator();

          void add(jint, jlong) const;
          void addAll(const CompetitiveImpactAccumulator &) const;
          void clear() const;
          ::java::util::Collection getCompetitiveFreqNormPairs() const;
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        extern PyType_Def PY_TYPE_DEF(CompetitiveImpactAccumulator);
        extern PyTypeObject *PY_TYPE(CompetitiveImpactAccumulator);

        class t_CompetitiveImpactAccumulator {
        public:
          PyObject_HEAD
          CompetitiveImpactAccumulator object;
          static PyObject *wrap_Object(const CompetitiveImpactAccumulator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
