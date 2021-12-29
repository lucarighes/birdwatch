#ifndef org_antlr_v4_runtime_atn_PrecedencePredicateTransition_H
#define org_antlr_v4_runtime_atn_PrecedencePredicateTransition_H

#include "org/antlr/v4/runtime/atn/AbstractPredicateTransition.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          class ATNState;
          class SemanticContext$PrecedencePredicate;
        }
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
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {

          class PrecedencePredicateTransition : public ::org::antlr::v4::runtime::atn::AbstractPredicateTransition {
           public:
            enum {
              mid_init$_a2ca760a43599518,
              mid_getPredicate_a4a4d217e5047caf,
              mid_getSerializationType_9972fcc56b44e79d,
              mid_isEpsilon_8454bd5aa23fd11e,
              mid_matches_478e39400b58360d,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            enum {
              fid_precedence,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PrecedencePredicateTransition(jobject obj) : ::org::antlr::v4::runtime::atn::AbstractPredicateTransition(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PrecedencePredicateTransition(const PrecedencePredicateTransition& obj) : ::org::antlr::v4::runtime::atn::AbstractPredicateTransition(obj) {}

            jint _get_precedence() const;

            PrecedencePredicateTransition(const ::org::antlr::v4::runtime::atn::ATNState &, jint);

            ::org::antlr::v4::runtime::atn::SemanticContext$PrecedencePredicate getPredicate() const;
            jint getSerializationType() const;
            jboolean isEpsilon() const;
            jboolean matches(jint, jint, jint) const;
            ::java::lang::String toString() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          extern PyType_Def PY_TYPE_DEF(PrecedencePredicateTransition);
          extern PyTypeObject *PY_TYPE(PrecedencePredicateTransition);

          class t_PrecedencePredicateTransition {
          public:
            PyObject_HEAD
            PrecedencePredicateTransition object;
            static PyObject *wrap_Object(const PrecedencePredicateTransition&);
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
