#ifndef org_apache_lucene_search_suggest_jaspell_JaspellTernarySearchTrie_H
#define org_apache_lucene_search_suggest_jaspell_JaspellTernarySearchTrie_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Float;
    class Class;
    class String;
    class CharSequence;
  }
  namespace util {
    class Locale;
    class List;
  }
  namespace io {
    class IOException;
  }
  namespace nio {
    namespace file {
      class Path;
    }
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace jaspell {

            class JaspellTernarySearchTrie : public ::java::lang::Object {
             public:
              enum {
                mid_init$_f2cc1bce94666404,
                mid_init$_8b005052a37adc8a,
                mid_init$_636077fee54d306c,
                mid_init$_a06445184861073e,
                mid_get_02b63332574637fb,
                mid_getAndIncrement_7734c9b2a9ee8cc6,
                mid_matchAlmost_25278b4b3ab80e37,
                mid_matchAlmost_32d21569108f6276,
                mid_matchPrefix_25278b4b3ab80e37,
                mid_matchPrefix_32d21569108f6276,
                mid_numDataNodes_9972fcc56b44e79d,
                mid_numNodes_9972fcc56b44e79d,
                mid_put_e50af6ee59c80f9f,
                mid_ramBytesUsed_2e5ae9edcb9b072f,
                mid_remove_9fd2eb66a64e6f0f,
                mid_setMatchAlmostDiff_040c4cd0390c5aff,
                mid_setNumReturnValues_040c4cd0390c5aff,
                mid_getOrCreateNode_c21a419396baffd6,
                mid_numDataNodes_a092785ce5e99615,
                mid_numNodes_a092785ce5e99615,
                mid_sortKeys_d5e6d1d17075104f,
                mid_getKey_bd5806dce24f7387,
                mid_getNode_d87dc29897244538,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit JaspellTernarySearchTrie(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              JaspellTernarySearchTrie(const JaspellTernarySearchTrie& obj) : ::java::lang::Object(obj) {}

              JaspellTernarySearchTrie();
              JaspellTernarySearchTrie(const ::java::util::Locale &);
              JaspellTernarySearchTrie(const ::java::nio::file::Path &);
              JaspellTernarySearchTrie(const ::java::nio::file::Path &, jboolean);

              ::java::lang::Object get(const ::java::lang::CharSequence &) const;
              ::java::lang::Float getAndIncrement(const ::java::lang::String &) const;
              ::java::util::List matchAlmost(const ::java::lang::String &) const;
              ::java::util::List matchAlmost(const ::java::lang::CharSequence &, jint) const;
              ::java::util::List matchPrefix(const ::java::lang::String &) const;
              ::java::util::List matchPrefix(const ::java::lang::CharSequence &, jint) const;
              jint numDataNodes() const;
              jint numNodes() const;
              void put(const ::java::lang::CharSequence &, const ::java::lang::Object &) const;
              jlong ramBytesUsed() const;
              void remove(const ::java::lang::String &) const;
              void setMatchAlmostDiff(jint) const;
              void setNumReturnValues(jint) const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace jaspell {
            extern PyType_Def PY_TYPE_DEF(JaspellTernarySearchTrie);
            extern PyTypeObject *PY_TYPE(JaspellTernarySearchTrie);

            class t_JaspellTernarySearchTrie {
            public:
              PyObject_HEAD
              JaspellTernarySearchTrie object;
              static PyObject *wrap_Object(const JaspellTernarySearchTrie&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
