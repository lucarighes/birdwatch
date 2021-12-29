#ifndef org_apache_lucene_analysis_Analyzer$ReuseStrategy_H
#define org_apache_lucene_analysis_Analyzer$ReuseStrategy_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class Analyzer$TokenStreamComponents;
        class Analyzer;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {

        class Analyzer$ReuseStrategy : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_getReusableComponents_cd755395f7742ce0,
            mid_setReusableComponents_4cd32fb80dad47cd,
            mid_setStoredValue_e33f347bcd0fb9e7,
            mid_getStoredValue_e3130fb703592f2f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Analyzer$ReuseStrategy(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Analyzer$ReuseStrategy(const Analyzer$ReuseStrategy& obj) : ::java::lang::Object(obj) {}

          Analyzer$ReuseStrategy();

          ::org::apache::lucene::analysis::Analyzer$TokenStreamComponents getReusableComponents(const ::org::apache::lucene::analysis::Analyzer &, const ::java::lang::String &) const;
          void setReusableComponents(const ::org::apache::lucene::analysis::Analyzer &, const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer$TokenStreamComponents &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        extern PyType_Def PY_TYPE_DEF(Analyzer$ReuseStrategy);
        extern PyTypeObject *PY_TYPE(Analyzer$ReuseStrategy);

        class t_Analyzer$ReuseStrategy {
        public:
          PyObject_HEAD
          Analyzer$ReuseStrategy object;
          static PyObject *wrap_Object(const Analyzer$ReuseStrategy&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
