#ifndef org_apache_lucene_analysis_compound_hyphenation_TernaryTree_H
#define org_apache_lucene_analysis_compound_hyphenation_TernaryTree_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Cloneable;
    class Class;
    class String;
  }
  namespace io {
    class PrintStream;
  }
  namespace util {
    class Enumeration;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace compound {
          namespace hyphenation {
            class TernaryTree;
          }
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace compound {
          namespace hyphenation {

            class TernaryTree : public ::java::lang::Object {
             public:
              enum {
                mid_balance_f2cc1bce94666404,
                mid_clone_3b3ab379291247a4,
                mid_find_a5a7d1128e9e2bb7,
                mid_find_d4655f2a19359017,
                mid_insert_1a1986a14b1cc8dc,
                mid_insert_1085ca86b5f3e050,
                mid_keys_f270cc1d2d4072a8,
                mid_knows_145b2d0af0c06b93,
                mid_printStats_51d7bcb97eea24e3,
                mid_size_9972fcc56b44e79d,
                mid_strcmp_db60fde946da24c2,
                mid_strcmp_c63051281e11287a,
                mid_strcpy_b20100ba285655e4,
                mid_strlen_946cc819d92a7347,
                mid_strlen_d4655f2a19359017,
                mid_trimToSize_f2cc1bce94666404,
                mid_insertBalanced_879e92e4774c7d41,
                mid_init_f2cc1bce94666404,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit TernaryTree(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              TernaryTree(const TernaryTree& obj) : ::java::lang::Object(obj) {}

              void balance() const;
              TernaryTree clone() const;
              jint find(const ::java::lang::String &) const;
              jint find(const JArray< jchar > &, jint) const;
              void insert(const ::java::lang::String &, jchar) const;
              void insert(const JArray< jchar > &, jint, jchar) const;
              ::java::util::Enumeration keys() const;
              jboolean knows(const ::java::lang::String &) const;
              void printStats(const ::java::io::PrintStream &) const;
              jint size() const;
              static jint strcmp(const ::java::lang::String &, const JArray< jchar > &, jint);
              static jint strcmp(const JArray< jchar > &, jint, const JArray< jchar > &, jint);
              static void strcpy(const JArray< jchar > &, jint, const JArray< jchar > &, jint);
              static jint strlen(const JArray< jchar > &);
              static jint strlen(const JArray< jchar > &, jint);
              void trimToSize() const;
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
      namespace analysis {
        namespace compound {
          namespace hyphenation {
            extern PyType_Def PY_TYPE_DEF(TernaryTree);
            extern PyTypeObject *PY_TYPE(TernaryTree);

            class t_TernaryTree {
            public:
              PyObject_HEAD
              TernaryTree object;
              static PyObject *wrap_Object(const TernaryTree&);
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
