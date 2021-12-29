#ifndef org_apache_lucene_util_automaton_CompiledAutomaton_H
#define org_apache_lucene_util_automaton_CompiledAutomaton_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Terms;
        class TermsEnum;
      }
      namespace util {
        class Accountable;
        class BytesRefBuilder;
        namespace automaton {
          class CompiledAutomaton$AUTOMATON_TYPE;
          class ByteRunAutomaton;
          class Automaton;
        }
        class BytesRef;
      }
      namespace search {
        class Query;
        class QueryVisitor;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
    class Boolean;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {

          class CompiledAutomaton : public ::java::lang::Object {
           public:
            enum {
              mid_init$_06c1b4541f684199,
              mid_init$_7a9846a5677b2fa4,
              mid_init$_9b6925fe126f4acd,
              mid_equals_8b72f2dcdde6fd1d,
              mid_floor_fac926e9807743ac,
              mid_getTermsEnum_eeaa7baef2944dcc,
              mid_hashCode_9972fcc56b44e79d,
              mid_ramBytesUsed_2e5ae9edcb9b072f,
              mid_visit_8947aa40e853f84f,
              max_mid
            };

            enum {
              fid_automaton,
              fid_commonSuffixRef,
              fid_finite,
              fid_runAutomaton,
              fid_sinkState,
              fid_term,
              fid_type,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CompiledAutomaton(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CompiledAutomaton(const CompiledAutomaton& obj) : ::java::lang::Object(obj) {}

            ::org::apache::lucene::util::automaton::Automaton _get_automaton() const;
            ::org::apache::lucene::util::BytesRef _get_commonSuffixRef() const;
            ::java::lang::Boolean _get_finite() const;
            ::org::apache::lucene::util::automaton::ByteRunAutomaton _get_runAutomaton() const;
            jint _get_sinkState() const;
            ::org::apache::lucene::util::BytesRef _get_term() const;
            ::org::apache::lucene::util::automaton::CompiledAutomaton$AUTOMATON_TYPE _get_type() const;

            CompiledAutomaton(const ::org::apache::lucene::util::automaton::Automaton &);
            CompiledAutomaton(const ::org::apache::lucene::util::automaton::Automaton &, const ::java::lang::Boolean &, jboolean);
            CompiledAutomaton(const ::org::apache::lucene::util::automaton::Automaton &, const ::java::lang::Boolean &, jboolean, jint, jboolean);

            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::util::BytesRef floor(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRefBuilder &) const;
            ::org::apache::lucene::index::TermsEnum getTermsEnum(const ::org::apache::lucene::index::Terms &) const;
            jint hashCode() const;
            jlong ramBytesUsed() const;
            void visit(const ::org::apache::lucene::search::QueryVisitor &, const ::org::apache::lucene::search::Query &, const ::java::lang::String &) const;
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
      namespace util {
        namespace automaton {
          extern PyType_Def PY_TYPE_DEF(CompiledAutomaton);
          extern PyTypeObject *PY_TYPE(CompiledAutomaton);

          class t_CompiledAutomaton {
          public:
            PyObject_HEAD
            CompiledAutomaton object;
            static PyObject *wrap_Object(const CompiledAutomaton&);
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
