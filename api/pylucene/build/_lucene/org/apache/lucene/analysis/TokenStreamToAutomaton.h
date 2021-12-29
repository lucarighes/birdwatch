#ifndef org_apache_lucene_analysis_TokenStreamToAutomaton_H
#define org_apache_lucene_analysis_TokenStreamToAutomaton_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {
          class Automaton;
        }
      }
      namespace analysis {
        class TokenStream;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {

        class TokenStreamToAutomaton : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_setFinalOffsetGapAsHole_9d72768e8fdce2b7,
            mid_setPreservePositionIncrements_9d72768e8fdce2b7,
            mid_setUnicodeArcs_9d72768e8fdce2b7,
            mid_toAutomaton_ad28492925218690,
            mid_changeToken_858d77d551759ace,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TokenStreamToAutomaton(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TokenStreamToAutomaton(const TokenStreamToAutomaton& obj) : ::java::lang::Object(obj) {}

          static jint HOLE;
          static jint POS_SEP;

          TokenStreamToAutomaton();

          void setFinalOffsetGapAsHole(jboolean) const;
          void setPreservePositionIncrements(jboolean) const;
          void setUnicodeArcs(jboolean) const;
          ::org::apache::lucene::util::automaton::Automaton toAutomaton(const ::org::apache::lucene::analysis::TokenStream &) const;
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
        extern PyType_Def PY_TYPE_DEF(TokenStreamToAutomaton);
        extern PyTypeObject *PY_TYPE(TokenStreamToAutomaton);

        class t_TokenStreamToAutomaton {
        public:
          PyObject_HEAD
          TokenStreamToAutomaton object;
          static PyObject *wrap_Object(const TokenStreamToAutomaton&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
