#ifndef org_apache_lucene_util_automaton_Operations_H
#define org_apache_lucene_util_automaton_Operations_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class IntsRef;
        class BytesRef;
        namespace automaton {
          class Automaton;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {

          class Operations : public ::java::lang::Object {
           public:
            enum {
              mid_complement_a82baeed01cff8c3,
              mid_concatenate_6df08bc8b8bf5592,
              mid_concatenate_c0071d75a98f29b0,
              mid_determinize_a82baeed01cff8c3,
              mid_getCommonPrefix_dc64cad5e3ec1fd5,
              mid_getCommonPrefixBytesRef_998b4242d5342f61,
              mid_getCommonSuffixBytesRef_1371ea10d1341c75,
              mid_getSingleton_329d4fa0808c72a6,
              mid_hasDeadStates_01864601f82e008f,
              mid_hasDeadStatesFromInitial_01864601f82e008f,
              mid_hasDeadStatesToAccept_01864601f82e008f,
              mid_intersection_c0071d75a98f29b0,
              mid_isEmpty_01864601f82e008f,
              mid_isFinite_01864601f82e008f,
              mid_isTotal_01864601f82e008f,
              mid_isTotal_d6533b4c0ef48ed4,
              mid_minus_153bc82cd9e9006c,
              mid_optional_cb3855ae955106b8,
              mid_removeDeadStates_cb3855ae955106b8,
              mid_repeat_cb3855ae955106b8,
              mid_repeat_a82baeed01cff8c3,
              mid_repeat_5364e99d71d281d7,
              mid_reverse_cb3855ae955106b8,
              mid_run_d635451a20a4c132,
              mid_run_ee3c214514cf817f,
              mid_sameLanguage_1d1713e2417736ce,
              mid_subsetOf_1d1713e2417736ce,
              mid_topoSortStates_3f0bac6f4f0a57c3,
              mid_union_1673d25b84e453fc,
              mid_union_c0071d75a98f29b0,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Operations(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Operations(const Operations& obj) : ::java::lang::Object(obj) {}

            static jint DEFAULT_MAX_DETERMINIZED_STATES;
            static jint MAX_RECURSION_LEVEL;

            static ::org::apache::lucene::util::automaton::Automaton complement(const ::org::apache::lucene::util::automaton::Automaton &, jint);
            static ::org::apache::lucene::util::automaton::Automaton concatenate(const ::java::util::List &);
            static ::org::apache::lucene::util::automaton::Automaton concatenate(const ::org::apache::lucene::util::automaton::Automaton &, const ::org::apache::lucene::util::automaton::Automaton &);
            static ::org::apache::lucene::util::automaton::Automaton determinize(const ::org::apache::lucene::util::automaton::Automaton &, jint);
            static ::java::lang::String getCommonPrefix(const ::org::apache::lucene::util::automaton::Automaton &);
            static ::org::apache::lucene::util::BytesRef getCommonPrefixBytesRef(const ::org::apache::lucene::util::automaton::Automaton &);
            static ::org::apache::lucene::util::BytesRef getCommonSuffixBytesRef(const ::org::apache::lucene::util::automaton::Automaton &, jint);
            static ::org::apache::lucene::util::IntsRef getSingleton(const ::org::apache::lucene::util::automaton::Automaton &);
            static jboolean hasDeadStates(const ::org::apache::lucene::util::automaton::Automaton &);
            static jboolean hasDeadStatesFromInitial(const ::org::apache::lucene::util::automaton::Automaton &);
            static jboolean hasDeadStatesToAccept(const ::org::apache::lucene::util::automaton::Automaton &);
            static ::org::apache::lucene::util::automaton::Automaton intersection(const ::org::apache::lucene::util::automaton::Automaton &, const ::org::apache::lucene::util::automaton::Automaton &);
            static jboolean isEmpty(const ::org::apache::lucene::util::automaton::Automaton &);
            static jboolean isFinite(const ::org::apache::lucene::util::automaton::Automaton &);
            static jboolean isTotal(const ::org::apache::lucene::util::automaton::Automaton &);
            static jboolean isTotal(const ::org::apache::lucene::util::automaton::Automaton &, jint, jint);
            static ::org::apache::lucene::util::automaton::Automaton minus(const ::org::apache::lucene::util::automaton::Automaton &, const ::org::apache::lucene::util::automaton::Automaton &, jint);
            static ::org::apache::lucene::util::automaton::Automaton optional(const ::org::apache::lucene::util::automaton::Automaton &);
            static ::org::apache::lucene::util::automaton::Automaton removeDeadStates(const ::org::apache::lucene::util::automaton::Automaton &);
            static ::org::apache::lucene::util::automaton::Automaton repeat(const ::org::apache::lucene::util::automaton::Automaton &);
            static ::org::apache::lucene::util::automaton::Automaton repeat(const ::org::apache::lucene::util::automaton::Automaton &, jint);
            static ::org::apache::lucene::util::automaton::Automaton repeat(const ::org::apache::lucene::util::automaton::Automaton &, jint, jint);
            static ::org::apache::lucene::util::automaton::Automaton reverse(const ::org::apache::lucene::util::automaton::Automaton &);
            static jboolean run(const ::org::apache::lucene::util::automaton::Automaton &, const ::java::lang::String &);
            static jboolean run(const ::org::apache::lucene::util::automaton::Automaton &, const ::org::apache::lucene::util::IntsRef &);
            static jboolean sameLanguage(const ::org::apache::lucene::util::automaton::Automaton &, const ::org::apache::lucene::util::automaton::Automaton &);
            static jboolean subsetOf(const ::org::apache::lucene::util::automaton::Automaton &, const ::org::apache::lucene::util::automaton::Automaton &);
            static JArray< jint > topoSortStates(const ::org::apache::lucene::util::automaton::Automaton &);
            static ::org::apache::lucene::util::automaton::Automaton union$(const ::java::util::Collection &);
            static ::org::apache::lucene::util::automaton::Automaton union$(const ::org::apache::lucene::util::automaton::Automaton &, const ::org::apache::lucene::util::automaton::Automaton &);
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
          extern PyType_Def PY_TYPE_DEF(Operations);
          extern PyTypeObject *PY_TYPE(Operations);

          class t_Operations {
          public:
            PyObject_HEAD
            Operations object;
            static PyObject *wrap_Object(const Operations&);
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
