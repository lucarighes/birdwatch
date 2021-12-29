#ifndef org_antlr_v4_runtime_atn_ATNConfigSet_H
#define org_antlr_v4_runtime_atn_ATNConfigSet_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Collection;
    class ArrayList;
    class BitSet;
    class Iterator;
    class Set;
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          class ATNConfigSet$AbstractConfigHashSet;
          class SemanticContext;
          class ATNConfig;
          class ATNState;
          class ATNSimulator;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {

          class ATNConfigSet : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_init$_9d72768e8fdce2b7,
              mid_add_ee797c2c9eeb87eb,
              mid_addAll_15d9cc2398c22637,
              mid_clear_f2cc1bce94666404,
              mid_contains_8b72f2dcdde6fd1d,
              mid_containsAll_15d9cc2398c22637,
              mid_containsFast_ee797c2c9eeb87eb,
              mid_elements_49ec78390f08338a,
              mid_equals_8b72f2dcdde6fd1d,
              mid_get_524964022147277a,
              mid_getAlts_56fb7b391b4328ed,
              mid_getPredicates_49ec78390f08338a,
              mid_getStates_7dcf4034c6d1a92a,
              mid_hashCode_9972fcc56b44e79d,
              mid_isEmpty_8454bd5aa23fd11e,
              mid_isReadonly_8454bd5aa23fd11e,
              mid_iterator_233a192dadb0917d,
              mid_optimizeConfigs_4bd1fd6f8f3ec57e,
              mid_remove_8b72f2dcdde6fd1d,
              mid_removeAll_15d9cc2398c22637,
              mid_retainAll_15d9cc2398c22637,
              mid_setReadonly_9d72768e8fdce2b7,
              mid_size_9972fcc56b44e79d,
              mid_toArray_29d905cced791577,
              mid_toArray_609b05756010dc5d,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            enum {
              fid_configLookup,
              fid_configs,
              fid_dipsIntoOuterContext,
              fid_fullCtx,
              fid_hasSemanticContext,
              fid_uniqueAlt,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ATNConfigSet(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ATNConfigSet(const ATNConfigSet& obj) : ::java::lang::Object(obj) {}

            ::org::antlr::v4::runtime::atn::ATNConfigSet$AbstractConfigHashSet _get_configLookup() const;
            void _set_configLookup(const ::org::antlr::v4::runtime::atn::ATNConfigSet$AbstractConfigHashSet &) const;
            ::java::util::ArrayList _get_configs() const;
            jboolean _get_dipsIntoOuterContext() const;
            void _set_dipsIntoOuterContext(jboolean) const;
            jboolean _get_fullCtx() const;
            jboolean _get_hasSemanticContext() const;
            void _set_hasSemanticContext(jboolean) const;
            jint _get_uniqueAlt() const;
            void _set_uniqueAlt(jint) const;

            ATNConfigSet();
            ATNConfigSet(jboolean);

            jboolean add(const ::org::antlr::v4::runtime::atn::ATNConfig &) const;
            jboolean addAll(const ::java::util::Collection &) const;
            void clear() const;
            jboolean contains(const ::java::lang::Object &) const;
            jboolean containsAll(const ::java::util::Collection &) const;
            jboolean containsFast(const ::org::antlr::v4::runtime::atn::ATNConfig &) const;
            ::java::util::List elements() const;
            jboolean equals(const ::java::lang::Object &) const;
            ::org::antlr::v4::runtime::atn::ATNConfig get(jint) const;
            ::java::util::BitSet getAlts() const;
            ::java::util::List getPredicates() const;
            ::java::util::Set getStates() const;
            jint hashCode() const;
            jboolean isEmpty() const;
            jboolean isReadonly() const;
            ::java::util::Iterator iterator() const;
            void optimizeConfigs(const ::org::antlr::v4::runtime::atn::ATNSimulator &) const;
            jboolean remove(const ::java::lang::Object &) const;
            jboolean removeAll(const ::java::util::Collection &) const;
            jboolean retainAll(const ::java::util::Collection &) const;
            void setReadonly(jboolean) const;
            jint size() const;
            JArray< ::org::antlr::v4::runtime::atn::ATNConfig > toArray() const;
            JArray< ::java::lang::Object > toArray(const JArray< ::java::lang::Object > &) const;
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
          extern PyType_Def PY_TYPE_DEF(ATNConfigSet);
          extern PyTypeObject *PY_TYPE(ATNConfigSet);

          class t_ATNConfigSet {
          public:
            PyObject_HEAD
            ATNConfigSet object;
            static PyObject *wrap_Object(const ATNConfigSet&);
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
