#ifndef org_apache_lucene_search_suggest_fst_FSTCompletion$Completion_H
#define org_apache_lucene_search_suggest_fst_FSTCompletion$Completion_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Comparable;
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
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

            class FSTCompletion$Completion : public ::java::lang::Object {
             public:
              enum {
                mid_compareTo_056f0c154fffadfa,
                mid_toString_db9b55ba01e03e4b,
                max_mid
              };

              enum {
                fid_bucket,
                fid_utf8,
                max_fid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static jfieldID *fids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FSTCompletion$Completion(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              FSTCompletion$Completion(const FSTCompletion$Completion& obj) : ::java::lang::Object(obj) {}

              jint _get_bucket() const;
              ::org::apache::lucene::util::BytesRef _get_utf8() const;

              jint compareTo(const FSTCompletion$Completion &) const;
              ::java::lang::String toString() const;
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
            extern PyType_Def PY_TYPE_DEF(FSTCompletion$Completion);
            extern PyTypeObject *PY_TYPE(FSTCompletion$Completion);

            class t_FSTCompletion$Completion {
            public:
              PyObject_HEAD
              FSTCompletion$Completion object;
              static PyObject *wrap_Object(const FSTCompletion$Completion&);
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
