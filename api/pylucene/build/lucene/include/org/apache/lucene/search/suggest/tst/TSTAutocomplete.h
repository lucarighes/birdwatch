#ifndef org_apache_lucene_search_suggest_tst_TSTAutocomplete_H
#define org_apache_lucene_search_suggest_tst_TSTAutocomplete_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class ArrayList;
  }
  namespace lang {
    class Class;
    class CharSequence;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace tst {
            class TernaryTreeNode;
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
      namespace search {
        namespace suggest {
          namespace tst {

            class TSTAutocomplete : public ::java::lang::Object {
             public:
              enum {
                mid_balancedTree_ffea39987f134d41,
                mid_insert_73284699312d71ee,
                mid_prefixCompletion_ffc4e26c1439772a,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit TSTAutocomplete(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              TSTAutocomplete(const TSTAutocomplete& obj) : ::java::lang::Object(obj) {}

              void balancedTree(const JArray< ::java::lang::Object > &, const JArray< ::java::lang::Object > &, jint, jint, const ::org::apache::lucene::search::suggest::tst::TernaryTreeNode &) const;
              ::org::apache::lucene::search::suggest::tst::TernaryTreeNode insert(const ::org::apache::lucene::search::suggest::tst::TernaryTreeNode &, const ::java::lang::CharSequence &, const ::java::lang::Object &, jint) const;
              ::java::util::ArrayList prefixCompletion(const ::org::apache::lucene::search::suggest::tst::TernaryTreeNode &, const ::java::lang::CharSequence &, jint) const;
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
          namespace tst {
            extern PyType_Def PY_TYPE_DEF(TSTAutocomplete);
            extern PyTypeObject *PY_TYPE(TSTAutocomplete);

            class t_TSTAutocomplete {
            public:
              PyObject_HEAD
              TSTAutocomplete object;
              static PyObject *wrap_Object(const TSTAutocomplete&);
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
