#ifndef org_apache_lucene_search_suggest_fst_FSTCompletion_H
#define org_apache_lucene_search_suggest_fst_FSTCompletion_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class CharSequence;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {
          class FST;
        }
      }
      namespace search {
        namespace suggest {
          namespace fst {
            class FSTCompletion$Completion;
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
          namespace fst {

            class FSTCompletion : public ::java::lang::Object {
             public:
              enum {
                mid_init$_1ee434f3c8d3152a,
                mid_init$_65136e186a9c47ae,
                mid_getBucket_21b5a8d4320d08c7,
                mid_getBucketCount_9972fcc56b44e79d,
                mid_getFST_a74bf1c7da47b631,
                mid_lookup_32d21569108f6276,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FSTCompletion(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              FSTCompletion(const FSTCompletion& obj) : ::java::lang::Object(obj) {}

              static jint DEFAULT_BUCKETS;

              FSTCompletion(const ::org::apache::lucene::util::fst::FST &);
              FSTCompletion(const ::org::apache::lucene::util::fst::FST &, jboolean, jboolean);

              jint getBucket(const ::java::lang::CharSequence &) const;
              jint getBucketCount() const;
              ::org::apache::lucene::util::fst::FST getFST() const;
              ::java::util::List lookup(const ::java::lang::CharSequence &, jint) const;
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
          namespace fst {
            extern PyType_Def PY_TYPE_DEF(FSTCompletion);
            extern PyTypeObject *PY_TYPE(FSTCompletion);

            class t_FSTCompletion {
            public:
              PyObject_HEAD
              FSTCompletion object;
              static PyObject *wrap_Object(const FSTCompletion&);
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
