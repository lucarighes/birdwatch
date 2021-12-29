#ifndef org_apache_lucene_analysis_hunspell_Hunspell_H
#define org_apache_lucene_analysis_hunspell_Hunspell_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace hunspell {
          class Dictionary;
          class SuggestionTimeoutException;
          class TimeoutPolicy;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Runnable;
    class String;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace hunspell {

          class Hunspell : public ::java::lang::Object {
           public:
            enum {
              mid_init$_ce3007d0ed8f72c3,
              mid_init$_28b3da2c997ad002,
              mid_getRoots_25278b4b3ab80e37,
              mid_spell_145b2d0af0c06b93,
              mid_suggest_25278b4b3ab80e37,
              mid_suggest_4a8af2e4ac73458e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Hunspell(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Hunspell(const Hunspell& obj) : ::java::lang::Object(obj) {}

            Hunspell(const ::org::apache::lucene::analysis::hunspell::Dictionary &);
            Hunspell(const ::org::apache::lucene::analysis::hunspell::Dictionary &, const ::org::apache::lucene::analysis::hunspell::TimeoutPolicy &, const ::java::lang::Runnable &);

            ::java::util::List getRoots(const ::java::lang::String &) const;
            jboolean spell(const ::java::lang::String &) const;
            ::java::util::List suggest(const ::java::lang::String &) const;
            ::java::util::List suggest(const ::java::lang::String &, jlong) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace hunspell {
          extern PyType_Def PY_TYPE_DEF(Hunspell);
          extern PyTypeObject *PY_TYPE(Hunspell);

          class t_Hunspell {
          public:
            PyObject_HEAD
            Hunspell object;
            static PyObject *wrap_Object(const Hunspell&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
