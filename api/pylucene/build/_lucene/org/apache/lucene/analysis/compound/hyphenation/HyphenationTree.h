#ifndef org_apache_lucene_analysis_compound_hyphenation_HyphenationTree_H
#define org_apache_lucene_analysis_compound_hyphenation_HyphenationTree_H

#include "org/apache/lucene/analysis/compound/hyphenation/TernaryTree.h"

namespace java {
  namespace util {
    class ArrayList;
  }
  namespace lang {
    class Class;
    class Object;
    class String;
  }
  namespace io {
    class PrintStream;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace compound {
          namespace hyphenation {
            class PatternConsumer;
            class Hyphenation;
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

            class HyphenationTree : public ::org::apache::lucene::analysis::compound::hyphenation::TernaryTree {
             public:
              enum {
                mid_init$_f2cc1bce94666404,
                mid_addClass_9fd2eb66a64e6f0f,
                mid_addException_3a761aed8fa9a715,
                mid_addPattern_15b72f6a44ff93f2,
                mid_findPattern_9bfa75c9f141b67f,
                mid_hyphenate_b400df4d0bd7f3cf,
                mid_hyphenate_07a8454f78cf5417,
                mid_printStats_51d7bcb97eea24e3,
                mid_getValues_81fae1e0e2d0070b,
                mid_packValues_a5a7d1128e9e2bb7,
                mid_unpackValues_d7593acad64ef635,
                mid_searchPatterns_d55deaab6c0860ff,
                mid_hstrcmp_c63051281e11287a,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit HyphenationTree(jobject obj) : ::org::apache::lucene::analysis::compound::hyphenation::TernaryTree(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              HyphenationTree(const HyphenationTree& obj) : ::org::apache::lucene::analysis::compound::hyphenation::TernaryTree(obj) {}

              HyphenationTree();

              void addClass(const ::java::lang::String &) const;
              void addException(const ::java::lang::String &, const ::java::util::ArrayList &) const;
              void addPattern(const ::java::lang::String &, const ::java::lang::String &) const;
              ::java::lang::String findPattern(const ::java::lang::String &) const;
              ::org::apache::lucene::analysis::compound::hyphenation::Hyphenation hyphenate(const ::java::lang::String &, jint, jint) const;
              ::org::apache::lucene::analysis::compound::hyphenation::Hyphenation hyphenate(const JArray< jchar > &, jint, jint, jint, jint) const;
              void printStats(const ::java::io::PrintStream &) const;
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
            extern PyType_Def PY_TYPE_DEF(HyphenationTree);
            extern PyTypeObject *PY_TYPE(HyphenationTree);

            class t_HyphenationTree {
            public:
              PyObject_HEAD
              HyphenationTree object;
              static PyObject *wrap_Object(const HyphenationTree&);
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
